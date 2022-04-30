#pragma once

#include <system/object.h>

namespace CPP {

namespace WorkingWithDocumentMerging {

class PostScriptToPdf : public System::Object
{
    typedef PostScriptToPdf ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace WorkingWithDocumentMerging
} // namespace CPP


