#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IPrintTicketElementChild.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace XpsMetadata
{
class CompositePrintTicketElement;
class PrintTicket;
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
/// The base class for classes that may be Print Schema elements.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PrintTicketElement : public virtual Aspose::Page::XPS::XpsMetadata::IPrintTicketElementChild
{
    typedef PrintTicketElement ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::IPrintTicketElementChild BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::CompositePrintTicketElement;
    friend class Aspose::Page::XPS::XpsMetadata::PrintTicket;
    
public:

    /// <summary>
    /// Gets the element name.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::String get_Name() override;
    
    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="name">The name of the element according to some XML schema
    /// (Microsoft Print Schema Framework or other).</param>
    ASPOSE_PAGE_SHARED_API PrintTicketElement(System::String name);
    
protected:

    virtual System::SharedPtr<System::Xml::XmlNode> ToXml(System::SharedPtr<System::Xml::XmlDocument> document) = 0;
    /// <summary>
    /// Clones this element.
    /// </summary>
    /// <returns>The clone of this element.</returns>
    virtual System::SharedPtr<PrintTicketElement> CloneThis() = 0;
    
private:

    System::String pr_Name;
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


