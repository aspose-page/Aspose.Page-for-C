#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <system/collections/ienumerable.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IFeatureItem.h"
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
class Feature;
class IOptionItem;
} // namespace XpsMetadata
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
namespace Drawing
{
class Size;
} // namespace Drawing
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
/// Class implementing print ticket option.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS Option : public Aspose::Page::XPS::XpsMetadata::IFeatureItem, public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Page::XPS::XpsMetadata::IOptionItem>>
{
    typedef Option ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::IFeatureItem BaseType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Page::XPS::XpsMetadata::IOptionItem>> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::Feature;
    friend class Aspose::Page::XPS::Tests::PrintTicketTests;
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<IOptionItem>>;
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
    /// Creates common print ticket feature instance.
    /// </summary>
    /// <param name="name">Arbitrary option name.</param>
    /// <param name="properties">Array of <see cref="IOptionItem"></see> objects.
    /// Each one must be a <see cref="ScoredProperty"></see> or <see cref="Property"></see> object.</param>
    ASPOSE_PAGE_SHARED_API Option(System::String name, const System::ArrayPtr<System::SharedPtr<IOptionItem>>& properties);
    /// <summary>
    /// Creates common print ticket feature instance.
    /// </summary>
    /// <param name="properties">Array of <see cref="IOptionItem"></see> objects.
    /// Each one must be a <see cref="ScoredProperty"></see> or <see cref="Property"></see> object.</param>
    ASPOSE_PAGE_SHARED_API Option(const System::ArrayPtr<System::SharedPtr<IOptionItem>>& properties);
    
    /// <summary>
    /// Adds list of properties to the end of option properties list. 
    /// Each one must be a <see cref="ScoredProperty"></see> or <see cref="Property"></see> object.
    /// </summary>
    /// <param name="properties">List of properties to add.</param>
    ASPOSE_PAGE_SHARED_API void Add(const System::ArrayPtr<System::SharedPtr<IOptionItem>>& properties);
    /// <summary>
    /// Implementation of <see cref="System::Collections::Generic::IEnumerable&lt;IOptionItem&gt;"></see> interface.
    /// </summary>
    /// <returns>Returns enumerator for the list.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IOptionItem>>> GetEnumerator() override;
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

    Option(System::SharedPtr<System::Xml::XmlNode> node);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Option, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlNode> node));
    System::SharedPtr<System::Xml::XmlNode> ToXml(System::SharedPtr<System::Xml::XmlDocument> document);
    
    System::SharedPtr<IOptionItem> idx_get(int32_t i);
    
    virtual ASPOSE_PAGE_SHARED_API ~Option();
    
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    System::String _name;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IOptionItem>>> _items;
    
    System::String ToString_NonConst();
    
};

