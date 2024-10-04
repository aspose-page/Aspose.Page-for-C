#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IPrintTicketItem.h"
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
class Collate;
class DocumentBannerSheet;
class DocumentBinding;
class DocumentCoverBack;
class DocumentCoverFront;
class DocumentSeparatorSheet;
class Duplex;
class HolePunch;
class InputBin;
class JobAccountingSheet;
class JobBindAllDocuments;
class JobDeviceLanguage;
class JobDigitalSignatureProcessing;
class JobErrorSheet;
class JobOutputOptimization;
class JobPageOrder;
class JobPrimaryBannerSheet;
class JobPrimaryCoverBack;
class JobPrimaryCoverFront;
class NUp;
class Option;
class OutputBin;
class PageBlackGenerationProcessing;
class PageBlendColorSpace;
class PageBorderless;
class PageColorManagement;
class PageDestinationColorProfile;
class PageDeviceColorSpaceUsage;
class PageDeviceFontSubstitution;
class PageForceFrontSide;
class PageICMRenderingIntent;
class PageMediaColor;
class PageMediaSize;
class PageMediaType;
class PageMirrorImage;
class PageNegativeImage;
class PageOrientation;
class PageOutputColor;
class PageOutputQuality;
class PagePhotoPrintingIntent;
class PagePoster;
class PageResolution;
class PageScaling;
class PageSourceColorProfile;
class PageTrueTypeFontMode;
class PageWatermark;
class PrintTicket;
class PrintTicketElement;
class RollCut;
class Staple;
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
/// The <b>Aspose.Page.Xps.XpsMetadata</b> namespace provides classes that describe metadata of XPS document.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

