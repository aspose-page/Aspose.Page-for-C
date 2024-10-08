﻿#pragma once

#include <system/object.h>

namespace CSharp {

namespace GettingStarted {

class LoadLicenseFromStreamObject : public System::Object
{
    typedef LoadLicenseFromStreamObject ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace GettingStarted
} // namespace CSharp


