#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/ScoredProperty.h"
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
namespace XpsMetadata
{
class PageMediaType;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the <code>MediaType</code> options and the characteristics of each option.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/pagemediatype
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PageMediaType final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem
{
    typedef PageMediaType ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    typedef Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem BaseType3;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// The interface of any <see cref="PageMediaType"></see> feature item.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS IPageMediaTypeItem : public virtual Aspose::Page::XPS::XpsMetadata::IFeatureItem
    {
        typedef IPageMediaTypeItem ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::IFeatureItem BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    };
    
    /// <summary>
    /// The interface of any <see cref="PageMediaType"></see> item.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS IPageMediaTypeOptionItem : public virtual Aspose::Page::XPS::XpsMetadata::IOptionItem
    {
        typedef IPageMediaTypeOptionItem ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::IOptionItem BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    };
    
    /// <summary>
    /// Defines constants for the <code>BackCoating</code> scored property value.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS BackCoating final : public Aspose::Page::XPS::XpsMetadata::ScoredProperty, public Aspose::Page::XPS::XpsMetadata::PageMediaType::IPageMediaTypeOptionItem
    {
        typedef BackCoating ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::ScoredProperty BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::PageMediaType::IPageMediaTypeOptionItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Glossy value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::BackCoating> Glossy;
        /// <summary>
        /// HighGloss value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::BackCoating> HighGloss;
        /// <summary>
        /// Matte value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::BackCoating> Matte;
        /// <summary>
        /// None value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::BackCoating> None;
        /// <summary>
        /// Satin value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::BackCoating> Satin;
        /// <summary>
        /// SemiGloss value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::BackCoating> SemiGloss;
        
    private:
    
        BackCoating(System::String value);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BackCoating, CODEPORTING_ARGS(System::String value));
        
    };
    
