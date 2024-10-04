#pragma once

#include <system/object.h>

namespace CSharp {

namespace WorkingWithImageConversion {

class SaveImageAsEPS : public System::Object
{
    typedef SaveImageAsEPS ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace WorkingWithImageConversion
} // namespace CSharp


