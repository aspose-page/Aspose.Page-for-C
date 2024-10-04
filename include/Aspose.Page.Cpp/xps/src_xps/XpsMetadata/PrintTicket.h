#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/ienumerable.h>
#include <system/array.h>
#include <cstdint>

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
class DocumentPrintTicket;
class IPrintTicketItem;
class JobPrintTicket;
class PagePrintTicket;
class PrintTicketTree;
class PrintTicketTreeNode;
} // namespace XpsMetadata
namespace XpsModel
{
class XpsContext;
} // namespace XpsModel
namespace XpsPackageParts
{
class FixedDocument;
class FixedDocumentSequence;
class FixedPage;
class FixedPart;
} // namespace XpsPackageParts
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
template <typename> class IEnumerator;
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace IO
{
class Stream;
} // namespace IO
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
/// The class that implements a common PrintTicket of any scope.
/// The base class for job-, document- and page-level print tickets.
/// A <code>PrintTicket</code> element is the root element of the PrintTicket document.
/// A <code>PrintTicket</code> element contains all job formatting information required to output a job.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/printticket
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PrintTicket : public System::Collections::Generic::IEnumerable<System::String>
{
    typedef PrintTicket ThisType;
    typedef System::Collections::Generic::IEnumerable<System::String> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::XpsPresenter;
    friend class Aspose::Page::XPS::Presentation::Aps::ApsConverter;
    friend class Aspose::Page::XPS::XpsMetadata::DocumentPrintTicket;
    friend class Aspose::Page::XPS::XpsMetadata::JobPrintTicket;
    friend class Aspose::Page::XPS::XpsMetadata::PagePrintTicket;
    friend class Aspose::Page::XPS::XpsMetadata::PrintTicketTreeNode;
    friend class Aspose::Page::XPS::XpsMetadata::PrintTicketTree;
    friend class Aspose::Page::XPS::XpsModel::XpsContext;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedDocument;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedPart;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedDocumentSequence;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedPage;
    friend class Aspose::Page::XPS::Tests::PrintTicketTests;
    
public:

    /// <summary>
    /// Removes an item from this PrintTicket item list.
    /// </summary>
    /// <param name="names">An array of item names.</param>
    ASPOSE_PAGE_SHARED_API void Remove(const System::ArrayPtr<System::String>& names);
    /// <summary>
    /// Returns the print ticket item names enumerator.
    /// </summary>
    /// <returns>The enumerator.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::String>> GetEnumerator() override;
    
protected:

    /// <summary>
    /// Path to this print ticket relative to the package root.
    /// </summary>
    System::String get_Path() const;
    /// <summary>
    /// Path to this print ticket relative to the package root.
    /// </summary>
    void set_Path(System::String value);
    System::String get_LoadedPath() const;
    void set_LoadedPath(System::String value);
    int32_t get_Count();
    
    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="items">An arbitrary array of <see cref="IPrintTicketItem"></see> instances.
    /// Each one must be a <see cref="Feature"></see>, <see cref="ParameterInit"></see> or <see cref="Property"></see> instance.</param>
    PrintTicket(const System::ArrayPtr<System::SharedPtr<IPrintTicketItem>>& items);
    PrintTicket(System::String path);
    PrintTicket(System::String path, System::SharedPtr<System::IO::Stream> stream);
    
    System::ArrayPtr<System::SharedPtr<IPrintTicketItem>> GetItemsAsArray();
    void Save(System::SharedPtr<System::IO::Stream> stream, bool saveEmpty);
    System::SharedPtr<IPrintTicketItem> Get(System::String name);
    /// <summary>
    /// Adds an array of items to the end of this PrintTicket item list. 
    /// Each one may be a <see cref="Feature"></see>, an <see cref="Option"></see> or a <see cref="Property"></see> instance.
    /// </summary>
    /// <param name="items">An array of items to add.</param>
    void Add(const System::ArrayPtr<System::SharedPtr<IPrintTicketItem>>& items);
    
    System::SharedPtr<IPrintTicketItem> idx_get(int32_t i);
    
    void Dispose();
    
    virtual ASPOSE_PAGE_SHARED_API ~PrintTicket();
    
private:

    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<IPrintTicketItem>>> _items;
    System::SharedPtr<System::Collections::Generic::List<System::String>> _index;
    bool _rebuildIndex;
    System::SharedPtr<System::Xml::XmlDocument> _xml;
    System::String pr_Path;
    System::String pr_LoadedPath;
    
    void Deserialize(System::SharedPtr<System::Xml::XmlElement> root);
    void RebuildIndex();
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


