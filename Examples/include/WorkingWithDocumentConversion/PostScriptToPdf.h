#pragma once

#include <system/object.h>

namespace CSharp {

namespace WorkingWithDocumentConversion {

class PostScriptToPdf : public System::Object
{
    typedef PostScriptToPdf ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace WorkingWithDocumentConversion
} // namespace CSharp


