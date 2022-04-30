#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Class incapsulating print ticket property value types.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS ValueType final : public System::Object
{
    typedef ValueType ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Integer type ("xsd:integer").
    /// </summary>
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<ValueType> Integer;
    /// <summary>
    /// Decimal type ("xsd:decimal").
    /// </summary>
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<ValueType> Decimal;
    /// <summary>
    /// String type ("xsd:string").
    /// </summary>
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<ValueType> String;
    /// <summary>
    /// QName type ("xsd:QName").
    /// </summary>
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
    ASPOSE_PAGE_SHARED_API System::String ToString() const override;
    
private:

    System::String _type;
    
    System::String ToString_NonConst();
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


