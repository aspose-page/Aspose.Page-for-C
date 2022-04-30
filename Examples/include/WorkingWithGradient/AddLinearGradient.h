#pragma once

#include <system/object.h>

namespace CPP {

namespace WorkingWithGradient {

class AddLinearGradient : public System::Object
{
    typedef AddLinearGradient ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace WorkingWithGradient
} // namespace CPP


