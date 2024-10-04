#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <drawing/size.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Page/IPagePrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Option.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/IJobPrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IOptionItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IFeatureItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Feature.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Document/IDocumentPrintTicketItem.h"
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
class PageMediaSize;
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
template <typename, typename> class Dictionary;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the physical media dimensions used for the output.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/pagemediasize
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PageMediaSize final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem
{
    typedef PageMediaSize ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    typedef Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem BaseType3;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// The interface of any <see cref="PageMediaSize"></see> item.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS IPageMediaSizeItem : public virtual Aspose::Page::XPS::XpsMetadata::IFeatureItem
    {
        typedef IPageMediaSizeItem ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::IFeatureItem BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    };
    
    /// <summary>
    /// The interface of any <see cref="PageMediaSizeOption"></see> item.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS IPageMediaSizeOptionItem : public Aspose::Page::XPS::XpsMetadata::IOptionItem
    {
        typedef IPageMediaSizeOptionItem ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::IOptionItem BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    };
    
    /// <summary>
    /// Describes the <see cref="PageMediaSize"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS PageMediaSizeOption final : public Aspose::Page::XPS::XpsMetadata::Option, public Aspose::Page::XPS::XpsMetadata::PageMediaSize::IPageMediaSizeItem
    {
        typedef PageMediaSizeOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::PageMediaSize::IPageMediaSizeItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
        friend class Aspose::Page::XPS::Presentation::XpsPresenter;
        friend class Aspose::Page::XPS::Presentation::Aps::ApsConverter;
        friend class Aspose::Page::XPS::XpsPackageParts::FixedPart;
        
    public:
    
        /// <summary>
        /// Specifies a custom media size. Must be validated against <code>DeviceMediaSize</code>.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> CustomMediaSize;
        /// <summary>
        /// Specifies a custom media size (PostScript specific). Must be validated against <code>DeviceMediaSize</code>.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> PSCustomMediaSize;
        /// <summary>
        /// ISOA0
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOA0;
        /// <summary>
        /// ISOA1
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOA1;
        /// <summary>
        /// ISOA10
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOA10;
        /// <summary>
        /// ISOA2
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOA2;
        /// <summary>
        /// ISOA3
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOA3;
        /// <summary>
        /// ISOA3 rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOA3Rotated;
        /// <summary>
        /// ISOA3 extra
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOA3Extra;
        /// <summary>
        /// ISOA4
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOA4;
        /// <summary>
        /// ISOA4 rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOA4Rotated;
        /// <summary>
        /// ISOA4 extra
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOA4Extra;
        /// <summary>
        /// ISOA5
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOA5;
        /// <summary>
        /// ISOA5 rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOA5Rotated;
        /// <summary>
        /// ISOA5 extra
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOA5Extra;
        /// <summary>
        /// ISOA6
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOA6;
        /// <summary>
        /// ISOA6 rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOA6Rotated;
        /// <summary>
        /// ISOA7
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOA7;
        /// <summary>
        /// ISOA8
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOA8;
        /// <summary>
        /// ISOA9
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOA9;
        /// <summary>
        /// ISOB0
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOB0;
        /// <summary>
        /// ISOB1
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOB1;
        /// <summary>
        /// ISOB10
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOB10;
        /// <summary>
        /// ISOB2
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOB2;
        /// <summary>
        /// ISOB3
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOB3;
        /// <summary>
        /// ISOB4
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOB4;
        /// <summary>
        /// ISOB4 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOB4Envelope;
        /// <summary>
        /// ISOB5 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOB5Envelope;
        /// <summary>
        /// ISOB5 extra
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOB5Extra;
        /// <summary>
        /// ISOB7
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOB7;
        /// <summary>
        /// ISOB8
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOB8;
        /// <summary>
        /// ISOB9
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOB9;
        /// <summary>
        /// ISOC0
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOC0;
        /// <summary>
        /// ISOC1
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOC1;
        /// <summary>
        /// ISOC10
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOC10;
        /// <summary>
        /// ISOC2
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOC2;
        /// <summary>
        /// ISOC3
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOC3;
        /// <summary>
        /// ISOC3 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOC3Envelope;
        /// <summary>
        /// ISOC4
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOC4;
        /// <summary>
        /// ISOC4 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOC4Envelope;
        /// <summary>
        /// ISOC5
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOC5;
        /// <summary>
        /// ISOC5 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOC5Envelope;
        /// <summary>
        /// ISOC6
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOC6;
        /// <summary>
        /// ISOC6 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOC6Envelope;
        /// <summary>
        /// ISOC6C5 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOC6C5Envelope;
        /// <summary>
        /// ISOC7
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOC7;
        /// <summary>
        /// ISOC8
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOC8;
        /// <summary>
        /// ISOC9
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOC9;
        /// <summary>
        /// ISODL envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISODLEnvelope;
        /// <summary>
        /// ISODL envelope rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISODLEnvelopeRotated;
        /// <summary>
        /// ISOSRA3
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> ISOSRA3;
        /// <summary>
        /// Japan Quadruple Hagaki Postcard
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JapanQuadrupleHagakiPostcard;
        /// <summary>
        /// JISB0
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JISB0;
        /// <summary>
        /// JISB1
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JISB1;
        /// <summary>
        /// JISB10
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JISB10;
        /// <summary>
        /// JISB2
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JISB2;
        /// <summary>
        /// JISB3
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JISB3;
        /// <summary>
        /// JISB4
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JISB4;
        /// <summary>
        /// JISB4 rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JISB4Rotated;
        /// <summary>
        /// JISB5
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JISB5;
        /// <summary>
        /// JISB5 rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JISB5Rotated;
        /// <summary>
        /// JISB6
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JISB6;
        /// <summary>
        /// JISB6 rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JISB6Rotated;
        /// <summary>
        /// JISB7
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JISB7;
        /// <summary>
        /// JISB8
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JISB8;
        /// <summary>
        /// JISB9
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JISB9;
        /// <summary>
        /// Japan Chou3 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JapanChou3Envelope;
        /// <summary>
        /// Japan Chou3 envelope rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JapanChou3EnvelopeRotated;
        /// <summary>
        /// Japan Chou4 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JapanChou4Envelope;
        /// <summary>
        /// Japan Chou4 envelope rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JapanChou4EnvelopeRotated;
        /// <summary>
        /// Japan Hagaki Postcard
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JapanHagakiPostcard;
        /// <summary>
        /// Japan Hagaki Postcard rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JapanHagakiPostcardRotated;
        /// <summary>
        /// Japan Kaku2 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JapanKaku2Envelope;
        /// <summary>
        /// Japan Kaku2 envelope rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JapanKaku2EnvelopeRotated;
        /// <summary>
        /// Japan Kaku3 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JapanKaku3Envelope;
        /// <summary>
        /// Japan Kaku3 envelope rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JapanKaku3EnvelopeRotated;
        /// <summary>
        /// Japan You4 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JapanYou4Envelope;
        /// <summary>
        /// North America 10x11
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmerica10x11;
        /// <summary>
        /// North America 10x14
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmerica10x14;
        /// <summary>
        /// North America 11x17
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmerica11x17;
        /// <summary>
        /// North America 9x11
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmerica9x11;
        /// <summary>
        /// North America Architecture A sheet
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaArchitectureASheet;
        /// <summary>
        /// North America Architecture B sheet
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaArchitectureBSheet;
        /// <summary>
        /// North America Architecture C sheet
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaArchitectureCSheet;
        /// <summary>
        /// North America Architecture D sheet
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaArchitectureDSheet;
        /// <summary>
        /// North America Architecture E sheet
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaArchitectureESheet;
        /// <summary>
        /// North America C sheet
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaCSheet;
        /// <summary>
        /// North America D sheet
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaDSheet;
        /// <summary>
        /// North America E sheet
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaESheet;
        /// <summary>
        /// North America Executive
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaExecutive;
        /// <summary>
        /// North America German Legal Fanfold
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaGermanLegalFanfold;
        /// <summary>
        /// North America German Standard Fanfold
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaGermanStandardFanfold;
        /// <summary>
        /// North America Legal
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaLegal;
        /// <summary>
        /// North America Legal extra
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaLegalExtra;
        /// <summary>
        /// North America Letter
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaLetter;
        /// <summary>
        /// North America Letter rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaLetterRotated;
        /// <summary>
        /// North America Letter extra
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaLetterExtra;
        /// <summary>
        /// North America Letter Plus
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaLetterPlus;
        /// <summary>
        /// North America Monarch envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaMonarchEnvelope;
        /// <summary>
        /// North America Note
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaNote;
        /// <summary>
        /// North America Number 10 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaNumber10Envelope;
        /// <summary>
        /// North America Number 10 envelope rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaNumber10EnvelopeRotated;
        /// <summary>
        /// North America Number 9 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaNumber9Envelope;
        /// <summary>
        /// North America Number 11 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaNumber11Envelope;
        /// <summary>
        /// North America Number 12 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaNumber12Envelope;
        /// <summary>
        /// North America Number 14 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaNumber14Envelope;
        /// <summary>
        /// North America Personal envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaPersonalEnvelope;
        /// <summary>
        /// North America Quarto
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaQuarto;
        /// <summary>
        /// North America Statement
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaStatement;
        /// <summary>
        /// North America Super A
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaSuperA;
        /// <summary>
        /// North America Super B
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaSuperB;
        /// <summary>
        /// North America Tabloid
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaTabloid;
        /// <summary>
        /// North America Tabloid extra
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmericaTabloidExtra;
        /// <summary>
        /// Other Metric A4 Plus
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> OtherMetricA4Plus;
        /// <summary>
        /// Other Metric A3 Plus
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> OtherMetricA3Plus;
        /// <summary>
        /// Other Metric Folio
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> OtherMetricFolio;
        /// <summary>
        /// Other Metric Invite envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> OtherMetricInviteEnvelope;
        /// <summary>
        /// Other Metric Italian envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> OtherMetricItalianEnvelope;
        /// <summary>
        /// PRC1 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> PRC1Envelope;
        /// <summary>
        /// PRC1 envelope rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> PRC1EnvelopeRotated;
        /// <summary>
        /// PRC10 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> PRC10Envelope;
        /// <summary>
        /// PRC10 envelope rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> PRC10EnvelopeRotated;
        /// <summary>
        /// PRC16K
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> PRC16K;
        /// <summary>
        /// PRC16K rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> PRC16KRotated;
        /// <summary>
        /// PRC2 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> PRC2Envelope;
        /// <summary>
        /// PRC2 envelope rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> PRC2EnvelopeRotated;
        /// <summary>
        /// PRC32K
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> PRC32K;
        /// <summary>
        /// PRC32K rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> PRC32KRotated;
        /// <summary>
        /// PRC32K big
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> PRC32KBig;
        /// <summary>
        /// PRC3 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> PRC3Envelope;
        /// <summary>
        /// PRC3 envelope rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> PRC3EnvelopeRotated;
        /// <summary>
        /// PRC4 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> PRC4Envelope;
        /// <summary>
        /// PRC4 envelope rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> PRC4EnvelopeRotated;
        /// <summary>
        /// PRC envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> PRC5Envelope;
        /// <summary>
        /// PRC5 envelope rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> PRC5EnvelopeRotated;
        /// <summary>
        /// PRC6 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> PRC6Envelope;
        /// <summary>
        /// PRC6 envelope rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> PRC6EnvelopeRotated;
        /// <summary>
        /// PRC7 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> PRC7Envelope;
        /// <summary>
        /// PRC7 envelope rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> PRC7EnvelopeRotated;
        /// <summary>
        /// PRC8 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> PRC8Envelope;
        /// <summary>
        /// PRC8 envelope rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> PRC8EnvelopeRotated;
        /// <summary>
        /// PRC9 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> PRC9Envelope;
        /// <summary>
        /// PRC9 envelope rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> PRC9EnvelopeRotated;
        /// <summary>
        /// Roll 06 inch
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> Roll06Inch;
        /// <summary>
        /// Roll 08 inch
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> Roll08Inch;
        /// <summary>
        /// Roll 12 inch
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> Roll12Inch;
        /// <summary>
        /// Roll 15 inch
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> Roll15Inch;
        /// <summary>
        /// Roll 18 inch
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> Roll18Inch;
        /// <summary>
        /// Roll 22 inch
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> Roll22Inch;
        /// <summary>
        /// Roll 24 inch
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> Roll24Inch;
        /// <summary>
        /// Roll 30 inch
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> Roll30Inch;
        /// <summary>
        /// Roll 36 inch
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> Roll36Inch;
        /// <summary>
        /// Roll 54 inch
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> Roll54Inch;
        /// <summary>
        /// Japan Double Hagaki Postcard
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JapanDoubleHagakiPostcard;
        /// <summary>
        /// Japan Double Hagaki Postcard rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JapanDoubleHagakiPostcardRotated;
        /// <summary>
        /// Japan L Photo
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JapanLPhoto;
        /// <summary>
        /// Japan 2L Photo
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> Japan2LPhoto;
        /// <summary>
        /// Japan You1 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JapanYou1Envelope;
        /// <summary>
        /// Japan You2 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JapanYou2Envelope;
        /// <summary>
        /// Japan You3 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JapanYou3Envelope;
        /// <summary>
        /// Japan You4 envelope rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JapanYou4EnvelopeRotated;
        /// <summary>
        /// Japan You6 envelope
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JapanYou6Envelope;
        /// <summary>
        /// Japan You6 envelope rotated
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> JapanYou6EnvelopeRotated;
        /// <summary>
        /// North America 4x6
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmerica4x6;
        /// <summary>
        /// North America 4x8
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmerica4x8;
        /// <summary>
        /// North America 5x7
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmerica5x7;
        /// <summary>
        /// North America 8x10
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmerica8x10;
        /// <summary>
        /// North America 10x12
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmerica10x12;
        /// <summary>
        /// North America 14x17
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> NorthAmerica14x17;
        /// <summary>
        /// Business Card
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> BusinessCard;
        /// <summary>
        /// Credit Card
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> CreditCard;
        
        /// <summary>
        /// Creates a new instance.
        /// </summary>
        /// <param name="name">The option name.</param>
        /// <param name="items">The option items.</param>
        ASPOSE_PAGE_SHARED_API PageMediaSizeOption(System::String name, const System::ArrayPtr<System::SharedPtr<PageMediaSize::IPageMediaSizeOptionItem>>& items);
        /// <summary>
        /// Clones this option instance.
        /// </summary>
        /// <param name="option">An instance to clone.</param>
        ASPOSE_PAGE_SHARED_API PageMediaSizeOption(System::SharedPtr<PageMediaSize::PageMediaSizeOption> option);
        
        /// <summary>
        /// Adds items to the options.
        /// </summary>
        /// <param name="items">Items to add.</param>
        /// <returns>This options.</returns>
        ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> Add(const System::ArrayPtr<System::SharedPtr<PageMediaSize::IPageMediaSizeOptionItem>>& items);
        /// <summary>
        /// Adds the <code>MediaSizeWidth</code> scored property value.
        /// </summary>
        /// <param name="mediaSizeWidth">A <code>MediaSizeWidth</code> scored property value.</param>
        /// <returns>This option.</returns>
        ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> SetMediaSizeWidth(int32_t mediaSizeWidth);
        /// <summary>
        /// Adds the <code>MediaSizeWidth</code> scored property value.
        /// </summary>
        /// <param name="mediaSizeHeight">A <code>MediaSizeHeight</code> scored property value.</param>
        /// <returns>This option.</returns>
        ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> SetMediaSizeHeight(int32_t mediaSizeHeight);
        /// <summary>
        /// Clones this option instance. The shortcut to the cloneing constructor.
        /// </summary>
        /// <returns>The clone of this option instance.</returns>
        ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaSize::PageMediaSizeOption> Clone();
        
    protected:
    
        ASPOSE_PAGE_SHARED_API System::ArrayPtr<System::String> get_Names() override;
        
        static System::SharedPtr<PageMediaSize::PageMediaSizeOption> SizeToOption(System::Drawing::Size size);
        static System::SharedPtr<PageMediaSize::PageMediaSizeOption> NameToOption(System::String name);
        
        virtual ASPOSE_PAGE_SHARED_API ~PageMediaSizeOption();
        
    private:
    
        static System::ArrayPtr<System::String> _names;
        static System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<PageMediaSize::PageMediaSizeOption>>> _nameToOption;
        static System::SharedPtr<System::Collections::Generic::Dictionary<System::SharedPtr<PageMediaSize::PageMediaSizeOption>, System::Drawing::Size>> _optionToSize;
        static double PaperSizeTolerance;
        
        PageMediaSizeOption(System::String name, const System::ArrayPtr<System::SharedPtr<IOptionItem>>& items);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageMediaSizeOption, CODEPORTING_ARGS(System::String name, const System::ArrayPtr<System::SharedPtr<IOptionItem>>& items));
        
        PageMediaSizeOption(System::String name, int32_t mediaSizeWidth, int32_t mediaSizeHeight);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageMediaSizeOption, CODEPORTING_ARGS(System::String name, int32_t mediaSizeWidth, int32_t mediaSizeHeight));
        
        PageMediaSizeOption(System::String name, int32_t mediaSizeWidth);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageMediaSizeOption, CODEPORTING_ARGS(System::String name, int32_t mediaSizeWidth));
        
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API PageMediaSize(const System::ArrayPtr<System::SharedPtr<PageMediaSize::IPageMediaSizeItem>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


