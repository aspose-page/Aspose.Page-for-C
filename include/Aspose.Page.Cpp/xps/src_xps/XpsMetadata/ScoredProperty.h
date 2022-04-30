#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <system/collections/ienumerable.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IScoredPropertyItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IOptionItem.h"
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
class Value;
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
template <typename> class IEnumerator;
} // namespace Generic
} // namespace Collections
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
/// Class implementing print ticket scored property.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS ScoredProperty : public Aspose::Page::XPS::XpsMetadata::IOptionItem, public Aspose::Page::XPS::XpsMetadata::IScoredPropertyItem, public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Page::XPS::XpsMetadata::IScoredPropertyItem>>
{
    typedef ScoredProperty ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::IOptionItem BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IScoredPropertyItem BaseType1;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Page::XPS::XpsMetadata::IScoredPropertyItem>> BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::Option;
    friend class Aspose::Page::XPS::Tests::PrintTicketTests;
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<IScoredPropertyItem>>;
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
    /// Creates print ticket scored property instance.
    /// </summary>
    /// <param name="name">Property name.</param>
    /// <param name="items">Array of <see cref="IScoredPropertyItem"></see> objects.
    /// Each one must be a <see cref="ScoredProperty"></see>, <see cref="Property"></see> or <see cref="Value"></see> object.</param>
    ASPOSE_PAGE_SHARED_API ScoredProperty(System::String name, const System::ArrayPtr<System::SharedPtr<IScoredPropertyItem>>& items);
    
    /// <summary>
    /// Implementation of <see cref="System::Collections::Generic::IEnumerable&lt;IScoredPropertyItem&gt;"></see> interface.
    /// </summary>
    /// <returns>Returns enumerator for the list.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IScoredPropertyItem>>> GetEnumerator() override;
    /// <summary>
    /// Returns the string representation.
    /// </summary>
    /// <returns>String representation.</returns>
    ASPOSE_PAGE_SHARED_API System::String ToString() const override;
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

    ScoredProperty(System::SharedPtr<System::Xml::XmlNode> node);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ScoredProperty, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlNode> node));
    System::SharedPtr<System::Xml::XmlNode> ToXml(System::SharedPtr<System::Xml::XmlDocument> document);
    
    System::SharedPtr<IScoredPropertyItem> idx_get(int32_t i);
    
    virtual ASPOSE_PAGE_SHARED_API ~ScoredProperty();
    
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    System::String _name;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IScoredPropertyItem>>> _items;
    
    System::String ToString_NonConst();
    
};

/// <summary>
/// Class incapsulating print ticket scored property.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS ScoredProperties : public System::Object
{
    typedef ScoredProperties ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Convenience class for DuplexMode print ticket scored property.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS DuplexMode final : public Aspose::Page::XPS::XpsMetadata::ScoredProperty
    {
        typedef DuplexMode ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::ScoredProperty BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Automatic value.
        /// </summary>
        // Full type name Aspose.Page.XPS.XpsMetadata.ValueType is required for C++
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<ScoredProperties::DuplexMode> Automatic;
        /// <summary>
        /// Manual value.
        /// </summary>
        // Full type name Aspose.Page.XPS.XpsMetadata.ValueType is required for C++
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<ScoredProperties::DuplexMode> Manual;
        
    protected:
    
        virtual ASPOSE_PAGE_SHARED_API ~DuplexMode();
        
    private:
    
        DuplexMode(System::SharedPtr<Value> value);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DuplexMode, CODEPORTING_ARGS(System::SharedPtr<Value> value));
        
    };
    
    
private:

    ScoredProperties();
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


