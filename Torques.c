#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <C:\Users\Fati\Desktop\splitsimulink\HEVP4\HEVP4\sqlite\sqlite3.c>
#include "mtrtrq_lib.h"

#define MAX_COLS 8  // Assuming there are 8 columns
#define QL_COLS 8 
// #define EngTrqSections 
// #define MtrTrqSections 

void MtrTrq(double BattSoc, double prevBattSoc, double BattVolt, double prevBattVolt, double Gear, double prevGear, double MtrSpd, double prevMtrSpd, double VehSpd, double prevVehSpd, double WhlTrqCmd, double prevWhlTrqCmd, double FuelConsumed, double EcmsMtrTrq, double EcmsEngTrq, double mtrTrq[], double engTrq[]) {
    double state[6] = {prevBattSoc, prevBattVolt, prevGear, prevMtrSpd, prevVehSpd, prevWhlTrqCmd};
    double Nextstate[6] = {BattSoc, BattVolt, Gear, MtrSpd, VehSpd, WhlTrqCmd};
    sqlite3 *db;
    char *errMessage = 0;
    int rc;
    int c = 0, cc = 0;
    double gamma = 0.9;
    double learning_rate = 0.1;
    double MtrTrq;  // Variable to store the result
    double EngTrq;  // Variable to store the result
    double PQ_Data[MAX_COLS];
    double reward;
    double maxinexi;
    int rowCount;
    rc = sqlite3_open("PQ_Table_Fixed1.db", &db);
    // if (rc) {
    //     return 5.0;
    // }
    const char *sql = "SELECT * FROM PQ_Table;";
    sqlite3_stmt *stmt;
    rc = sqlite3_prepare_v2(db, sql, -1, &stmt, 0);
    // rc = sqlite3_exec(db, sql, callback, &result, &errMessage);
    if (rc != SQLITE_OK) {
        sqlite3_close(db);
        // return 10.0;
    } 
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        for (int i = 0; i < MAX_COLS; i++) {
            PQ_Data[i] = sqlite3_column_double(stmt, i);
        }

        if (PQ_Data[3] >= 0 && PQ_Data[5] >= 0) {
            if (PQ_Data[0] * 1.1 < state[0] || PQ_Data[0] * 0.90 > state[0] ||
                PQ_Data[1] * 1.1 < state[1] || PQ_Data[1] * 0.90 > state[1] ||
                PQ_Data[2] != state[2] ||
                PQ_Data[3] * 1.1 < state[3] || PQ_Data[3] * 0.90 > state[3] ||
                PQ_Data[4] * 1.1 < state[4] || PQ_Data[4] * 0.90 > state[4] ||
                PQ_Data[5] * 1.1 < state[5] || PQ_Data[5] * 0.90 > state[5]) {
                c++;
            } else {
                int maxVal = INT_MIN;
                int index = INT_MIN;
                char* max_column_name = NULL;
                for (int i = 6; i < QL_COLS; i++) {
                    double currentValue = sqlite3_column_double(stmt, i);
                    const char* columnName = sqlite3_column_name(stmt, i);
                    // Check if the current value is greater than the current max
                    if (currentValue > maxVal) {
                        maxVal = currentValue;
                        index=i;
                        max_column_name  = _strdup(columnName);;
                    }
                }
                double val;
                reward = (BattSoc - 30) * (90 - BattSoc) / (FuelConsumed + 0.0001);
                while (sqlite3_step(stmt) == SQLITE_ROW) {
                    for (int i = 0; i < MAX_COLS; i++) {
                        PQ_Data[i] = sqlite3_column_double(stmt, i);
                    }
                    // result = sqlite3_column_double(stmt, 0);
                    // Process the value as needed
                    // printf("Column : %f\n", result);
                    if (PQ_Data[3] >= 0 && PQ_Data[5] >= 0) {
                        if (PQ_Data[0] * 1.1 < Nextstate[0] || PQ_Data[0] * 0.90 > Nextstate[0] ||
                            PQ_Data[1] * 1.1 < Nextstate[1] || PQ_Data[1] * 0.90 > Nextstate[1] ||
                            PQ_Data[2] != Nextstate[2] ||
                            PQ_Data[3] * 1.1 < Nextstate[3] || PQ_Data[3] * 0.90 > Nextstate[3] ||
                            PQ_Data[4] * 1.1 < Nextstate[4] || PQ_Data[4] * 0.90 > Nextstate[4] ||
                            PQ_Data[5] * 1.1 < Nextstate[5] || PQ_Data[5] * 0.90 > Nextstate[5]) {
                            cc++;
                        } else {
                            for (int i = 6; i < QL_COLS; i++) {
                                double currentValue = sqlite3_column_double(stmt, i);
                                // Check if the current value is greater than the current max
                                if (currentValue > maxVal) {
                                    maxinexi = currentValue;
                                }
                            }
                        }
                        rowCount = sqlite3_column_int(stmt, 0);
                        if (cc==rowCount){
                            maxinexi=0;
                        }

                    }
                    if (PQ_Data[3] >= 0 && PQ_Data[5] <= 0) {
                        if (PQ_Data[0] * 1.1 < Nextstate[0] || PQ_Data[0] * 0.90 > Nextstate[0] ||
                            PQ_Data[1] * 1.1 < Nextstate[1] || PQ_Data[1] * 0.90 > Nextstate[1] ||
                            PQ_Data[2] != Nextstate[2] ||
                            PQ_Data[3] * 1.1 < Nextstate[3] || PQ_Data[3] * 0.90 > Nextstate[3] ||
                            PQ_Data[4] * 1.1 < Nextstate[4] || PQ_Data[4] * 0.90 > Nextstate[4] ||
                            PQ_Data[5] * 1.1 > Nextstate[5] || PQ_Data[5] * 0.90 < Nextstate[5]) {
                            cc++;
                        } else {
                            for (int i = 6; i < QL_COLS; i++) {
                                double currentValue = sqlite3_column_double(stmt, i);
                                // Check if the current value is greater than the current max
                                if (currentValue > maxVal) {
                                    maxinexi = currentValue;
                                }
                            }
                        }
                        rowCount = sqlite3_column_int(stmt, 0);
                        if (cc==rowCount){
                            maxinexi=0;
                        }
                    }
                    if (PQ_Data[3] <= 0 && PQ_Data[5] >= 0) {
                        if (PQ_Data[0] * 1.1 < Nextstate[0] || PQ_Data[0] * 0.90 > Nextstate[0] ||
                            PQ_Data[1] * 1.1 < Nextstate[1] || PQ_Data[1] * 0.90 > Nextstate[1] ||
                            PQ_Data[2] != Nextstate[2] ||
                            PQ_Data[3] * 1.1 > Nextstate[3] || PQ_Data[3] * 0.90 < Nextstate[3] ||
                            PQ_Data[4] * 1.1 < Nextstate[4] || PQ_Data[4] * 0.90 > Nextstate[4] ||
                            PQ_Data[5] * 1.1 < Nextstate[5] || PQ_Data[5] * 0.90 > Nextstate[5]) {
                            cc++;
                        } else {
                            for (int i = 6; i < QL_COLS; i++) {
                                double currentValue = sqlite3_column_double(stmt, i);
                                // Check if the current value is greater than the current max
                                if (currentValue > maxVal) {
                                    maxinexi = currentValue;
                                }
                            }
                        }
                        rowCount = sqlite3_column_int(stmt, 0);
                        if (cc==rowCount){
                            maxinexi=0;
                        }
                    }
                    if (PQ_Data[3] <= 0 && PQ_Data[5] <= 0) {
                        if (PQ_Data[0] * 1.1 < Nextstate[0] || PQ_Data[0] * 0.90 > Nextstate[0] ||
                            PQ_Data[1] * 1.1 < Nextstate[1] || PQ_Data[1] * 0.90 > Nextstate[1] ||
                            PQ_Data[2] != Nextstate[2] ||
                            PQ_Data[3] * 1.1 > Nextstate[3] || PQ_Data[3] * 0.90 < Nextstate[3] ||
                            PQ_Data[4] * 1.1 < Nextstate[4] || PQ_Data[4] * 0.90 > Nextstate[4] ||
                            PQ_Data[5] * 1.1 > Nextstate[5] || PQ_Data[5] * 0.90 < Nextstate[5]) {
                            cc++;
                        } else {
                            for (int i = 6; i < QL_COLS; i++) {
                                double currentValue = sqlite3_column_double(stmt, i);
                                // Check if the current value is greater than the current max
                                if (currentValue > maxVal) {
                                    maxinexi = currentValue;
                                }
                            }
                        }
                        rowCount = sqlite3_column_int(stmt, 0);
                        if (cc==rowCount){
                            maxinexi=0;
                        }
                    }

                }
                val=maxVal + learning_rate * (reward + gamma * maxinexi - maxVal);
                sqlite3_bind_double(stmt, index, val);
                char *token = strtok(max_column_name, "&");
                float floats[2];
                int i = 0;
                while (token != NULL && i < 2) {
                    // Using atof to convert the substring to a float
                    floats[i] = atof(token);
                    i++;

                    // Get the next token
                    token = strtok(NULL, "&");
                }
                MtrTrq = floats[0];
                EngTrq = floats[1];
                free(max_column_name);
                break;
            }
        }
        if (PQ_Data[3] >= 0 && PQ_Data[5] <= 0) {
            if (PQ_Data[0] * 1.1 < state[0] || PQ_Data[0] * 0.90 > state[0] ||
                PQ_Data[1] * 1.1 < state[1] || PQ_Data[1] * 0.90 > state[1] ||
                PQ_Data[2] != state[2] ||
                PQ_Data[3] * 1.1 < state[3] || PQ_Data[3] * 0.90 > state[3] ||
                PQ_Data[4] * 1.1 < state[4] || PQ_Data[4] * 0.90 > state[4] ||
                PQ_Data[5] * 1.1 > state[5] || PQ_Data[5] * 0.90 < state[5]) {
                c++;
            } else {
                int maxVal = INT_MIN;
                int index = INT_MIN;
                char* max_column_name = NULL;
                for (int i = 6; i < QL_COLS; i++) {
                    double currentValue = sqlite3_column_double(stmt, i);
                    const char* columnName = sqlite3_column_name(stmt, i);
                    // Check if the current value is greater than the current max
                    if (currentValue > maxVal) {
                        maxVal = currentValue;
                        index=i;
                        max_column_name  = _strdup(columnName);;
                    }
                }
                double val;
                reward = (BattSoc - 30) * (90 - BattSoc) / (FuelConsumed + 0.0001);
                while (sqlite3_step(stmt) == SQLITE_ROW) {
                    for (int i = 0; i < MAX_COLS; i++) {
                        PQ_Data[i] = sqlite3_column_double(stmt, i);
                    }
                    // result = sqlite3_column_double(stmt, 0);
                    // Process the value as needed
                    // printf("Column : %f\n", result);
                    if (PQ_Data[3] >= 0 && PQ_Data[5] >= 0) {
                        if (PQ_Data[0] * 1.1 < Nextstate[0] || PQ_Data[0] * 0.90 > Nextstate[0] ||
                            PQ_Data[1] * 1.1 < Nextstate[1] || PQ_Data[1] * 0.90 > Nextstate[1] ||
                            PQ_Data[2] != Nextstate[2] ||
                            PQ_Data[3] * 1.1 < Nextstate[3] || PQ_Data[3] * 0.90 > Nextstate[3] ||
                            PQ_Data[4] * 1.1 < Nextstate[4] || PQ_Data[4] * 0.90 > Nextstate[4] ||
                            PQ_Data[5] * 1.1 < Nextstate[5] || PQ_Data[5] * 0.90 > Nextstate[5]) {
                            cc++;
                        } else {
                            for (int i = 6; i < QL_COLS; i++) {
                                double currentValue = sqlite3_column_double(stmt, i);
                                // Check if the current value is greater than the current max
                                if (currentValue > maxVal) {
                                    maxinexi = currentValue;
                                }
                            }
                        }
                        rowCount = sqlite3_column_int(stmt, 0);
                        if (cc==rowCount){
                            maxinexi=0;
                        }

                    }
                    if (PQ_Data[3] >= 0 && PQ_Data[5] <= 0) {
                        if (PQ_Data[0] * 1.1 < Nextstate[0] || PQ_Data[0] * 0.90 > Nextstate[0] ||
                            PQ_Data[1] * 1.1 < Nextstate[1] || PQ_Data[1] * 0.90 > Nextstate[1] ||
                            PQ_Data[2] != Nextstate[2] ||
                            PQ_Data[3] * 1.1 < Nextstate[3] || PQ_Data[3] * 0.90 > Nextstate[3] ||
                            PQ_Data[4] * 1.1 < Nextstate[4] || PQ_Data[4] * 0.90 > Nextstate[4] ||
                            PQ_Data[5] * 1.1 > Nextstate[5] || PQ_Data[5] * 0.90 < Nextstate[5]) {
                            cc++;
                        } else {
                            for (int i = 6; i < QL_COLS; i++) {
                                double currentValue = sqlite3_column_double(stmt, i);
                                // Check if the current value is greater than the current max
                                if (currentValue > maxVal) {
                                    maxinexi = currentValue;
                                }
                            }
                        }
                        rowCount = sqlite3_column_int(stmt, 0);
                        if (cc==rowCount){
                            maxinexi=0;
                        }
                    }
                    if (PQ_Data[3] <= 0 && PQ_Data[5] >= 0) {
                        if (PQ_Data[0] * 1.1 < Nextstate[0] || PQ_Data[0] * 0.90 > Nextstate[0] ||
                            PQ_Data[1] * 1.1 < Nextstate[1] || PQ_Data[1] * 0.90 > Nextstate[1] ||
                            PQ_Data[2] != Nextstate[2] ||
                            PQ_Data[3] * 1.1 > Nextstate[3] || PQ_Data[3] * 0.90 < Nextstate[3] ||
                            PQ_Data[4] * 1.1 < Nextstate[4] || PQ_Data[4] * 0.90 > Nextstate[4] ||
                            PQ_Data[5] * 1.1 < Nextstate[5] || PQ_Data[5] * 0.90 > Nextstate[5]) {
                            cc++;
                        } else {
                            for (int i = 6; i < QL_COLS; i++) {
                                double currentValue = sqlite3_column_double(stmt, i);
                                // Check if the current value is greater than the current max
                                if (currentValue > maxVal) {
                                    maxinexi = currentValue;
                                }
                            }
                        }
                        rowCount = sqlite3_column_int(stmt, 0);
                        if (cc==rowCount){
                            maxinexi=0;
                        }
                    }
                    if (PQ_Data[3] <= 0 && PQ_Data[5] <= 0) {
                        if (PQ_Data[0] * 1.1 < Nextstate[0] || PQ_Data[0] * 0.90 > Nextstate[0] ||
                            PQ_Data[1] * 1.1 < Nextstate[1] || PQ_Data[1] * 0.90 > Nextstate[1] ||
                            PQ_Data[2] != Nextstate[2] ||
                            PQ_Data[3] * 1.1 > Nextstate[3] || PQ_Data[3] * 0.90 < Nextstate[3] ||
                            PQ_Data[4] * 1.1 < Nextstate[4] || PQ_Data[4] * 0.90 > Nextstate[4] ||
                            PQ_Data[5] * 1.1 > Nextstate[5] || PQ_Data[5] * 0.90 < Nextstate[5]) {
                            cc++;
                        } else {
                            for (int i = 6; i < QL_COLS; i++) {
                                double currentValue = sqlite3_column_double(stmt, i);
                                // Check if the current value is greater than the current max
                                if (currentValue > maxVal) {
                                    maxinexi = currentValue;
                                }
                            }
                        }
                        rowCount = sqlite3_column_int(stmt, 0);
                        if (cc==rowCount){
                            maxinexi=0;
                        }
                    }

                }
                val=maxVal + learning_rate * (reward + gamma * maxinexi - maxVal);
                sqlite3_bind_double(stmt, index, val);
                char *token = strtok(max_column_name, "&");
                float floats[2];
                int i = 0;
                while (token != NULL && i < 2) {
                    // Using atof to convert the substring to a float
                    floats[i] = atof(token);
                    i++;

                    // Get the next token
                    token = strtok(NULL, "&");
                }
                MtrTrq = floats[0];
                EngTrq = floats[1];
                free(max_column_name);
                break;
            }
        }
        if (PQ_Data[3] <= 0 && PQ_Data[5] >= 0) {
            if (PQ_Data[0] * 1.1 < state[0] || PQ_Data[0] * 0.90 > state[0] ||
                PQ_Data[1] * 1.1 < state[1] || PQ_Data[1] * 0.90 > state[1] ||
                PQ_Data[2] != state[2] ||
                PQ_Data[3] * 1.1 > state[3] || PQ_Data[3] * 0.90 < state[3] ||
                PQ_Data[4] * 1.1 < state[4] || PQ_Data[4] * 0.90 > state[4] ||
                PQ_Data[5] * 1.1 < state[5] || PQ_Data[5] * 0.90 > state[5]) {
                c++;
            } else {
                int maxVal = INT_MIN;
                int index = INT_MIN;
                char* max_column_name = NULL;
                for (int i = 6; i < QL_COLS; i++) {
                    double currentValue = sqlite3_column_double(stmt, i);
                    const char* columnName = sqlite3_column_name(stmt, i);
                    // Check if the current value is greater than the current max
                    if (currentValue > maxVal) {
                        maxVal = currentValue;
                        index=i;
                        max_column_name  = _strdup(columnName);;
                    }
                }
                double val;
                reward = (BattSoc - 30) * (90 - BattSoc) / (FuelConsumed + 0.0001);
                while (sqlite3_step(stmt) == SQLITE_ROW) {
                    for (int i = 0; i < MAX_COLS; i++) {
                        PQ_Data[i] = sqlite3_column_double(stmt, i);
                    }
                    // result = sqlite3_column_double(stmt, 0);
                    // Process the value as needed
                    // printf("Column : %f\n", result);
                    if (PQ_Data[3] >= 0 && PQ_Data[5] >= 0) {
                        if (PQ_Data[0] * 1.1 < Nextstate[0] || PQ_Data[0] * 0.90 > Nextstate[0] ||
                            PQ_Data[1] * 1.1 < Nextstate[1] || PQ_Data[1] * 0.90 > Nextstate[1] ||
                            PQ_Data[2] != Nextstate[2] ||
                            PQ_Data[3] * 1.1 < Nextstate[3] || PQ_Data[3] * 0.90 > Nextstate[3] ||
                            PQ_Data[4] * 1.1 < Nextstate[4] || PQ_Data[4] * 0.90 > Nextstate[4] ||
                            PQ_Data[5] * 1.1 < Nextstate[5] || PQ_Data[5] * 0.90 > Nextstate[5]) {
                            cc++;
                        } else {
                            for (int i = 6; i < QL_COLS; i++) {
                                double currentValue = sqlite3_column_double(stmt, i);
                                // Check if the current value is greater than the current max
                                if (currentValue > maxVal) {
                                    maxinexi = currentValue;
                                }
                            }
                        }
                        rowCount = sqlite3_column_int(stmt, 0);
                        if (cc==rowCount){
                            maxinexi=0;
                        }

                    }
                    if (PQ_Data[3] >= 0 && PQ_Data[5] <= 0) {
                        if (PQ_Data[0] * 1.1 < Nextstate[0] || PQ_Data[0] * 0.90 > Nextstate[0] ||
                            PQ_Data[1] * 1.1 < Nextstate[1] || PQ_Data[1] * 0.90 > Nextstate[1] ||
                            PQ_Data[2] != Nextstate[2] ||
                            PQ_Data[3] * 1.1 < Nextstate[3] || PQ_Data[3] * 0.90 > Nextstate[3] ||
                            PQ_Data[4] * 1.1 < Nextstate[4] || PQ_Data[4] * 0.90 > Nextstate[4] ||
                            PQ_Data[5] * 1.1 > Nextstate[5] || PQ_Data[5] * 0.90 < Nextstate[5]) {
                            cc++;
                        } else {
                            for (int i = 6; i < QL_COLS; i++) {
                                double currentValue = sqlite3_column_double(stmt, i);
                                // Check if the current value is greater than the current max
                                if (currentValue > maxVal) {
                                    maxinexi = currentValue;
                                }
                            }
                        }
                        rowCount = sqlite3_column_int(stmt, 0);
                        if (cc==rowCount){
                            maxinexi=0;
                        }
                    }
                    if (PQ_Data[3] <= 0 && PQ_Data[5] >= 0) {
                        if (PQ_Data[0] * 1.1 < Nextstate[0] || PQ_Data[0] * 0.90 > Nextstate[0] ||
                            PQ_Data[1] * 1.1 < Nextstate[1] || PQ_Data[1] * 0.90 > Nextstate[1] ||
                            PQ_Data[2] != Nextstate[2] ||
                            PQ_Data[3] * 1.1 > Nextstate[3] || PQ_Data[3] * 0.90 < Nextstate[3] ||
                            PQ_Data[4] * 1.1 < Nextstate[4] || PQ_Data[4] * 0.90 > Nextstate[4] ||
                            PQ_Data[5] * 1.1 < Nextstate[5] || PQ_Data[5] * 0.90 > Nextstate[5]) {
                            cc++;
                        } else {
                            for (int i = 6; i < QL_COLS; i++) {
                                double currentValue = sqlite3_column_double(stmt, i);
                                // Check if the current value is greater than the current max
                                if (currentValue > maxVal) {
                                    maxinexi = currentValue;
                                }
                            }
                        }
                        rowCount = sqlite3_column_int(stmt, 0);
                        if (cc==rowCount){
                            maxinexi=0;
                        }
                    }
                    if (PQ_Data[3] <= 0 && PQ_Data[5] <= 0) {
                        if (PQ_Data[0] * 1.1 < Nextstate[0] || PQ_Data[0] * 0.90 > Nextstate[0] ||
                            PQ_Data[1] * 1.1 < Nextstate[1] || PQ_Data[1] * 0.90 > Nextstate[1] ||
                            PQ_Data[2] != Nextstate[2] ||
                            PQ_Data[3] * 1.1 > Nextstate[3] || PQ_Data[3] * 0.90 < Nextstate[3] ||
                            PQ_Data[4] * 1.1 < Nextstate[4] || PQ_Data[4] * 0.90 > Nextstate[4] ||
                            PQ_Data[5] * 1.1 > Nextstate[5] || PQ_Data[5] * 0.90 < Nextstate[5]) {
                            cc++;
                        } else {
                            for (int i = 6; i < QL_COLS; i++) {
                                double currentValue = sqlite3_column_double(stmt, i);
                                // Check if the current value is greater than the current max
                                if (currentValue > maxVal) {
                                    maxinexi = currentValue;
                                }
                            }
                        }
                        rowCount = sqlite3_column_int(stmt, 0);
                        if (cc==rowCount){
                            maxinexi=0;
                        }
                    }

                }
                val=maxVal + learning_rate * (reward + gamma * maxinexi - maxVal);
                sqlite3_bind_double(stmt, index, val);
                char *token = strtok(max_column_name, "&");
                float floats[2];
                int i = 0;
                while (token != NULL && i < 2) {
                    // Using atof to convert the substring to a float
                    floats[i] = atof(token);
                    i++;

                    // Get the next token
                    token = strtok(NULL, "&");
                }
                MtrTrq = floats[0];
                EngTrq = floats[1];
                free(max_column_name);
                break;
            }
        }
        if (PQ_Data[3] <= 0 && PQ_Data[5] <= 0) {
            if (PQ_Data[0] * 1.1 < state[0] || PQ_Data[0] * 0.90 > state[0] ||
                PQ_Data[1] * 1.1 < state[1] || PQ_Data[1] * 0.90 > state[1] ||
                PQ_Data[2] != state[2] ||
                PQ_Data[3] * 1.1 > state[3] || PQ_Data[3] * 0.90 < state[3] ||
                PQ_Data[4] * 1.1 < state[4] || PQ_Data[4] * 0.90 > state[4] ||
                PQ_Data[5] * 1.1 > state[5] || PQ_Data[5] * 0.90 < state[5]) {
                c++;
            } else {
                int maxVal = INT_MIN;
                int index = INT_MIN;
                char* max_column_name = NULL;
                for (int i = 6; i < QL_COLS; i++) {
                    double currentValue = sqlite3_column_double(stmt, i);
                    const char* columnName = sqlite3_column_name(stmt, i);
                    // Check if the current value is greater than the current max
                    if (currentValue > maxVal) {
                        maxVal = currentValue;
                        index=i;
                        max_column_name  = _strdup(columnName);;
                    }
                }
                double val;
                reward = (BattSoc - 30) * (90 - BattSoc) / (FuelConsumed + 0.0001);
                while (sqlite3_step(stmt) == SQLITE_ROW) {
                    for (int i = 0; i < MAX_COLS; i++) {
                        PQ_Data[i] = sqlite3_column_double(stmt, i);
                    }
                    // result = sqlite3_column_double(stmt, 0);
                    // Process the value as needed
                    // printf("Column : %f\n", result);
                    if (PQ_Data[3] >= 0 && PQ_Data[5] >= 0) {
                        if (PQ_Data[0] * 1.1 < Nextstate[0] || PQ_Data[0] * 0.90 > Nextstate[0] ||
                            PQ_Data[1] * 1.1 < Nextstate[1] || PQ_Data[1] * 0.90 > Nextstate[1] ||
                            PQ_Data[2] != Nextstate[2] ||
                            PQ_Data[3] * 1.1 < Nextstate[3] || PQ_Data[3] * 0.90 > Nextstate[3] ||
                            PQ_Data[4] * 1.1 < Nextstate[4] || PQ_Data[4] * 0.90 > Nextstate[4] ||
                            PQ_Data[5] * 1.1 < Nextstate[5] || PQ_Data[5] * 0.90 > Nextstate[5]) {
                            cc++;
                        } else {
                            for (int i = 6; i < QL_COLS; i++) {
                                double currentValue = sqlite3_column_double(stmt, i);
                                // Check if the current value is greater than the current max
                                if (currentValue > maxVal) {
                                    maxinexi = currentValue;
                                }
                            }
                        }
                        rowCount = sqlite3_column_int(stmt, 0);
                        if (cc==rowCount){
                            maxinexi=0;
                        }

                    }
                    if (PQ_Data[3] >= 0 && PQ_Data[5] <= 0) {
                        if (PQ_Data[0] * 1.1 < Nextstate[0] || PQ_Data[0] * 0.90 > Nextstate[0] ||
                            PQ_Data[1] * 1.1 < Nextstate[1] || PQ_Data[1] * 0.90 > Nextstate[1] ||
                            PQ_Data[2] != Nextstate[2] ||
                            PQ_Data[3] * 1.1 < Nextstate[3] || PQ_Data[3] * 0.90 > Nextstate[3] ||
                            PQ_Data[4] * 1.1 < Nextstate[4] || PQ_Data[4] * 0.90 > Nextstate[4] ||
                            PQ_Data[5] * 1.1 > Nextstate[5] || PQ_Data[5] * 0.90 < Nextstate[5]) {
                            cc++;
                        } else {
                            for (int i = 6; i < QL_COLS; i++) {
                                double currentValue = sqlite3_column_double(stmt, i);
                                // Check if the current value is greater than the current max
                                if (currentValue > maxVal) {
                                    maxinexi = currentValue;
                                }
                            }
                        }
                        rowCount = sqlite3_column_int(stmt, 0);
                        if (cc==rowCount){
                            maxinexi=0;
                        }
                    }
                    if (PQ_Data[3] <= 0 && PQ_Data[5] >= 0) {
                        if (PQ_Data[0] * 1.1 < Nextstate[0] || PQ_Data[0] * 0.90 > Nextstate[0] ||
                            PQ_Data[1] * 1.1 < Nextstate[1] || PQ_Data[1] * 0.90 > Nextstate[1] ||
                            PQ_Data[2] != Nextstate[2] ||
                            PQ_Data[3] * 1.1 > Nextstate[3] || PQ_Data[3] * 0.90 < Nextstate[3] ||
                            PQ_Data[4] * 1.1 < Nextstate[4] || PQ_Data[4] * 0.90 > Nextstate[4] ||
                            PQ_Data[5] * 1.1 < Nextstate[5] || PQ_Data[5] * 0.90 > Nextstate[5]) {
                            cc++;
                        } else {
                            for (int i = 6; i < QL_COLS; i++) {
                                double currentValue = sqlite3_column_double(stmt, i);
                                // Check if the current value is greater than the current max
                                if (currentValue > maxVal) {
                                    maxinexi = currentValue;
                                }
                            }
                        }
                        rowCount = sqlite3_column_int(stmt, 0);
                        if (cc==rowCount){
                            maxinexi=0;
                        }
                    }
                    if (PQ_Data[3] <= 0 && PQ_Data[5] <= 0) {
                        if (PQ_Data[0] * 1.1 < Nextstate[0] || PQ_Data[0] * 0.90 > Nextstate[0] ||
                            PQ_Data[1] * 1.1 < Nextstate[1] || PQ_Data[1] * 0.90 > Nextstate[1] ||
                            PQ_Data[2] != Nextstate[2] ||
                            PQ_Data[3] * 1.1 > Nextstate[3] || PQ_Data[3] * 0.90 < Nextstate[3] ||
                            PQ_Data[4] * 1.1 < Nextstate[4] || PQ_Data[4] * 0.90 > Nextstate[4] ||
                            PQ_Data[5] * 1.1 > Nextstate[5] || PQ_Data[5] * 0.90 < Nextstate[5]) {
                            cc++;
                        } else {
                            for (int i = 6; i < QL_COLS; i++) {
                                double currentValue = sqlite3_column_double(stmt, i);
                                // Check if the current value is greater than the current max
                                if (currentValue > maxVal) {
                                    maxinexi = currentValue;
                                }
                            }
                        }
                        rowCount = sqlite3_column_int(stmt, 0);
                        if (cc==rowCount){
                            maxinexi=0;
                        }
                    }

                }
                val = maxVal + learning_rate * (reward + gamma * maxinexi - maxVal);
                sqlite3_bind_double(stmt, index, val);
                char *token = strtok(max_column_name, "&");
                float floats[2];
                int i = 0;
                while (token != NULL && i < 2) {
                    // Using atof to convert the substring to a float
                    floats[i] = atof(token);
                    i++;

                    // Get the next token
                    token = strtok(NULL, "&");
                }
                MtrTrq = floats[0];
                EngTrq = floats[1];
                free(max_column_name);
                break;
            }
        }
    }
    rowCount = sqlite3_column_int(stmt, 0);
    if (c==rowCount){
        const double MtrTrqSections[] = {-201.    , -196.8125, -192.625 , -188.4375, -184.25  , -180.0625,
       -175.875 , -171.6875, -167.5   , -163.3125, -159.125 , -154.9375,
       -150.75  , -146.5625, -142.375 , -138.1875, -134.    , -129.8125,
       -125.625 , -121.4375, -117.25  , -113.0625, -108.875 , -104.6875,
       -100.5   ,  -96.3125,  -92.125 ,  -87.9375,  -83.75  ,  -79.5625,
        -75.375 ,  -71.1875,  -67.    ,  -62.8125,  -58.625 ,  -54.4375,
        -50.25  ,  -46.0625,  -41.875 ,  -37.6875,  -33.5   ,  -29.3125,
        -25.125 ,  -20.9375,  -16.75  ,  -12.5625,   -8.375 ,   -4.1875,
          0.    ,    4.1875,    8.375 ,   12.5625,   16.75  ,   20.9375,
         25.125 ,   29.3125,   33.5   ,   37.6875,   41.875 ,   46.0625,
         50.25  ,   54.4375,   58.625 ,   62.8125,   67.    ,   71.1875,
         75.375 ,   79.5625,   83.75  ,   87.9375,   92.125 ,   96.3125,
        100.5   ,  104.6875,  108.875 ,  113.0625,  117.25  ,  121.4375,
        125.625 ,  129.8125,  134.    ,  138.1875,  142.375 ,  146.5625,
        150.75  ,  154.9375,  159.125 ,  163.3125,  167.5   ,  171.6875,
        175.875 ,  180.0625,  184.25  ,  188.4375,  192.625 ,  196.8125,
        201.    };
        const double EngTrqSections[] = {  0. ,   3.5,   7. ,  10.5,  14. ,  17.5,  21. ,  24.5,  28. ,
        31.5,  35. ,  38.5,  42. ,  45.5,  49. ,  52.5,  56. ,  59.5,
        63. ,  66.5,  70. ,  73.5,  77. ,  80.5,  84. ,  87.5,  91. ,
        94.5,  98. , 101.5, 105. , 108.5, 112. , 115.5, 119. , 122.5,
       126. , 129.5, 133. , 136.5, 140. , 143.5, 147. , 150.5, 154. ,
       157.5, 161. , 164.5, 168. , 171.5, 175. };

        // Construct the SQL query
        const char *sql = "INSERT INTO your_table_name (BattSoc, BattVolt, Gear, MtrSpd, VehSpd, WhlTrqCmd, -201.0&0.0, -201.0&3.5, -201.0&7.0, -201.0&10.5, -201.0&14.0, -201.0&17.5,"
" -201.0&21.0, -201.0&24.5, -201.0&28.0, -201.0&31.5, -201.0&35.0, -201.0&38.5, -201.0&42.0, -201.0&45.5, -201.0&49.0, -201.0&52.5, -201.0&56.0, -201.0&59.5"
", -201.0&63.0, -201.0&66.5, -201.0&70.0, -201.0&73.5, -201.0&77.0, -201.0&80.5, -201.0&84.0, -201.0&87.5, -201.0&91.0, -201.0&94.5, -201.0&98.0, -201.0&101"
".5, -201.0&105.0, -201.0&108.5, -201.0&112.0, -201.0&115.5, -201.0&119.0, -201.0&122.5, -201.0&126.0, -201.0&129.5, -201.0&133.0, -201.0&136.5, -201.0&140."
"0, -201.0&143.5, -201.0&147.0, -201.0&150.5, -201.0&154.0, -201.0&157.5, -201.0&161.0, -201.0&164.5, -201.0&168.0, -201.0&171.5, -201.0&175.0, -196.8125&0."
"0, -196.8125&3.5, -196.8125&7.0, -196.8125&10.5, -196.8125&14.0, -196.8125&17.5, -196.8125&21.0, -196.8125&24.5, -196.8125&28.0, -196.8125&31.5, -196.8125&"
"35.0, -196.8125&38.5, -196.8125&42.0, -196.8125&45.5, -196.8125&49.0, -196.8125&52.5, -196.8125&56.0, -196.8125&59.5, -196.8125&63.0, -196.8125&66.5, -196."
"8125&70.0, -196.8125&73.5, -196.8125&77.0, -196.8125&80.5, -196.8125&84.0, -196.8125&87.5, -196.8125&91.0, -196.8125&94.5, -196.8125&98.0, -196.8125&101.5,"
" -196.8125&105.0, -196.8125&108.5, -196.8125&112.0, -196.8125&115.5, -196.8125&119.0, -196.8125&122.5, -196.8125&126.0, -196.8125&129.5, -196.8125&133.0, -"
"196.8125&136.5, -196.8125&140.0, -196.8125&143.5, -196.8125&147.0, -196.8125&150.5, -196.8125&154.0, -196.8125&157.5, -196.8125&161.0, -196.8125&164.5, -19"
"6.8125&168.0, -196.8125&171.5, -196.8125&175.0, -192.625&0.0, -192.625&3.5, -192.625&7.0, -192.625&10.5, -192.625&14.0, -192.625&17.5, -192.625&21.0, -192."
"625&24.5, -192.625&28.0, -192.625&31.5, -192.625&35.0, -192.625&38.5, -192.625&42.0, -192.625&45.5, -192.625&49.0, -192.625&52.5, -192.625&56.0, -192.625&5"
"9.5, -192.625&63.0, -192.625&66.5, -192.625&70.0, -192.625&73.5, -192.625&77.0, -192.625&80.5, -192.625&84.0, -192.625&87.5, -192.625&91.0, -192.625&94.5, "
"-192.625&98.0, -192.625&101.5, -192.625&105.0, -192.625&108.5, -192.625&112.0, -192.625&115.5, -192.625&119.0, -192.625&122.5, -192.625&126.0, -192.625&129"
".5, -192.625&133.0, -192.625&136.5, -192.625&140.0, -192.625&143.5, -192.625&147.0, -192.625&150.5, -192.625&154.0, -192.625&157.5, -192.625&161.0, -192.62"
"5&164.5, -192.625&168.0, -192.625&171.5, -192.625&175.0, -188.4375&0.0, -188.4375&3.5, -188.4375&7.0, -188.4375&10.5, -188.4375&14.0, -188.4375&17.5, -188."
"4375&21.0, -188.4375&24.5, -188.4375&28.0, -188.4375&31.5, -188.4375&35.0, -188.4375&38.5, -188.4375&42.0, -188.4375&45.5, -188.4375&49.0, -188.4375&52.5, "
"-188.4375&56.0, -188.4375&59.5, -188.4375&63.0, -188.4375&66.5, -188.4375&70.0, -188.4375&73.5, -188.4375&77.0, -188.4375&80.5, -188.4375&84.0, -188.4375&8"
"7.5, -188.4375&91.0, -188.4375&94.5, -188.4375&98.0, -188.4375&101.5, -188.4375&105.0, -188.4375&108.5, -188.4375&112.0, -188.4375&115.5, -188.4375&119.0, "
"-188.4375&122.5, -188.4375&126.0, -188.4375&129.5, -188.4375&133.0, -188.4375&136.5, -188.4375&140.0, -188.4375&143.5, -188.4375&147.0, -188.4375&150.5, -1"
"88.4375&154.0, -188.4375&157.5, -188.4375&161.0, -188.4375&164.5, -188.4375&168.0, -188.4375&171.5, -188.4375&175.0, -184.25&0.0, -184.25&3.5, -184.25&7.0,"
" -184.25&10.5, -184.25&14.0, -184.25&17.5, -184.25&21.0, -184.25&24.5, -184.25&28.0, -184.25&31.5, -184.25&35.0, -184.25&38.5, -184.25&42.0, -184.25&45.5, "
"-184.25&49.0, -184.25&52.5, -184.25&56.0, -184.25&59.5, -184.25&63.0, -184.25&66.5, -184.25&70.0, -184.25&73.5, -184.25&77.0, -184.25&80.5, -184.25&84.0, -"
"184.25&87.5, -184.25&91.0, -184.25&94.5, -184.25&98.0, -184.25&101.5, -184.25&105.0, -184.25&108.5, -184.25&112.0, -184.25&115.5, -184.25&119.0, -184.25&12"
"2.5, -184.25&126.0, -184.25&129.5, -184.25&133.0, -184.25&136.5, -184.25&140.0, -184.25&143.5, -184.25&147.0, -184.25&150.5, -184.25&154.0, -184.25&157.5, "
"-184.25&161.0, -184.25&164.5, -184.25&168.0, -184.25&171.5, -184.25&175.0, -180.0625&0.0, -180.0625&3.5, -180.0625&7.0, -180.0625&10.5, -180.0625&14.0, -18"
"0.0625&17.5, -180.0625&21.0, -180.0625&24.5, -180.0625&28.0, -180.0625&31.5, -180.0625&35.0, -180.0625&38.5, -180.0625&42.0, -180.0625&45.5, -180.0625&49.0"
", -180.0625&52.5, -180.0625&56.0, -180.0625&59.5, -180.0625&63.0, -180.0625&66.5, -180.0625&70.0, -180.0625&73.5, -180.0625&77.0, -180.0625&80.5, -180.0625"
"&84.0, -180.0625&87.5, -180.0625&91.0, -180.0625&94.5, -180.0625&98.0, -180.0625&101.5, -180.0625&105.0, -180.0625&108.5, -180.0625&112.0, -180.0625&115.5,"
" -180.0625&119.0, -180.0625&122.5, -180.0625&126.0, -180.0625&129.5, -180.0625&133.0, -180.0625&136.5, -180.0625&140.0, -180.0625&143.5, -180.0625&147.0, -"
"180.0625&150.5, -180.0625&154.0, -180.0625&157.5, -180.0625&161.0, -180.0625&164.5, -180.0625&168.0, -180.0625&171.5, -180.0625&175.0, -175.875&0.0, -175.8"
"75&3.5, -175.875&7.0, -175.875&10.5, -175.875&14.0, -175.875&17.5, -175.875&21.0, -175.875&24.5, -175.875&28.0, -175.875&31.5, -175.875&35.0, -175.875&38.5"
", -175.875&42.0, -175.875&45.5, -175.875&49.0, -175.875&52.5, -175.875&56.0, -175.875&59.5, -175.875&63.0, -175.875&66.5, -175.875&70.0, -175.875&73.5, -17"
"5.875&77.0, -175.875&80.5, -175.875&84.0, -175.875&87.5, -175.875&91.0, -175.875&94.5, -175.875&98.0, -175.875&101.5, -175.875&105.0, -175.875&108.5, -175."
"875&112.0, -175.875&115.5, -175.875&119.0, -175.875&122.5, -175.875&126.0, -175.875&129.5, -175.875&133.0, -175.875&136.5, -175.875&140.0, -175.875&143.5, "
"-175.875&147.0, -175.875&150.5, -175.875&154.0, -175.875&157.5, -175.875&161.0, -175.875&164.5, -175.875&168.0, -175.875&171.5, -175.875&175.0, -171.6875&0"
".0, -171.6875&3.5, -171.6875&7.0, -171.6875&10.5, -171.6875&14.0, -171.6875&17.5, -171.6875&21.0, -171.6875&24.5, -171.6875&28.0, -171.6875&31.5, -171.6875"
"&35.0, -171.6875&38.5, -171.6875&42.0, -171.6875&45.5, -171.6875&49.0, -171.6875&52.5, -171.6875&56.0, -171.6875&59.5, -171.6875&63.0, -171.6875&66.5, -171"
".6875&70.0, -171.6875&73.5, -171.6875&77.0, -171.6875&80.5, -171.6875&84.0, -171.6875&87.5, -171.6875&91.0, -171.6875&94.5, -171.6875&98.0, -171.6875&101.5"
", -171.6875&105.0, -171.6875&108.5, -171.6875&112.0, -171.6875&115.5, -171.6875&119.0, -171.6875&122.5, -171.6875&126.0, -171.6875&129.5, -171.6875&133.0, "
"-171.6875&136.5, -171.6875&140.0, -171.6875&143.5, -171.6875&147.0, -171.6875&150.5, -171.6875&154.0, -171.6875&157.5, -171.6875&161.0, -171.6875&164.5, -1"
"71.6875&168.0, -171.6875&171.5, -171.6875&175.0, -167.5&0.0, -167.5&3.5, -167.5&7.0, -167.5&10.5, -167.5&14.0, -167.5&17.5, -167.5&21.0, -167.5&24.5, -167."
"5&28.0, -167.5&31.5, -167.5&35.0, -167.5&38.5, -167.5&42.0, -167.5&45.5, -167.5&49.0, -167.5&52.5, -167.5&56.0, -167.5&59.5, -167.5&63.0, -167.5&66.5, -167"
".5&70.0, -167.5&73.5, -167.5&77.0, -167.5&80.5, -167.5&84.0, -167.5&87.5, -167.5&91.0, -167.5&94.5, -167.5&98.0, -167.5&101.5, -167.5&105.0, -167.5&108.5, "
"-167.5&112.0, -167.5&115.5, -167.5&119.0, -167.5&122.5, -167.5&126.0, -167.5&129.5, -167.5&133.0, -167.5&136.5, -167.5&140.0, -167.5&143.5, -167.5&147.0, -"
"167.5&150.5, -167.5&154.0, -167.5&157.5, -167.5&161.0, -167.5&164.5, -167.5&168.0, -167.5&171.5, -167.5&175.0, -163.3125&0.0, -163.3125&3.5, -163.3125&7.0,"
" -163.3125&10.5, -163.3125&14.0, -163.3125&17.5, -163.3125&21.0, -163.3125&24.5, -163.3125&28.0, -163.3125&31.5, -163.3125&35.0, -163.3125&38.5, -163.3125&"
"42.0, -163.3125&45.5, -163.3125&49.0, -163.3125&52.5, -163.3125&56.0, -163.3125&59.5, -163.3125&63.0, -163.3125&66.5, -163.3125&70.0, -163.3125&73.5, -163."
"3125&77.0, -163.3125&80.5, -163.3125&84.0, -163.3125&87.5, -163.3125&91.0, -163.3125&94.5, -163.3125&98.0, -163.3125&101.5, -163.3125&105.0, -163.3125&108."
"5, -163.3125&112.0, -163.3125&115.5, -163.3125&119.0, -163.3125&122.5, -163.3125&126.0, -163.3125&129.5, -163.3125&133.0, -163.3125&136.5, -163.3125&140.0,"
" -163.3125&143.5, -163.3125&147.0, -163.3125&150.5, -163.3125&154.0, -163.3125&157.5, -163.3125&161.0, -163.3125&164.5, -163.3125&168.0, -163.3125&171.5, -"
"163.3125&175.0, -159.125&0.0, -159.125&3.5, -159.125&7.0, -159.125&10.5, -159.125&14.0, -159.125&17.5, -159.125&21.0, -159.125&24.5, -159.125&28.0, -159.12"
"5&31.5, -159.125&35.0, -159.125&38.5, -159.125&42.0, -159.125&45.5, -159.125&49.0, -159.125&52.5, -159.125&56.0, -159.125&59.5, -159.125&63.0, -159.125&66."
"5, -159.125&70.0, -159.125&73.5, -159.125&77.0, -159.125&80.5, -159.125&84.0, -159.125&87.5, -159.125&91.0, -159.125&94.5, -159.125&98.0, -159.125&101.5, -"
"159.125&105.0, -159.125&108.5, -159.125&112.0, -159.125&115.5, -159.125&119.0, -159.125&122.5, -159.125&126.0, -159.125&129.5, -159.125&133.0, -159.125&136"
".5, -159.125&140.0, -159.125&143.5, -159.125&147.0, -159.125&150.5, -159.125&154.0, -159.125&157.5, -159.125&161.0, -159.125&164.5, -159.125&168.0, -159.12"
"5&171.5, -159.125&175.0, -154.9375&0.0, -154.9375&3.5, -154.9375&7.0, -154.9375&10.5, -154.9375&14.0, -154.9375&17.5, -154.9375&21.0, -154.9375&24.5, -154."
"9375&28.0, -154.9375&31.5, -154.9375&35.0, -154.9375&38.5, -154.9375&42.0, -154.9375&45.5, -154.9375&49.0, -154.9375&52.5, -154.9375&56.0, -154.9375&59.5, "
"-154.9375&63.0, -154.9375&66.5, -154.9375&70.0, -154.9375&73.5, -154.9375&77.0, -154.9375&80.5, -154.9375&84.0, -154.9375&87.5, -154.9375&91.0, -154.9375&9"
"4.5, -154.9375&98.0, -154.9375&101.5, -154.9375&105.0, -154.9375&108.5, -154.9375&112.0, -154.9375&115.5, -154.9375&119.0, -154.9375&122.5, -154.9375&126.0"
", -154.9375&129.5, -154.9375&133.0, -154.9375&136.5, -154.9375&140.0, -154.9375&143.5, -154.9375&147.0, -154.9375&150.5, -154.9375&154.0, -154.9375&157.5, "
"-154.9375&161.0, -154.9375&164.5, -154.9375&168.0, -154.9375&171.5, -154.9375&175.0, -150.75&0.0, -150.75&3.5, -150.75&7.0, -150.75&10.5, -150.75&14.0, -15"
"0.75&17.5, -150.75&21.0, -150.75&24.5, -150.75&28.0, -150.75&31.5, -150.75&35.0, -150.75&38.5, -150.75&42.0, -150.75&45.5, -150.75&49.0, -150.75&52.5, -150"
".75&56.0, -150.75&59.5, -150.75&63.0, -150.75&66.5, -150.75&70.0, -150.75&73.5, -150.75&77.0, -150.75&80.5, -150.75&84.0, -150.75&87.5, -150.75&91.0, -150."
"75&94.5, -150.75&98.0, -150.75&101.5, -150.75&105.0, -150.75&108.5, -150.75&112.0, -150.75&115.5, -150.75&119.0, -150.75&122.5, -150.75&126.0, -150.75&129."
"5, -150.75&133.0, -150.75&136.5, -150.75&140.0, -150.75&143.5, -150.75&147.0, -150.75&150.5, -150.75&154.0, -150.75&157.5, -150.75&161.0, -150.75&164.5, -1"
"50.75&168.0, -150.75&171.5, -150.75&175.0, -146.5625&0.0, -146.5625&3.5, -146.5625&7.0, -146.5625&10.5, -146.5625&14.0, -146.5625&17.5, -146.5625&21.0, -14"
"6.5625&24.5, -146.5625&28.0, -146.5625&31.5, -146.5625&35.0, -146.5625&38.5, -146.5625&42.0, -146.5625&45.5, -146.5625&49.0, -146.5625&52.5, -146.5625&56.0"
", -146.5625&59.5, -146.5625&63.0, -146.5625&66.5, -146.5625&70.0, -146.5625&73.5, -146.5625&77.0, -146.5625&80.5, -146.5625&84.0, -146.5625&87.5, -146.5625"
"&91.0, -146.5625&94.5, -146.5625&98.0, -146.5625&101.5, -146.5625&105.0, -146.5625&108.5, -146.5625&112.0, -146.5625&115.5, -146.5625&119.0, -146.5625&122."
"5, -146.5625&126.0, -146.5625&129.5, -146.5625&133.0, -146.5625&136.5, -146.5625&140.0, -146.5625&143.5, -146.5625&147.0, -146.5625&150.5, -146.5625&154.0,"
" -146.5625&157.5, -146.5625&161.0, -146.5625&164.5, -146.5625&168.0, -146.5625&171.5, -146.5625&175.0, -142.375&0.0, -142.375&3.5, -142.375&7.0, -142.375&1"
"0.5, -142.375&14.0, -142.375&17.5, -142.375&21.0, -142.375&24.5, -142.375&28.0, -142.375&31.5, -142.375&35.0, -142.375&38.5, -142.375&42.0, -142.375&45.5, "
"-142.375&49.0, -142.375&52.5, -142.375&56.0, -142.375&59.5, -142.375&63.0, -142.375&66.5, -142.375&70.0, -142.375&73.5, -142.375&77.0, -142.375&80.5, -142."
"375&84.0, -142.375&87.5, -142.375&91.0, -142.375&94.5, -142.375&98.0, -142.375&101.5, -142.375&105.0, -142.375&108.5, -142.375&112.0, -142.375&115.5, -142."
"375&119.0, -142.375&122.5, -142.375&126.0, -142.375&129.5, -142.375&133.0, -142.375&136.5, -142.375&140.0, -142.375&143.5, -142.375&147.0, -142.375&150.5, "
"-142.375&154.0, -142.375&157.5, -142.375&161.0, -142.375&164.5, -142.375&168.0, -142.375&171.5, -142.375&175.0, -138.1875&0.0, -138.1875&3.5, -138.1875&7.0"
", -138.1875&10.5, -138.1875&14.0, -138.1875&17.5, -138.1875&21.0, -138.1875&24.5, -138.1875&28.0, -138.1875&31.5, -138.1875&35.0, -138.1875&38.5, -138.1875"
"&42.0, -138.1875&45.5, -138.1875&49.0, -138.1875&52.5, -138.1875&56.0, -138.1875&59.5, -138.1875&63.0, -138.1875&66.5, -138.1875&70.0, -138.1875&73.5, -138"
".1875&77.0, -138.1875&80.5, -138.1875&84.0, -138.1875&87.5, -138.1875&91.0, -138.1875&94.5, -138.1875&98.0, -138.1875&101.5, -138.1875&105.0, -138.1875&108"
".5, -138.1875&112.0, -138.1875&115.5, -138.1875&119.0, -138.1875&122.5, -138.1875&126.0, -138.1875&129.5, -138.1875&133.0, -138.1875&136.5, -138.1875&140.0"
", -138.1875&143.5, -138.1875&147.0, -138.1875&150.5, -138.1875&154.0, -138.1875&157.5, -138.1875&161.0, -138.1875&164.5, -138.1875&168.0, -138.1875&171.5, "
"-138.1875&175.0, -134.0&0.0, -134.0&3.5, -134.0&7.0, -134.0&10.5, -134.0&14.0, -134.0&17.5, -134.0&21.0, -134.0&24.5, -134.0&28.0, -134.0&31.5, -134.0&35.0"
", -134.0&38.5, -134.0&42.0, -134.0&45.5, -134.0&49.0, -134.0&52.5, -134.0&56.0, -134.0&59.5, -134.0&63.0, -134.0&66.5, -134.0&70.0, -134.0&73.5, -134.0&77."
"0, -134.0&80.5, -134.0&84.0, -134.0&87.5, -134.0&91.0, -134.0&94.5, -134.0&98.0, -134.0&101.5, -134.0&105.0, -134.0&108.5, -134.0&112.0, -134.0&115.5, -134"
".0&119.0, -134.0&122.5, -134.0&126.0, -134.0&129.5, -134.0&133.0, -134.0&136.5, -134.0&140.0, -134.0&143.5, -134.0&147.0, -134.0&150.5, -134.0&154.0, -134."
"0&157.5, -134.0&161.0, -134.0&164.5, -134.0&168.0, -134.0&171.5, -134.0&175.0, -129.8125&0.0, -129.8125&3.5, -129.8125&7.0, -129.8125&10.5, -129.8125&14.0,"
" -129.8125&17.5, -129.8125&21.0, -129.8125&24.5, -129.8125&28.0, -129.8125&31.5, -129.8125&35.0, -129.8125&38.5, -129.8125&42.0, -129.8125&45.5, -129.8125&"
"49.0, -129.8125&52.5, -129.8125&56.0, -129.8125&59.5, -129.8125&63.0, -129.8125&66.5, -129.8125&70.0, -129.8125&73.5, -129.8125&77.0, -129.8125&80.5, -129."
"8125&84.0, -129.8125&87.5, -129.8125&91.0, -129.8125&94.5, -129.8125&98.0, -129.8125&101.5, -129.8125&105.0, -129.8125&108.5, -129.8125&112.0, -129.8125&11"
"5.5, -129.8125&119.0, -129.8125&122.5, -129.8125&126.0, -129.8125&129.5, -129.8125&133.0, -129.8125&136.5, -129.8125&140.0, -129.8125&143.5, -129.8125&147."
"0, -129.8125&150.5, -129.8125&154.0, -129.8125&157.5, -129.8125&161.0, -129.8125&164.5, -129.8125&168.0, -129.8125&171.5, -129.8125&175.0, -125.625&0.0, -1"
"25.625&3.5, -125.625&7.0, -125.625&10.5, -125.625&14.0, -125.625&17.5, -125.625&21.0, -125.625&24.5, -125.625&28.0, -125.625&31.5, -125.625&35.0, -125.625&"
"38.5, -125.625&42.0, -125.625&45.5, -125.625&49.0, -125.625&52.5, -125.625&56.0, -125.625&59.5, -125.625&63.0, -125.625&66.5, -125.625&70.0, -125.625&73.5,"
" -125.625&77.0, -125.625&80.5, -125.625&84.0, -125.625&87.5, -125.625&91.0, -125.625&94.5, -125.625&98.0, -125.625&101.5, -125.625&105.0, -125.625&108.5, -"
"125.625&112.0, -125.625&115.5, -125.625&119.0, -125.625&122.5, -125.625&126.0, -125.625&129.5, -125.625&133.0, -125.625&136.5, -125.625&140.0, -125.625&143"
".5, -125.625&147.0, -125.625&150.5, -125.625&154.0, -125.625&157.5, -125.625&161.0, -125.625&164.5, -125.625&168.0, -125.625&171.5, -125.625&175.0, -121.43"
"75&0.0, -121.4375&3.5, -121.4375&7.0, -121.4375&10.5, -121.4375&14.0, -121.4375&17.5, -121.4375&21.0, -121.4375&24.5, -121.4375&28.0, -121.4375&31.5, -121."
"4375&35.0, -121.4375&38.5, -121.4375&42.0, -121.4375&45.5, -121.4375&49.0, -121.4375&52.5, -121.4375&56.0, -121.4375&59.5, -121.4375&63.0, -121.4375&66.5, "
"-121.4375&70.0, -121.4375&73.5, -121.4375&77.0, -121.4375&80.5, -121.4375&84.0, -121.4375&87.5, -121.4375&91.0, -121.4375&94.5, -121.4375&98.0, -121.4375&1"
"01.5, -121.4375&105.0, -121.4375&108.5, -121.4375&112.0, -121.4375&115.5, -121.4375&119.0, -121.4375&122.5, -121.4375&126.0, -121.4375&129.5, -121.4375&133"
".0, -121.4375&136.5, -121.4375&140.0, -121.4375&143.5, -121.4375&147.0, -121.4375&150.5, -121.4375&154.0, -121.4375&157.5, -121.4375&161.0, -121.4375&164.5"
", -121.4375&168.0, -121.4375&171.5, -121.4375&175.0, -117.25&0.0, -117.25&3.5, -117.25&7.0, -117.25&10.5, -117.25&14.0, -117.25&17.5, -117.25&21.0, -117.25"
"&24.5, -117.25&28.0, -117.25&31.5, -117.25&35.0, -117.25&38.5, -117.25&42.0, -117.25&45.5, -117.25&49.0, -117.25&52.5, -117.25&56.0, -117.25&59.5, -117.25&"
"63.0, -117.25&66.5, -117.25&70.0, -117.25&73.5, -117.25&77.0, -117.25&80.5, -117.25&84.0, -117.25&87.5, -117.25&91.0, -117.25&94.5, -117.25&98.0, -117.25&1"
"01.5, -117.25&105.0, -117.25&108.5, -117.25&112.0, -117.25&115.5, -117.25&119.0, -117.25&122.5, -117.25&126.0, -117.25&129.5, -117.25&133.0, -117.25&136.5,"
" -117.25&140.0, -117.25&143.5, -117.25&147.0, -117.25&150.5, -117.25&154.0, -117.25&157.5, -117.25&161.0, -117.25&164.5, -117.25&168.0, -117.25&171.5, -117"
".25&175.0, -113.0625&0.0, -113.0625&3.5, -113.0625&7.0, -113.0625&10.5, -113.0625&14.0, -113.0625&17.5, -113.0625&21.0, -113.0625&24.5, -113.0625&28.0, -11"
"3.0625&31.5, -113.0625&35.0, -113.0625&38.5, -113.0625&42.0, -113.0625&45.5, -113.0625&49.0, -113.0625&52.5, -113.0625&56.0, -113.0625&59.5, -113.0625&63.0"
", -113.0625&66.5, -113.0625&70.0, -113.0625&73.5, -113.0625&77.0, -113.0625&80.5, -113.0625&84.0, -113.0625&87.5, -113.0625&91.0, -113.0625&94.5, -113.0625"
"&98.0, -113.0625&101.5, -113.0625&105.0, -113.0625&108.5, -113.0625&112.0, -113.0625&115.5, -113.0625&119.0, -113.0625&122.5, -113.0625&126.0, -113.0625&12"
"9.5, -113.0625&133.0, -113.0625&136.5, -113.0625&140.0, -113.0625&143.5, -113.0625&147.0, -113.0625&150.5, -113.0625&154.0, -113.0625&157.5, -113.0625&161."
"0, -113.0625&164.5, -113.0625&168.0, -113.0625&171.5, -113.0625&175.0, -108.875&0.0, -108.875&3.5, -108.875&7.0, -108.875&10.5, -108.875&14.0, -108.875&17."
"5, -108.875&21.0, -108.875&24.5, -108.875&28.0, -108.875&31.5, -108.875&35.0, -108.875&38.5, -108.875&42.0, -108.875&45.5, -108.875&49.0, -108.875&52.5, -1"
"08.875&56.0, -108.875&59.5, -108.875&63.0, -108.875&66.5, -108.875&70.0, -108.875&73.5, -108.875&77.0, -108.875&80.5, -108.875&84.0, -108.875&87.5, -108.87"
"5&91.0, -108.875&94.5, -108.875&98.0, -108.875&101.5, -108.875&105.0, -108.875&108.5, -108.875&112.0, -108.875&115.5, -108.875&119.0, -108.875&122.5, -108."
"875&126.0, -108.875&129.5, -108.875&133.0, -108.875&136.5, -108.875&140.0, -108.875&143.5, -108.875&147.0, -108.875&150.5, -108.875&154.0, -108.875&157.5, "
"-108.875&161.0, -108.875&164.5, -108.875&168.0, -108.875&171.5, -108.875&175.0, -104.6875&0.0, -104.6875&3.5, -104.6875&7.0, -104.6875&10.5, -104.6875&14.0"
", -104.6875&17.5, -104.6875&21.0, -104.6875&24.5, -104.6875&28.0, -104.6875&31.5, -104.6875&35.0, -104.6875&38.5, -104.6875&42.0, -104.6875&45.5, -104.6875"
"&49.0, -104.6875&52.5, -104.6875&56.0, -104.6875&59.5, -104.6875&63.0, -104.6875&66.5, -104.6875&70.0, -104.6875&73.5, -104.6875&77.0, -104.6875&80.5, -104"
".6875&84.0, -104.6875&87.5, -104.6875&91.0, -104.6875&94.5, -104.6875&98.0, -104.6875&101.5, -104.6875&105.0, -104.6875&108.5, -104.6875&112.0, -104.6875&1"
"15.5, -104.6875&119.0, -104.6875&122.5, -104.6875&126.0, -104.6875&129.5, -104.6875&133.0, -104.6875&136.5, -104.6875&140.0, -104.6875&143.5, -104.6875&147"
".0, -104.6875&150.5, -104.6875&154.0, -104.6875&157.5, -104.6875&161.0, -104.6875&164.5, -104.6875&168.0, -104.6875&171.5, -104.6875&175.0, -100.5&0.0, -10"
"0.5&3.5, -100.5&7.0, -100.5&10.5, -100.5&14.0, -100.5&17.5, -100.5&21.0, -100.5&24.5, -100.5&28.0, -100.5&31.5, -100.5&35.0, -100.5&38.5, -100.5&42.0, -100"
".5&45.5, -100.5&49.0, -100.5&52.5, -100.5&56.0, -100.5&59.5, -100.5&63.0, -100.5&66.5, -100.5&70.0, -100.5&73.5, -100.5&77.0, -100.5&80.5, -100.5&84.0, -10"
"0.5&87.5, -100.5&91.0, -100.5&94.5, -100.5&98.0, -100.5&101.5, -100.5&105.0, -100.5&108.5, -100.5&112.0, -100.5&115.5, -100.5&119.0, -100.5&122.5, -100.5&1"
"26.0, -100.5&129.5, -100.5&133.0, -100.5&136.5, -100.5&140.0, -100.5&143.5, -100.5&147.0, -100.5&150.5, -100.5&154.0, -100.5&157.5, -100.5&161.0, -100.5&16"
"4.5, -100.5&168.0, -100.5&171.5, -100.5&175.0, -96.3125&0.0, -96.3125&3.5, -96.3125&7.0, -96.3125&10.5, -96.3125&14.0, -96.3125&17.5, -96.3125&21.0, -96.31"
"25&24.5, -96.3125&28.0, -96.3125&31.5, -96.3125&35.0, -96.3125&38.5, -96.3125&42.0, -96.3125&45.5, -96.3125&49.0, -96.3125&52.5, -96.3125&56.0, -96.3125&59"
".5, -96.3125&63.0, -96.3125&66.5, -96.3125&70.0, -96.3125&73.5, -96.3125&77.0, -96.3125&80.5, -96.3125&84.0, -96.3125&87.5, -96.3125&91.0, -96.3125&94.5, -"
"96.3125&98.0, -96.3125&101.5, -96.3125&105.0, -96.3125&108.5, -96.3125&112.0, -96.3125&115.5, -96.3125&119.0, -96.3125&122.5, -96.3125&126.0, -96.3125&129."
"5, -96.3125&133.0, -96.3125&136.5, -96.3125&140.0, -96.3125&143.5, -96.3125&147.0, -96.3125&150.5, -96.3125&154.0, -96.3125&157.5, -96.3125&161.0, -96.3125"
"&164.5, -96.3125&168.0, -96.3125&171.5, -96.3125&175.0, -92.125&0.0, -92.125&3.5, -92.125&7.0, -92.125&10.5, -92.125&14.0, -92.125&17.5, -92.125&21.0, -92."
"125&24.5, -92.125&28.0, -92.125&31.5, -92.125&35.0, -92.125&38.5, -92.125&42.0, -92.125&45.5, -92.125&49.0, -92.125&52.5, -92.125&56.0, -92.125&59.5, -92.1"
"25&63.0, -92.125&66.5, -92.125&70.0, -92.125&73.5, -92.125&77.0, -92.125&80.5, -92.125&84.0, -92.125&87.5, -92.125&91.0, -92.125&94.5, -92.125&98.0, -92.12"
"5&101.5, -92.125&105.0, -92.125&108.5, -92.125&112.0, -92.125&115.5, -92.125&119.0, -92.125&122.5, -92.125&126.0, -92.125&129.5, -92.125&133.0, -92.125&136"
".5, -92.125&140.0, -92.125&143.5, -92.125&147.0, -92.125&150.5, -92.125&154.0, -92.125&157.5, -92.125&161.0, -92.125&164.5, -92.125&168.0, -92.125&171.5, -"
"92.125&175.0, -87.9375&0.0, -87.9375&3.5, -87.9375&7.0, -87.9375&10.5, -87.9375&14.0, -87.9375&17.5, -87.9375&21.0, -87.9375&24.5, -87.9375&28.0, -87.9375&"
"31.5, -87.9375&35.0, -87.9375&38.5, -87.9375&42.0, -87.9375&45.5, -87.9375&49.0, -87.9375&52.5, -87.9375&56.0, -87.9375&59.5, -87.9375&63.0, -87.9375&66.5,"
" -87.9375&70.0, -87.9375&73.5, -87.9375&77.0, -87.9375&80.5, -87.9375&84.0, -87.9375&87.5, -87.9375&91.0, -87.9375&94.5, -87.9375&98.0, -87.9375&101.5, -87"
".9375&105.0, -87.9375&108.5, -87.9375&112.0, -87.9375&115.5, -87.9375&119.0, -87.9375&122.5, -87.9375&126.0, -87.9375&129.5, -87.9375&133.0, -87.9375&136.5"
", -87.9375&140.0, -87.9375&143.5, -87.9375&147.0, -87.9375&150.5, -87.9375&154.0, -87.9375&157.5, -87.9375&161.0, -87.9375&164.5, -87.9375&168.0, -87.9375&"
"171.5, -87.9375&175.0, -83.75&0.0, -83.75&3.5, -83.75&7.0, -83.75&10.5, -83.75&14.0, -83.75&17.5, -83.75&21.0, -83.75&24.5, -83.75&28.0, -83.75&31.5, -83.7"
"5&35.0, -83.75&38.5, -83.75&42.0, -83.75&45.5, -83.75&49.0, -83.75&52.5, -83.75&56.0, -83.75&59.5, -83.75&63.0, -83.75&66.5, -83.75&70.0, -83.75&73.5, -83."
"75&77.0, -83.75&80.5, -83.75&84.0, -83.75&87.5, -83.75&91.0, -83.75&94.5, -83.75&98.0, -83.75&101.5, -83.75&105.0, -83.75&108.5, -83.75&112.0, -83.75&115.5"
", -83.75&119.0, -83.75&122.5, -83.75&126.0, -83.75&129.5, -83.75&133.0, -83.75&136.5, -83.75&140.0, -83.75&143.5, -83.75&147.0, -83.75&150.5, -83.75&154.0,"
" -83.75&157.5, -83.75&161.0, -83.75&164.5, -83.75&168.0, -83.75&171.5, -83.75&175.0, -79.5625&0.0, -79.5625&3.5, -79.5625&7.0, -79.5625&10.5, -79.5625&14.0"
", -79.5625&17.5, -79.5625&21.0, -79.5625&24.5, -79.5625&28.0, -79.5625&31.5, -79.5625&35.0, -79.5625&38.5, -79.5625&42.0, -79.5625&45.5, -79.5625&49.0, -79"
".5625&52.5, -79.5625&56.0, -79.5625&59.5, -79.5625&63.0, -79.5625&66.5, -79.5625&70.0, -79.5625&73.5, -79.5625&77.0, -79.5625&80.5, -79.5625&84.0, -79.5625"
"&87.5, -79.5625&91.0, -79.5625&94.5, -79.5625&98.0, -79.5625&101.5, -79.5625&105.0, -79.5625&108.5, -79.5625&112.0, -79.5625&115.5, -79.5625&119.0, -79.562"
"5&122.5, -79.5625&126.0, -79.5625&129.5, -79.5625&133.0, -79.5625&136.5, -79.5625&140.0, -79.5625&143.5, -79.5625&147.0, -79.5625&150.5, -79.5625&154.0, -7"
"9.5625&157.5, -79.5625&161.0, -79.5625&164.5, -79.5625&168.0, -79.5625&171.5, -79.5625&175.0, -75.375&0.0, -75.375&3.5, -75.375&7.0, -75.375&10.5, -75.375&"
"14.0, -75.375&17.5, -75.375&21.0, -75.375&24.5, -75.375&28.0, -75.375&31.5, -75.375&35.0, -75.375&38.5, -75.375&42.0, -75.375&45.5, -75.375&49.0, -75.375&5"
"2.5, -75.375&56.0, -75.375&59.5, -75.375&63.0, -75.375&66.5, -75.375&70.0, -75.375&73.5, -75.375&77.0, -75.375&80.5, -75.375&84.0, -75.375&87.5, -75.375&91"
".0, -75.375&94.5, -75.375&98.0, -75.375&101.5, -75.375&105.0, -75.375&108.5, -75.375&112.0, -75.375&115.5, -75.375&119.0, -75.375&122.5, -75.375&126.0, -75"
".375&129.5, -75.375&133.0, -75.375&136.5, -75.375&140.0, -75.375&143.5, -75.375&147.0, -75.375&150.5, -75.375&154.0, -75.375&157.5, -75.375&161.0, -75.375&"
"164.5, -75.375&168.0, -75.375&171.5, -75.375&175.0, -71.1875&0.0, -71.1875&3.5, -71.1875&7.0, -71.1875&10.5, -71.1875&14.0, -71.1875&17.5, -71.1875&21.0, -"
"71.1875&24.5, -71.1875&28.0, -71.1875&31.5, -71.1875&35.0, -71.1875&38.5, -71.1875&42.0, -71.1875&45.5, -71.1875&49.0, -71.1875&52.5, -71.1875&56.0, -71.18"
"75&59.5, -71.1875&63.0, -71.1875&66.5, -71.1875&70.0, -71.1875&73.5, -71.1875&77.0, -71.1875&80.5, -71.1875&84.0, -71.1875&87.5, -71.1875&91.0, -71.1875&94"
".5, -71.1875&98.0, -71.1875&101.5, -71.1875&105.0, -71.1875&108.5, -71.1875&112.0, -71.1875&115.5, -71.1875&119.0, -71.1875&122.5, -71.1875&126.0, -71.1875"
"&129.5, -71.1875&133.0, -71.1875&136.5, -71.1875&140.0, -71.1875&143.5, -71.1875&147.0, -71.1875&150.5, -71.1875&154.0, -71.1875&157.5, -71.1875&161.0, -71"
".1875&164.5, -71.1875&168.0, -71.1875&171.5, -71.1875&175.0, -67.0&0.0, -67.0&3.5, -67.0&7.0, -67.0&10.5, -67.0&14.0, -67.0&17.5, -67.0&21.0, -67.0&24.5, -"
"67.0&28.0, -67.0&31.5, -67.0&35.0, -67.0&38.5, -67.0&42.0, -67.0&45.5, -67.0&49.0, -67.0&52.5, -67.0&56.0, -67.0&59.5, -67.0&63.0, -67.0&66.5, -67.0&70.0, "
"-67.0&73.5, -67.0&77.0, -67.0&80.5, -67.0&84.0, -67.0&87.5, -67.0&91.0, -67.0&94.5, -67.0&98.0, -67.0&101.5, -67.0&105.0, -67.0&108.5, -67.0&112.0, -67.0&1"
"15.5, -67.0&119.0, -67.0&122.5, -67.0&126.0, -67.0&129.5, -67.0&133.0, -67.0&136.5, -67.0&140.0, -67.0&143.5, -67.0&147.0, -67.0&150.5, -67.0&154.0, -67.0&"
"157.5, -67.0&161.0, -67.0&164.5, -67.0&168.0, -67.0&171.5, -67.0&175.0, -62.8125&0.0, -62.8125&3.5, -62.8125&7.0, -62.8125&10.5, -62.8125&14.0, -62.8125&17"
".5, -62.8125&21.0, -62.8125&24.5, -62.8125&28.0, -62.8125&31.5, -62.8125&35.0, -62.8125&38.5, -62.8125&42.0, -62.8125&45.5, -62.8125&49.0, -62.8125&52.5, -"
"62.8125&56.0, -62.8125&59.5, -62.8125&63.0, -62.8125&66.5, -62.8125&70.0, -62.8125&73.5, -62.8125&77.0, -62.8125&80.5, -62.8125&84.0, -62.8125&87.5, -62.81"
"25&91.0, -62.8125&94.5, -62.8125&98.0, -62.8125&101.5, -62.8125&105.0, -62.8125&108.5, -62.8125&112.0, -62.8125&115.5, -62.8125&119.0, -62.8125&122.5, -62."
"8125&126.0, -62.8125&129.5, -62.8125&133.0, -62.8125&136.5, -62.8125&140.0, -62.8125&143.5, -62.8125&147.0, -62.8125&150.5, -62.8125&154.0, -62.8125&157.5,"
" -62.8125&161.0, -62.8125&164.5, -62.8125&168.0, -62.8125&171.5, -62.8125&175.0, -58.625&0.0, -58.625&3.5, -58.625&7.0, -58.625&10.5, -58.625&14.0, -58.625"
"&17.5, -58.625&21.0, -58.625&24.5, -58.625&28.0, -58.625&31.5, -58.625&35.0, -58.625&38.5, -58.625&42.0, -58.625&45.5, -58.625&49.0, -58.625&52.5, -58.625&"
"56.0, -58.625&59.5, -58.625&63.0, -58.625&66.5, -58.625&70.0, -58.625&73.5, -58.625&77.0, -58.625&80.5, -58.625&84.0, -58.625&87.5, -58.625&91.0, -58.625&9"
"4.5, -58.625&98.0, -58.625&101.5, -58.625&105.0, -58.625&108.5, -58.625&112.0, -58.625&115.5, -58.625&119.0, -58.625&122.5, -58.625&126.0, -58.625&129.5, -"
"58.625&133.0, -58.625&136.5, -58.625&140.0, -58.625&143.5, -58.625&147.0, -58.625&150.5, -58.625&154.0, -58.625&157.5, -58.625&161.0, -58.625&164.5, -58.62"
"5&168.0, -58.625&171.5, -58.625&175.0, -54.4375&0.0, -54.4375&3.5, -54.4375&7.0, -54.4375&10.5, -54.4375&14.0, -54.4375&17.5, -54.4375&21.0, -54.4375&24.5,"
" -54.4375&28.0, -54.4375&31.5, -54.4375&35.0, -54.4375&38.5, -54.4375&42.0, -54.4375&45.5, -54.4375&49.0, -54.4375&52.5, -54.4375&56.0, -54.4375&59.5, -54."
"4375&63.0, -54.4375&66.5, -54.4375&70.0, -54.4375&73.5, -54.4375&77.0, -54.4375&80.5, -54.4375&84.0, -54.4375&87.5, -54.4375&91.0, -54.4375&94.5, -54.4375&"
"98.0, -54.4375&101.5, -54.4375&105.0, -54.4375&108.5, -54.4375&112.0, -54.4375&115.5, -54.4375&119.0, -54.4375&122.5, -54.4375&126.0, -54.4375&129.5, -54.4"
"375&133.0, -54.4375&136.5, -54.4375&140.0, -54.4375&143.5, -54.4375&147.0, -54.4375&150.5, -54.4375&154.0, -54.4375&157.5, -54.4375&161.0, -54.4375&164.5, "
"-54.4375&168.0, -54.4375&171.5, -54.4375&175.0, -50.25&0.0, -50.25&3.5, -50.25&7.0, -50.25&10.5, -50.25&14.0, -50.25&17.5, -50.25&21.0, -50.25&24.5, -50.25"
"&28.0, -50.25&31.5, -50.25&35.0, -50.25&38.5, -50.25&42.0, -50.25&45.5, -50.25&49.0, -50.25&52.5, -50.25&56.0, -50.25&59.5, -50.25&63.0, -50.25&66.5, -50.2"
"5&70.0, -50.25&73.5, -50.25&77.0, -50.25&80.5, -50.25&84.0, -50.25&87.5, -50.25&91.0, -50.25&94.5, -50.25&98.0, -50.25&101.5, -50.25&105.0, -50.25&108.5, -"
"50.25&112.0, -50.25&115.5, -50.25&119.0, -50.25&122.5, -50.25&126.0, -50.25&129.5, -50.25&133.0, -50.25&136.5, -50.25&140.0, -50.25&143.5, -50.25&147.0, -5"
"0.25&150.5, -50.25&154.0, -50.25&157.5, -50.25&161.0, -50.25&164.5, -50.25&168.0, -50.25&171.5, -50.25&175.0, -46.0625&0.0, -46.0625&3.5, -46.0625&7.0, -46"
".0625&10.5, -46.0625&14.0, -46.0625&17.5, -46.0625&21.0, -46.0625&24.5, -46.0625&28.0, -46.0625&31.5, -46.0625&35.0, -46.0625&38.5, -46.0625&42.0, -46.0625"
"&45.5, -46.0625&49.0, -46.0625&52.5, -46.0625&56.0, -46.0625&59.5, -46.0625&63.0, -46.0625&66.5, -46.0625&70.0, -46.0625&73.5, -46.0625&77.0, -46.0625&80.5"
", -46.0625&84.0, -46.0625&87.5, -46.0625&91.0, -46.0625&94.5, -46.0625&98.0, -46.0625&101.5, -46.0625&105.0, -46.0625&108.5, -46.0625&112.0, -46.0625&115.5"
", -46.0625&119.0, -46.0625&122.5, -46.0625&126.0, -46.0625&129.5, -46.0625&133.0, -46.0625&136.5, -46.0625&140.0, -46.0625&143.5, -46.0625&147.0, -46.0625&"
"150.5, -46.0625&154.0, -46.0625&157.5, -46.0625&161.0, -46.0625&164.5, -46.0625&168.0, -46.0625&171.5, -46.0625&175.0, -41.875&0.0, -41.875&3.5, -41.875&7."
"0, -41.875&10.5, -41.875&14.0, -41.875&17.5, -41.875&21.0, -41.875&24.5, -41.875&28.0, -41.875&31.5, -41.875&35.0, -41.875&38.5, -41.875&42.0, -41.875&45.5"
", -41.875&49.0, -41.875&52.5, -41.875&56.0, -41.875&59.5, -41.875&63.0, -41.875&66.5, -41.875&70.0, -41.875&73.5, -41.875&77.0, -41.875&80.5, -41.875&84.0,"
" -41.875&87.5, -41.875&91.0, -41.875&94.5, -41.875&98.0, -41.875&101.5, -41.875&105.0, -41.875&108.5, -41.875&112.0, -41.875&115.5, -41.875&119.0, -41.875&"
"122.5, -41.875&126.0, -41.875&129.5, -41.875&133.0, -41.875&136.5, -41.875&140.0, -41.875&143.5, -41.875&147.0, -41.875&150.5, -41.875&154.0, -41.875&157.5"
", -41.875&161.0, -41.875&164.5, -41.875&168.0, -41.875&171.5, -41.875&175.0, -37.6875&0.0, -37.6875&3.5, -37.6875&7.0, -37.6875&10.5, -37.6875&14.0, -37.68"
"75&17.5, -37.6875&21.0, -37.6875&24.5, -37.6875&28.0, -37.6875&31.5, -37.6875&35.0, -37.6875&38.5, -37.6875&42.0, -37.6875&45.5, -37.6875&49.0, -37.6875&52"
".5, -37.6875&56.0, -37.6875&59.5, -37.6875&63.0, -37.6875&66.5, -37.6875&70.0, -37.6875&73.5, -37.6875&77.0, -37.6875&80.5, -37.6875&84.0, -37.6875&87.5, -"
"37.6875&91.0, -37.6875&94.5, -37.6875&98.0, -37.6875&101.5, -37.6875&105.0, -37.6875&108.5, -37.6875&112.0, -37.6875&115.5, -37.6875&119.0, -37.6875&122.5,"
" -37.6875&126.0, -37.6875&129.5, -37.6875&133.0, -37.6875&136.5, -37.6875&140.0, -37.6875&143.5, -37.6875&147.0, -37.6875&150.5, -37.6875&154.0, -37.6875&1"
"57.5, -37.6875&161.0, -37.6875&164.5, -37.6875&168.0, -37.6875&171.5, -37.6875&175.0, -33.5&0.0, -33.5&3.5, -33.5&7.0, -33.5&10.5, -33.5&14.0, -33.5&17.5, "
"-33.5&21.0, -33.5&24.5, -33.5&28.0, -33.5&31.5, -33.5&35.0, -33.5&38.5, -33.5&42.0, -33.5&45.5, -33.5&49.0, -33.5&52.5, -33.5&56.0, -33.5&59.5, -33.5&63.0,"
" -33.5&66.5, -33.5&70.0, -33.5&73.5, -33.5&77.0, -33.5&80.5, -33.5&84.0, -33.5&87.5, -33.5&91.0, -33.5&94.5, -33.5&98.0, -33.5&101.5, -33.5&105.0, -33.5&10"
"8.5, -33.5&112.0, -33.5&115.5, -33.5&119.0, -33.5&122.5, -33.5&126.0, -33.5&129.5, -33.5&133.0, -33.5&136.5, -33.5&140.0, -33.5&143.5, -33.5&147.0, -33.5&1"
"50.5, -33.5&154.0, -33.5&157.5, -33.5&161.0, -33.5&164.5, -33.5&168.0, -33.5&171.5, -33.5&175.0, -29.3125&0.0, -29.3125&3.5, -29.3125&7.0, -29.3125&10.5, -"
"29.3125&14.0, -29.3125&17.5, -29.3125&21.0, -29.3125&24.5, -29.3125&28.0, -29.3125&31.5, -29.3125&35.0, -29.3125&38.5, -29.3125&42.0, -29.3125&45.5, -29.31"
"25&49.0, -29.3125&52.5, -29.3125&56.0, -29.3125&59.5, -29.3125&63.0, -29.3125&66.5, -29.3125&70.0, -29.3125&73.5, -29.3125&77.0, -29.3125&80.5, -29.3125&84"
".0, -29.3125&87.5, -29.3125&91.0, -29.3125&94.5, -29.3125&98.0, -29.3125&101.5, -29.3125&105.0, -29.3125&108.5, -29.3125&112.0, -29.3125&115.5, -29.3125&11"
"9.0, -29.3125&122.5, -29.3125&126.0, -29.3125&129.5, -29.3125&133.0, -29.3125&136.5, -29.3125&140.0, -29.3125&143.5, -29.3125&147.0, -29.3125&150.5, -29.31"
"25&154.0, -29.3125&157.5, -29.3125&161.0, -29.3125&164.5, -29.3125&168.0, -29.3125&171.5, -29.3125&175.0, -25.125&0.0, -25.125&3.5, -25.125&7.0, -25.125&10"
".5, -25.125&14.0, -25.125&17.5, -25.125&21.0, -25.125&24.5, -25.125&28.0, -25.125&31.5, -25.125&35.0, -25.125&38.5, -25.125&42.0, -25.125&45.5, -25.125&49."
"0, -25.125&52.5, -25.125&56.0, -25.125&59.5, -25.125&63.0, -25.125&66.5, -25.125&70.0, -25.125&73.5, -25.125&77.0, -25.125&80.5, -25.125&84.0, -25.125&87.5"
", -25.125&91.0, -25.125&94.5, -25.125&98.0, -25.125&101.5, -25.125&105.0, -25.125&108.5, -25.125&112.0, -25.125&115.5, -25.125&119.0, -25.125&122.5, -25.12"
"5&126.0, -25.125&129.5, -25.125&133.0, -25.125&136.5, -25.125&140.0, -25.125&143.5, -25.125&147.0, -25.125&150.5, -25.125&154.0, -25.125&157.5, -25.125&161"
".0, -25.125&164.5, -25.125&168.0, -25.125&171.5, -25.125&175.0, -20.9375&0.0, -20.9375&3.5, -20.9375&7.0, -20.9375&10.5, -20.9375&14.0, -20.9375&17.5, -20."
"9375&21.0, -20.9375&24.5, -20.9375&28.0, -20.9375&31.5, -20.9375&35.0, -20.9375&38.5, -20.9375&42.0, -20.9375&45.5, -20.9375&49.0, -20.9375&52.5, -20.9375&"
"56.0, -20.9375&59.5, -20.9375&63.0, -20.9375&66.5, -20.9375&70.0, -20.9375&73.5, -20.9375&77.0, -20.9375&80.5, -20.9375&84.0, -20.9375&87.5, -20.9375&91.0,"
" -20.9375&94.5, -20.9375&98.0, -20.9375&101.5, -20.9375&105.0, -20.9375&108.5, -20.9375&112.0, -20.9375&115.5, -20.9375&119.0, -20.9375&122.5, -20.9375&126"
".0, -20.9375&129.5, -20.9375&133.0, -20.9375&136.5, -20.9375&140.0, -20.9375&143.5, -20.9375&147.0, -20.9375&150.5, -20.9375&154.0, -20.9375&157.5, -20.937"
"5&161.0, -20.9375&164.5, -20.9375&168.0, -20.9375&171.5, -20.9375&175.0, -16.75&0.0, -16.75&3.5, -16.75&7.0, -16.75&10.5, -16.75&14.0, -16.75&17.5, -16.75&"
"21.0, -16.75&24.5, -16.75&28.0, -16.75&31.5, -16.75&35.0, -16.75&38.5, -16.75&42.0, -16.75&45.5, -16.75&49.0, -16.75&52.5, -16.75&56.0, -16.75&59.5, -16.75"
"&63.0, -16.75&66.5, -16.75&70.0, -16.75&73.5, -16.75&77.0, -16.75&80.5, -16.75&84.0, -16.75&87.5, -16.75&91.0, -16.75&94.5, -16.75&98.0, -16.75&101.5, -16."
"75&105.0, -16.75&108.5, -16.75&112.0, -16.75&115.5, -16.75&119.0, -16.75&122.5, -16.75&126.0, -16.75&129.5, -16.75&133.0, -16.75&136.5, -16.75&140.0, -16.7"
"5&143.5, -16.75&147.0, -16.75&150.5, -16.75&154.0, -16.75&157.5, -16.75&161.0, -16.75&164.5, -16.75&168.0, -16.75&171.5, -16.75&175.0, -12.5625&0.0, -12.56"
"25&3.5, -12.5625&7.0, -12.5625&10.5, -12.5625&14.0, -12.5625&17.5, -12.5625&21.0, -12.5625&24.5, -12.5625&28.0, -12.5625&31.5, -12.5625&35.0, -12.5625&38.5"
", -12.5625&42.0, -12.5625&45.5, -12.5625&49.0, -12.5625&52.5, -12.5625&56.0, -12.5625&59.5, -12.5625&63.0, -12.5625&66.5, -12.5625&70.0, -12.5625&73.5, -12"
".5625&77.0, -12.5625&80.5, -12.5625&84.0, -12.5625&87.5, -12.5625&91.0, -12.5625&94.5, -12.5625&98.0, -12.5625&101.5, -12.5625&105.0, -12.5625&108.5, -12.5"
"625&112.0, -12.5625&115.5, -12.5625&119.0, -12.5625&122.5, -12.5625&126.0, -12.5625&129.5, -12.5625&133.0, -12.5625&136.5, -12.5625&140.0, -12.5625&143.5, "
"-12.5625&147.0, -12.5625&150.5, -12.5625&154.0, -12.5625&157.5, -12.5625&161.0, -12.5625&164.5, -12.5625&168.0, -12.5625&171.5, -12.5625&175.0, -8.375&0.0,"
" -8.375&3.5, -8.375&7.0, -8.375&10.5, -8.375&14.0, -8.375&17.5, -8.375&21.0, -8.375&24.5, -8.375&28.0, -8.375&31.5, -8.375&35.0, -8.375&38.5, -8.375&42.0, "
"-8.375&45.5, -8.375&49.0, -8.375&52.5, -8.375&56.0, -8.375&59.5, -8.375&63.0, -8.375&66.5, -8.375&70.0, -8.375&73.5, -8.375&77.0, -8.375&80.5, -8.375&84.0,"
" -8.375&87.5, -8.375&91.0, -8.375&94.5, -8.375&98.0, -8.375&101.5, -8.375&105.0, -8.375&108.5, -8.375&112.0, -8.375&115.5, -8.375&119.0, -8.375&122.5, -8.3"
"75&126.0, -8.375&129.5, -8.375&133.0, -8.375&136.5, -8.375&140.0, -8.375&143.5, -8.375&147.0, -8.375&150.5, -8.375&154.0, -8.375&157.5, -8.375&161.0, -8.37"
"5&164.5, -8.375&168.0, -8.375&171.5, -8.375&175.0, -4.1875&0.0, -4.1875&3.5, -4.1875&7.0, -4.1875&10.5, -4.1875&14.0, -4.1875&17.5, -4.1875&21.0, -4.1875&2"
"4.5, -4.1875&28.0, -4.1875&31.5, -4.1875&35.0, -4.1875&38.5, -4.1875&42.0, -4.1875&45.5, -4.1875&49.0, -4.1875&52.5, -4.1875&56.0, -4.1875&59.5, -4.1875&63"
".0, -4.1875&66.5, -4.1875&70.0, -4.1875&73.5, -4.1875&77.0, -4.1875&80.5, -4.1875&84.0, -4.1875&87.5, -4.1875&91.0, -4.1875&94.5, -4.1875&98.0, -4.1875&101"
".5, -4.1875&105.0, -4.1875&108.5, -4.1875&112.0, -4.1875&115.5, -4.1875&119.0, -4.1875&122.5, -4.1875&126.0, -4.1875&129.5, -4.1875&133.0, -4.1875&136.5, -"
"4.1875&140.0, -4.1875&143.5, -4.1875&147.0, -4.1875&150.5, -4.1875&154.0, -4.1875&157.5, -4.1875&161.0, -4.1875&164.5, -4.1875&168.0, -4.1875&171.5, -4.187"
"5&175.0, 0.0&0.0, 0.0&3.5, 0.0&7.0, 0.0&10.5, 0.0&14.0, 0.0&17.5, 0.0&21.0, 0.0&24.5, 0.0&28.0, 0.0&31.5, 0.0&35.0, 0.0&38.5, 0.0&42.0, 0.0&45.5, 0.0&49.0,"
" 0.0&52.5, 0.0&56.0, 0.0&59.5, 0.0&63.0, 0.0&66.5, 0.0&70.0, 0.0&73.5, 0.0&77.0, 0.0&80.5, 0.0&84.0, 0.0&87.5, 0.0&91.0, 0.0&94.5, 0.0&98.0, 0.0&101.5, 0.0"
"&105.0, 0.0&108.5, 0.0&112.0, 0.0&115.5, 0.0&119.0, 0.0&122.5, 0.0&126.0, 0.0&129.5, 0.0&133.0, 0.0&136.5, 0.0&140.0, 0.0&143.5, 0.0&147.0, 0.0&150.5, 0.0&"
"154.0, 0.0&157.5, 0.0&161.0, 0.0&164.5, 0.0&168.0, 0.0&171.5, 0.0&175.0, 4.1875&0.0, 4.1875&3.5, 4.1875&7.0, 4.1875&10.5, 4.1875&14.0, 4.1875&17.5, 4.1875&"
"21.0, 4.1875&24.5, 4.1875&28.0, 4.1875&31.5, 4.1875&35.0, 4.1875&38.5, 4.1875&42.0, 4.1875&45.5, 4.1875&49.0, 4.1875&52.5, 4.1875&56.0, 4.1875&59.5, 4.1875"
"&63.0, 4.1875&66.5, 4.1875&70.0, 4.1875&73.5, 4.1875&77.0, 4.1875&80.5, 4.1875&84.0, 4.1875&87.5, 4.1875&91.0, 4.1875&94.5, 4.1875&98.0, 4.1875&101.5, 4.18"
"75&105.0, 4.1875&108.5, 4.1875&112.0, 4.1875&115.5, 4.1875&119.0, 4.1875&122.5, 4.1875&126.0, 4.1875&129.5, 4.1875&133.0, 4.1875&136.5, 4.1875&140.0, 4.187"
"5&143.5, 4.1875&147.0, 4.1875&150.5, 4.1875&154.0, 4.1875&157.5, 4.1875&161.0, 4.1875&164.5, 4.1875&168.0, 4.1875&171.5, 4.1875&175.0, 8.375&0.0, 8.375&3.5"
", 8.375&7.0, 8.375&10.5, 8.375&14.0, 8.375&17.5, 8.375&21.0, 8.375&24.5, 8.375&28.0, 8.375&31.5, 8.375&35.0, 8.375&38.5, 8.375&42.0, 8.375&45.5, 8.375&49.0"
", 8.375&52.5, 8.375&56.0, 8.375&59.5, 8.375&63.0, 8.375&66.5, 8.375&70.0, 8.375&73.5, 8.375&77.0, 8.375&80.5, 8.375&84.0, 8.375&87.5, 8.375&91.0, 8.375&94."
"5, 8.375&98.0, 8.375&101.5, 8.375&105.0, 8.375&108.5, 8.375&112.0, 8.375&115.5, 8.375&119.0, 8.375&122.5, 8.375&126.0, 8.375&129.5, 8.375&133.0, 8.375&136."
"5, 8.375&140.0, 8.375&143.5, 8.375&147.0, 8.375&150.5, 8.375&154.0, 8.375&157.5, 8.375&161.0, 8.375&164.5, 8.375&168.0, 8.375&171.5, 8.375&175.0, 12.5625&0"
".0, 12.5625&3.5, 12.5625&7.0, 12.5625&10.5, 12.5625&14.0, 12.5625&17.5, 12.5625&21.0, 12.5625&24.5, 12.5625&28.0, 12.5625&31.5, 12.5625&35.0, 12.5625&38.5,"
" 12.5625&42.0, 12.5625&45.5, 12.5625&49.0, 12.5625&52.5, 12.5625&56.0, 12.5625&59.5, 12.5625&63.0, 12.5625&66.5, 12.5625&70.0, 12.5625&73.5, 12.5625&77.0, "
"12.5625&80.5, 12.5625&84.0, 12.5625&87.5, 12.5625&91.0, 12.5625&94.5, 12.5625&98.0, 12.5625&101.5, 12.5625&105.0, 12.5625&108.5, 12.5625&112.0, 12.5625&115"
".5, 12.5625&119.0, 12.5625&122.5, 12.5625&126.0, 12.5625&129.5, 12.5625&133.0, 12.5625&136.5, 12.5625&140.0, 12.5625&143.5, 12.5625&147.0, 12.5625&150.5, 1"
"2.5625&154.0, 12.5625&157.5, 12.5625&161.0, 12.5625&164.5, 12.5625&168.0, 12.5625&171.5, 12.5625&175.0, 16.75&0.0, 16.75&3.5, 16.75&7.0, 16.75&10.5, 16.75&"
"14.0, 16.75&17.5, 16.75&21.0, 16.75&24.5, 16.75&28.0, 16.75&31.5, 16.75&35.0, 16.75&38.5, 16.75&42.0, 16.75&45.5, 16.75&49.0, 16.75&52.5, 16.75&56.0, 16.75"
"&59.5, 16.75&63.0, 16.75&66.5, 16.75&70.0, 16.75&73.5, 16.75&77.0, 16.75&80.5, 16.75&84.0, 16.75&87.5, 16.75&91.0, 16.75&94.5, 16.75&98.0, 16.75&101.5, 16."
"75&105.0, 16.75&108.5, 16.75&112.0, 16.75&115.5, 16.75&119.0, 16.75&122.5, 16.75&126.0, 16.75&129.5, 16.75&133.0, 16.75&136.5, 16.75&140.0, 16.75&143.5, 16"
".75&147.0, 16.75&150.5, 16.75&154.0, 16.75&157.5, 16.75&161.0, 16.75&164.5, 16.75&168.0, 16.75&171.5, 16.75&175.0, 20.9375&0.0, 20.9375&3.5, 20.9375&7.0, 2"
"0.9375&10.5, 20.9375&14.0, 20.9375&17.5, 20.9375&21.0, 20.9375&24.5, 20.9375&28.0, 20.9375&31.5, 20.9375&35.0, 20.9375&38.5, 20.9375&42.0, 20.9375&45.5, 20"
".9375&49.0, 20.9375&52.5, 20.9375&56.0, 20.9375&59.5, 20.9375&63.0, 20.9375&66.5, 20.9375&70.0, 20.9375&73.5, 20.9375&77.0, 20.9375&80.5, 20.9375&84.0, 20."
"9375&87.5, 20.9375&91.0, 20.9375&94.5, 20.9375&98.0, 20.9375&101.5, 20.9375&105.0, 20.9375&108.5, 20.9375&112.0, 20.9375&115.5, 20.9375&119.0, 20.9375&122."
"5, 20.9375&126.0, 20.9375&129.5, 20.9375&133.0, 20.9375&136.5, 20.9375&140.0, 20.9375&143.5, 20.9375&147.0, 20.9375&150.5, 20.9375&154.0, 20.9375&157.5, 20"
".9375&161.0, 20.9375&164.5, 20.9375&168.0, 20.9375&171.5, 20.9375&175.0, 25.125&0.0, 25.125&3.5, 25.125&7.0, 25.125&10.5, 25.125&14.0, 25.125&17.5, 25.125&"
"21.0, 25.125&24.5, 25.125&28.0, 25.125&31.5, 25.125&35.0, 25.125&38.5, 25.125&42.0, 25.125&45.5, 25.125&49.0, 25.125&52.5, 25.125&56.0, 25.125&59.5, 25.125"
"&63.0, 25.125&66.5, 25.125&70.0, 25.125&73.5, 25.125&77.0, 25.125&80.5, 25.125&84.0, 25.125&87.5, 25.125&91.0, 25.125&94.5, 25.125&98.0, 25.125&101.5, 25.1"
"25&105.0, 25.125&108.5, 25.125&112.0, 25.125&115.5, 25.125&119.0, 25.125&122.5, 25.125&126.0, 25.125&129.5, 25.125&133.0, 25.125&136.5, 25.125&140.0, 25.12"
"5&143.5, 25.125&147.0, 25.125&150.5, 25.125&154.0, 25.125&157.5, 25.125&161.0, 25.125&164.5, 25.125&168.0, 25.125&171.5, 25.125&175.0, 29.3125&0.0, 29.3125"
"&3.5, 29.3125&7.0, 29.3125&10.5, 29.3125&14.0, 29.3125&17.5, 29.3125&21.0, 29.3125&24.5, 29.3125&28.0, 29.3125&31.5, 29.3125&35.0, 29.3125&38.5, 29.3125&42"
".0, 29.3125&45.5, 29.3125&49.0, 29.3125&52.5, 29.3125&56.0, 29.3125&59.5, 29.3125&63.0, 29.3125&66.5, 29.3125&70.0, 29.3125&73.5, 29.3125&77.0, 29.3125&80."
"5, 29.3125&84.0, 29.3125&87.5, 29.3125&91.0, 29.3125&94.5, 29.3125&98.0, 29.3125&101.5, 29.3125&105.0, 29.3125&108.5, 29.3125&112.0, 29.3125&115.5, 29.3125"
"&119.0, 29.3125&122.5, 29.3125&126.0, 29.3125&129.5, 29.3125&133.0, 29.3125&136.5, 29.3125&140.0, 29.3125&143.5, 29.3125&147.0, 29.3125&150.5, 29.3125&154."
"0, 29.3125&157.5, 29.3125&161.0, 29.3125&164.5, 29.3125&168.0, 29.3125&171.5, 29.3125&175.0, 33.5&0.0, 33.5&3.5, 33.5&7.0, 33.5&10.5, 33.5&14.0, 33.5&17.5,"
" 33.5&21.0, 33.5&24.5, 33.5&28.0, 33.5&31.5, 33.5&35.0, 33.5&38.5, 33.5&42.0, 33.5&45.5, 33.5&49.0, 33.5&52.5, 33.5&56.0, 33.5&59.5, 33.5&63.0, 33.5&66.5, "
"33.5&70.0, 33.5&73.5, 33.5&77.0, 33.5&80.5, 33.5&84.0, 33.5&87.5, 33.5&91.0, 33.5&94.5, 33.5&98.0, 33.5&101.5, 33.5&105.0, 33.5&108.5, 33.5&112.0, 33.5&115"
".5, 33.5&119.0, 33.5&122.5, 33.5&126.0, 33.5&129.5, 33.5&133.0, 33.5&136.5, 33.5&140.0, 33.5&143.5, 33.5&147.0, 33.5&150.5, 33.5&154.0, 33.5&157.5, 33.5&16"
"1.0, 33.5&164.5, 33.5&168.0, 33.5&171.5, 33.5&175.0, 37.6875&0.0, 37.6875&3.5, 37.6875&7.0, 37.6875&10.5, 37.6875&14.0, 37.6875&17.5, 37.6875&21.0, 37.6875"
"&24.5, 37.6875&28.0, 37.6875&31.5, 37.6875&35.0, 37.6875&38.5, 37.6875&42.0, 37.6875&45.5, 37.6875&49.0, 37.6875&52.5, 37.6875&56.0, 37.6875&59.5, 37.6875&"
"63.0, 37.6875&66.5, 37.6875&70.0, 37.6875&73.5, 37.6875&77.0, 37.6875&80.5, 37.6875&84.0, 37.6875&87.5, 37.6875&91.0, 37.6875&94.5, 37.6875&98.0, 37.6875&1"
"01.5, 37.6875&105.0, 37.6875&108.5, 37.6875&112.0, 37.6875&115.5, 37.6875&119.0, 37.6875&122.5, 37.6875&126.0, 37.6875&129.5, 37.6875&133.0, 37.6875&136.5,"
" 37.6875&140.0, 37.6875&143.5, 37.6875&147.0, 37.6875&150.5, 37.6875&154.0, 37.6875&157.5, 37.6875&161.0, 37.6875&164.5, 37.6875&168.0, 37.6875&171.5, 37.6"
"875&175.0, 41.875&0.0, 41.875&3.5, 41.875&7.0, 41.875&10.5, 41.875&14.0, 41.875&17.5, 41.875&21.0, 41.875&24.5, 41.875&28.0, 41.875&31.5, 41.875&35.0, 41.8"
"75&38.5, 41.875&42.0, 41.875&45.5, 41.875&49.0, 41.875&52.5, 41.875&56.0, 41.875&59.5, 41.875&63.0, 41.875&66.5, 41.875&70.0, 41.875&73.5, 41.875&77.0, 41."
"875&80.5, 41.875&84.0, 41.875&87.5, 41.875&91.0, 41.875&94.5, 41.875&98.0, 41.875&101.5, 41.875&105.0, 41.875&108.5, 41.875&112.0, 41.875&115.5, 41.875&119"
".0, 41.875&122.5, 41.875&126.0, 41.875&129.5, 41.875&133.0, 41.875&136.5, 41.875&140.0, 41.875&143.5, 41.875&147.0, 41.875&150.5, 41.875&154.0, 41.875&157."
"5, 41.875&161.0, 41.875&164.5, 41.875&168.0, 41.875&171.5, 41.875&175.0, 46.0625&0.0, 46.0625&3.5, 46.0625&7.0, 46.0625&10.5, 46.0625&14.0, 46.0625&17.5, 4"
"6.0625&21.0, 46.0625&24.5, 46.0625&28.0, 46.0625&31.5, 46.0625&35.0, 46.0625&38.5, 46.0625&42.0, 46.0625&45.5, 46.0625&49.0, 46.0625&52.5, 46.0625&56.0, 46"
".0625&59.5, 46.0625&63.0, 46.0625&66.5, 46.0625&70.0, 46.0625&73.5, 46.0625&77.0, 46.0625&80.5, 46.0625&84.0, 46.0625&87.5, 46.0625&91.0, 46.0625&94.5, 46."
"0625&98.0, 46.0625&101.5, 46.0625&105.0, 46.0625&108.5, 46.0625&112.0, 46.0625&115.5, 46.0625&119.0, 46.0625&122.5, 46.0625&126.0, 46.0625&129.5, 46.0625&1"
"33.0, 46.0625&136.5, 46.0625&140.0, 46.0625&143.5, 46.0625&147.0, 46.0625&150.5, 46.0625&154.0, 46.0625&157.5, 46.0625&161.0, 46.0625&164.5, 46.0625&168.0,"
" 46.0625&171.5, 46.0625&175.0, 50.25&0.0, 50.25&3.5, 50.25&7.0, 50.25&10.5, 50.25&14.0, 50.25&17.5, 50.25&21.0, 50.25&24.5, 50.25&28.0, 50.25&31.5, 50.25&3"
"5.0, 50.25&38.5, 50.25&42.0, 50.25&45.5, 50.25&49.0, 50.25&52.5, 50.25&56.0, 50.25&59.5, 50.25&63.0, 50.25&66.5, 50.25&70.0, 50.25&73.5, 50.25&77.0, 50.25&"
"80.5, 50.25&84.0, 50.25&87.5, 50.25&91.0, 50.25&94.5, 50.25&98.0, 50.25&101.5, 50.25&105.0, 50.25&108.5, 50.25&112.0, 50.25&115.5, 50.25&119.0, 50.25&122.5"
", 50.25&126.0, 50.25&129.5, 50.25&133.0, 50.25&136.5, 50.25&140.0, 50.25&143.5, 50.25&147.0, 50.25&150.5, 50.25&154.0, 50.25&157.5, 50.25&161.0, 50.25&164."
"5, 50.25&168.0, 50.25&171.5, 50.25&175.0, 54.4375&0.0, 54.4375&3.5, 54.4375&7.0, 54.4375&10.5, 54.4375&14.0, 54.4375&17.5, 54.4375&21.0, 54.4375&24.5, 54.4"
"375&28.0, 54.4375&31.5, 54.4375&35.0, 54.4375&38.5, 54.4375&42.0, 54.4375&45.5, 54.4375&49.0, 54.4375&52.5, 54.4375&56.0, 54.4375&59.5, 54.4375&63.0, 54.43"
"75&66.5, 54.4375&70.0, 54.4375&73.5, 54.4375&77.0, 54.4375&80.5, 54.4375&84.0, 54.4375&87.5, 54.4375&91.0, 54.4375&94.5, 54.4375&98.0, 54.4375&101.5, 54.43"
"75&105.0, 54.4375&108.5, 54.4375&112.0, 54.4375&115.5, 54.4375&119.0, 54.4375&122.5, 54.4375&126.0, 54.4375&129.5, 54.4375&133.0, 54.4375&136.5, 54.4375&14"
"0.0, 54.4375&143.5, 54.4375&147.0, 54.4375&150.5, 54.4375&154.0, 54.4375&157.5, 54.4375&161.0, 54.4375&164.5, 54.4375&168.0, 54.4375&171.5, 54.4375&175.0, "
"58.625&0.0, 58.625&3.5, 58.625&7.0, 58.625&10.5, 58.625&14.0, 58.625&17.5, 58.625&21.0, 58.625&24.5, 58.625&28.0, 58.625&31.5, 58.625&35.0, 58.625&38.5, 58"
".625&42.0, 58.625&45.5, 58.625&49.0, 58.625&52.5, 58.625&56.0, 58.625&59.5, 58.625&63.0, 58.625&66.5, 58.625&70.0, 58.625&73.5, 58.625&77.0, 58.625&80.5, 5"
"8.625&84.0, 58.625&87.5, 58.625&91.0, 58.625&94.5, 58.625&98.0, 58.625&101.5, 58.625&105.0, 58.625&108.5, 58.625&112.0, 58.625&115.5, 58.625&119.0, 58.625&"
"122.5, 58.625&126.0, 58.625&129.5, 58.625&133.0, 58.625&136.5, 58.625&140.0, 58.625&143.5, 58.625&147.0, 58.625&150.5, 58.625&154.0, 58.625&157.5, 58.625&1"
"61.0, 58.625&164.5, 58.625&168.0, 58.625&171.5, 58.625&175.0, 62.8125&0.0, 62.8125&3.5, 62.8125&7.0, 62.8125&10.5, 62.8125&14.0, 62.8125&17.5, 62.8125&21.0"
", 62.8125&24.5, 62.8125&28.0, 62.8125&31.5, 62.8125&35.0, 62.8125&38.5, 62.8125&42.0, 62.8125&45.5, 62.8125&49.0, 62.8125&52.5, 62.8125&56.0, 62.8125&59.5,"
" 62.8125&63.0, 62.8125&66.5, 62.8125&70.0, 62.8125&73.5, 62.8125&77.0, 62.8125&80.5, 62.8125&84.0, 62.8125&87.5, 62.8125&91.0, 62.8125&94.5, 62.8125&98.0, "
"62.8125&101.5, 62.8125&105.0, 62.8125&108.5, 62.8125&112.0, 62.8125&115.5, 62.8125&119.0, 62.8125&122.5, 62.8125&126.0, 62.8125&129.5, 62.8125&133.0, 62.81"
"25&136.5, 62.8125&140.0, 62.8125&143.5, 62.8125&147.0, 62.8125&150.5, 62.8125&154.0, 62.8125&157.5, 62.8125&161.0, 62.8125&164.5, 62.8125&168.0, 62.8125&17"
"1.5, 62.8125&175.0, 67.0&0.0, 67.0&3.5, 67.0&7.0, 67.0&10.5, 67.0&14.0, 67.0&17.5, 67.0&21.0, 67.0&24.5, 67.0&28.0, 67.0&31.5, 67.0&35.0, 67.0&38.5, 67.0&4"
"2.0, 67.0&45.5, 67.0&49.0, 67.0&52.5, 67.0&56.0, 67.0&59.5, 67.0&63.0, 67.0&66.5, 67.0&70.0, 67.0&73.5, 67.0&77.0, 67.0&80.5, 67.0&84.0, 67.0&87.5, 67.0&91"
".0, 67.0&94.5, 67.0&98.0, 67.0&101.5, 67.0&105.0, 67.0&108.5, 67.0&112.0, 67.0&115.5, 67.0&119.0, 67.0&122.5, 67.0&126.0, 67.0&129.5, 67.0&133.0, 67.0&136."
"5, 67.0&140.0, 67.0&143.5, 67.0&147.0, 67.0&150.5, 67.0&154.0, 67.0&157.5, 67.0&161.0, 67.0&164.5, 67.0&168.0, 67.0&171.5, 67.0&175.0, 71.1875&0.0, 71.1875"
"&3.5, 71.1875&7.0, 71.1875&10.5, 71.1875&14.0, 71.1875&17.5, 71.1875&21.0, 71.1875&24.5, 71.1875&28.0, 71.1875&31.5, 71.1875&35.0, 71.1875&38.5, 71.1875&42"
".0, 71.1875&45.5, 71.1875&49.0, 71.1875&52.5, 71.1875&56.0, 71.1875&59.5, 71.1875&63.0, 71.1875&66.5, 71.1875&70.0, 71.1875&73.5, 71.1875&77.0, 71.1875&80."
"5, 71.1875&84.0, 71.1875&87.5, 71.1875&91.0, 71.1875&94.5, 71.1875&98.0, 71.1875&101.5, 71.1875&105.0, 71.1875&108.5, 71.1875&112.0, 71.1875&115.5, 71.1875"
"&119.0, 71.1875&122.5, 71.1875&126.0, 71.1875&129.5, 71.1875&133.0, 71.1875&136.5, 71.1875&140.0, 71.1875&143.5, 71.1875&147.0, 71.1875&150.5, 71.1875&154."
"0, 71.1875&157.5, 71.1875&161.0, 71.1875&164.5, 71.1875&168.0, 71.1875&171.5, 71.1875&175.0, 75.375&0.0, 75.375&3.5, 75.375&7.0, 75.375&10.5, 75.375&14.0, "
"75.375&17.5, 75.375&21.0, 75.375&24.5, 75.375&28.0, 75.375&31.5, 75.375&35.0, 75.375&38.5, 75.375&42.0, 75.375&45.5, 75.375&49.0, 75.375&52.5, 75.375&56.0,"
" 75.375&59.5, 75.375&63.0, 75.375&66.5, 75.375&70.0, 75.375&73.5, 75.375&77.0, 75.375&80.5, 75.375&84.0, 75.375&87.5, 75.375&91.0, 75.375&94.5, 75.375&98.0"
", 75.375&101.5, 75.375&105.0, 75.375&108.5, 75.375&112.0, 75.375&115.5, 75.375&119.0, 75.375&122.5, 75.375&126.0, 75.375&129.5, 75.375&133.0, 75.375&136.5,"
" 75.375&140.0, 75.375&143.5, 75.375&147.0, 75.375&150.5, 75.375&154.0, 75.375&157.5, 75.375&161.0, 75.375&164.5, 75.375&168.0, 75.375&171.5, 75.375&175.0, "
"79.5625&0.0, 79.5625&3.5, 79.5625&7.0, 79.5625&10.5, 79.5625&14.0, 79.5625&17.5, 79.5625&21.0, 79.5625&24.5, 79.5625&28.0, 79.5625&31.5, 79.5625&35.0, 79.5"
"625&38.5, 79.5625&42.0, 79.5625&45.5, 79.5625&49.0, 79.5625&52.5, 79.5625&56.0, 79.5625&59.5, 79.5625&63.0, 79.5625&66.5, 79.5625&70.0, 79.5625&73.5, 79.56"
"25&77.0, 79.5625&80.5, 79.5625&84.0, 79.5625&87.5, 79.5625&91.0, 79.5625&94.5, 79.5625&98.0, 79.5625&101.5, 79.5625&105.0, 79.5625&108.5, 79.5625&112.0, 79"
".5625&115.5, 79.5625&119.0, 79.5625&122.5, 79.5625&126.0, 79.5625&129.5, 79.5625&133.0, 79.5625&136.5, 79.5625&140.0, 79.5625&143.5, 79.5625&147.0, 79.5625"
"&150.5, 79.5625&154.0, 79.5625&157.5, 79.5625&161.0, 79.5625&164.5, 79.5625&168.0, 79.5625&171.5, 79.5625&175.0, 83.75&0.0, 83.75&3.5, 83.75&7.0, 83.75&10."
"5, 83.75&14.0, 83.75&17.5, 83.75&21.0, 83.75&24.5, 83.75&28.0, 83.75&31.5, 83.75&35.0, 83.75&38.5, 83.75&42.0, 83.75&45.5, 83.75&49.0, 83.75&52.5, 83.75&56"
".0, 83.75&59.5, 83.75&63.0, 83.75&66.5, 83.75&70.0, 83.75&73.5, 83.75&77.0, 83.75&80.5, 83.75&84.0, 83.75&87.5, 83.75&91.0, 83.75&94.5, 83.75&98.0, 83.75&1"
"01.5, 83.75&105.0, 83.75&108.5, 83.75&112.0, 83.75&115.5, 83.75&119.0, 83.75&122.5, 83.75&126.0, 83.75&129.5, 83.75&133.0, 83.75&136.5, 83.75&140.0, 83.75&"
"143.5, 83.75&147.0, 83.75&150.5, 83.75&154.0, 83.75&157.5, 83.75&161.0, 83.75&164.5, 83.75&168.0, 83.75&171.5, 83.75&175.0, 87.9375&0.0, 87.9375&3.5, 87.93"
"75&7.0, 87.9375&10.5, 87.9375&14.0, 87.9375&17.5, 87.9375&21.0, 87.9375&24.5, 87.9375&28.0, 87.9375&31.5, 87.9375&35.0, 87.9375&38.5, 87.9375&42.0, 87.9375"
"&45.5, 87.9375&49.0, 87.9375&52.5, 87.9375&56.0, 87.9375&59.5, 87.9375&63.0, 87.9375&66.5, 87.9375&70.0, 87.9375&73.5, 87.9375&77.0, 87.9375&80.5, 87.9375&"
"84.0, 87.9375&87.5, 87.9375&91.0, 87.9375&94.5, 87.9375&98.0, 87.9375&101.5, 87.9375&105.0, 87.9375&108.5, 87.9375&112.0, 87.9375&115.5, 87.9375&119.0, 87."
"9375&122.5, 87.9375&126.0, 87.9375&129.5, 87.9375&133.0, 87.9375&136.5, 87.9375&140.0, 87.9375&143.5, 87.9375&147.0, 87.9375&150.5, 87.9375&154.0, 87.9375&"
"157.5, 87.9375&161.0, 87.9375&164.5, 87.9375&168.0, 87.9375&171.5, 87.9375&175.0, 92.125&0.0, 92.125&3.5, 92.125&7.0, 92.125&10.5, 92.125&14.0, 92.125&17.5"
", 92.125&21.0, 92.125&24.5, 92.125&28.0, 92.125&31.5, 92.125&35.0, 92.125&38.5, 92.125&42.0, 92.125&45.5, 92.125&49.0, 92.125&52.5, 92.125&56.0, 92.125&59."
"5, 92.125&63.0, 92.125&66.5, 92.125&70.0, 92.125&73.5, 92.125&77.0, 92.125&80.5, 92.125&84.0, 92.125&87.5, 92.125&91.0, 92.125&94.5, 92.125&98.0, 92.125&10"
"1.5, 92.125&105.0, 92.125&108.5, 92.125&112.0, 92.125&115.5, 92.125&119.0, 92.125&122.5, 92.125&126.0, 92.125&129.5, 92.125&133.0, 92.125&136.5, 92.125&140"
".0, 92.125&143.5, 92.125&147.0, 92.125&150.5, 92.125&154.0, 92.125&157.5, 92.125&161.0, 92.125&164.5, 92.125&168.0, 92.125&171.5, 92.125&175.0, 96.3125&0.0"
", 96.3125&3.5, 96.3125&7.0, 96.3125&10.5, 96.3125&14.0, 96.3125&17.5, 96.3125&21.0, 96.3125&24.5, 96.3125&28.0, 96.3125&31.5, 96.3125&35.0, 96.3125&38.5, 9"
"6.3125&42.0, 96.3125&45.5, 96.3125&49.0, 96.3125&52.5, 96.3125&56.0, 96.3125&59.5, 96.3125&63.0, 96.3125&66.5, 96.3125&70.0, 96.3125&73.5, 96.3125&77.0, 96"
".3125&80.5, 96.3125&84.0, 96.3125&87.5, 96.3125&91.0, 96.3125&94.5, 96.3125&98.0, 96.3125&101.5, 96.3125&105.0, 96.3125&108.5, 96.3125&112.0, 96.3125&115.5"
", 96.3125&119.0, 96.3125&122.5, 96.3125&126.0, 96.3125&129.5, 96.3125&133.0, 96.3125&136.5, 96.3125&140.0, 96.3125&143.5, 96.3125&147.0, 96.3125&150.5, 96."
"3125&154.0, 96.3125&157.5, 96.3125&161.0, 96.3125&164.5, 96.3125&168.0, 96.3125&171.5, 96.3125&175.0, 100.5&0.0, 100.5&3.5, 100.5&7.0, 100.5&10.5, 100.5&14"
".0, 100.5&17.5, 100.5&21.0, 100.5&24.5, 100.5&28.0, 100.5&31.5, 100.5&35.0, 100.5&38.5, 100.5&42.0, 100.5&45.5, 100.5&49.0, 100.5&52.5, 100.5&56.0, 100.5&5"
"9.5, 100.5&63.0, 100.5&66.5, 100.5&70.0, 100.5&73.5, 100.5&77.0, 100.5&80.5, 100.5&84.0, 100.5&87.5, 100.5&91.0, 100.5&94.5, 100.5&98.0, 100.5&101.5, 100.5"
"&105.0, 100.5&108.5, 100.5&112.0, 100.5&115.5, 100.5&119.0, 100.5&122.5, 100.5&126.0, 100.5&129.5, 100.5&133.0, 100.5&136.5, 100.5&140.0, 100.5&143.5, 100."
"5&147.0, 100.5&150.5, 100.5&154.0, 100.5&157.5, 100.5&161.0, 100.5&164.5, 100.5&168.0, 100.5&171.5, 100.5&175.0, 104.6875&0.0, 104.6875&3.5, 104.6875&7.0, "
"104.6875&10.5, 104.6875&14.0, 104.6875&17.5, 104.6875&21.0, 104.6875&24.5, 104.6875&28.0, 104.6875&31.5, 104.6875&35.0, 104.6875&38.5, 104.6875&42.0, 104.6"
"875&45.5, 104.6875&49.0, 104.6875&52.5, 104.6875&56.0, 104.6875&59.5, 104.6875&63.0, 104.6875&66.5, 104.6875&70.0, 104.6875&73.5, 104.6875&77.0, 104.6875&8"
"0.5, 104.6875&84.0, 104.6875&87.5, 104.6875&91.0, 104.6875&94.5, 104.6875&98.0, 104.6875&101.5, 104.6875&105.0, 104.6875&108.5, 104.6875&112.0, 104.6875&11"
"5.5, 104.6875&119.0, 104.6875&122.5, 104.6875&126.0, 104.6875&129.5, 104.6875&133.0, 104.6875&136.5, 104.6875&140.0, 104.6875&143.5, 104.6875&147.0, 104.68"
"75&150.5, 104.6875&154.0, 104.6875&157.5, 104.6875&161.0, 104.6875&164.5, 104.6875&168.0, 104.6875&171.5, 104.6875&175.0, 108.875&0.0, 108.875&3.5, 108.875"
"&7.0, 108.875&10.5, 108.875&14.0, 108.875&17.5, 108.875&21.0, 108.875&24.5, 108.875&28.0, 108.875&31.5, 108.875&35.0, 108.875&38.5, 108.875&42.0, 108.875&4"
"5.5, 108.875&49.0, 108.875&52.5, 108.875&56.0, 108.875&59.5, 108.875&63.0, 108.875&66.5, 108.875&70.0, 108.875&73.5, 108.875&77.0, 108.875&80.5, 108.875&84"
".0, 108.875&87.5, 108.875&91.0, 108.875&94.5, 108.875&98.0, 108.875&101.5, 108.875&105.0, 108.875&108.5, 108.875&112.0, 108.875&115.5, 108.875&119.0, 108.8"
"75&122.5, 108.875&126.0, 108.875&129.5, 108.875&133.0, 108.875&136.5, 108.875&140.0, 108.875&143.5, 108.875&147.0, 108.875&150.5, 108.875&154.0, 108.875&15"
"7.5, 108.875&161.0, 108.875&164.5, 108.875&168.0, 108.875&171.5, 108.875&175.0, 113.0625&0.0, 113.0625&3.5, 113.0625&7.0, 113.0625&10.5, 113.0625&14.0, 113"
".0625&17.5, 113.0625&21.0, 113.0625&24.5, 113.0625&28.0, 113.0625&31.5, 113.0625&35.0, 113.0625&38.5, 113.0625&42.0, 113.0625&45.5, 113.0625&49.0, 113.0625"
"&52.5, 113.0625&56.0, 113.0625&59.5, 113.0625&63.0, 113.0625&66.5, 113.0625&70.0, 113.0625&73.5, 113.0625&77.0, 113.0625&80.5, 113.0625&84.0, 113.0625&87.5"
", 113.0625&91.0, 113.0625&94.5, 113.0625&98.0, 113.0625&101.5, 113.0625&105.0, 113.0625&108.5, 113.0625&112.0, 113.0625&115.5, 113.0625&119.0, 113.0625&122"
".5, 113.0625&126.0, 113.0625&129.5, 113.0625&133.0, 113.0625&136.5, 113.0625&140.0, 113.0625&143.5, 113.0625&147.0, 113.0625&150.5, 113.0625&154.0, 113.062"
"5&157.5, 113.0625&161.0, 113.0625&164.5, 113.0625&168.0, 113.0625&171.5, 113.0625&175.0, 117.25&0.0, 117.25&3.5, 117.25&7.0, 117.25&10.5, 117.25&14.0, 117."
"25&17.5, 117.25&21.0, 117.25&24.5, 117.25&28.0, 117.25&31.5, 117.25&35.0, 117.25&38.5, 117.25&42.0, 117.25&45.5, 117.25&49.0, 117.25&52.5, 117.25&56.0, 117"
".25&59.5, 117.25&63.0, 117.25&66.5, 117.25&70.0, 117.25&73.5, 117.25&77.0, 117.25&80.5, 117.25&84.0, 117.25&87.5, 117.25&91.0, 117.25&94.5, 117.25&98.0, 11"
"7.25&101.5, 117.25&105.0, 117.25&108.5, 117.25&112.0, 117.25&115.5, 117.25&119.0, 117.25&122.5, 117.25&126.0, 117.25&129.5, 117.25&133.0, 117.25&136.5, 117"
".25&140.0, 117.25&143.5, 117.25&147.0, 117.25&150.5, 117.25&154.0, 117.25&157.5, 117.25&161.0, 117.25&164.5, 117.25&168.0, 117.25&171.5, 117.25&175.0, 121."
"4375&0.0, 121.4375&3.5, 121.4375&7.0, 121.4375&10.5, 121.4375&14.0, 121.4375&17.5, 121.4375&21.0, 121.4375&24.5, 121.4375&28.0, 121.4375&31.5, 121.4375&35."
"0, 121.4375&38.5, 121.4375&42.0, 121.4375&45.5, 121.4375&49.0, 121.4375&52.5, 121.4375&56.0, 121.4375&59.5, 121.4375&63.0, 121.4375&66.5, 121.4375&70.0, 12"
"1.4375&73.5, 121.4375&77.0, 121.4375&80.5, 121.4375&84.0, 121.4375&87.5, 121.4375&91.0, 121.4375&94.5, 121.4375&98.0, 121.4375&101.5, 121.4375&105.0, 121.4"
"375&108.5, 121.4375&112.0, 121.4375&115.5, 121.4375&119.0, 121.4375&122.5, 121.4375&126.0, 121.4375&129.5, 121.4375&133.0, 121.4375&136.5, 121.4375&140.0, "
"121.4375&143.5, 121.4375&147.0, 121.4375&150.5, 121.4375&154.0, 121.4375&157.5, 121.4375&161.0, 121.4375&164.5, 121.4375&168.0, 121.4375&171.5, 121.4375&17"
"5.0, 125.625&0.0, 125.625&3.5, 125.625&7.0, 125.625&10.5, 125.625&14.0, 125.625&17.5, 125.625&21.0, 125.625&24.5, 125.625&28.0, 125.625&31.5, 125.625&35.0,"
" 125.625&38.5, 125.625&42.0, 125.625&45.5, 125.625&49.0, 125.625&52.5, 125.625&56.0, 125.625&59.5, 125.625&63.0, 125.625&66.5, 125.625&70.0, 125.625&73.5, "
"125.625&77.0, 125.625&80.5, 125.625&84.0, 125.625&87.5, 125.625&91.0, 125.625&94.5, 125.625&98.0, 125.625&101.5, 125.625&105.0, 125.625&108.5, 125.625&112."
"0, 125.625&115.5, 125.625&119.0, 125.625&122.5, 125.625&126.0, 125.625&129.5, 125.625&133.0, 125.625&136.5, 125.625&140.0, 125.625&143.5, 125.625&147.0, 12"
"5.625&150.5, 125.625&154.0, 125.625&157.5, 125.625&161.0, 125.625&164.5, 125.625&168.0, 125.625&171.5, 125.625&175.0, 129.8125&0.0, 129.8125&3.5, 129.8125&"
"7.0, 129.8125&10.5, 129.8125&14.0, 129.8125&17.5, 129.8125&21.0, 129.8125&24.5, 129.8125&28.0, 129.8125&31.5, 129.8125&35.0, 129.8125&38.5, 129.8125&42.0, "
"129.8125&45.5, 129.8125&49.0, 129.8125&52.5, 129.8125&56.0, 129.8125&59.5, 129.8125&63.0, 129.8125&66.5, 129.8125&70.0, 129.8125&73.5, 129.8125&77.0, 129.8"
"125&80.5, 129.8125&84.0, 129.8125&87.5, 129.8125&91.0, 129.8125&94.5, 129.8125&98.0, 129.8125&101.5, 129.8125&105.0, 129.8125&108.5, 129.8125&112.0, 129.81"
"25&115.5, 129.8125&119.0, 129.8125&122.5, 129.8125&126.0, 129.8125&129.5, 129.8125&133.0, 129.8125&136.5, 129.8125&140.0, 129.8125&143.5, 129.8125&147.0, 1"
"29.8125&150.5, 129.8125&154.0, 129.8125&157.5, 129.8125&161.0, 129.8125&164.5, 129.8125&168.0, 129.8125&171.5, 129.8125&175.0, 134.0&0.0, 134.0&3.5, 134.0&"
"7.0, 134.0&10.5, 134.0&14.0, 134.0&17.5, 134.0&21.0, 134.0&24.5, 134.0&28.0, 134.0&31.5, 134.0&35.0, 134.0&38.5, 134.0&42.0, 134.0&45.5, 134.0&49.0, 134.0&"
"52.5, 134.0&56.0, 134.0&59.5, 134.0&63.0, 134.0&66.5, 134.0&70.0, 134.0&73.5, 134.0&77.0, 134.0&80.5, 134.0&84.0, 134.0&87.5, 134.0&91.0, 134.0&94.5, 134.0"
"&98.0, 134.0&101.5, 134.0&105.0, 134.0&108.5, 134.0&112.0, 134.0&115.5, 134.0&119.0, 134.0&122.5, 134.0&126.0, 134.0&129.5, 134.0&133.0, 134.0&136.5, 134.0"
"&140.0, 134.0&143.5, 134.0&147.0, 134.0&150.5, 134.0&154.0, 134.0&157.5, 134.0&161.0, 134.0&164.5, 134.0&168.0, 134.0&171.5, 134.0&175.0, 138.1875&0.0, 138"
".1875&3.5, 138.1875&7.0, 138.1875&10.5, 138.1875&14.0, 138.1875&17.5, 138.1875&21.0, 138.1875&24.5, 138.1875&28.0, 138.1875&31.5, 138.1875&35.0, 138.1875&3"
"8.5, 138.1875&42.0, 138.1875&45.5, 138.1875&49.0, 138.1875&52.5, 138.1875&56.0, 138.1875&59.5, 138.1875&63.0, 138.1875&66.5, 138.1875&70.0, 138.1875&73.5, "
"138.1875&77.0, 138.1875&80.5, 138.1875&84.0, 138.1875&87.5, 138.1875&91.0, 138.1875&94.5, 138.1875&98.0, 138.1875&101.5, 138.1875&105.0, 138.1875&108.5, 13"
"8.1875&112.0, 138.1875&115.5, 138.1875&119.0, 138.1875&122.5, 138.1875&126.0, 138.1875&129.5, 138.1875&133.0, 138.1875&136.5, 138.1875&140.0, 138.1875&143."
"5, 138.1875&147.0, 138.1875&150.5, 138.1875&154.0, 138.1875&157.5, 138.1875&161.0, 138.1875&164.5, 138.1875&168.0, 138.1875&171.5, 138.1875&175.0, 142.375&"
"0.0, 142.375&3.5, 142.375&7.0, 142.375&10.5, 142.375&14.0, 142.375&17.5, 142.375&21.0, 142.375&24.5, 142.375&28.0, 142.375&31.5, 142.375&35.0, 142.375&38.5"
", 142.375&42.0, 142.375&45.5, 142.375&49.0, 142.375&52.5, 142.375&56.0, 142.375&59.5, 142.375&63.0, 142.375&66.5, 142.375&70.0, 142.375&73.5, 142.375&77.0,"
" 142.375&80.5, 142.375&84.0, 142.375&87.5, 142.375&91.0, 142.375&94.5, 142.375&98.0, 142.375&101.5, 142.375&105.0, 142.375&108.5, 142.375&112.0, 142.375&11"
"5.5, 142.375&119.0, 142.375&122.5, 142.375&126.0, 142.375&129.5, 142.375&133.0, 142.375&136.5, 142.375&140.0, 142.375&143.5, 142.375&147.0, 142.375&150.5, "
"142.375&154.0, 142.375&157.5, 142.375&161.0, 142.375&164.5, 142.375&168.0, 142.375&171.5, 142.375&175.0, 146.5625&0.0, 146.5625&3.5, 146.5625&7.0, 146.5625"
"&10.5, 146.5625&14.0, 146.5625&17.5, 146.5625&21.0, 146.5625&24.5, 146.5625&28.0, 146.5625&31.5, 146.5625&35.0, 146.5625&38.5, 146.5625&42.0, 146.5625&45.5"
", 146.5625&49.0, 146.5625&52.5, 146.5625&56.0, 146.5625&59.5, 146.5625&63.0, 146.5625&66.5, 146.5625&70.0, 146.5625&73.5, 146.5625&77.0, 146.5625&80.5, 146"
".5625&84.0, 146.5625&87.5, 146.5625&91.0, 146.5625&94.5, 146.5625&98.0, 146.5625&101.5, 146.5625&105.0, 146.5625&108.5, 146.5625&112.0, 146.5625&115.5, 146"
".5625&119.0, 146.5625&122.5, 146.5625&126.0, 146.5625&129.5, 146.5625&133.0, 146.5625&136.5, 146.5625&140.0, 146.5625&143.5, 146.5625&147.0, 146.5625&150.5"
", 146.5625&154.0, 146.5625&157.5, 146.5625&161.0, 146.5625&164.5, 146.5625&168.0, 146.5625&171.5, 146.5625&175.0, 150.75&0.0, 150.75&3.5, 150.75&7.0, 150.7"
"5&10.5, 150.75&14.0, 150.75&17.5, 150.75&21.0, 150.75&24.5, 150.75&28.0, 150.75&31.5, 150.75&35.0, 150.75&38.5, 150.75&42.0, 150.75&45.5, 150.75&49.0, 150."
"75&52.5, 150.75&56.0, 150.75&59.5, 150.75&63.0, 150.75&66.5, 150.75&70.0, 150.75&73.5, 150.75&77.0, 150.75&80.5, 150.75&84.0, 150.75&87.5, 150.75&91.0, 150"
".75&94.5, 150.75&98.0, 150.75&101.5, 150.75&105.0, 150.75&108.5, 150.75&112.0, 150.75&115.5, 150.75&119.0, 150.75&122.5, 150.75&126.0, 150.75&129.5, 150.75"
"&133.0, 150.75&136.5, 150.75&140.0, 150.75&143.5, 150.75&147.0, 150.75&150.5, 150.75&154.0, 150.75&157.5, 150.75&161.0, 150.75&164.5, 150.75&168.0, 150.75&"
"171.5, 150.75&175.0, 154.9375&0.0, 154.9375&3.5, 154.9375&7.0, 154.9375&10.5, 154.9375&14.0, 154.9375&17.5, 154.9375&21.0, 154.9375&24.5, 154.9375&28.0, 15"
"4.9375&31.5, 154.9375&35.0, 154.9375&38.5, 154.9375&42.0, 154.9375&45.5, 154.9375&49.0, 154.9375&52.5, 154.9375&56.0, 154.9375&59.5, 154.9375&63.0, 154.937"
"5&66.5, 154.9375&70.0, 154.9375&73.5, 154.9375&77.0, 154.9375&80.5, 154.9375&84.0, 154.9375&87.5, 154.9375&91.0, 154.9375&94.5, 154.9375&98.0, 154.9375&101"
".5, 154.9375&105.0, 154.9375&108.5, 154.9375&112.0, 154.9375&115.5, 154.9375&119.0, 154.9375&122.5, 154.9375&126.0, 154.9375&129.5, 154.9375&133.0, 154.937"
"5&136.5, 154.9375&140.0, 154.9375&143.5, 154.9375&147.0, 154.9375&150.5, 154.9375&154.0, 154.9375&157.5, 154.9375&161.0, 154.9375&164.5, 154.9375&168.0, 15"
"4.9375&171.5, 154.9375&175.0, 159.125&0.0, 159.125&3.5, 159.125&7.0, 159.125&10.5, 159.125&14.0, 159.125&17.5, 159.125&21.0, 159.125&24.5, 159.125&28.0, 15"
"9.125&31.5, 159.125&35.0, 159.125&38.5, 159.125&42.0, 159.125&45.5, 159.125&49.0, 159.125&52.5, 159.125&56.0, 159.125&59.5, 159.125&63.0, 159.125&66.5, 159"
".125&70.0, 159.125&73.5, 159.125&77.0, 159.125&80.5, 159.125&84.0, 159.125&87.5, 159.125&91.0, 159.125&94.5, 159.125&98.0, 159.125&101.5, 159.125&105.0, 15"
"9.125&108.5, 159.125&112.0, 159.125&115.5, 159.125&119.0, 159.125&122.5, 159.125&126.0, 159.125&129.5, 159.125&133.0, 159.125&136.5, 159.125&140.0, 159.125"
"&143.5, 159.125&147.0, 159.125&150.5, 159.125&154.0, 159.125&157.5, 159.125&161.0, 159.125&164.5, 159.125&168.0, 159.125&171.5, 159.125&175.0, 163.3125&0.0"
", 163.3125&3.5, 163.3125&7.0, 163.3125&10.5, 163.3125&14.0, 163.3125&17.5, 163.3125&21.0, 163.3125&24.5, 163.3125&28.0, 163.3125&31.5, 163.3125&35.0, 163.3"
"125&38.5, 163.3125&42.0, 163.3125&45.5, 163.3125&49.0, 163.3125&52.5, 163.3125&56.0, 163.3125&59.5, 163.3125&63.0, 163.3125&66.5, 163.3125&70.0, 163.3125&7"
"3.5, 163.3125&77.0, 163.3125&80.5, 163.3125&84.0, 163.3125&87.5, 163.3125&91.0, 163.3125&94.5, 163.3125&98.0, 163.3125&101.5, 163.3125&105.0, 163.3125&108."
"5, 163.3125&112.0, 163.3125&115.5, 163.3125&119.0, 163.3125&122.5, 163.3125&126.0, 163.3125&129.5, 163.3125&133.0, 163.3125&136.5, 163.3125&140.0, 163.3125"
"&143.5, 163.3125&147.0, 163.3125&150.5, 163.3125&154.0, 163.3125&157.5, 163.3125&161.0, 163.3125&164.5, 163.3125&168.0, 163.3125&171.5, 163.3125&175.0, 167"
".5&0.0, 167.5&3.5, 167.5&7.0, 167.5&10.5, 167.5&14.0, 167.5&17.5, 167.5&21.0, 167.5&24.5, 167.5&28.0, 167.5&31.5, 167.5&35.0, 167.5&38.5, 167.5&42.0, 167.5"
"&45.5, 167.5&49.0, 167.5&52.5, 167.5&56.0, 167.5&59.5, 167.5&63.0, 167.5&66.5, 167.5&70.0, 167.5&73.5, 167.5&77.0, 167.5&80.5, 167.5&84.0, 167.5&87.5, 167."
"5&91.0, 167.5&94.5, 167.5&98.0, 167.5&101.5, 167.5&105.0, 167.5&108.5, 167.5&112.0, 167.5&115.5, 167.5&119.0, 167.5&122.5, 167.5&126.0, 167.5&129.5, 167.5&"
"133.0, 167.5&136.5, 167.5&140.0, 167.5&143.5, 167.5&147.0, 167.5&150.5, 167.5&154.0, 167.5&157.5, 167.5&161.0, 167.5&164.5, 167.5&168.0, 167.5&171.5, 167.5"
"&175.0, 171.6875&0.0, 171.6875&3.5, 171.6875&7.0, 171.6875&10.5, 171.6875&14.0, 171.6875&17.5, 171.6875&21.0, 171.6875&24.5, 171.6875&28.0, 171.6875&31.5, "
"171.6875&35.0, 171.6875&38.5, 171.6875&42.0, 171.6875&45.5, 171.6875&49.0, 171.6875&52.5, 171.6875&56.0, 171.6875&59.5, 171.6875&63.0, 171.6875&66.5, 171.6"
"875&70.0, 171.6875&73.5, 171.6875&77.0, 171.6875&80.5, 171.6875&84.0, 171.6875&87.5, 171.6875&91.0, 171.6875&94.5, 171.6875&98.0, 171.6875&101.5, 171.6875&"
"105.0, 171.6875&108.5, 171.6875&112.0, 171.6875&115.5, 171.6875&119.0, 171.6875&122.5, 171.6875&126.0, 171.6875&129.5, 171.6875&133.0, 171.6875&136.5, 171."
"6875&140.0, 171.6875&143.5, 171.6875&147.0, 171.6875&150.5, 171.6875&154.0, 171.6875&157.5, 171.6875&161.0, 171.6875&164.5, 171.6875&168.0, 171.6875&171.5,"
" 171.6875&175.0, 175.875&0.0, 175.875&3.5, 175.875&7.0, 175.875&10.5, 175.875&14.0, 175.875&17.5, 175.875&21.0, 175.875&24.5, 175.875&28.0, 175.875&31.5, 1"
"75.875&35.0, 175.875&38.5, 175.875&42.0, 175.875&45.5, 175.875&49.0, 175.875&52.5, 175.875&56.0, 175.875&59.5, 175.875&63.0, 175.875&66.5, 175.875&70.0, 17"
"5.875&73.5, 175.875&77.0, 175.875&80.5, 175.875&84.0, 175.875&87.5, 175.875&91.0, 175.875&94.5, 175.875&98.0, 175.875&101.5, 175.875&105.0, 175.875&108.5, "
"175.875&112.0, 175.875&115.5, 175.875&119.0, 175.875&122.5, 175.875&126.0, 175.875&129.5, 175.875&133.0, 175.875&136.5, 175.875&140.0, 175.875&143.5, 175.8"
"75&147.0, 175.875&150.5, 175.875&154.0, 175.875&157.5, 175.875&161.0, 175.875&164.5, 175.875&168.0, 175.875&171.5, 175.875&175.0, 180.0625&0.0, 180.0625&3."
"5, 180.0625&7.0, 180.0625&10.5, 180.0625&14.0, 180.0625&17.5, 180.0625&21.0, 180.0625&24.5, 180.0625&28.0, 180.0625&31.5, 180.0625&35.0, 180.0625&38.5, 180"
".0625&42.0, 180.0625&45.5, 180.0625&49.0, 180.0625&52.5, 180.0625&56.0, 180.0625&59.5, 180.0625&63.0, 180.0625&66.5, 180.0625&70.0, 180.0625&73.5, 180.0625"
"&77.0, 180.0625&80.5, 180.0625&84.0, 180.0625&87.5, 180.0625&91.0, 180.0625&94.5, 180.0625&98.0, 180.0625&101.5, 180.0625&105.0, 180.0625&108.5, 180.0625&1"
"12.0, 180.0625&115.5, 180.0625&119.0, 180.0625&122.5, 180.0625&126.0, 180.0625&129.5, 180.0625&133.0, 180.0625&136.5, 180.0625&140.0, 180.0625&143.5, 180.0"
"625&147.0, 180.0625&150.5, 180.0625&154.0, 180.0625&157.5, 180.0625&161.0, 180.0625&164.5, 180.0625&168.0, 180.0625&171.5, 180.0625&175.0, 184.25&0.0, 184."
"25&3.5, 184.25&7.0, 184.25&10.5, 184.25&14.0, 184.25&17.5, 184.25&21.0, 184.25&24.5, 184.25&28.0, 184.25&31.5, 184.25&35.0, 184.25&38.5, 184.25&42.0, 184.2"
"5&45.5, 184.25&49.0, 184.25&52.5, 184.25&56.0, 184.25&59.5, 184.25&63.0, 184.25&66.5, 184.25&70.0, 184.25&73.5, 184.25&77.0, 184.25&80.5, 184.25&84.0, 184."
"25&87.5, 184.25&91.0, 184.25&94.5, 184.25&98.0, 184.25&101.5, 184.25&105.0, 184.25&108.5, 184.25&112.0, 184.25&115.5, 184.25&119.0, 184.25&122.5, 184.25&12"
"6.0, 184.25&129.5, 184.25&133.0, 184.25&136.5, 184.25&140.0, 184.25&143.5, 184.25&147.0, 184.25&150.5, 184.25&154.0, 184.25&157.5, 184.25&161.0, 184.25&164"
".5, 184.25&168.0, 184.25&171.5, 184.25&175.0, 188.4375&0.0, 188.4375&3.5, 188.4375&7.0, 188.4375&10.5, 188.4375&14.0, 188.4375&17.5, 188.4375&21.0, 188.437"
"5&24.5, 188.4375&28.0, 188.4375&31.5, 188.4375&35.0, 188.4375&38.5, 188.4375&42.0, 188.4375&45.5, 188.4375&49.0, 188.4375&52.5, 188.4375&56.0, 188.4375&59."
"5, 188.4375&63.0, 188.4375&66.5, 188.4375&70.0, 188.4375&73.5, 188.4375&77.0, 188.4375&80.5, 188.4375&84.0, 188.4375&87.5, 188.4375&91.0, 188.4375&94.5, 18"
"8.4375&98.0, 188.4375&101.5, 188.4375&105.0, 188.4375&108.5, 188.4375&112.0, 188.4375&115.5, 188.4375&119.0, 188.4375&122.5, 188.4375&126.0, 188.4375&129.5"
", 188.4375&133.0, 188.4375&136.5, 188.4375&140.0, 188.4375&143.5, 188.4375&147.0, 188.4375&150.5, 188.4375&154.0, 188.4375&157.5, 188.4375&161.0, 188.4375&"
"164.5, 188.4375&168.0, 188.4375&171.5, 188.4375&175.0, 192.625&0.0, 192.625&3.5, 192.625&7.0, 192.625&10.5, 192.625&14.0, 192.625&17.5, 192.625&21.0, 192.6"
"25&24.5, 192.625&28.0, 192.625&31.5, 192.625&35.0, 192.625&38.5, 192.625&42.0, 192.625&45.5, 192.625&49.0, 192.625&52.5, 192.625&56.0, 192.625&59.5, 192.62"
"5&63.0, 192.625&66.5, 192.625&70.0, 192.625&73.5, 192.625&77.0, 192.625&80.5, 192.625&84.0, 192.625&87.5, 192.625&91.0, 192.625&94.5, 192.625&98.0, 192.625"
"&101.5, 192.625&105.0, 192.625&108.5, 192.625&112.0, 192.625&115.5, 192.625&119.0, 192.625&122.5, 192.625&126.0, 192.625&129.5, 192.625&133.0, 192.625&136."
"5, 192.625&140.0, 192.625&143.5, 192.625&147.0, 192.625&150.5, 192.625&154.0, 192.625&157.5, 192.625&161.0, 192.625&164.5, 192.625&168.0, 192.625&171.5, 19"
"2.625&175.0, 196.8125&0.0, 196.8125&3.5, 196.8125&7.0, 196.8125&10.5, 196.8125&14.0, 196.8125&17.5, 196.8125&21.0, 196.8125&24.5, 196.8125&28.0, 196.8125&3"
"1.5, 196.8125&35.0, 196.8125&38.5, 196.8125&42.0, 196.8125&45.5, 196.8125&49.0, 196.8125&52.5, 196.8125&56.0, 196.8125&59.5, 196.8125&63.0, 196.8125&66.5, "
"196.8125&70.0, 196.8125&73.5, 196.8125&77.0, 196.8125&80.5, 196.8125&84.0, 196.8125&87.5, 196.8125&91.0, 196.8125&94.5, 196.8125&98.0, 196.8125&101.5, 196."
"8125&105.0, 196.8125&108.5, 196.8125&112.0, 196.8125&115.5, 196.8125&119.0, 196.8125&122.5, 196.8125&126.0, 196.8125&129.5, 196.8125&133.0, 196.8125&136.5,"
" 196.8125&140.0, 196.8125&143.5, 196.8125&147.0, 196.8125&150.5, 196.8125&154.0, 196.8125&157.5, 196.8125&161.0, 196.8125&164.5, 196.8125&168.0, 196.8125&1"
"71.5, 196.8125&175.0, 201.0&0.0, 201.0&3.5, 201.0&7.0, 201.0&10.5, 201.0&14.0, 201.0&17.5, 201.0&21.0, 201.0&24.5, 201.0&28.0, 201.0&31.5, 201.0&35.0, 201."
"0&38.5, 201.0&42.0, 201.0&45.5, 201.0&49.0, 201.0&52.5, 201.0&56.0, 201.0&59.5, 201.0&63.0, 201.0&66.5, 201.0&70.0, 201.0&73.5, 201.0&77.0, 201.0&80.5, 201"
".0&84.0, 201.0&87.5, 201.0&91.0, 201.0&94.5, 201.0&98.0, 201.0&101.5, 201.0&105.0, 201.0&108.5, 201.0&112.0, 201.0&115.5, 201.0&119.0, 201.0&122.5, 201.0&1"
"26.0, 201.0&129.5, 201.0&133.0, 201.0&136.5, 201.0&140.0, 201.0&143.5, 201.0&147.0, 201.0&150.5, 201.0&154.0, 201.0&157.5, 201.0&161.0, 201.0&164.5, 201.0&"
"168.0, 201.0&171.5, 201.0&175.0) VALUES(?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?"
", ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, "
"?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,"
" ?, ?, ?, ?, ?, ?, ?);";

        // Prepare the SQL statement
        char mtr[20];
        char eng[20];
        int EngTrqSectionslength = sizeof(EngTrqSections) / sizeof(EngTrqSections[0]);
        for(int f=0;f<EngTrqSectionslength;f++){
            if (f==EngTrqSectionslength-1)
                sprintf(eng, "%f", EngTrqSections[f]);
            if (EngTrqSections[f]>EcmsEngTrq){
                sprintf(eng, "%f", EngTrqSections[f-1]);
                break;
            }
        }
        int MtrTrqSectionslength = sizeof(MtrTrqSections) / sizeof(MtrTrqSections[0]);
        for (int d=0;d<MtrTrqSectionslength;d++){
            if (d==MtrTrqSectionslength-1)
                sprintf(mtr, "%f", MtrTrqSections[d]);
            if (MtrTrqSections[d]>EcmsMtrTrq){
                sprintf(mtr, "%f", MtrTrqSections[d-1]);
                break;
                }
        }

        char result[50];  // Adjust the size based on your needs

        // Concatenate the strings
        strcpy(result, mtr);
        strcat(result, "&");
        strcat(result, eng);
        rc = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);
        sqlite3_bind_double(stmt, 0, state[0]);
        sqlite3_bind_double(stmt, 1, state[1]);
        sqlite3_bind_double(stmt, 2, state[2]);
        sqlite3_bind_double(stmt, 3, state[3]);
        sqlite3_bind_double(stmt, 4, state[4]);
        sqlite3_bind_double(stmt, 5, state[5]);
        for (int i=6; i<4954; i++){
            const char* columnName = sqlite3_column_name(stmt, i);
            if (columnName==result){
                reward = (BattSoc - 30) * (90 - BattSoc) / (FuelConsumed + 0.0001);
                sqlite3_bind_double(stmt, i, reward);
            }else{
                sqlite3_bind_double(stmt, i, 0.0);
            }
        }
        mtrTrq[0]=EcmsMtrTrq;
        engTrq[0]=EcmsEngTrq;
    }

    sqlite3_finalize(stmt);
    sqlite3_close(db);
    
}

// int main() {
//     double mtrTrq[1];
//     double engTrq[1];
//     mtrTrq[0]=23;
//     engTrq[0]=23;
//     MtrTrq(51.733521, 52.832177,	268.881458, 269.689214,	1.0, 3.0,	0.274119, 86.388300,	0.018042, 6.856209,	100.803667,-0.059397, 1.2, 48, 90, mtrTrq, engTrq);

//     printf("%f, %f", engTrq[0], mtrTrq[0]);
// // 
// // 
// //     // Print the data (for testing)
// //     // for (int i = 0; i < row; i++) {
// //     //     for (int j = 0; j < MAX_COLS; j++) {
// //     //         printf("%lf ", data[i][j]);
// //     //     }
// //     //     printf("\n");
// //     // }
// // 
//     return 0;
// };
