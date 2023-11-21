#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "physical_connection" , 14 , 8 } , {
"int64_T" , 15 , 8 } , { "uint64_T" , 16 , 8 } , { "jaycrc4s13t" , 17 , 12112
} , { "lbmxgxauxab" , 18 , 680 } , { "fjvy5vdomkr" , 19 , 256 } , {
"httrpxnoync" , 20 , 3624 } , { "fc1yykdatze" , 21 , 408 } , { "hs55xurqzk3"
, 22 , 200 } , { "obfkhtmwsvj" , 23 , 648 } , { "uint64_T" , 24 , 8 } , {
"int64_T" , 25 , 8 } , { "uint_T" , 26 , 32 } , { "char_T" , 27 , 8 } , {
"uchar_T" , 28 , 8 } , { "time_T" , 29 , 8 } } ; static uint_T
rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T ) , sizeof (
int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof ( uint16_T ) ,
sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T ) , sizeof (
fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof ( action_T )
, 2 * sizeof ( uint32_T ) , sizeof ( int32_T ) , sizeof ( int64_T ) , sizeof
( uint64_T ) , sizeof ( jaycrc4s13t ) , sizeof ( lbmxgxauxab ) , sizeof (
fjvy5vdomkr ) , sizeof ( httrpxnoync ) , sizeof ( fc1yykdatze ) , sizeof (
hs55xurqzk3 ) , sizeof ( obfkhtmwsvj ) , sizeof ( uint64_T ) , sizeof (
int64_T ) , sizeof ( uint_T ) , sizeof ( char_T ) , sizeof ( uchar_T ) ,
sizeof ( time_T ) } ; static const char_T * rtDataTypeNames [ ] = { "real_T"
, "real32_T" , "int8_T" , "uint8_T" , "int16_T" , "uint16_T" , "int32_T" ,
"uint32_T" , "boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" , "action_T"
, "timer_uint32_pair_T" , "physical_connection" , "int64_T" , "uint64_T" ,
"jaycrc4s13t" , "lbmxgxauxab" , "fjvy5vdomkr" , "httrpxnoync" , "fc1yykdatze"
, "hs55xurqzk3" , "obfkhtmwsvj" , "uint64_T" , "int64_T" , "uint_T" ,
"char_T" , "uchar_T" , "time_T" } ; static DataTypeTransition rtBTransitions
[ ] = { { ( char_T * ) ( & c5zlh4mzusp . dv3wt0wr2k ) , 0 , 0 , 169 } , { (
char_T * ) ( & c5zlh4mzusp . epagtjnze1 ) , 8 , 0 , 9 } , { ( char_T * ) ( &
c5zlh4mzusp . d0xw0oxj5a . jet0xs01ji ) , 0 , 0 , 1 } , { ( char_T * ) ( &
c5zlh4mzusp . im2vq3d3irm . jet0xs01ji ) , 0 , 0 , 1 } , { ( char_T * ) ( &
lkkrkctitnw . c1ij1f4luo [ 0 ] ) , 0 , 0 , 124 } , { ( char_T * ) ( &
lkkrkctitnw . kfm3yb2cmb . LoggedData [ 0 ] ) , 11 , 0 , 15 } , { ( char_T *
) ( & lkkrkctitnw . dgfmvwissk ) , 6 , 0 , 3 } , { ( char_T * ) ( &
lkkrkctitnw . cjeoae02q5 ) , 7 , 0 , 2 } , { ( char_T * ) ( & lkkrkctitnw .
j4cpglu32p [ 0 ] ) , 10 , 0 , 8 } , { ( char_T * ) ( & lkkrkctitnw .
opaw4z2zn3 ) , 2 , 0 , 22 } , { ( char_T * ) ( & lkkrkctitnw . o5b1d5v4kk ) ,
3 , 0 , 4 } , { ( char_T * ) ( & lkkrkctitnw . mgfuv3v40s ) , 8 , 0 , 2 } , {
( char_T * ) ( & lkkrkctitnw . ihhigf1gyq ) , 20 , 0 , 1 } , { ( char_T * ) (
& lkkrkctitnw . lkxnu4ieaj ) , 23 , 0 , 1 } , { ( char_T * ) ( & lkkrkctitnw
. fxfpjs5zwf ) , 21 , 0 , 1 } , { ( char_T * ) ( & lkkrkctitnw . ahts4cu30v )
, 17 , 0 , 1 } , { ( char_T * ) ( & lkkrkctitnw . i1wwqrhe01 ) , 18 , 0 , 1 }
, { ( char_T * ) ( & lkkrkctitnw . ehgw5hos5u ) , 19 , 0 , 1 } , { ( char_T *
) ( & lkkrkctitnw . d43yu213mh ) , 22 , 0 , 1 } , { ( char_T * ) ( &
lkkrkctitnw . d0xw0oxj5a . hnlzvdkzrg ) , 2 , 0 , 1 } , { ( char_T * ) ( &
lkkrkctitnw . d0xw0oxj5a . jdyejkwif0 ) , 8 , 0 , 1 } , { ( char_T * ) ( &
lkkrkctitnw . im2vq3d3irm . hnlzvdkzrg ) , 2 , 0 , 1 } , { ( char_T * ) ( &
lkkrkctitnw . im2vq3d3irm . jdyejkwif0 ) , 8 , 0 , 1 } } ; static
DataTypeTransitionTable rtBTransTable = { 23U , rtBTransitions } ; static
DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( & huq5bp1rix .
LongitudinalDriver_GearInit ) , 0 , 0 , 926 } , { ( char_T * ) ( & huq5bp1rix
. Constant_Value_ev3pvj0r1w ) , 8 , 0 , 1 } , { ( char_T * ) ( & huq5bp1rix .
ManualSwitch_CurrentSetting ) , 3 , 0 , 1 } } ; static
DataTypeTransitionTable rtPTransTable = { 3U , rtPTransitions } ;
