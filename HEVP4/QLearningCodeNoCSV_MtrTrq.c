#include <stdio.h>
#include <stdlib.h>
#include <C:\Users\Fati\Desktop\splitsimulink\HEVP4\HEVP4\sqlite\sqlite3.c>
#include "engtrq_lib.h"

#define MAX_COLS 8  // Assuming there are 8 columns

void MtrTrq(double BattSoc, double BattVolt, double Gear, double MtrSpd, double VehSpd, double WhlTrqCmd, double mtrTrq[], double engTrq[]) {
    double state[6] = {BattSoc, BattVolt, Gear, MtrSpd, VehSpd, WhlTrqCmd};
    sqlite3 *db;
    char *errMessage = 0;
    int rc;
    int c = 0;
    // struct Torques Torque;
    // double MtrTrq = 11.0;  // Variable to store the result
    // double EngTrq = 0.0;  // Variable to store the result
    double PQ_Data[MAX_COLS];
    double result;
    mtrTrq[0] = 10;
    engTrq[0] = 10;
    rc = sqlite3_open("PQ_Table_New.db", &db);
    // if (rc) {
    //     return(5.0);
    // }
    const char *sql = "SELECT * FROM PQ_Table;";
    sqlite3_stmt *stmt;
    rc = sqlite3_prepare_v2(db, sql, -1, &stmt, 0);
    // rc = sqlite3_exec(db, sql, callback, &result, &errMessage);
    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        // return 10.0;
    } 
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        for (int i = 0; i < MAX_COLS; i++) {
            result = sqlite3_column_double(stmt, 0);
            // Process the value as needed
            printf("Column : %f\n", result);
            PQ_Data[i] = sqlite3_column_double(stmt, i);
        }
        // result = sqlite3_column_double(stmt, 0);
        // Process the value as needed
        // printf("Column : %f\n", result);
        if (PQ_Data[3] >= 0 && PQ_Data[5] >= 0) {
            if (PQ_Data[0] * 1.1 < state[0] || PQ_Data[0] * 0.90 > state[0] ||
                PQ_Data[1] * 1.1 < state[1] || PQ_Data[1] * 0.90 > state[1] ||
                PQ_Data[2] != state[2] ||
                PQ_Data[3] * 1.1 < state[3] || PQ_Data[3] * 0.90 > state[3] ||
                PQ_Data[4] * 1.1 < state[4] || PQ_Data[4] * 0.90 > state[4] ||
                PQ_Data[5] * 1.1 < state[5] || PQ_Data[5] * 0.90 > state[5]) {
                c++;
            } else {
                mtrTrq[0] = PQ_Data[6];
                engTrq[0] = PQ_Data[7];
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
                mtrTrq[0] = PQ_Data[6];
                engTrq[0] = PQ_Data[7];
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
                mtrTrq[0] = PQ_Data[6];
                engTrq[0] = PQ_Data[7];
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
                mtrTrq[0] = PQ_Data[6];
                engTrq[0] = PQ_Data[7];
                break;
            }
        }
    }
    // if (c==){
    // double* EngTrq;
    // EngTr = 24.0;
    // }
    // Your code to read rows will go here
    sqlite3_finalize(stmt);
    sqlite3_close(db);

}

int main() {
    double mtrTrq[1]; 
    double engTrq[1];

    MtrTrq(52.877765,	269.666438,	1.0,	23.560563,	2.245955,	-220.033752, mtrTrq, engTrq);
    // MtrTrq(51.733521,	268.881458,	1.0,	0.274119,	0.018042,	100.803667, mtrTrq, engTrq);

    printf("%f, %f",  mtrTrq[0], engTrq[0]);
// 
// 
//     // Print the data (for testing)
//     // for (int i = 0; i < row; i++) {
//     //     for (int j = 0; j < MAX_COLS; j++) {
//     //         printf("%lf ", data[i][j]);
//     //     }
//     //     printf("\n");
//     // }
// 
    return 0;
};

