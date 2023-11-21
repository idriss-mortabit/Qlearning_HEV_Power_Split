#include "HevP4ReferenceApplication_capi_host.h"
static HevP4ReferenceApplication_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        HevP4ReferenceApplication_host_InitializeDataMapInfo(&(root), "HevP4ReferenceApplication");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
