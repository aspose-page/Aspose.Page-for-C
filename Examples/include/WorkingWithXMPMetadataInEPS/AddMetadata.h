#pragma once

#include <system/object.h>

namespace CPP {

namespace WorkingWithXMPMetadataInEPS {

class AddMetadata : public System::Object
{
    typedef AddMetadata ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace WorkingWithXMPMetadataInEPS
} // namespace CPP


