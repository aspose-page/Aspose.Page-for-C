#pragma once

#include <system/object.h>

namespace CSharp {

namespace WorkingWithCrossPackageOperations {

class ManipulatePages : public System::Object
{
    typedef ManipulatePages ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace WorkingWithCrossPackageOperations
} // namespace CSharp