/// <summary>
/// Class incapsulating print ticket option.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS Options : public System::Object
{
    typedef Options ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Convenience class for PageMediaSize print ticket option.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS PageMediaSize final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef PageMediaSize ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
        friend class Aspose::Page::XPS::XpsPackageParts::FixedPart;
        
    public:
    
        /// <summary> ISOA3 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA3;
        /// <summary> ISOA4 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA4;
        /// <summary> ISOA5 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA5;
        /// <summary> ISOB4 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOB4;
        /// <summary> ISOB5Envelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOB5Envelope;
        /// <summary> PRC5Envelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> PRC5Envelope;
        /// <summary> NorthAmericaExecutive </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaExecutive;
        /// <summary> OtherMetricFolio </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> OtherMetricFolio;
        /// <summary> NorthAmerica11x17 </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmerica11x17;
        /// <summary> NorthAmericaLegal </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaLegal;
        /// <summary> NorthAmericaLetter </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaLetter;
        /// <summary> NorthAmerica10x14 </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmerica10x14;
        /// <summary> NorthAmerica8x10 </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmerica8x10;
        /// <summary> NorthAmericaStatement </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaStatement;
        /// <summary> ISODLEnvelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISODLEnvelope;
        /// <summary> ISOA5Extra </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA5Extra;
        /// <summary> ISOB10 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOB10;
        /// <summary> ISOB9 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOB9;
        /// <summary> ISOB8 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOB8;
        /// <summary> ISOA10 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA10;
        /// <summary> ISOA9 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA9;
        /// <summary> ISOB7 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOB7;
        /// <summary> ISOB1 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOB1;
        /// <summary> ISOB0 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOB0;
        /// <summary> ISOB3 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOB3;
        /// <summary> ISOB2 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOB2;
        /// <summary> ISOA6 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA6;
        /// <summary> ISOA1 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA1;
        /// <summary> ISOA0 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA0;
        /// <summary> ISOA2 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA2;
        /// <summary> ISOA4Extra </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA4Extra;
        /// <summary> ISOC7 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOC7;
        /// <summary> ISOC6 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOC6;
        /// <summary> ISOA8 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA8;
        /// <summary> ISOA7 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA7;
        /// <summary> ISOB5Extra </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOB5Extra;
        /// <summary> ISOB4Envelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOB4Envelope;
        /// <summary> ISOA3Extra </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA3Extra;
        /// <summary> ISOC6C5Envelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOC6C5Envelope;
        /// <summary> ISOSRA3 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOSRA3;
        /// <summary> ISOC10 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOC10;
        /// <summary> ISOC9 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOC9;
        /// <summary> ISOC8 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOC8;
        /// <summary> ISOC5 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOC5;
        /// <summary> ISOC4 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOC4;
        /// <summary> ISOC1 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOC1;
        /// <summary> ISOC0 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOC0;
        /// <summary> ISOC3 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOC3;
        /// <summary> ISOC2 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOC2;
        /// <summary> NorthAmericaNumber14Envelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaNumber14Envelope;
        /// <summary> NorthAmericaSuperB </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaSuperB;
        /// <summary> NorthAmericaLetterExtra </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaLetterExtra;
        /// <summary> NorthAmericaDSheet </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaDSheet;
        /// <summary> NorthAmericaNumber12Envelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaNumber12Envelope;
        /// <summary> NorthAmerica4x6 </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmerica4x6;
        /// <summary> NorthAmerica4x8 </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmerica4x8;
        /// <summary> NorthAmericaMonarchEnvelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaMonarchEnvelope;
        /// <summary> NorthAmerica10x11 </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmerica10x11;
        /// <summary> NorthAmericaPersonalEnvelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaPersonalEnvelope;
        /// <summary> NorthAmericaQuarto </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaQuarto;
        /// <summary> NorthAmericaNumber10Envelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaNumber10Envelope;
        /// <summary> NorthAmericaNumber11Envelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaNumber11Envelope;
        /// <summary> NorthAmericaCSheet </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaCSheet;
        /// <summary> NorthAmerica9x11 </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmerica9x11;
        /// <summary> NorthAmerica10x12 </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmerica10x12;
        /// <summary> NorthAmericaGermanStandardFanfold </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaGermanStandardFanfold;
        /// <summary> NorthAmericaArchitectureDSheet </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaArchitectureDSheet;
        /// <summary> NorthAmericaSuperA </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaSuperA;
        /// <summary> NorthAmericaArchitectureASheet </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaArchitectureASheet;
        /// <summary> NorthAmericaNumber9Envelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaNumber9Envelope;
        /// <summary> NorthAmericaTabloidExtra </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaTabloidExtra;
        /// <summary> NorthAmericaLetterPlus </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaLetterPlus;
        /// <summary> NorthAmerica14x17 </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmerica14x17;
        /// <summary> NorthAmerica5x7 </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmerica5x7;
        /// <summary> NorthAmericaArchitectureBSheet </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaArchitectureBSheet;
        /// <summary> NorthAmericaArchitectureCSheet </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaArchitectureCSheet;
        /// <summary> NorthAmericaGermanLegalFanfold </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaGermanLegalFanfold;
        /// <summary> NorthAmericaArchitectureESheet </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaArchitectureESheet;
        /// <summary> NorthAmericaESheet </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaESheet;
        /// <summary> PRC2Envelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> PRC2Envelope;
        /// <summary> PRC7Envelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> PRC7Envelope;
        /// <summary> PRC8Envelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> PRC8Envelope;
        /// <summary> PRC6Envelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> PRC6Envelope;
        /// <summary> PRC4Envelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> PRC4Envelope;
        /// <summary> PRC1Envelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> PRC1Envelope;
        /// <summary> PRC16K value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> PRC16K;
        /// <summary> PRC32KBig value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> PRC32KBig;
        /// <summary> PRC32K value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> PRC32K;
        /// <summary> PRC3Envelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> PRC3Envelope;
        /// <summary> JapanLPhoto </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JapanLPhoto;
        /// <summary> JapanYou3Envelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JapanYou3Envelope;
        /// <summary> JapanHagakiPostcard </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JapanHagakiPostcard;
        /// <summary> JapanDoubleHagakiPostcard </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JapanDoubleHagakiPostcard;
        /// <summary> JapanYou1Envelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JapanYou1Envelope;
        /// <summary> JapanQuadrupleHagakiPostcard </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JapanQuadrupleHagakiPostcard;
        /// <summary> Japan2LPhoto </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> Japan2LPhoto;
        /// <summary> JapanYou4Envelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JapanYou4Envelope;
        /// <summary> JapanKaku2Envelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JapanKaku2Envelope;
        /// <summary> JapanChou4Envelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JapanChou4Envelope;
        /// <summary> JapanKaku3Envelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JapanKaku3Envelope;
        /// <summary> JapanChou3Envelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JapanChou3Envelope;
        /// <summary> JapanYou6Envelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JapanYou6Envelope;
        /// <summary> JISB10 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JISB10;
        /// <summary> JISB8 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JISB8;
        /// <summary> JISB9 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JISB9;
        /// <summary> JISB2 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JISB2;
        /// <summary> JISB3 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JISB3;
        /// <summary> JISB0 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JISB0;
        /// <summary> JISB1 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JISB1;
        /// <summary> JISB6 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JISB6;
        /// <summary> JISB7 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JISB7;
        /// <summary> JISB4 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JISB4;
        /// <summary> JISB5 value </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JISB5;
        /// <summary> BusinessCard </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> BusinessCard;
        /// <summary> OtherMetricA4Plus </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> OtherMetricA4Plus;
        /// <summary> CreditCard </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> CreditCard;
        /// <summary> OtherMetricInviteEnvelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> OtherMetricInviteEnvelope;
        /// <summary> OtherMetricA3Plus </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> OtherMetricA3Plus;
        /// <summary> OtherMetricItalianEnvelope </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> OtherMetricItalianEnvelope;
        
    protected:
    
        /// <summary>
        /// Creates PageMediaSize option instance.
        /// </summary>
        /// <param name="size">Media size in microns.</param>
        PageMediaSize(System::Drawing::Size size);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageMediaSize, CODEPORTING_ARGS(System::Drawing::Size size));
        
        PageMediaSize(float width, float height);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageMediaSize, CODEPORTING_ARGS(float width, float height));
        
        virtual ASPOSE_PAGE_SHARED_API ~PageMediaSize();
        
    private:
    
        /// <summary>
        /// Creates PageMediaSize option instance.
        /// </summary>
        /// <param name="name">Media size name.</param>
        PageMediaSize(System::String name);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageMediaSize, CODEPORTING_ARGS(System::String name));
        
    };
    
    
private:

    Options();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Options, CODEPORTING_ARGS());
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


