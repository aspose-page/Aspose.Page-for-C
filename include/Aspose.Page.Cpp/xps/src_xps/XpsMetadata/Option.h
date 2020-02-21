#pragma once

#include <xml/xml_node.h>
#include <xml/xml_document.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/ienumerable.h>
#include <system/array.h>
#include <drawing/size.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IOptionItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IFeatureItem.h"

namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class Feature; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class PrintTicketTests; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsPackageParts { class FixedPart; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsMetadata {

/// <summary>
/// Class implementing print ticket option.
/// </summary>
class Option : public Aspose::Page::Xps::XpsMetadata::IFeatureItem, public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Page::Xps::XpsMetadata::IOptionItem>>
{
    typedef Option ThisType;
    typedef Aspose::Page::Xps::XpsMetadata::IFeatureItem BaseType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Page::Xps::XpsMetadata::IOptionItem>> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsMetadata::Feature;
    friend class Aspose::Page::Xps::Tests::PrintTicketTests;
    
public:

    /// <summary>
    /// Creates common print ticket feature instance.
    /// </summary>
    /// <param name="name">Arbitrary option name.</param>
    /// <param name="properties">Array of <see cref="IOptionItem"/> objects.
    /// Each one must be a <see cref="ScoredProperty"/> or <see cref="Property"/> object.</param>
    ASPOSE_PAGE_SHARED_API Option(System::String name, const System::ArrayPtr<System::SharedPtr<IOptionItem>>& properties);
    /// <summary>
    /// Creates common print ticket feature instance.
    /// </summary>
    /// <param name="properties">Array of <see cref="IOptionItem"/> objects.
    /// Each one must be a <see cref="ScoredProperty"/> or <see cref="Property"/> object.</param>
    ASPOSE_PAGE_SHARED_API Option(const System::ArrayPtr<System::SharedPtr<IOptionItem>>& properties);
    
    /// <summary>
    /// Adds list of properties to the end of option properties list. 
    /// Each one must be a <see cref="ScoredProperty"/> or <see cref="Property"/> object.
    /// </summary>
    /// <param name="properties">List of properties to add.</param>
    ASPOSE_PAGE_SHARED_API void Add(const System::ArrayPtr<System::SharedPtr<IOptionItem>>& properties);
    /// <summary>
    /// Returns the string representation.
    /// </summary>
    /// <returns>String representation.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::String ToString();
    /// <summary>
    /// Implementation of <see cref="System::Collections::Generic::IEnumerable&lt;IOptionItem&gt;"/> interface.
    /// </summary>
    /// <returns>Returns enumerator for the list.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IOptionItem>>> GetEnumerator();
    
protected:

    Option(System::SharedPtr<System::Xml::XmlNode> node);
    
    System::SharedPtr<System::Xml::XmlNode> ToXml(System::SharedPtr<System::Xml::XmlDocument> document);
    
    System::SharedPtr<IOptionItem> idx_get(int32_t i);
    
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String _name;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IOptionItem>>> _items;
    
};

/// <summary>
/// Class incapsulating print ticket option.
/// </summary>
class Options : public System::Object
{
    typedef Options ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    
public:

    class PageMediaSize FINAL : public Aspose::Page::Xps::XpsMetadata::Option
    {
        typedef PageMediaSize ThisType;
        typedef Aspose::Page::Xps::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
        FRIEND_FUNCTION_System_MakeObject;
        friend class Aspose::Page::Xps::XpsPackageParts::FixedPart;
        
    public:
    
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA3;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA4;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA5;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOB4;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOB5Envelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> PRC5Envelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaExecutive;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> OtherMetricFolio;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmerica11x17;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaLegal;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaLetter;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmerica10x14;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmerica8x10;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaStatement;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISODLEnvelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA5Extra;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOB10;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOB9;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOB8;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA10;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA9;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOB7;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOB1;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOB0;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOB3;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOB2;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA6;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA1;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA0;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA2;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA4Extra;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOC7;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOC6;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA8;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA7;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOB5Extra;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOB4Envelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOA3Extra;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOC6C5Envelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOSRA3;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOC10;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOC9;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOC8;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOC5;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOC4;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOC1;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOC0;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOC3;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> ISOC2;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaNumber14Envelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaSuperB;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaLetterExtra;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaDSheet;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaNumber12Envelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmerica4x6;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmerica4x8;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaMonarchEnvelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmerica10x11;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaPersonalEnvelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaQuarto;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaNumber10Envelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaNumber11Envelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaCSheet;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmerica9x11;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmerica10x12;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaGermanStandardFanfold;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaArchitectureDSheet;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaSuperA;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaArchitectureASheet;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaNumber9Envelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaTabloidExtra;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaLetterPlus;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmerica14x17;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmerica5x7;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaArchitectureBSheet;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaArchitectureCSheet;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaGermanLegalFanfold;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaArchitectureESheet;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> NorthAmericaESheet;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> PRC2Envelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> PRC7Envelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> PRC8Envelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> PRC6Envelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> PRC4Envelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> PRC1Envelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> PRC16K;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> PRC32KBig;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> PRC32K;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> PRC3Envelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JapanLPhoto;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JapanYou3Envelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JapanHagakiPostcard;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JapanDoubleHagakiPostcard;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JapanYou1Envelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JapanQuadrupleHagakiPostcard;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> Japan2LPhoto;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JapanYou4Envelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JapanKaku2Envelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JapanChou4Envelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JapanKaku3Envelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JapanChou3Envelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JapanYou6Envelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JISB10;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JISB8;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JISB9;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JISB2;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JISB3;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JISB0;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JISB1;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JISB6;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JISB7;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JISB4;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> JISB5;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> BusinessCard;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> OtherMetricA4Plus;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> CreditCard;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> OtherMetricInviteEnvelope;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> OtherMetricA3Plus;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Options::PageMediaSize> OtherMetricItalianEnvelope;
        
    protected:
    
        /// <summary>
        /// Creates PageMediaSize option instance.
        /// </summary>
        /// <param name="size">Media size in microns.</param>
        PageMediaSize(System::Drawing::Size size);
        PageMediaSize(float width, float height);
        
    private:
    
        /// <summary>
        /// Creates PageMediaSize option instance.
        /// </summary>
        /// <param name="name">Media size name.</param>
        PageMediaSize(System::String name);
        
    };
    
    
private:

    Options();
    
};

} // namespace XpsMetadata
} // namespace Xps
} // namespace Page
} // namespace Aspose


