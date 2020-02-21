#pragma once

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsMetadata {

/// <summary>
/// Class incapsulating print ticket property value types.
/// </summary>
class ValueType FINAL : public System::Object
{
    typedef ValueType ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    static ASPOSE_PAGE_SHARED_API System::SharedPtr<ValueType> Integer;
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<ValueType> Decimal;
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<ValueType> String;
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<ValueType> QName;
    
    /// <summary>
    /// Creates custom property value type.
    /// </summary>
    /// <param name="type">Type in a form "ns:type".</param>
    ASPOSE_PAGE_SHARED_API ValueType(System::String type);
    
    /// <summary>
    /// Returns the string representation.
    /// </summary>
    /// <returns>String representation.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::String ToString();
    
private:

    System::String _type;
    
};

} // namespace XpsMetadata
} // namespace Xps
} // namespace Page
} // namespace Aspose


