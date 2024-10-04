#pragma once

#include <system/object.h>

namespace CSharp {

namespace WorkingWithDocument {

class CreateDocumentPS : public System::Object
{
    typedef CreateDocumentPS ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace WorkingWithDocument
} // namespace CSharp


