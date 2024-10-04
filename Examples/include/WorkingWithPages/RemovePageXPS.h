#pragma once

#include <system/object.h>

namespace CSharp {

namespace WorkingWithPages {

class RemovePageXPS : public System::Object
{
    typedef RemovePageXPS ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace WorkingWithPages
} // namespace CSharp


