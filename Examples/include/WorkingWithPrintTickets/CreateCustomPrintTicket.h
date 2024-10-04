#pragma once

#include <system/object.h>

namespace CSharp {

namespace WorkingWithPrintTickets {

class CreateCustomPrintTicket : public System::Object
{
    typedef CreateCustomPrintTicket ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace WorkingWithPrintTickets
} // namespace CSharp


