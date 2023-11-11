#ifndef MTRTRQ_LIB_H_INCLUDED
#define MTRTRQ_LIB_H_INCLUDED

// typedef struct {
//     double MtrTrq;
//     double EngTrq;
// } TorquesBus;


void MtrTrq(double BattSoc, double prevBattSoc, double BattVolt, double prevBattVolt, double Gear, double prevGear, double MtrSpd, double prevMtrSpd, double VehSpd, double prevVehSpd, double WhlTrqCmd, double prevWhlTrqCmd,double FuelConsumed, double EcmsMtrTrq, double EcmsEngTrq, double mtrTrq[], double engTrq[]);

#endif // ADD_LIB_H_INCLUDED