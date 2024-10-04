#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Page/IPagePrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Option.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/IJobPrintTicketItem.h"
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
class PageScaling;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the scaling characteristics of the output.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/pagescaling
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PageScaling final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem
{
    typedef PageScaling ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    typedef Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem BaseType3;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// The interface of any <see cref="PageScaling"></see> feature item.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS IPageScalingItem : public virtual Aspose::Page::XPS::XpsMetadata::IFeatureItem
    {
        typedef IPageScalingItem ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::IFeatureItem BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    };
    
    /// <summary>
    /// Describes the <see cref="PageScaling"></see> features options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS PageScalingOption final : public Aspose::Page::XPS::XpsMetadata::Option, public Aspose::Page::XPS::XpsMetadata::PageScaling::IPageScalingItem
    {
        typedef PageScalingOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::PageScaling::IPageScalingItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Specifies a custom scaling should be applied to the Application Media Size.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageScaling::PageScalingOption> Custom;
        /// <summary>
        /// Specifies a custom square scaling should be applied to the Application Media Size.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageScaling::PageScalingOption> CustomSquare;
        /// <summary>
        /// Specifies the application bleed size should be scaled to the
        /// <see cref="PageImageableSize"></see> preserving the aspect ratio.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageScaling::PageScalingOption> FitApplicationBleedSizeToPageImageableSize;
        /// <summary>
        /// Specifies the application content size should be scaled to the
        /// <see cref="PageImageableSize"></see> preserving the aspect ratio.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageScaling::PageScalingOption> FitApplicationContentSizeToPageImageableSize;
        /// <summary>
        /// Specifies the application media size should be scaled to the
        /// <see cref="PageImageableSize"></see> preserving the aspect ratio.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageScaling::PageScalingOption> FitApplicationMediaSizeToPageImageableSize;
        /// <summary>
        /// Specifies the application media size should be scaled to the
        /// <see cref="PageMediaSize"></see> preserving the aspect ratio.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageScaling::PageScalingOption> FitApplicationMediaSizeToPageMediaSize;
        /// <summary>
        /// Specifies that no scaling should be applied.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageScaling::PageScalingOption> None;
        
    private:
    
        PageScalingOption(System::String name, bool isConst = true);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageScalingOption, CODEPORTING_ARGS(System::String name, bool isConst = true));
        static System::SharedPtr<PageScaling::PageScalingOption> GetCustom();
        static System::SharedPtr<PageScaling::PageScalingOption> GetCustomSquare();
        
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    /// <summary>
    /// Describes the <see cref="ScaleOffsetAlignment"></see> features options.
    /// Specifies the alignment of the scaled content.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS ScaleOffsetAlignmentOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef ScaleOffsetAlignmentOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Specifies the scaling should be aligned on the center of the bottom edge of the media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageScaling::ScaleOffsetAlignmentOption> BottomCenter;
        /// <summary>
        /// Specifies the scaling should be aligned on the bottom left corner of the media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageScaling::ScaleOffsetAlignmentOption> BottomLeft;
        /// <summary>
        /// Specifies the scaling should be aligned on the bottom right corner of the media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageScaling::ScaleOffsetAlignmentOption> BottomRight;
        /// <summary>
        /// Specifies the scaling should be centered on the media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageScaling::ScaleOffsetAlignmentOption> Center;
        /// <summary>
        /// Specifies the scaling should be aligned on the center of the left edge of the media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageScaling::ScaleOffsetAlignmentOption> LeftCenter;
        /// <summary>
        /// Specifies the scaling should be aligned on the center of the right edge of the media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageScaling::ScaleOffsetAlignmentOption> RightCenter;
        /// <summary>
        /// Specifies the scaling should be aligned on the center of the top edge of the media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageScaling::ScaleOffsetAlignmentOption> TopCenter;
        /// <summary>
        /// Specifies the scaling should be aligned on the top left corner of the media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageScaling::ScaleOffsetAlignmentOption> TopLeft;
        /// <summary>
        /// Specifies the scaling should be aligned on the top right corner of the media.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageScaling::ScaleOffsetAlignmentOption> TopRight;
        
    private:
    
        ScaleOffsetAlignmentOption(System::String name);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ScaleOffsetAlignmentOption, CODEPORTING_ARGS(System::String name));
        
    };
    
    /// <summary>
    /// Describes inner <code>ScaleOffsetAlignment</code> feature.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS ScaleOffsetAlignment final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::PageScaling::IPageScalingItem
    {
        typedef ScaleOffsetAlignment ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
        typedef Aspose::Page::XPS::XpsMetadata::PageScaling::IPageScalingItem BaseType1;
        
        typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Creates a new instance.
        /// </summary>
        /// <param name="options">An array of options specific for the feature.</param>
        ASPOSE_PAGE_SHARED_API ScaleOffsetAlignment(const System::ArrayPtr<System::SharedPtr<PageScaling::ScaleOffsetAlignmentOption>>& options);
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="items">An array of items specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API PageScaling(const System::ArrayPtr<System::SharedPtr<PageScaling::IPageScalingItem>>& items);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


