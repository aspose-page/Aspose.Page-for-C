#pragma once

#include <system/object.h>

namespace CPP {

namespace WorkingWithTransparency {

class SetOpacityMask : public System::Object
{
    typedef SetOpacityMask ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace WorkingWithTransparency
} // namespace CPP


