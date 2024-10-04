#pragma once

#include <system/object.h>

namespace CSharp {

namespace WorkingWithXMPMetadataInEPS {

class GetMetadata : public System::Object
{
    typedef GetMetadata ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace WorkingWithXMPMetadataInEPS
} // namespace CSharp


