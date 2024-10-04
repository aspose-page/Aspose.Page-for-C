#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Property.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace XpsMetadata
{
class Value;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// The convenience class for SelectionType PrintTicket property.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS SelectionType final : public Aspose::Page::XPS::XpsMetadata::Property
{
    typedef SelectionType ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Property BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// PickOne value.
    /// </summary>
    // Full type name Aspose.Page.XPS.XpsMetadata.ValueType is required for C++
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<SelectionType>& PickOne();
    /// <summary>
    /// PickMany value.
    /// </summary>
    // Full type name Aspose.Page.XPS.XpsMetadata.ValueType is required for C++
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<SelectionType>& PickMany();
    
private:

    SelectionType(System::SharedPtr<Value> value);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SelectionType, CODEPORTING_ARGS(System::SharedPtr<Value> value));
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


