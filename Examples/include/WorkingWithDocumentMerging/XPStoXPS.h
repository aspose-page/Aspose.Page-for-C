#pragma once

#include <system/object.h>

namespace CSharp {

namespace WorkingWithDocumentMerging {

class XPStoXPS : public System::Object
{
    typedef XPStoXPS ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Run();
    
};

} // namespace WorkingWithDocumentMerging
} // namespace CSharp