    /// <summary>
    /// Defines constants for the <code>FrontCoating</code> scored property value.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS FrontCoating final : public Aspose::Page::XPS::XpsMetadata::ScoredProperty, public Aspose::Page::XPS::XpsMetadata::PageMediaType::IPageMediaTypeOptionItem
    {
        typedef FrontCoating ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::ScoredProperty BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::PageMediaType::IPageMediaTypeOptionItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Glossy value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::FrontCoating> Glossy;
        /// <summary>
        /// HighGloss value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::FrontCoating> HighGloss;
        /// <summary>
        /// Matte value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::FrontCoating> Matte;
        /// <summary>
        /// None value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::FrontCoating> None;
        /// <summary>
        /// Satin value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::FrontCoating> Satin;
        /// <summary>
        /// SemiGloss value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::FrontCoating> SemiGloss;
        
    private:
    
        FrontCoating(System::String value);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FrontCoating, CODEPORTING_ARGS(System::String value));
        
    };
    
    /// <summary>
    /// Defines constants for the <code>Material</code> scored property value.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS Material final : public Aspose::Page::XPS::XpsMetadata::ScoredProperty, public Aspose::Page::XPS::XpsMetadata::PageMediaType::IPageMediaTypeOptionItem
    {
        typedef Material ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::ScoredProperty BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::PageMediaType::IPageMediaTypeOptionItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Aluminium value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::Material> Aluminum;
        /// <summary>
        /// Display value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::Material> Display;
        /// <summary>
        /// DryFilm value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::Material> DryFilm;
        /// <summary>
        /// Paper value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::Material> Paper;
        /// <summary>
        /// Polyester value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::Material> Polyester;
        /// <summary>
        /// Transparency value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::Material> Transparency;
        /// <summary>
        /// WetFilm value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::Material> WetFilm;
        
    private:
    
        Material(System::String value);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Material, CODEPORTING_ARGS(System::String value));
        
    };
    
    /// <summary>
    /// Defines constants for the <code>PrePrinted</code> scored property value.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS PrePrinted final : public Aspose::Page::XPS::XpsMetadata::ScoredProperty, public Aspose::Page::XPS::XpsMetadata::PageMediaType::IPageMediaTypeOptionItem
    {
        typedef PrePrinted ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::ScoredProperty BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::PageMediaType::IPageMediaTypeOptionItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// None value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PrePrinted> None;
        /// <summary>
        /// PrePrinted value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PrePrinted> PrePrintedValue;
        /// <summary>
        /// Letterhead value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PrePrinted> Letterhead;
        
    private:
    
        PrePrinted(System::String value);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PrePrinted, CODEPORTING_ARGS(System::String value));
        
    };
    
    /// <summary>
    /// Defines constants for the <code>PrePunched</code> scored property value.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS PrePunched final : public Aspose::Page::XPS::XpsMetadata::ScoredProperty, public Aspose::Page::XPS::XpsMetadata::PageMediaType::IPageMediaTypeOptionItem
    {
        typedef PrePunched ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::ScoredProperty BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::PageMediaType::IPageMediaTypeOptionItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// None value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PrePunched> None;
        /// <summary>
        /// PrePunched value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PrePunched> PrePunchedValue;
        
    private:
    
        PrePunched(System::String value);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PrePunched, CODEPORTING_ARGS(System::String value));
        
    };
    
    /// <summary>
    /// Defines constants for the <code>Recycled</code> scored property value.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS Recycled final : public Aspose::Page::XPS::XpsMetadata::ScoredProperty, public Aspose::Page::XPS::XpsMetadata::PageMediaType::IPageMediaTypeOptionItem
    {
        typedef Recycled ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::ScoredProperty BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::PageMediaType::IPageMediaTypeOptionItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// None value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::Recycled> None;
        /// <summary>
        /// Standard value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::Recycled> Standard;
        
    private:
    
        Recycled(System::String value);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Recycled, CODEPORTING_ARGS(System::String value));
        
    };
    
    /// <summary>
    /// Describes the <see cref="PageMediaType"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS PageMediaTypeOption final : public Aspose::Page::XPS::XpsMetadata::Option, public Aspose::Page::XPS::XpsMetadata::PageMediaType::IPageMediaTypeItem
    {
        typedef PageMediaTypeOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::PageMediaType::IPageMediaTypeItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Specifies Media would be Automatically selected.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> AutoSelect;
        /// <summary>
        /// Specifies archival quality media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> Archival;
        /// <summary>
        ///  Specifies specialty back printing film media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> BackPrintFilm;
        /// <summary>
        /// Specifies standard bond media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> Bond;
        /// <summary>
        /// Specifies standard card stock media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> CardStock;
        /// <summary>
        /// Specifies continuous feed media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> Continous;
        /// <summary>
        /// Specifies standard envelope media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> EnvelopePlain;
        /// <summary>
        /// Specifies windowed envelope media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> EnvelopeWindow;
        /// <summary>
        /// Specifies fabric media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> Fabric;
        /// <summary>
        /// Specifies specialty high resolution media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> HighResolution;
        /// <summary>
        /// Specifies label media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> Label;
        /// <summary>
        /// Specifies attached multi-part forms media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> MultiLayerForm;
        /// <summary>
        /// Specifies separate multi-part forms media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> MultiPartForm;
        /// <summary>
        /// Specifies standard photographic media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> Photographic;
        /// <summary>
        /// Specifies film photographic media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> PhotographicFilm;
        /// <summary>
        /// Specifies glossy photographic media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> PhotographicGlossy;
        /// <summary>
        /// Specifies high gloss photographic media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> PhotographicHighGloss;
        /// <summary>
        /// Specifies matte photographic media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> PhotographicMatte;
        /// <summary>
        /// Specifies satin photographic media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> PhotographicSatin;
        /// <summary>
        ///  Specifies semi-gloss photographic media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> PhotographicSemiGloss;
        /// <summary>
        /// Specifies standard paper media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> Plain;
        /// <summary>
        /// Specifies output to an output display in continuous form.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> Screen;
        /// <summary>
        /// Specifies output to an output display in paged form.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> ScreenPaged;
        /// <summary>
        /// Specifies specialty stationery media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> Stationary;
        /// <summary>
        /// Specifies tab stock media that is not pre-cut (single tabs).
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> TabStockFull;
        /// <summary>
        /// Specifies tab stock media that is pre-cut (multiple tabs).
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> TabStockPreCut;
        /// <summary>
        /// Specifies transparency media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> Transparency;
        /// <summary>
        /// Specifies specialty T-shirt transfer media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> TShirtTransfer;
        /// <summary>
        /// Specifies unknown or unlisted media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> None;
        
        /// <summary>
        /// Creates a new instance.
        /// </summary>
        /// <param name="optionName">An options name.</param>
        /// <param name="items">An arbitrary array of <see cref="IPageMediaTypeOptionItem"></see> instances.</param>
        ASPOSE_PAGE_SHARED_API PageMediaTypeOption(System::String optionName, const System::ArrayPtr<System::SharedPtr<PageMediaType::IPageMediaTypeOptionItem>>& items);
        /// <summary>
        /// Clones this option instance.
        /// </summary>
        /// <param name="option">An instance to clone.</param>
        ASPOSE_PAGE_SHARED_API PageMediaTypeOption(System::SharedPtr<PageMediaType::PageMediaTypeOption> option);
        
        /// <summary>
        /// Adds an array of <see cref="IPageMediaTypeOptionItem"></see> instances to the option.
        /// </summary>
        /// <param name="items">An arbitrary array of <see cref="IPageMediaTypeOptionItem"></see> instances.</param>
        /// <returns>This options instance.</returns>
        ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> Add(const System::ArrayPtr<System::SharedPtr<PageMediaType::IPageMediaTypeOptionItem>>& items);
        /// <summary>
        /// Sets a <code>Weight</code> scored property value.
        /// </summary>
        /// <param name="weight">A <code>Weight</code> scored property value.</param>
        /// <returns>This option instance.</returns>
        ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> SetWeight(int32_t weight);
        /// <summary>
        /// Clones this option instance. The shortcut to the cloneing constructor.
        /// </summary>
        /// <returns>The clone of this option instance.</returns>
        ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaType::PageMediaTypeOption> Clone();
        
    protected:
    
        ASPOSE_PAGE_SHARED_API System::ArrayPtr<System::String> get_Names() override;
        
        virtual ASPOSE_PAGE_SHARED_API ~PageMediaTypeOption();
        
    private:
    
        static System::ArrayPtr<System::String> _names;
        
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="items">An array of items specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API PageMediaType(const System::ArrayPtr<System::SharedPtr<PageMediaType::IPageMediaTypeItem>>& items);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


