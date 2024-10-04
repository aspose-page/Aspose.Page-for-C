#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IScoredPropertyItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IOptionItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/CompositePrintTicketElement.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace Tests
{
class PrintTicketTests;
} // namespace Tests
namespace XpsMetadata
{
class Option;
class ParameterRef;
class PrintTicketElement;
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
/// The class that implements a common PrintTicket <code>ScoredProperty</code>.
/// The base class for all schema-defined scored properties.
/// A <code>ScoredProperty</code> element declares a property that is intrinsic to an
/// <see cref="Option"></see> definition. Such properties should be compared when evaluating
/// how closely a requested <see cref="Option"></see> matches a device-supported <see cref="Option"></see>.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/scoredproperty
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS ScoredProperty : public Aspose::Page::XPS::XpsMetadata::CompositePrintTicketElement, public virtual Aspose::Page::XPS::XpsMetadata::IOptionItem, public Aspose::Page::XPS::XpsMetadata::IScoredPropertyItem
{
    typedef ScoredProperty ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::CompositePrintTicketElement BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IOptionItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IScoredPropertyItem BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::Option;
    friend class Aspose::Page::XPS::Tests::PrintTicketTests;
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="name"> A property name.</param>
    /// <param name="parameterRef">A <see cref="ParameterRef"></see> instance.</param>
    ASPOSE_PAGE_SHARED_API ScoredProperty(System::String name, System::SharedPtr<ParameterRef> parameterRef);
    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="name">A property name.</param>
    /// <param name="value">A property value.</param>
    /// <param name="items">An arbitrary array of <see cref="IScoredPropertyItem"></see> instances.
    /// Each one must be a <see cref="ScoredProperty"></see>, a <see cref="Property"></see> or a <see cref="Value"></see> instance.</param>
    ASPOSE_PAGE_SHARED_API ScoredProperty(System::String name, System::SharedPtr<Value> value, const System::ArrayPtr<System::SharedPtr<IScoredPropertyItem>>& items);
    
protected:

    ScoredProperty(System::SharedPtr<System::Xml::XmlNode> node);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ScoredProperty, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlNode> node));
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Xml::XmlNode> ToXml(System::SharedPtr<System::Xml::XmlDocument> document) override;
    /// <summary>
    /// Clones this scored property element.
    /// </summary>
    /// <returns>The clone of this scored property element.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<PrintTicketElement> CloneThis() override;
    
    virtual ASPOSE_PAGE_SHARED_API ~ScoredProperty();
    
private:

    ScoredProperty(System::SharedPtr<ScoredProperty> scoredProperty);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ScoredProperty, CODEPORTING_ARGS(System::SharedPtr<ScoredProperty> scoredProperty));
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


