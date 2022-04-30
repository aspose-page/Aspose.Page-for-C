#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <system/collections/ienumerable.h>
#include <system/array.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IScoredPropertyItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IPropertyItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IPrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IOptionItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IFeatureItem.h"
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
class ScoredProperty;
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
/// Class implementing print ticket property.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS Property : public Aspose::Page::XPS::XpsMetadata::IPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IFeatureItem, public Aspose::Page::XPS::XpsMetadata::IOptionItem, public Aspose::Page::XPS::XpsMetadata::IScoredPropertyItem, public Aspose::Page::XPS::XpsMetadata::IPropertyItem, public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Page::XPS::XpsMetadata::IPropertyItem>>
{
    typedef Property ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::IPrintTicketItem BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IFeatureItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IOptionItem BaseType2;
    typedef Aspose::Page::XPS::XpsMetadata::IScoredPropertyItem BaseType3;
    typedef Aspose::Page::XPS::XpsMetadata::IPropertyItem BaseType4;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Page::XPS::XpsMetadata::IPropertyItem>> BaseType5;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3, BaseType4, BaseType5> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::Feature;
    friend class Aspose::Page::XPS::XpsMetadata::PrintTicket;
    friend class Aspose::Page::XPS::XpsMetadata::Option;
    friend class Aspose::Page::XPS::XpsMetadata::ScoredProperty;
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<IPropertyItem>>;
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
    /// Returns property name.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::String get_Name() override;
    
    /// <summary>
    /// Creates common print ticket property instance.
    /// </summary>
    /// <param name="name">Property name.</param>
    /// <param name="items">Array of <see cref="IPropertyItem"></see> objects.
    /// Each one must be a <see cref="Property"></see> or <see cref="Value"></see> object.</param>
    ASPOSE_PAGE_SHARED_API Property(System::String name, const System::ArrayPtr<System::SharedPtr<IPropertyItem>>& items);
    
    /// <summary>
    /// Implementation of <see cref="System::Collections::Generic::IEnumerable&lt;IPropertyItem&gt;"></see> interface.
    /// </summary>
    /// <returns>Returns enumerator for the list.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IPropertyItem>>> GetEnumerator() override;
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

    Property(System::SharedPtr<System::Xml::XmlNode> node);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Property, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlNode> node));
    System::SharedPtr<System::Xml::XmlNode> ToXml(System::SharedPtr<System::Xml::XmlDocument> document);
    
    virtual ASPOSE_PAGE_SHARED_API ~Property();
    
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IPropertyItem>>> _items;
    System::String pr_Name;
    
    System::String ToString_NonConst();
    
};

/// <summary>
/// Class incapsulating print ticket property.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS Properties : public System::Object
{
    typedef Properties ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Convenience class for SelectionType print ticket property.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS SelectionType final : public Aspose::Page::XPS::XpsMetadata::Property
    {
        typedef SelectionType ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Property BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// PickOne value.
        /// </summary>
        // Full type name Aspose.Page.XPS.XpsMetadata.ValueType is required for C++
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Properties::SelectionType> PickOne;
        /// <summary>
        /// PickMany value.
        /// </summary>
        // Full type name Aspose.Page.XPS.XpsMetadata.ValueType is required for C++
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Properties::SelectionType> PickMany;
        
    protected:
    
        virtual ASPOSE_PAGE_SHARED_API ~SelectionType();
        
    private:
    
        SelectionType(System::SharedPtr<Value> value);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SelectionType, CODEPORTING_ARGS(System::SharedPtr<Value> value));
        
    };
    
    
private:

    Properties();
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


