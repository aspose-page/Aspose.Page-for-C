#pragma once

#include <system/object.h>

namespace CSharp {

namespace WorkingWithDocumentMerging {

class XPStoPDF : public System::Object
{
    typedef XPStoPDF ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace WorkingWithDocumentMerging
} // namespace CSharp


