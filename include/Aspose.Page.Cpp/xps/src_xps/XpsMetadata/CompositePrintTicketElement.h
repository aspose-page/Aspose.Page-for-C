#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/PrintTicketElement.h"
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
namespace XpsMetadata
{
class Feature;
class IPrintTicketElementChild;
class Option;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Xml
{
class XmlDocument;
class XmlElement;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// The base class for classes that may be composite Print Schema elements (i.e. containing other elements).
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS CompositePrintTicketElement : public Aspose::Page::XPS::XpsMetadata::PrintTicketElement
{
    typedef CompositePrintTicketElement ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::PrintTicketElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::XpsPresenter;
    friend class Aspose::Page::XPS::Presentation::Aps::ApsConverter;
    friend class Aspose::Page::XPS::XpsMetadata::Feature;
    friend class Aspose::Page::XPS::XpsMetadata::Option;
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="name">The name of the element according to some XML schema
    /// (Microsoft Print Schema Framework or other).</param>
    /// <param name="items">An arbitrary array of child items.</param>
    ASPOSE_PAGE_SHARED_API CompositePrintTicketElement(System::String name, const System::ArrayPtr<System::SharedPtr<IPrintTicketElementChild>>& items);
    /// <summary>
    /// Clones this element instance.
    /// </summary>
    /// <param name="element">An element instance to clone.</param>
    ASPOSE_PAGE_SHARED_API CompositePrintTicketElement(System::SharedPtr<CompositePrintTicketElement> element);
    
protected:

    virtual ASPOSE_PAGE_SHARED_API System::ArrayPtr<System::String> get_Names();
    virtual ASPOSE_PAGE_SHARED_API bool get_UniqueNames();
    int32_t get_Count();
    
    void Insert(int32_t index, System::SharedPtr<IPrintTicketElementChild> item);
    void Add(const System::ArrayPtr<System::SharedPtr<IPrintTicketElementChild>>& items);
    void ChildrenToXml(System::SharedPtr<System::Xml::XmlDocument> document, System::SharedPtr<System::Xml::XmlElement> element);
    System::SharedPtr<IPrintTicketElementChild> FindByName(System::String name);
    
    System::SharedPtr<IPrintTicketElementChild> idx_get(int32_t i);
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IPrintTicketElementChild>>> _items;
    
    void CheckUnique(const System::ArrayPtr<System::SharedPtr<IPrintTicketElementChild>>& items);
    static void CheckUniqueNames(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IPrintTicketElementChild>>> items);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


