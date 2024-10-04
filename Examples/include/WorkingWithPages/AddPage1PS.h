#pragma once

#include <system/object.h>

namespace CSharp {

namespace WorkingWithPages {

class AddPage1PS : public System::Object
{
    typedef AddPage1PS ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace WorkingWithPages
} // namespace CSharp


