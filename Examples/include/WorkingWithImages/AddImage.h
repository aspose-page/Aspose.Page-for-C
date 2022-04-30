#pragma once

#include <system/object.h>

namespace CPP {

namespace WorkingWithImages {

class AddImage : public System::Object
{
    typedef AddImage ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace WorkingWithImages
} // namespace CPP


