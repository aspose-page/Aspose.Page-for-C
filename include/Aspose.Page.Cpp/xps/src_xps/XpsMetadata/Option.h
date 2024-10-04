#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IFeatureItem.h"
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
class Duplex;
class Feature;
class InputBin;
class IOptionItem;
class JobErrorSheet;
class PageMediaSize;
class PageMediaType;
class PageSourceColorProfile;
class PrintTicketElement;
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
/// The class that implements a common PrintTicket <code>Option</code>.
/// The base class for all schema-defined options.
/// An Option element contains all of the <see cref="Property"></see> and
/// <see cref="ScoredProperty"></see> elements associated with this option.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/option
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS Option : public Aspose::Page::XPS::XpsMetadata::CompositePrintTicketElement, public virtual Aspose::Page::XPS::XpsMetadata::IFeatureItem
{
    typedef Option ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::CompositePrintTicketElement BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IFeatureItem BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::Feature;
    friend class Aspose::Page::XPS::XpsMetadata::Duplex;
    friend class Aspose::Page::XPS::XpsMetadata::InputBin;
    friend class Aspose::Page::XPS::XpsMetadata::PageMediaType;
    friend class Aspose::Page::XPS::XpsMetadata::PageMediaSize;
    friend class Aspose::Page::XPS::XpsMetadata::PageSourceColorProfile;
    friend class Aspose::Page::XPS::Tests::PrintTicketTests;
    friend class Aspose::Page::XPS::XpsMetadata::JobErrorSheet;
    
public:

    /// <summary>
    /// Creates a new PrintTicket option instance.
    /// </summary>
    /// <param name="name">An arbitrary option name.</param>
    /// <param name="items">An arbitrary array of <see cref="IOptionItem"></see> instances.
    /// Each one must be a <see cref="ScoredProperty"></see> or a <see cref="Property"></see> instance.</param>
    ASPOSE_PAGE_SHARED_API Option(System::String name, const System::ArrayPtr<System::SharedPtr<IOptionItem>>& items);
    /// <summary>
    /// Creates a new PrintTicket option instance.
    /// </summary>
    /// <param name="items">An arbitrary array of <see cref="IOptionItem"></see> instances.
    /// Each one must be a <see cref="ScoredProperty"></see> or a <see cref="Property"></see> instance.</param>
    ASPOSE_PAGE_SHARED_API Option(const System::ArrayPtr<System::SharedPtr<IOptionItem>>& items);
    /// <summary>
    /// Creates a clone option instance.
    /// </summary>
    /// <param name="option">An option instance to clone.</param>
    ASPOSE_PAGE_SHARED_API Option(System::SharedPtr<Option> option);
    
    /// <summary>
    /// Adds a list of items to the end of this option's item list. 
    /// Each one must be a <see cref="ScoredProperty"></see> or <see cref="Property"></see> instance.
    /// </summary>
    /// <param name="items">List of items to add.</param>
    ASPOSE_PAGE_SHARED_API void Add(const System::ArrayPtr<System::SharedPtr<IOptionItem>>& items);
    
protected:

    ASPOSE_PAGE_SHARED_API bool get_UniqueNames() override;
    
    Option(System::SharedPtr<System::Xml::XmlNode> node);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Option, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlNode> node));
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Xml::XmlNode> ToXml(System::SharedPtr<System::Xml::XmlDocument> document) override;
    /// <summary>
    /// Makes this instance constant, i.e. any call to the Add() method will throw an exception.
    /// </summary>
    /// <returns>This option.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Option> MakeConst();
    /// <summary>
    /// Clones this option element.
    /// </summary>
    /// <returns>The clone of this option element.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<PrintTicketElement> CloneThis() override;
    
    virtual ASPOSE_PAGE_SHARED_API ~Option();
    
private:

    bool _isConst;
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


