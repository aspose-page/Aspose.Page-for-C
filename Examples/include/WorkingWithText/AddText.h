#pragma once

#include <system/object.h>

namespace CPP {

namespace WorkingWithText {

class AddText : public System::Object
{
    typedef AddText ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace WorkingWithText
} // namespace CPP


