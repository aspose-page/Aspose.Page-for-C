#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
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
} // namespace XpsMetadata
namespace XpsModel
{
class XpsContext;
} // namespace XpsModel
namespace XpsPackageParts
{
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
template <typename> class IEnumerator;
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
/// Basic class incapsulating common features of a print ticket of any levels
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PrintTicket : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Page::XPS::XpsMetadata::IPrintTicketItem>>
{
    typedef PrintTicket ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Page::XPS::XpsMetadata::IPrintTicketItem>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::JobPrintTicket;
    friend class Aspose::Page::XPS::XpsMetadata::DocumentPrintTicket;
    friend class Aspose::Page::XPS::XpsMetadata::PagePrintTicket;
    friend class Aspose::Page::XPS::XpsModel::XpsContext;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedPart;
    friend class Aspose::Page::XPS::Tests::PrintTicketTests;
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<IPrintTicketItem>>;
    /// Iterator type.
    using iterator = typename iterator_holder_type::iterator;
    /// Const iterator type.
    using const_iterator = typename iterator_holder_type::const_iterator;
    /// Virtualized element type.
    using virtualized_iterator_element = typename iterator_holder_type::virtualized_iterator_element;
    /// Virtualized type.
    using virtualized_iterator = typename iterator_holder_type::virtualized_iterator;
    
public:

    /// <summary>
    /// Path to this print ticket inside the package
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::String get_Path() const;
    /// <summary>
    /// Path to this print ticket inside the package
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Path(System::String value);
    ASPOSE_PAGE_SHARED_API System::String get_LoadedPath() const;
    ASPOSE_PAGE_SHARED_API void set_LoadedPath(System::String value);
    ASPOSE_PAGE_SHARED_API int32_t get_Count();
    
    /// <summary>
    /// Creates print ticket instance.
    /// </summary>
    /// <param name="items">Arbitrary array <see cref="IPrintTicketItem"></see> objects.
    /// Each one must be a <see cref="Feature"></see>, <see cref="ParameterInit"></see> or <see cref="Property"></see> object.</param>
    ASPOSE_PAGE_SHARED_API PrintTicket(const System::ArrayPtr<System::SharedPtr<IPrintTicketItem>>& items);
    
    /// <summary>
    /// Adds list of items to the end of print ticket items list. 
    /// Each one can be <see cref="Feature"></see>, <see cref="Option"></see> or <see cref="Property"></see> object.
    /// </summary>
    /// <param name="items">List of items to add.</param>
    ASPOSE_PAGE_SHARED_API void Add(const System::ArrayPtr<System::SharedPtr<IPrintTicketItem>>& items);
    /// <summary>
    /// Implementation of <see cref="System::Collections::Generic::IEnumerable&lt;IPrintTicketItem&gt;"></see> interface.
    /// </summary>
    /// <returns>Returns enumerator for the list.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IPrintTicketItem>>> GetEnumerator() override;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    ASPOSE_PAGE_SHARED_API iterator begin() noexcept;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    ASPOSE_PAGE_SHARED_API iterator end() noexcept;
    /// Gets iterator pointing to the first element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any) of the const-qualified instance of the collection
    ASPOSE_PAGE_SHARED_API const_iterator begin() const noexcept;
    /// Gets iterator pointing right after the last element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any) of the const-qualified instance of the collection
    ASPOSE_PAGE_SHARED_API const_iterator end() const noexcept;
    /// Gets iterator pointing to the first const-qualified element (if any) of the collection.
    /// @return An iterator pointing to the first const-qualified element (if any) of the collection
    ASPOSE_PAGE_SHARED_API const_iterator cbegin() const noexcept;
    /// Gets iterator pointing right after the last const-qualified element (if any) of the collection.
    /// @return An iterator pointing right after the last const-qualified element (if any) of the collection
    ASPOSE_PAGE_SHARED_API const_iterator cend() const noexcept;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    /// Provides iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_PAGE_SHARED_API virtualized_iterator* virtualizeBeginIterator() override;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    /// Provides iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_PAGE_SHARED_API virtualized_iterator* virtualizeEndIterator() override;
    /// Gets iterator pointing to the first element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_PAGE_SHARED_API virtualized_iterator* virtualizeBeginConstIterator() const override;
    /// Gets iterator pointing right after the last element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_PAGE_SHARED_API virtualized_iterator* virtualizeEndConstIterator() const override;
    
protected:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IPrintTicketItem>>> _items;
    
    PrintTicket(System::String path);
    PrintTicket(System::String path, System::SharedPtr<System::IO::Stream> stream);
    
    System::ArrayPtr<System::SharedPtr<IPrintTicketItem>> GetItemsAsArray();
    void Deserialize(System::SharedPtr<System::Xml::XmlElement> root);
    void Save(System::SharedPtr<System::IO::Stream> stream, bool saveEmpty);
    
    System::SharedPtr<IPrintTicketItem> idx_get(int32_t i);
    
    void Dispose();
    
    virtual ASPOSE_PAGE_SHARED_API ~PrintTicket();
    
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    System::SharedPtr<System::Xml::XmlDocument> _xml;
    System::String pr_Path;
    System::String pr_LoadedPath;
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


