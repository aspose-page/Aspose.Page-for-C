#pragma once

#include <system/object.h>

namespace CPP {

namespace WorkingWithDocumentConversion {

class XPStoPDF : public System::Object
{
    typedef XPStoPDF ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace WorkingWithDocumentConversion
} // namespace CPP


