#pragma once

#include <system/object.h>

namespace CPP {

namespace WorkingWithXMPMetadataInEPS {

class ChangeMetadata_AddNamespace : public System::Object
{
    typedef ChangeMetadata_AddNamespace ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace WorkingWithXMPMetadataInEPS
} // namespace CPP