/// <summary>
/// The class that incapsulates a common Print Schema feature.
/// The base class for all schema-defined features.
/// A <code>Feature</code> element contains a complete list of the <see cref="Option"></see> and <see cref="Property"></see>
/// elements that fully describe a device attribute, job formatting setting, or other relevant characteristic.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/feature
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS Feature : public Aspose::Page::XPS::XpsMetadata::CompositePrintTicketElement, public virtual Aspose::Page::XPS::XpsMetadata::IPrintTicketItem, public virtual Aspose::Page::XPS::XpsMetadata::IFeatureItem
{
    typedef Feature ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::CompositePrintTicketElement BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IFeatureItem BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::DocumentCoverFront;
    friend class Aspose::Page::XPS::XpsMetadata::HolePunch;
    friend class Aspose::Page::XPS::XpsMetadata::OutputBin;
    friend class Aspose::Page::XPS::XpsMetadata::RollCut;
    friend class Aspose::Page::XPS::XpsMetadata::DocumentSeparatorSheet;
    friend class Aspose::Page::XPS::XpsMetadata::Staple;
    friend class Aspose::Page::XPS::XpsMetadata::JobDeviceLanguage;
    friend class Aspose::Page::XPS::XpsMetadata::JobDigitalSignatureProcessing;
    friend class Aspose::Page::XPS::XpsMetadata::JobErrorSheet;
    friend class Aspose::Page::XPS::XpsMetadata::JobErrorSheet;
    friend class Aspose::Page::XPS::XpsMetadata::JobOutputOptimization;
    friend class Aspose::Page::XPS::XpsMetadata::JobPageOrder;
    friend class Aspose::Page::XPS::XpsMetadata::JobPrimaryCoverFront;
    friend class Aspose::Page::XPS::XpsMetadata::JobPrimaryCoverBack;
    friend class Aspose::Page::XPS::XpsMetadata::Collate;
    friend class Aspose::Page::XPS::XpsMetadata::DocumentCoverBack;
    friend class Aspose::Page::XPS::XpsMetadata::DocumentBannerSheet;
    friend class Aspose::Page::XPS::XpsMetadata::DocumentBinding;
    friend class Aspose::Page::XPS::XpsMetadata::Duplex;
    friend class Aspose::Page::XPS::XpsMetadata::InputBin;
    friend class Aspose::Page::XPS::XpsMetadata::NUp;
    friend class Aspose::Page::XPS::XpsMetadata::PrintTicket;
    friend class Aspose::Page::XPS::XpsMetadata::JobAccountingSheet;
    friend class Aspose::Page::XPS::XpsMetadata::JobBindAllDocuments;
    friend class Aspose::Page::XPS::XpsMetadata::JobPrimaryBannerSheet;
    friend class Aspose::Page::XPS::XpsMetadata::NUp;
    friend class Aspose::Page::XPS::XpsMetadata::PageBlackGenerationProcessing;
    friend class Aspose::Page::XPS::XpsMetadata::PageBlendColorSpace;
    friend class Aspose::Page::XPS::XpsMetadata::PageBorderless;
    friend class Aspose::Page::XPS::XpsMetadata::PageColorManagement;
    friend class Aspose::Page::XPS::XpsMetadata::PageDestinationColorProfile;
    friend class Aspose::Page::XPS::XpsMetadata::PageDeviceColorSpaceUsage;
    friend class Aspose::Page::XPS::XpsMetadata::PageForceFrontSide;
    friend class Aspose::Page::XPS::XpsMetadata::PageDeviceFontSubstitution;
    friend class Aspose::Page::XPS::XpsMetadata::PageICMRenderingIntent;
    friend class Aspose::Page::XPS::XpsMetadata::PageMediaColor;
    friend class Aspose::Page::XPS::XpsMetadata::PageMediaSize;
    friend class Aspose::Page::XPS::XpsMetadata::PageMediaType;
    friend class Aspose::Page::XPS::XpsMetadata::PageOutputQuality;
    friend class Aspose::Page::XPS::XpsMetadata::PageNegativeImage;
    friend class Aspose::Page::XPS::XpsMetadata::PageMirrorImage;
    friend class Aspose::Page::XPS::XpsMetadata::PageOrientation;
    friend class Aspose::Page::XPS::XpsMetadata::PageOutputColor;
    friend class Aspose::Page::XPS::XpsMetadata::PagePhotoPrintingIntent;
    friend class Aspose::Page::XPS::XpsMetadata::PagePoster;
    friend class Aspose::Page::XPS::XpsMetadata::PageResolution;
    friend class Aspose::Page::XPS::XpsMetadata::PageScaling;
    friend class Aspose::Page::XPS::XpsMetadata::PageScaling;
    friend class Aspose::Page::XPS::XpsMetadata::PageSourceColorProfile;
    friend class Aspose::Page::XPS::XpsMetadata::PageTrueTypeFontMode;
    friend class Aspose::Page::XPS::XpsMetadata::PageWatermark;
    friend class Aspose::Page::XPS::XpsMetadata::PageWatermark;
    friend class Aspose::Page::XPS::Tests::PrintTicketTests;
    
public:

    /// <summary>
    /// Creates a new PrintTicket feature instance.
    /// </summary>
    /// <param name="name">A feature name.</param>
    /// <param name="option">Required <see cref="Option"></see> instance.</param>
    /// <param name="items">An arbitrary array of <see cref="IFeatureItem"></see> instances.
    /// Each one must be a <see cref="Feature"></see>, an <see cref="Option"></see>, or a <see cref="Property"></see> instance.</param>
    ASPOSE_PAGE_SHARED_API Feature(System::String name, System::SharedPtr<Option> option, const System::ArrayPtr<System::SharedPtr<IFeatureItem>>& items);
    /// <summary>
    /// Creates a new PrintTicket feature instance.
    /// </summary>
    /// <param name="name">A feature name.</param>
    /// <param name="feature">Required <see cref="Feature"></see> instance.</param>
    /// <param name="items">An arbitrary array of <see cref="IFeatureItem"></see> instances.
    /// Each one must be a <see cref="Feature"></see>, an <see cref="Option"></see>, or a <see cref="Property"></see> instance.</param>
    ASPOSE_PAGE_SHARED_API Feature(System::String name, System::SharedPtr<Feature> feature, const System::ArrayPtr<System::SharedPtr<IFeatureItem>>& items);
    
    /// <summary>
    /// Adds a list of items to the end of this feature's item list. 
    /// Each one must be a <see cref="Feature"></see>, an <see cref="Option"></see>, or a <see cref="Property"></see> instance.
    /// </summary>
    /// <param name="items">List of items to add.</param>
    ASPOSE_PAGE_SHARED_API void Add(const System::ArrayPtr<System::SharedPtr<IFeatureItem>>& items);
    
protected:

    Feature(System::String name, const System::ArrayPtr<System::SharedPtr<IFeatureItem>>& items);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Feature, CODEPORTING_ARGS(System::String name, const System::ArrayPtr<System::SharedPtr<IFeatureItem>>& items));
    
    Feature(System::SharedPtr<System::Xml::XmlNode> node);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Feature, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlNode> node));
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Xml::XmlNode> ToXml(System::SharedPtr<System::Xml::XmlDocument> document) override;
    /// <summary>
    /// Clones this feature element.
    /// </summary>
    /// <returns>The clone of this feature element.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<PrintTicketElement> CloneThis() override;
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


