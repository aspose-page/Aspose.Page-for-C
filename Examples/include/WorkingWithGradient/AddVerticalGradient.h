#pragma once

#include <system/object.h>

namespace CPP {

namespace WorkingWithGradient {

class AddVerticalGradient : public System::Object
{
    typedef AddVerticalGradient ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace WorkingWithGradient
} // namespace CPP


