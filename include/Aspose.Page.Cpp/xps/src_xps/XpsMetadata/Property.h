#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IScoredPropertyItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IPropertyItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IPrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IOptionItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IFeatureItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/CompositePrintTicketElement.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace XpsMetadata
{
class Feature;
class Option;
class PrintTicket;
class PrintTicketElement;
class ScoredProperty;
class Value;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
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
/// The class that implements a common PrintTicket <code>Property</code>.
/// The base class for all schema-defined properties.
/// A <code>Property</code> element declares a device, job formatting, or other relevant property
/// whose name is given by its name attribute. A <see cref="Value"></see> element is used to assign
/// a value to the <code>Property</code>.
/// A <code>Property</code> can be complex, possibly containing multiple subproperties.
/// Subproperties are also represented by <code>Property</code> elements.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/property
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS Property : public Aspose::Page::XPS::XpsMetadata::CompositePrintTicketElement, public virtual Aspose::Page::XPS::XpsMetadata::IPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IFeatureItem, public virtual Aspose::Page::XPS::XpsMetadata::IOptionItem, public Aspose::Page::XPS::XpsMetadata::IScoredPropertyItem, public Aspose::Page::XPS::XpsMetadata::IPropertyItem
{
    typedef Property ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::CompositePrintTicketElement BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IFeatureItem BaseType2;
    typedef Aspose::Page::XPS::XpsMetadata::IOptionItem BaseType3;
    typedef Aspose::Page::XPS::XpsMetadata::IScoredPropertyItem BaseType4;
    typedef Aspose::Page::XPS::XpsMetadata::IPropertyItem BaseType5;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3, BaseType4, BaseType5> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::Feature;
    friend class Aspose::Page::XPS::XpsMetadata::Option;
    friend class Aspose::Page::XPS::XpsMetadata::ScoredProperty;
    friend class Aspose::Page::XPS::XpsMetadata::PrintTicket;
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="name">A property name.</param>
    /// <param name="property">A mandatory <see cref="Property"></see> instance.</param>
    /// <param name="items">An arbitrary array of <see cref="IPropertyItem"></see> instances.
    /// Each one must be a <see cref="Property"></see> or a <see cref="Value"></see> instance.</param>
    ASPOSE_PAGE_SHARED_API Property(System::String name, System::SharedPtr<Property> property, const System::ArrayPtr<System::SharedPtr<IPropertyItem>>& items);
    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="name">A property name.</param>
    /// <param name="value">A mandatory <see cref="Value"></see> instance.</param>
    /// <param name="items">An arbitrary array of <see cref="IPropertyItem"></see> instances.
    /// Each one must be a <see cref="Property"></see> or a <see cref="Value"></see> instance.</param>
    ASPOSE_PAGE_SHARED_API Property(System::String name, System::SharedPtr<Value> value, const System::ArrayPtr<System::SharedPtr<IPropertyItem>>& items);
    
protected:

    Property(System::SharedPtr<System::Xml::XmlNode> node);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Property, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlNode> node));
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Xml::XmlNode> ToXml(System::SharedPtr<System::Xml::XmlDocument> document) override;
    /// <summary>
    /// Clones this scored property element.
    /// </summary>
    /// <returns>The clone of this scored property element.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<PrintTicketElement> CloneThis() override;
    
    virtual ASPOSE_PAGE_SHARED_API ~Property();
    
private:

    Property(System::SharedPtr<Property> property);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Property, CODEPORTING_ARGS(System::SharedPtr<Property> property));
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


