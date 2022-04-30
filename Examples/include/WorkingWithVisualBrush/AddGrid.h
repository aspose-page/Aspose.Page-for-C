#pragma once

#include <system/object.h>

namespace CPP {

namespace WorkingWithVisualBrush {

class AddGrid : public System::Object
{
    typedef AddGrid ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace WorkingWithVisualBrush
} // namespace CPP


