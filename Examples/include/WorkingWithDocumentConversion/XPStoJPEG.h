#pragma once

#include <system/object.h>

namespace CPP {

namespace WorkingWithDocumentConversion {

class XPStoJPEG : public System::Object
{
    typedef XPStoJPEG ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace WorkingWithDocumentConversion
} // namespace CPP


