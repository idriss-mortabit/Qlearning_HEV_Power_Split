    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 3;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (huq5bp1rix)
        ;%
            section.nData     = 115;
            section.data(115)  = dumData; %prealloc

                    ;% huq5bp1rix.LongitudinalDriver_GearInit
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% huq5bp1rix.SignalHold_IC
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% huq5bp1rix.SignalHold_IC_b0akor01bo
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% huq5bp1rix.LongitudinalDriver_Kpt
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% huq5bp1rix.LongitudinalDriver_L
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% huq5bp1rix.LongitudinalDriver_aR
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% huq5bp1rix.LongitudinalDriver_bR
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% huq5bp1rix.LongitudinalDriver_cR
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% huq5bp1rix.LongitudinalDriver_g
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% huq5bp1rix.LongitudinalDriver_m
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% huq5bp1rix.LongitudinalDriver_tShift
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% huq5bp1rix.LongitudinalDriver_tau
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% huq5bp1rix.u1_UpperSat
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% huq5bp1rix.u1_LowerSat
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% huq5bp1rix.u0_UpperSat
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% huq5bp1rix.u0_LowerSat
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% huq5bp1rix.Constant_Value
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% huq5bp1rix.Constant_Value_lmzuecgapm
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% huq5bp1rix.Switch_Threshold
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% huq5bp1rix.uDLookupTable_tableData
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% huq5bp1rix.uDLookupTable_bp01Data
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 420;

                    ;% huq5bp1rix.TransferFcn_A
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 821;

                    ;% huq5bp1rix.TransferFcn_C
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 822;

                    ;% huq5bp1rix.MotorCouplingDynamics_A
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 823;

                    ;% huq5bp1rix.MotorCouplingDynamics_C
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 824;

                    ;% huq5bp1rix.FirstOrderHold1_IniOut
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 825;

                    ;% huq5bp1rix.FirstOrderHold1_ErrTol
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 826;

                    ;% huq5bp1rix.FirstOrderHold2_IniOut
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 827;

                    ;% huq5bp1rix.FirstOrderHold2_ErrTol
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 828;

                    ;% huq5bp1rix.FirstOrderHold12_IniOut
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 829;

                    ;% huq5bp1rix.FirstOrderHold12_ErrTol
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 830;

                    ;% huq5bp1rix.SensorDynamics_A
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 831;

                    ;% huq5bp1rix.SensorDynamics_C
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 832;

                    ;% huq5bp1rix.BatteryDischargeDynamics_A
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 833;

                    ;% huq5bp1rix.BatteryDischargeDynamics_C
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 834;

                    ;% huq5bp1rix.Integrator_IC
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 835;

                    ;% huq5bp1rix.mtomile_Gain
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 836;

                    ;% huq5bp1rix.Integrator1_IC
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 837;

                    ;% huq5bp1rix.m3toUSGal_Gain
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 838;

                    ;% huq5bp1rix.Saturation1_UpperSat
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 839;

                    ;% huq5bp1rix.Saturation1_LowerSat
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 840;

                    ;% huq5bp1rix.Integrator_IC_pqmxruwudg
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 841;

                    ;% huq5bp1rix.mtomi_Gain
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 842;

                    ;% huq5bp1rix.Saturation_UpperSat
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 843;

                    ;% huq5bp1rix.Saturation_LowerSat
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 844;

                    ;% huq5bp1rix.Integrator1_IC_kgyqv13ctx
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 845;

                    ;% huq5bp1rix.Kgtog_Gain
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 846;

                    ;% huq5bp1rix.Integrator2_IC
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 847;

                    ;% huq5bp1rix.Kgtog_Gain_lwt3s4frso
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 848;

                    ;% huq5bp1rix.Integrator3_IC
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 849;

                    ;% huq5bp1rix.Kgtog_Gain_faw5o2w5mx
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 850;

                    ;% huq5bp1rix.mtokm_Gain
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 851;

                    ;% huq5bp1rix.Saturation1_UpperSat_hiohcychfu
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 852;

                    ;% huq5bp1rix.Saturation1_LowerSat_dttfca3rbr
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 853;

                    ;% huq5bp1rix.Integrator4_IC
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 854;

                    ;% huq5bp1rix.Kgtog_Gain_cjm53yufi4
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 855;

                    ;% huq5bp1rix.m3pergal_Gain
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 856;

                    ;% huq5bp1rix.mto100Km_Gain
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 857;

                    ;% huq5bp1rix.Saturation_UpperSat_p152syy2lk
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 858;

                    ;% huq5bp1rix.Saturation_LowerSat_akgyws5are
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 859;

                    ;% huq5bp1rix.Integrator1_IC_ff5zrpozsh
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 860;

                    ;% huq5bp1rix.Saturation_UpperSat_jilowqvm5t
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 861;

                    ;% huq5bp1rix.Saturation_LowerSat_f5zqi5regx
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 862;

                    ;% huq5bp1rix.Saturation_UpperSat_obsoocj435
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 863;

                    ;% huq5bp1rix.Saturation_LowerSat_nnal1fmgyu
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 864;

                    ;% huq5bp1rix.fromWS_Signal1_Time0
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 865;

                    ;% huq5bp1rix.fromWS_Signal1_Data0
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 871;

                    ;% huq5bp1rix.HitCrossing_Offset
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 877;

                    ;% huq5bp1rix.Integrator2_IC_oqp4nzfkjx
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 878;

                    ;% huq5bp1rix.UnitDelay_InitialCondition
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 879;

                    ;% huq5bp1rix.FirstOrderHold_IniOut
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 881;

                    ;% huq5bp1rix.FirstOrderHold_ErrTol
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 882;

                    ;% huq5bp1rix.FirstOrderHold_IniOut_d4ul1gk5t4
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 883;

                    ;% huq5bp1rix.FirstOrderHold_ErrTol_drwqucvaxb
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 884;

                    ;% huq5bp1rix.FirstOrderHold_IniOut_mzvwi51dfh
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 885;

                    ;% huq5bp1rix.FirstOrderHold_ErrTol_p53gicbkas
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 886;

                    ;% huq5bp1rix.FirstOrderHold1_IniOut_ensanaqyt4
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 887;

                    ;% huq5bp1rix.FirstOrderHold1_ErrTol_ltw51vguzo
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 888;

                    ;% huq5bp1rix.FirstOrderHold10_IniOut
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 889;

                    ;% huq5bp1rix.FirstOrderHold10_ErrTol
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 890;

                    ;% huq5bp1rix.FirstOrderHold11_IniOut
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 891;

                    ;% huq5bp1rix.FirstOrderHold11_ErrTol
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 892;

                    ;% huq5bp1rix.FirstOrderHold13_IniOut
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 893;

                    ;% huq5bp1rix.FirstOrderHold13_ErrTol
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 894;

                    ;% huq5bp1rix.FirstOrderHold14_IniOut
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 895;

                    ;% huq5bp1rix.FirstOrderHold14_ErrTol
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 896;

                    ;% huq5bp1rix.FirstOrderHold2_IniOut_hr33a1vjrv
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 897;

                    ;% huq5bp1rix.FirstOrderHold2_ErrTol_ffoy3v4qk5
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 898;

                    ;% huq5bp1rix.FirstOrderHold3_IniOut
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 899;

                    ;% huq5bp1rix.FirstOrderHold3_ErrTol
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 900;

                    ;% huq5bp1rix.FirstOrderHold4_IniOut
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 901;

                    ;% huq5bp1rix.FirstOrderHold4_ErrTol
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 902;

                    ;% huq5bp1rix.FirstOrderHold5_IniOut
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 903;

                    ;% huq5bp1rix.FirstOrderHold5_ErrTol
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 904;

                    ;% huq5bp1rix.FirstOrderHold6_IniOut
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 905;

                    ;% huq5bp1rix.FirstOrderHold6_ErrTol
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 906;

                    ;% huq5bp1rix.FirstOrderHold7_IniOut
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 907;

                    ;% huq5bp1rix.FirstOrderHold7_ErrTol
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 908;

                    ;% huq5bp1rix.FirstOrderHold8_IniOut
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 909;

                    ;% huq5bp1rix.FirstOrderHold8_ErrTol
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 910;

                    ;% huq5bp1rix.FirstOrderHold9_IniOut
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 911;

                    ;% huq5bp1rix.FirstOrderHold9_ErrTol
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 912;

                    ;% huq5bp1rix.USEPAkwhUSgalequivalent_Value
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 913;

                    ;% huq5bp1rix.sperh_Value
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 914;

                    ;% huq5bp1rix.wperkw_Value
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 915;

                    ;% huq5bp1rix.repeat_Value
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 916;

                    ;% huq5bp1rix.tFinal_Value
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 917;

                    ;% huq5bp1rix.Constant2_Value
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 918;

                    ;% huq5bp1rix.Constant3_Value
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 919;

                    ;% huq5bp1rix.Constant6_Value
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 920;

                    ;% huq5bp1rix.Constant7_Value
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 921;

                    ;% huq5bp1rix.Constant_Value_fj4sklkpbz
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 922;

                    ;% huq5bp1rix.Constant_Value_fgligsbuwo
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 923;

                    ;% huq5bp1rix.Constant_Value_alt4mz2jvd
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 924;

                    ;% huq5bp1rix.Constant1_Value
                    section.data(115).logicalSrcIdx = 114;
                    section.data(115).dtTransOffset = 925;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% huq5bp1rix.Constant_Value_ev3pvj0r1w
                    section.data(1).logicalSrcIdx = 115;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% huq5bp1rix.ManualSwitch_CurrentSetting
                    section.data(1).logicalSrcIdx = 116;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 4;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (c5zlh4mzusp)
        ;%
            section.nData     = 163;
            section.data(163)  = dumData; %prealloc

                    ;% c5zlh4mzusp.dv3wt0wr2k
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% c5zlh4mzusp.atf0jpz3pn
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% c5zlh4mzusp.eun24ypzk4
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% c5zlh4mzusp.jgjpqtsaas
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% c5zlh4mzusp.cdupltdhpp
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% c5zlh4mzusp.p1sxhrirqu
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% c5zlh4mzusp.diuztsorgb
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% c5zlh4mzusp.cwktzm5bx5
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% c5zlh4mzusp.ct1fs04adt
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% c5zlh4mzusp.kiksb0cvme
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% c5zlh4mzusp.fqf5ysmqtz
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 11;

                    ;% c5zlh4mzusp.jmeumg2nik
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 13;

                    ;% c5zlh4mzusp.iqalrceyqn
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 14;

                    ;% c5zlh4mzusp.nwxo2im0pt
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 15;

                    ;% c5zlh4mzusp.gsinv42o3l
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 16;

                    ;% c5zlh4mzusp.bkrpyiybvs
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 17;

                    ;% c5zlh4mzusp.lpqjrdy4bs
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 18;

                    ;% c5zlh4mzusp.iru4fbcx3b
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 19;

                    ;% c5zlh4mzusp.emphi231ez
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 20;

                    ;% c5zlh4mzusp.gaeow3rqzh
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 21;

                    ;% c5zlh4mzusp.duc0cubyeu
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 22;

                    ;% c5zlh4mzusp.oeo1eajcvy
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 23;

                    ;% c5zlh4mzusp.ebuggei1gn
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 24;

                    ;% c5zlh4mzusp.lygr2jvxsh
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 25;

                    ;% c5zlh4mzusp.i3nr2q4ehm
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 26;

                    ;% c5zlh4mzusp.hpa0gdloal
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 27;

                    ;% c5zlh4mzusp.a0l4e55osj
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 28;

                    ;% c5zlh4mzusp.iytvha1kaa
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 29;

                    ;% c5zlh4mzusp.dn5ughrrsp
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 30;

                    ;% c5zlh4mzusp.gwrpevjgp4
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 31;

                    ;% c5zlh4mzusp.e0oyv3e4dd
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 32;

                    ;% c5zlh4mzusp.j5b0rut2qf
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 33;

                    ;% c5zlh4mzusp.ifin0uxrbw
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 34;

                    ;% c5zlh4mzusp.b0bnfcsyz0
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 35;

                    ;% c5zlh4mzusp.kmt0wccsr4
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 36;

                    ;% c5zlh4mzusp.dmcl4w1he2
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 37;

                    ;% c5zlh4mzusp.afw5zssttf
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 38;

                    ;% c5zlh4mzusp.bsqyrdigvj
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 39;

                    ;% c5zlh4mzusp.lxnnoylpgl
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 40;

                    ;% c5zlh4mzusp.ogmmaptk1y
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 41;

                    ;% c5zlh4mzusp.ovdoyylbqv
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 42;

                    ;% c5zlh4mzusp.po41xrhuja
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 43;

                    ;% c5zlh4mzusp.mdfwff4l33
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 44;

                    ;% c5zlh4mzusp.ovhryeknq0
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 45;

                    ;% c5zlh4mzusp.poxxkj3bvg
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 46;

                    ;% c5zlh4mzusp.itmoz4lcsg
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 47;

                    ;% c5zlh4mzusp.h1jghrqfqr
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 48;

                    ;% c5zlh4mzusp.f0okyy4yyu
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 49;

                    ;% c5zlh4mzusp.psmccdqk4g
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 50;

                    ;% c5zlh4mzusp.bxy2xzbc3h
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 51;

                    ;% c5zlh4mzusp.k03nsagqex
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 52;

                    ;% c5zlh4mzusp.luftbvp0tn
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 53;

                    ;% c5zlh4mzusp.gsjn5sz45a
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 54;

                    ;% c5zlh4mzusp.esrwrast5r
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 55;

                    ;% c5zlh4mzusp.jar5tbvetj
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 56;

                    ;% c5zlh4mzusp.jhz2jkc3wd
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 57;

                    ;% c5zlh4mzusp.obq4ahy2fk
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 58;

                    ;% c5zlh4mzusp.n5gxdf2tw0
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 59;

                    ;% c5zlh4mzusp.l30tekirvc
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 60;

                    ;% c5zlh4mzusp.opt4wflqns
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 61;

                    ;% c5zlh4mzusp.ggorcyccjy
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 62;

                    ;% c5zlh4mzusp.knetuj3j3h
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 63;

                    ;% c5zlh4mzusp.n1h1mpduzx
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 64;

                    ;% c5zlh4mzusp.g4ryn23br0
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 65;

                    ;% c5zlh4mzusp.jmk0frun1h
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 66;

                    ;% c5zlh4mzusp.komuumxu3a
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 67;

                    ;% c5zlh4mzusp.hsnjs2culi
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 68;

                    ;% c5zlh4mzusp.ilzspmpfew
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 69;

                    ;% c5zlh4mzusp.aivc02lioe
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 70;

                    ;% c5zlh4mzusp.kcmrsy4emv
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 71;

                    ;% c5zlh4mzusp.l20y3tl2fi
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 72;

                    ;% c5zlh4mzusp.psiy0cbayl
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 73;

                    ;% c5zlh4mzusp.pobe11xeq5
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 74;

                    ;% c5zlh4mzusp.a3qhs3xdv3
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 75;

                    ;% c5zlh4mzusp.lspamfw4np
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 76;

                    ;% c5zlh4mzusp.c3wnl42pzc
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 77;

                    ;% c5zlh4mzusp.mzvknutvpn
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 78;

                    ;% c5zlh4mzusp.lzicrvfxs0
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 79;

                    ;% c5zlh4mzusp.hmgklgutnu
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 80;

                    ;% c5zlh4mzusp.cyv2tcxosp
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 81;

                    ;% c5zlh4mzusp.kf0htme02q
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 82;

                    ;% c5zlh4mzusp.idps1oqtc2
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 83;

                    ;% c5zlh4mzusp.fpwy4odd1j
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 84;

                    ;% c5zlh4mzusp.hudumnlkkp
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 85;

                    ;% c5zlh4mzusp.exmmyiyecb
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 86;

                    ;% c5zlh4mzusp.let5105viq
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 87;

                    ;% c5zlh4mzusp.da1swk5skq
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 88;

                    ;% c5zlh4mzusp.aqbwnptjwk
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 89;

                    ;% c5zlh4mzusp.jg44dse3nj
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 90;

                    ;% c5zlh4mzusp.j4pyldvufb
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 91;

                    ;% c5zlh4mzusp.os4bvdu2dn
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 92;

                    ;% c5zlh4mzusp.bbi5p03ull
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 94;

                    ;% c5zlh4mzusp.agsfivq05h
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 95;

                    ;% c5zlh4mzusp.pl1qpeb24y
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 96;

                    ;% c5zlh4mzusp.beoymwb1ds
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 97;

                    ;% c5zlh4mzusp.mgnwmmmvsy
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 98;

                    ;% c5zlh4mzusp.oujuyvi0mg
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 99;

                    ;% c5zlh4mzusp.crshssffqc
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 100;

                    ;% c5zlh4mzusp.h0peaivwwn
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 101;

                    ;% c5zlh4mzusp.k5jqk0sol2
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 102;

                    ;% c5zlh4mzusp.o1oroyrw13
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 103;

                    ;% c5zlh4mzusp.cdj055qwtt
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 104;

                    ;% c5zlh4mzusp.byo0djc3ev
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 105;

                    ;% c5zlh4mzusp.l5uoxtpgkv
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 106;

                    ;% c5zlh4mzusp.p0doo00o1w
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 107;

                    ;% c5zlh4mzusp.ddpajetaf2
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 108;

                    ;% c5zlh4mzusp.plyh5aql1b
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 109;

                    ;% c5zlh4mzusp.mdhboq50pb
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 110;

                    ;% c5zlh4mzusp.h5mtw1jmmu
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 111;

                    ;% c5zlh4mzusp.nit2nkypbx
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 112;

                    ;% c5zlh4mzusp.kkglsripg0
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 113;

                    ;% c5zlh4mzusp.eosdykmyyc
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 114;

                    ;% c5zlh4mzusp.iwqceuwyof
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 115;

                    ;% c5zlh4mzusp.j5lxue1b2g
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 116;

                    ;% c5zlh4mzusp.hnif32llvq
                    section.data(115).logicalSrcIdx = 114;
                    section.data(115).dtTransOffset = 117;

                    ;% c5zlh4mzusp.gqj31rygmo
                    section.data(116).logicalSrcIdx = 115;
                    section.data(116).dtTransOffset = 118;

                    ;% c5zlh4mzusp.dxdkngxky3
                    section.data(117).logicalSrcIdx = 116;
                    section.data(117).dtTransOffset = 119;

                    ;% c5zlh4mzusp.h31pywel0d
                    section.data(118).logicalSrcIdx = 117;
                    section.data(118).dtTransOffset = 120;

                    ;% c5zlh4mzusp.bq2avi4o4c
                    section.data(119).logicalSrcIdx = 118;
                    section.data(119).dtTransOffset = 121;

                    ;% c5zlh4mzusp.phefapml0b
                    section.data(120).logicalSrcIdx = 119;
                    section.data(120).dtTransOffset = 122;

                    ;% c5zlh4mzusp.l2wo05eoex
                    section.data(121).logicalSrcIdx = 120;
                    section.data(121).dtTransOffset = 123;

                    ;% c5zlh4mzusp.kenkr33r5i
                    section.data(122).logicalSrcIdx = 121;
                    section.data(122).dtTransOffset = 124;

                    ;% c5zlh4mzusp.iwdvnd12wl
                    section.data(123).logicalSrcIdx = 122;
                    section.data(123).dtTransOffset = 126;

                    ;% c5zlh4mzusp.js12er4ud2
                    section.data(124).logicalSrcIdx = 123;
                    section.data(124).dtTransOffset = 128;

                    ;% c5zlh4mzusp.ffpgbotpy5
                    section.data(125).logicalSrcIdx = 124;
                    section.data(125).dtTransOffset = 129;

                    ;% c5zlh4mzusp.lbhkoluejj
                    section.data(126).logicalSrcIdx = 125;
                    section.data(126).dtTransOffset = 130;

                    ;% c5zlh4mzusp.la3brkkri1
                    section.data(127).logicalSrcIdx = 126;
                    section.data(127).dtTransOffset = 131;

                    ;% c5zlh4mzusp.dnjvmk5ndp
                    section.data(128).logicalSrcIdx = 127;
                    section.data(128).dtTransOffset = 132;

                    ;% c5zlh4mzusp.bjaf22yvfs
                    section.data(129).logicalSrcIdx = 128;
                    section.data(129).dtTransOffset = 133;

                    ;% c5zlh4mzusp.hxyqyfsavy
                    section.data(130).logicalSrcIdx = 129;
                    section.data(130).dtTransOffset = 134;

                    ;% c5zlh4mzusp.owiwiqigkl
                    section.data(131).logicalSrcIdx = 130;
                    section.data(131).dtTransOffset = 135;

                    ;% c5zlh4mzusp.c5e2hzpnbf
                    section.data(132).logicalSrcIdx = 131;
                    section.data(132).dtTransOffset = 136;

                    ;% c5zlh4mzusp.iljgvw41cw
                    section.data(133).logicalSrcIdx = 132;
                    section.data(133).dtTransOffset = 137;

                    ;% c5zlh4mzusp.og1vaqgvra
                    section.data(134).logicalSrcIdx = 133;
                    section.data(134).dtTransOffset = 138;

                    ;% c5zlh4mzusp.ktrgii52uw
                    section.data(135).logicalSrcIdx = 134;
                    section.data(135).dtTransOffset = 139;

                    ;% c5zlh4mzusp.k2gcn0rpks
                    section.data(136).logicalSrcIdx = 135;
                    section.data(136).dtTransOffset = 140;

                    ;% c5zlh4mzusp.cmf5iapvn3
                    section.data(137).logicalSrcIdx = 136;
                    section.data(137).dtTransOffset = 141;

                    ;% c5zlh4mzusp.b0rjr1l1ao
                    section.data(138).logicalSrcIdx = 137;
                    section.data(138).dtTransOffset = 142;

                    ;% c5zlh4mzusp.pdwrzcjj3o
                    section.data(139).logicalSrcIdx = 138;
                    section.data(139).dtTransOffset = 143;

                    ;% c5zlh4mzusp.gv0mllfnk1
                    section.data(140).logicalSrcIdx = 139;
                    section.data(140).dtTransOffset = 144;

                    ;% c5zlh4mzusp.gtbbdrbjbz
                    section.data(141).logicalSrcIdx = 140;
                    section.data(141).dtTransOffset = 145;

                    ;% c5zlh4mzusp.eey5gaxshl
                    section.data(142).logicalSrcIdx = 141;
                    section.data(142).dtTransOffset = 146;

                    ;% c5zlh4mzusp.lb0gyjdkb5
                    section.data(143).logicalSrcIdx = 142;
                    section.data(143).dtTransOffset = 147;

                    ;% c5zlh4mzusp.n5n30ohz53
                    section.data(144).logicalSrcIdx = 143;
                    section.data(144).dtTransOffset = 148;

                    ;% c5zlh4mzusp.hq53ossn2q
                    section.data(145).logicalSrcIdx = 144;
                    section.data(145).dtTransOffset = 149;

                    ;% c5zlh4mzusp.gkeqenbznl
                    section.data(146).logicalSrcIdx = 145;
                    section.data(146).dtTransOffset = 150;

                    ;% c5zlh4mzusp.dc2npfnluv
                    section.data(147).logicalSrcIdx = 146;
                    section.data(147).dtTransOffset = 151;

                    ;% c5zlh4mzusp.mdvnq0h50i
                    section.data(148).logicalSrcIdx = 147;
                    section.data(148).dtTransOffset = 152;

                    ;% c5zlh4mzusp.gvrmsjkbyd
                    section.data(149).logicalSrcIdx = 148;
                    section.data(149).dtTransOffset = 153;

                    ;% c5zlh4mzusp.j1kzeqlfwg
                    section.data(150).logicalSrcIdx = 149;
                    section.data(150).dtTransOffset = 154;

                    ;% c5zlh4mzusp.flt0akp4pe
                    section.data(151).logicalSrcIdx = 150;
                    section.data(151).dtTransOffset = 155;

                    ;% c5zlh4mzusp.lr2pgfw4gf
                    section.data(152).logicalSrcIdx = 151;
                    section.data(152).dtTransOffset = 156;

                    ;% c5zlh4mzusp.monfilmur4
                    section.data(153).logicalSrcIdx = 152;
                    section.data(153).dtTransOffset = 157;

                    ;% c5zlh4mzusp.keju3jlddl
                    section.data(154).logicalSrcIdx = 153;
                    section.data(154).dtTransOffset = 158;

                    ;% c5zlh4mzusp.ah4pksqfih
                    section.data(155).logicalSrcIdx = 154;
                    section.data(155).dtTransOffset = 159;

                    ;% c5zlh4mzusp.kt4vcyt4rj
                    section.data(156).logicalSrcIdx = 155;
                    section.data(156).dtTransOffset = 160;

                    ;% c5zlh4mzusp.km2j44r5uv
                    section.data(157).logicalSrcIdx = 156;
                    section.data(157).dtTransOffset = 161;

                    ;% c5zlh4mzusp.dinw2mwr0y
                    section.data(158).logicalSrcIdx = 157;
                    section.data(158).dtTransOffset = 162;

                    ;% c5zlh4mzusp.jyhrmsx1yf
                    section.data(159).logicalSrcIdx = 158;
                    section.data(159).dtTransOffset = 163;

                    ;% c5zlh4mzusp.j2en423lbk
                    section.data(160).logicalSrcIdx = 159;
                    section.data(160).dtTransOffset = 164;

                    ;% c5zlh4mzusp.cytjwlxltd
                    section.data(161).logicalSrcIdx = 160;
                    section.data(161).dtTransOffset = 165;

                    ;% c5zlh4mzusp.lbtq0ku545
                    section.data(162).logicalSrcIdx = 161;
                    section.data(162).dtTransOffset = 166;

                    ;% c5zlh4mzusp.njyf5jbpjr
                    section.data(163).logicalSrcIdx = 164;
                    section.data(163).dtTransOffset = 167;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% c5zlh4mzusp.epagtjnze1
                    section.data(1).logicalSrcIdx = 167;
                    section.data(1).dtTransOffset = 0;

                    ;% c5zlh4mzusp.e102hifvqt
                    section.data(2).logicalSrcIdx = 168;
                    section.data(2).dtTransOffset = 1;

                    ;% c5zlh4mzusp.ppit5xnaws
                    section.data(3).logicalSrcIdx = 169;
                    section.data(3).dtTransOffset = 2;

                    ;% c5zlh4mzusp.ldemmfgvw3
                    section.data(4).logicalSrcIdx = 170;
                    section.data(4).dtTransOffset = 3;

                    ;% c5zlh4mzusp.cj4kh32gsk
                    section.data(5).logicalSrcIdx = 171;
                    section.data(5).dtTransOffset = 4;

                    ;% c5zlh4mzusp.fz3pquw0iv
                    section.data(6).logicalSrcIdx = 172;
                    section.data(6).dtTransOffset = 5;

                    ;% c5zlh4mzusp.ldin2du1sj
                    section.data(7).logicalSrcIdx = 173;
                    section.data(7).dtTransOffset = 6;

                    ;% c5zlh4mzusp.aasrrzna5g
                    section.data(8).logicalSrcIdx = 174;
                    section.data(8).dtTransOffset = 7;

                    ;% c5zlh4mzusp.bxvneesqxv
                    section.data(9).logicalSrcIdx = 175;
                    section.data(9).dtTransOffset = 8;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% c5zlh4mzusp.d0xw0oxj5a.jet0xs01ji
                    section.data(1).logicalSrcIdx = 176;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% c5zlh4mzusp.im2vq3d3irm.jet0xs01ji
                    section.data(1).logicalSrcIdx = 177;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(4) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 19;
        sectIdxOffset = 4;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (lkkrkctitnw)
        ;%
            section.nData     = 122;
            section.data(122)  = dumData; %prealloc

                    ;% lkkrkctitnw.c1ij1f4luo
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% lkkrkctitnw.kh5xdhjoen
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 2;

                    ;% lkkrkctitnw.bhsln1im02
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 3;

                    ;% lkkrkctitnw.ovmdszn3vi
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 4;

                    ;% lkkrkctitnw.h4bk44iq0j
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 5;

                    ;% lkkrkctitnw.fnd1cgu2ez
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 6;

                    ;% lkkrkctitnw.hufmyzg00g
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 7;

                    ;% lkkrkctitnw.fgxzeqilcf
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 8;

                    ;% lkkrkctitnw.caj4332p1l
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 9;

                    ;% lkkrkctitnw.h04c4o3sdm
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 10;

                    ;% lkkrkctitnw.pz1rko3nhq
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 12;

                    ;% lkkrkctitnw.jrbpexblku
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 13;

                    ;% lkkrkctitnw.infpntaopi
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 14;

                    ;% lkkrkctitnw.cpzvjo4vs1
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 15;

                    ;% lkkrkctitnw.m5xnya5qov
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 16;

                    ;% lkkrkctitnw.ezbvugwn3z
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 17;

                    ;% lkkrkctitnw.knm5vku22q
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 18;

                    ;% lkkrkctitnw.melid01ejw
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 19;

                    ;% lkkrkctitnw.appsnxr1qq
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 20;

                    ;% lkkrkctitnw.maexa33f2j
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 21;

                    ;% lkkrkctitnw.gxfbvg10fk
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 22;

                    ;% lkkrkctitnw.o2woa2lt3g
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 23;

                    ;% lkkrkctitnw.lb0biqjhcr
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 24;

                    ;% lkkrkctitnw.aooi2g3epf
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 25;

                    ;% lkkrkctitnw.pth0sd032r
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 26;

                    ;% lkkrkctitnw.l1spg24m54
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 27;

                    ;% lkkrkctitnw.fulcowlnoh
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 28;

                    ;% lkkrkctitnw.js1li4zbu0
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 29;

                    ;% lkkrkctitnw.eg44xjqske
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 30;

                    ;% lkkrkctitnw.hmcxdptmmg
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 31;

                    ;% lkkrkctitnw.adrjeq0yql
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 32;

                    ;% lkkrkctitnw.nzezetf530
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 33;

                    ;% lkkrkctitnw.ar5h2piciy
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 34;

                    ;% lkkrkctitnw.g13w5b43up
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 35;

                    ;% lkkrkctitnw.p1khtziyyr
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 36;

                    ;% lkkrkctitnw.lgrvjhedz4
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 37;

                    ;% lkkrkctitnw.cofsoqmglc
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 38;

                    ;% lkkrkctitnw.lii3bzekam
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 39;

                    ;% lkkrkctitnw.ayhyrzc5bo
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 40;

                    ;% lkkrkctitnw.ep524gyioe
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 41;

                    ;% lkkrkctitnw.dkktohtk2t
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 42;

                    ;% lkkrkctitnw.ouiv2ttb4k
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 43;

                    ;% lkkrkctitnw.fqljzsn5xc
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 44;

                    ;% lkkrkctitnw.mgtnggtvl3
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 45;

                    ;% lkkrkctitnw.bhqhbe5hw0
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 46;

                    ;% lkkrkctitnw.npx35rsk2y
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 47;

                    ;% lkkrkctitnw.dek2b4z54h
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 48;

                    ;% lkkrkctitnw.hr1f2ycsrs
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 49;

                    ;% lkkrkctitnw.a2gc015fmo
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 50;

                    ;% lkkrkctitnw.bugufqhsqr
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 51;

                    ;% lkkrkctitnw.h3ritbtaba
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 52;

                    ;% lkkrkctitnw.f3dj5ppzb4
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 53;

                    ;% lkkrkctitnw.p142joj1tt
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 54;

                    ;% lkkrkctitnw.lfduexc22r
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 55;

                    ;% lkkrkctitnw.mypipgzpqg
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 56;

                    ;% lkkrkctitnw.e5k5uh1tii
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 57;

                    ;% lkkrkctitnw.hj5jjgcaox
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 58;

                    ;% lkkrkctitnw.mqxljfmsyj
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 59;

                    ;% lkkrkctitnw.odzx5k4e10
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 60;

                    ;% lkkrkctitnw.pwychxn2rx
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 61;

                    ;% lkkrkctitnw.cvod5gblce
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 62;

                    ;% lkkrkctitnw.jz4igdfsjy
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 63;

                    ;% lkkrkctitnw.bschkhlqcx
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 64;

                    ;% lkkrkctitnw.p5zpn5rl4f
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 65;

                    ;% lkkrkctitnw.enyy3t4ps3
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 66;

                    ;% lkkrkctitnw.droxjfozbf
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 67;

                    ;% lkkrkctitnw.k5oauund31
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 68;

                    ;% lkkrkctitnw.cutrrpdov1
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 69;

                    ;% lkkrkctitnw.mpliu3opsq
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 70;

                    ;% lkkrkctitnw.evydn1x5u3
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 71;

                    ;% lkkrkctitnw.aliqzpm34m
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 72;

                    ;% lkkrkctitnw.pzq0ihn3t3
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 73;

                    ;% lkkrkctitnw.o2dkzedwyd
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 74;

                    ;% lkkrkctitnw.iwacvi1cvr
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 75;

                    ;% lkkrkctitnw.fue3uld4xj
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 76;

                    ;% lkkrkctitnw.h5spwccaot
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 77;

                    ;% lkkrkctitnw.iepmyvc12j
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 78;

                    ;% lkkrkctitnw.lcvtpl0xhz
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 79;

                    ;% lkkrkctitnw.jdrec4mf1t
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 80;

                    ;% lkkrkctitnw.gcwd3vcs2h
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 81;

                    ;% lkkrkctitnw.ipgludoliy
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 82;

                    ;% lkkrkctitnw.itlwzywcut
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 83;

                    ;% lkkrkctitnw.mthxcazoeq
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 84;

                    ;% lkkrkctitnw.acnon4phey
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 85;

                    ;% lkkrkctitnw.mzbogashtm
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 86;

                    ;% lkkrkctitnw.oq5dnpwzel
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 87;

                    ;% lkkrkctitnw.k5sxdubawm
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 88;

                    ;% lkkrkctitnw.ldljdyravq
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 89;

                    ;% lkkrkctitnw.pcuhwhpn3x
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 90;

                    ;% lkkrkctitnw.jdxnqz3k3z
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 91;

                    ;% lkkrkctitnw.m0gspyix5l
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 92;

                    ;% lkkrkctitnw.kpyfexn5a1
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 93;

                    ;% lkkrkctitnw.ialx3y2ktr
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 94;

                    ;% lkkrkctitnw.mqiplucikd
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 95;

                    ;% lkkrkctitnw.mtylxvc53n
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 96;

                    ;% lkkrkctitnw.cpjc0nnbop
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 97;

                    ;% lkkrkctitnw.f1e1x0c2vm
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 98;

                    ;% lkkrkctitnw.nrnbdvzt0f
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 99;

                    ;% lkkrkctitnw.irc32x12y1
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 100;

                    ;% lkkrkctitnw.eokzn5lqzs
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 101;

                    ;% lkkrkctitnw.g4iun1vbdu
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 102;

                    ;% lkkrkctitnw.o141kdey3a
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 103;

                    ;% lkkrkctitnw.fxlat4s44d
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 104;

                    ;% lkkrkctitnw.pwfj2ojmua
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 105;

                    ;% lkkrkctitnw.fcb3sp11yw
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 106;

                    ;% lkkrkctitnw.icbcw4dt4i
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 107;

                    ;% lkkrkctitnw.gt3cupzjr1
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 108;

                    ;% lkkrkctitnw.mudviuktks
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 109;

                    ;% lkkrkctitnw.bntxvuzexg
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 110;

                    ;% lkkrkctitnw.b2542hzgcf
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 111;

                    ;% lkkrkctitnw.frklc1du0s
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 112;

                    ;% lkkrkctitnw.chi35zyntr
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 113;

                    ;% lkkrkctitnw.hpttnbo4xq
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 114;

                    ;% lkkrkctitnw.lnr1sinkco
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 115;

                    ;% lkkrkctitnw.mh53p0dtth
                    section.data(115).logicalSrcIdx = 114;
                    section.data(115).dtTransOffset = 116;

                    ;% lkkrkctitnw.bduaxxbpzz
                    section.data(116).logicalSrcIdx = 115;
                    section.data(116).dtTransOffset = 117;

                    ;% lkkrkctitnw.dm1feblhqa
                    section.data(117).logicalSrcIdx = 116;
                    section.data(117).dtTransOffset = 118;

                    ;% lkkrkctitnw.frajpj20to
                    section.data(118).logicalSrcIdx = 117;
                    section.data(118).dtTransOffset = 119;

                    ;% lkkrkctitnw.iyz0ey02aq
                    section.data(119).logicalSrcIdx = 118;
                    section.data(119).dtTransOffset = 120;

                    ;% lkkrkctitnw.k5owklwcio
                    section.data(120).logicalSrcIdx = 119;
                    section.data(120).dtTransOffset = 121;

                    ;% lkkrkctitnw.irfopsw5u3
                    section.data(121).logicalSrcIdx = 120;
                    section.data(121).dtTransOffset = 122;

                    ;% lkkrkctitnw.dde0fwvl0o
                    section.data(122).logicalSrcIdx = 121;
                    section.data(122).dtTransOffset = 123;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% lkkrkctitnw.kfm3yb2cmb.LoggedData
                    section.data(1).logicalSrcIdx = 122;
                    section.data(1).dtTransOffset = 0;

                    ;% lkkrkctitnw.f4fatx1wo5.LoggedData
                    section.data(2).logicalSrcIdx = 123;
                    section.data(2).dtTransOffset = 6;

                    ;% lkkrkctitnw.osxwf31rhs.TimePtr
                    section.data(3).logicalSrcIdx = 124;
                    section.data(3).dtTransOffset = 10;

                    ;% lkkrkctitnw.lrusbacj5t.LoggedData
                    section.data(4).logicalSrcIdx = 125;
                    section.data(4).dtTransOffset = 11;

                    ;% lkkrkctitnw.nis2t3pp5z.LoggedData
                    section.data(5).logicalSrcIdx = 126;
                    section.data(5).dtTransOffset = 12;

                    ;% lkkrkctitnw.eqnnkuj4dr.LoggedData
                    section.data(6).logicalSrcIdx = 127;
                    section.data(6).dtTransOffset = 13;

                    ;% lkkrkctitnw.osmmr52u5y.LoggedData
                    section.data(7).logicalSrcIdx = 128;
                    section.data(7).dtTransOffset = 14;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% lkkrkctitnw.dgfmvwissk
                    section.data(1).logicalSrcIdx = 129;
                    section.data(1).dtTransOffset = 0;

                    ;% lkkrkctitnw.kvsmqclsqu
                    section.data(2).logicalSrcIdx = 130;
                    section.data(2).dtTransOffset = 1;

                    ;% lkkrkctitnw.ivnj3kwa54
                    section.data(3).logicalSrcIdx = 131;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% lkkrkctitnw.cjeoae02q5
                    section.data(1).logicalSrcIdx = 132;
                    section.data(1).dtTransOffset = 0;

                    ;% lkkrkctitnw.pxrensdadn
                    section.data(2).logicalSrcIdx = 133;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% lkkrkctitnw.j4cpglu32p
                    section.data(1).logicalSrcIdx = 134;
                    section.data(1).dtTransOffset = 0;

                    ;% lkkrkctitnw.k5jlqybics
                    section.data(2).logicalSrcIdx = 135;
                    section.data(2).dtTransOffset = 2;

                    ;% lkkrkctitnw.he0vfk52c2.PrevIndex
                    section.data(3).logicalSrcIdx = 136;
                    section.data(3).dtTransOffset = 3;

                    ;% lkkrkctitnw.pcvkuijeek
                    section.data(4).logicalSrcIdx = 137;
                    section.data(4).dtTransOffset = 4;

                    ;% lkkrkctitnw.iyr13augnz
                    section.data(5).logicalSrcIdx = 138;
                    section.data(5).dtTransOffset = 5;

                    ;% lkkrkctitnw.juvdeom5ty
                    section.data(6).logicalSrcIdx = 139;
                    section.data(6).dtTransOffset = 6;

                    ;% lkkrkctitnw.db235qphyz
                    section.data(7).logicalSrcIdx = 140;
                    section.data(7).dtTransOffset = 7;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 22;
            section.data(22)  = dumData; %prealloc

                    ;% lkkrkctitnw.opaw4z2zn3
                    section.data(1).logicalSrcIdx = 141;
                    section.data(1).dtTransOffset = 0;

                    ;% lkkrkctitnw.fi1llmjhnm
                    section.data(2).logicalSrcIdx = 142;
                    section.data(2).dtTransOffset = 1;

                    ;% lkkrkctitnw.omlg0bte3m
                    section.data(3).logicalSrcIdx = 143;
                    section.data(3).dtTransOffset = 2;

                    ;% lkkrkctitnw.fb1jadv2t5
                    section.data(4).logicalSrcIdx = 144;
                    section.data(4).dtTransOffset = 3;

                    ;% lkkrkctitnw.arub2p4zzr
                    section.data(5).logicalSrcIdx = 145;
                    section.data(5).dtTransOffset = 4;

                    ;% lkkrkctitnw.pixene2r1k
                    section.data(6).logicalSrcIdx = 146;
                    section.data(6).dtTransOffset = 5;

                    ;% lkkrkctitnw.ohzb3swhrq
                    section.data(7).logicalSrcIdx = 147;
                    section.data(7).dtTransOffset = 6;

                    ;% lkkrkctitnw.pblwjrwtpn
                    section.data(8).logicalSrcIdx = 148;
                    section.data(8).dtTransOffset = 7;

                    ;% lkkrkctitnw.cbx5s3rbvn
                    section.data(9).logicalSrcIdx = 149;
                    section.data(9).dtTransOffset = 8;

                    ;% lkkrkctitnw.gvx5sloovp
                    section.data(10).logicalSrcIdx = 150;
                    section.data(10).dtTransOffset = 9;

                    ;% lkkrkctitnw.f0hhltjlcn
                    section.data(11).logicalSrcIdx = 151;
                    section.data(11).dtTransOffset = 10;

                    ;% lkkrkctitnw.n5ycrmji5n
                    section.data(12).logicalSrcIdx = 152;
                    section.data(12).dtTransOffset = 11;

                    ;% lkkrkctitnw.lh3epubkdg
                    section.data(13).logicalSrcIdx = 153;
                    section.data(13).dtTransOffset = 12;

                    ;% lkkrkctitnw.g0rarwcx0n
                    section.data(14).logicalSrcIdx = 154;
                    section.data(14).dtTransOffset = 13;

                    ;% lkkrkctitnw.ph3dyn2vbi
                    section.data(15).logicalSrcIdx = 155;
                    section.data(15).dtTransOffset = 14;

                    ;% lkkrkctitnw.buvgxg4wiw
                    section.data(16).logicalSrcIdx = 156;
                    section.data(16).dtTransOffset = 15;

                    ;% lkkrkctitnw.dzase2snq2
                    section.data(17).logicalSrcIdx = 157;
                    section.data(17).dtTransOffset = 16;

                    ;% lkkrkctitnw.ac55uhsiqx
                    section.data(18).logicalSrcIdx = 158;
                    section.data(18).dtTransOffset = 17;

                    ;% lkkrkctitnw.etouatgqfx
                    section.data(19).logicalSrcIdx = 159;
                    section.data(19).dtTransOffset = 18;

                    ;% lkkrkctitnw.gzxynjg3le
                    section.data(20).logicalSrcIdx = 160;
                    section.data(20).dtTransOffset = 19;

                    ;% lkkrkctitnw.giqmtzacnq
                    section.data(21).logicalSrcIdx = 161;
                    section.data(21).dtTransOffset = 20;

                    ;% lkkrkctitnw.b4ck1dw0sr
                    section.data(22).logicalSrcIdx = 162;
                    section.data(22).dtTransOffset = 21;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% lkkrkctitnw.o5b1d5v4kk
                    section.data(1).logicalSrcIdx = 163;
                    section.data(1).dtTransOffset = 0;

                    ;% lkkrkctitnw.cgd2ecnupw
                    section.data(2).logicalSrcIdx = 164;
                    section.data(2).dtTransOffset = 1;

                    ;% lkkrkctitnw.ev0qxkvgf2
                    section.data(3).logicalSrcIdx = 165;
                    section.data(3).dtTransOffset = 2;

                    ;% lkkrkctitnw.k25cpbrhkh
                    section.data(4).logicalSrcIdx = 166;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% lkkrkctitnw.mgfuv3v40s
                    section.data(1).logicalSrcIdx = 167;
                    section.data(1).dtTransOffset = 0;

                    ;% lkkrkctitnw.erh05us4i2
                    section.data(2).logicalSrcIdx = 168;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% lkkrkctitnw.ihhigf1gyq
                    section.data(1).logicalSrcIdx = 169;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% lkkrkctitnw.lkxnu4ieaj
                    section.data(1).logicalSrcIdx = 170;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% lkkrkctitnw.fxfpjs5zwf
                    section.data(1).logicalSrcIdx = 171;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% lkkrkctitnw.ahts4cu30v
                    section.data(1).logicalSrcIdx = 172;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% lkkrkctitnw.i1wwqrhe01
                    section.data(1).logicalSrcIdx = 173;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% lkkrkctitnw.ehgw5hos5u
                    section.data(1).logicalSrcIdx = 174;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(14) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% lkkrkctitnw.d43yu213mh
                    section.data(1).logicalSrcIdx = 175;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(15) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% lkkrkctitnw.d0xw0oxj5a.hnlzvdkzrg
                    section.data(1).logicalSrcIdx = 176;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(16) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% lkkrkctitnw.d0xw0oxj5a.jdyejkwif0
                    section.data(1).logicalSrcIdx = 177;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(17) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% lkkrkctitnw.im2vq3d3irm.hnlzvdkzrg
                    section.data(1).logicalSrcIdx = 178;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(18) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% lkkrkctitnw.im2vq3d3irm.jdyejkwif0
                    section.data(1).logicalSrcIdx = 179;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(19) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 1068892458;
    targMap.checksum1 = 3960671541;
    targMap.checksum2 = 1637318959;
    targMap.checksum3 = 3633016946;

