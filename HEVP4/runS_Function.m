% Create a Simulink.Bus object for the "Torques" struct
% TorquesBus = Simulink.Bus;
% TorquesBus.Elements = Simulink.BusElement;
% TorquesBus.Elements(1) = Simulink.BusElement;
% TorquesBus.Elements(1).Name = 'MtrTrq';
% TorquesBus.Elements(1).Dimensions = 1;
% TorquesBus.Elements(1).DataType = 'double';
% 
% TorquesBus.Elements(2) = Simulink.BusElement;
% TorquesBus.Elements(2).Name = 'EngTrq';
% TorquesBus.Elements(2).Dimensions = 1;
% TorquesBus.Elements(2).DataType = 'double';

% Create the definition for the legacy code function
def = legacy_code('initialize');
def.SFunctionName = 'MtrTrq';
% def.HeaderFiles = {'mtrtrq_lib.h'};
% def.SourceFiles = {'Torques.c'};
def.HeaderFiles = {'engtrq_lib.h'};
def.SourceFiles = {'QLearningCodeNoCSV_MtrTrq.c'};
def.IncPaths = {'D:\HEVP41\HEVP4\'};
% def.SrcPaths = {};
% 
% % Define the OutputFcnSpec without specifying pointers
def.OutputFcnSpec ='void MtrTrq(double u1, double u2, double u3, double u4, double u5, double u6, double y1[1], double y2[1])';
% def.OutputFcnSpec ='void MtrTrq(double u1, double u2, double u3, double u4, double u5, double u6, double u7, double u8, double u9, double u10, double u11, double u12, double u13, double u14, double u15, double y1[1], double y2[1])';

% Set the output dimensions
% def.Dimensions = [2, 1];
% % Generate the legacy code block
legacy_code('sfcn_cmex_generate', def);
legacy_code('compile', def);
legacy_code('sfcn_tlc_generate', def);
