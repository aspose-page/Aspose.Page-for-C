#pragma once

#include <system/object.h>

namespace CPP {

namespace GettingStarted {

class LoadLicenseFromFile : public System::Object
{
    typedef LoadLicenseFromFile ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace GettingStarted
} // namespace CPP


