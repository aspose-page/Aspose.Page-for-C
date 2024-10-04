#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/PrintTicketElement.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IPrintTicketItem.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace XpsMetadata
{
class ScoredProperty;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
class String;
namespace Xml
{
class XmlDocument;
class XmlNode;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// The class that implements a common PrintTicket parameter reference.
/// A <code>ParameterRef</code> element defines a reference to a <see cref="ParameterInit"></see> element.
/// A <see cref="ScoredProperty"></see> element that contains a ParameterRef element does not have
/// an explicitly-set <see cref="Value"></see> element. Instead, the <see cref="ScoredProperty"></see> element
/// receives its value from the <see cref="ParameterInit"></see> element referenced by a <code>ParameterRef</code> element.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/parameterref
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS ParameterRef : public Aspose::Page::XPS::XpsMetadata::PrintTicketElement, public Aspose::Page::XPS::XpsMetadata::IPrintTicketItem
{
    typedef ParameterRef ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::PrintTicketElement BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IPrintTicketItem BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::ScoredProperty;
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="name">A parameter name.</param>
    ASPOSE_PAGE_SHARED_API ParameterRef(System::String name);
    
protected:

    ParameterRef(System::SharedPtr<System::Xml::XmlNode> node);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ParameterRef, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlNode> node));
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Xml::XmlNode> ToXml(System::SharedPtr<System::Xml::XmlDocument> document) override;
    /// <summary>
    /// Clones this parameter reference element.
    /// </summary>
    /// <returns>The clone of this parameter reference element.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<PrintTicketElement> CloneThis() override;
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


