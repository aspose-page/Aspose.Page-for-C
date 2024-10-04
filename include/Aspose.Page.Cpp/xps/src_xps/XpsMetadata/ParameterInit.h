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
namespace Presentation
{
namespace Aps
{
class ApsConverter;
} // namespace Aps
class XpsPresenter;
} // namespace Presentation
namespace Tests
{
class PrintTicketTests;
} // namespace Tests
namespace XpsMetadata
{
class PrintTicket;
class Value;
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
/// The class that implements a common PrintTicket parameter initializer.
/// The base class for all schema-defined parameter initializers.
/// Defines a value for an instance of a <code>ParameterDef</code> element.
/// A <code>ParameterInit</code> element is the target of the reference made by a <see cref="ParameterRef"></see> element.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/parameterinit
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS ParameterInit : public Aspose::Page::XPS::XpsMetadata::PrintTicketElement, public virtual Aspose::Page::XPS::XpsMetadata::IPrintTicketItem
{
    typedef ParameterInit ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::PrintTicketElement BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IPrintTicketItem BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::XpsPresenter;
    friend class Aspose::Page::XPS::Presentation::Aps::ApsConverter;
    friend class Aspose::Page::XPS::XpsMetadata::PrintTicket;
    friend class Aspose::Page::XPS::Tests::PrintTicketTests;
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="name">A parameter name.</param>
    /// <param name="value">A parameter value.</param>
    ASPOSE_PAGE_SHARED_API ParameterInit(System::String name, System::SharedPtr<Aspose::Page::XPS::XpsMetadata::Value> value);
    
protected:

    const System::SharedPtr<Aspose::Page::XPS::XpsMetadata::Value>& get_Value() const;
    
    ParameterInit(System::SharedPtr<System::Xml::XmlNode> node);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ParameterInit, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlNode> node));
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Xml::XmlNode> ToXml(System::SharedPtr<System::Xml::XmlDocument> document) override;
    /// <summary>
    /// Clones this parameter initializer element.
    /// </summary>
    /// <returns>The clone of this parameter initializer element.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<PrintTicketElement> CloneThis() override;
    
private:

    System::SharedPtr<Aspose::Page::XPS::XpsMetadata::Value> pr_Value;
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


