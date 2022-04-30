#pragma once

#include <system/object.h>

namespace CPP {

namespace WorkingWithText {

class AddTextUsingUnicodeString : public System::Object
{
    typedef AddTextUsingUnicodeString ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace WorkingWithText
} // namespace CPP


