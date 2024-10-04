#pragma once

#include <system/object.h>

namespace CSharp {

namespace WorkingWithPrintTickets {

class LinkPrintTickets : public System::Object
{
    typedef LinkPrintTickets ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace WorkingWithPrintTickets
} // namespace CSharp


