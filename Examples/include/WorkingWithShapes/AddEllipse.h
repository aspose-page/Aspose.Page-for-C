﻿#pragma once

#include <system/object.h>

namespace CPP {

namespace WorkingWithShapes {

class AddEllipse : public System::Object
{
    typedef AddEllipse ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace WorkingWithShapes
} // namespace CPP


