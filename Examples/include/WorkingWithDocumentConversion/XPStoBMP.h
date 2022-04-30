#pragma once

#include <system/object.h>

namespace CPP {

namespace WorkingWithDocumentConversion {

class XPStoBMP : public System::Object
{
    typedef XPStoBMP ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace WorkingWithDocumentConversion
} // namespace CPP


