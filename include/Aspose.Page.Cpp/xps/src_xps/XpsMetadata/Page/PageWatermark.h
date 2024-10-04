#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

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
class PageWatermark;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the watermark setting of the output and the watermark characteristics. Watermarks apply
/// to the logical page, not the physical page. For example, if <see cref="DocumentDuplex"></see> is enabled,
/// a watermark will appear on each <code>NUp</code> page on each sheet. If <see cref="DocumentDuplex"></see>,
/// <code>PagesPerSheet</code>=2, then each sheet will have 2 watermarks.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/pagewatermark
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PageWatermark final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem
{
    typedef PageWatermark ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    typedef Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem BaseType3;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// The interface of any <see cref="PageWatermark"></see> feature item.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS IPageWatermarkItem : public virtual Aspose::Page::XPS::XpsMetadata::IFeatureItem
    {
        typedef IPageWatermarkItem ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::IFeatureItem BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    };
    
    /// <summary>
    /// The interface of any <see cref="PageWatermarkOption"></see> item.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS IPageWatermarkOptionItem : public Aspose::Page::XPS::XpsMetadata::IOptionItem
    {
        typedef IPageWatermarkOptionItem ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::IOptionItem BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    };
    
    /// <summary>
    /// Describes the <see cref="PageWatermark"></see> features options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS PageWatermarkOption final : public Aspose::Page::XPS::XpsMetadata::Option, public Aspose::Page::XPS::XpsMetadata::PageWatermark::IPageWatermarkItem
    {
        typedef PageWatermarkOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::PageWatermark::IPageWatermarkItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Specifies a text only watermark.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageWatermark::PageWatermarkOption> Text;
        
        /// <summary>
        /// Creates a new instance.
        /// </summary>
        /// <param name="optionName">An options name.</param>
        /// <param name="items">An arbitrary array of <see cref="IPageWatermarkOptionItem"></see> instances.</param>
        ASPOSE_PAGE_SHARED_API PageWatermarkOption(System::String optionName, const System::ArrayPtr<System::SharedPtr<PageWatermark::IPageWatermarkOptionItem>>& items);
        /// <summary>
        /// Clones this option instance.
        /// </summary>
        /// <param name="option">An instance to clone.</param>
        ASPOSE_PAGE_SHARED_API PageWatermarkOption(System::SharedPtr<PageWatermark::PageWatermarkOption> option);
        
        /// <summary>
        /// Adds an array of <see cref="IPageWatermarkOptionItem"></see> instances to the option.
        /// </summary>
        /// <param name="items">An arbitrary array of <see cref="IPageWatermarkOptionItem"></see> instances.</param>
        /// <returns>This options instance.</returns>
        ASPOSE_PAGE_SHARED_API System::SharedPtr<PageWatermark::PageWatermarkOption> Add(const System::ArrayPtr<System::SharedPtr<PageWatermark::IPageWatermarkOptionItem>>& items);
        /// <summary>
        /// Clones this option instance. The shortcut to the cloneing constructor.
        /// </summary>
        /// <returns>The clone of this option instance.</returns>
        ASPOSE_PAGE_SHARED_API System::SharedPtr<PageWatermark::PageWatermarkOption> Clone();
        
    protected:
    
        virtual ASPOSE_PAGE_SHARED_API ~PageWatermarkOption();
        
    private:
    
        static System::SharedPtr<PageWatermark::PageWatermarkOption> GetText();
        
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    /// <summary>
    /// Describes the <see cref="Layering"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS LayeringOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef LayeringOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Watermark appears over page content.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageWatermark::LayeringOption> Overlay;
        /// <summary>
        /// Watermark appear under page content.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageWatermark::LayeringOption> Underlay;
        
    private:
    
        LayeringOption(System::String name);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(LayeringOption, CODEPORTING_ARGS(System::String name));
        
    };
    
    /// <summary>
    /// Describes inner <code>Layering</code> feature. Defines the layering behavior of the watermark.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS Layering final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::PageWatermark::IPageWatermarkItem
    {
        typedef Layering ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::PageWatermark::IPageWatermarkItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Creates a new instance.
        /// </summary>
        /// <param name="options">An array of options specific for the feature.</param>
        ASPOSE_PAGE_SHARED_API Layering(const System::ArrayPtr<System::SharedPtr<PageWatermark::LayeringOption>>& options);
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="items">An array of items specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API PageWatermark(const System::ArrayPtr<System::SharedPtr<PageWatermark::IPageWatermarkItem>>& items);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


