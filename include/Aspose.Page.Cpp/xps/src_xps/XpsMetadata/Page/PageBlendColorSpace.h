#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Page/IPagePrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Option.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/IJobPrintTicketItem.h"
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
class PageBlendColorSpace;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the color space that should be used for blending operations.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/pageblendcolorspace
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PageBlendColorSpace final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem
{
    typedef PageBlendColorSpace ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    typedef Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem BaseType3;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Describes the <see cref="PageBlendColorSpace"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS PageBlendColorSpaceOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef PageBlendColorSpaceOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// sRGB color space SHOULD be used for blending.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageBlendColorSpace::PageBlendColorSpaceOption> sRGB;
        /// <summary>
        /// scRGB color space SHOULD be used for blending.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageBlendColorSpace::PageBlendColorSpaceOption> scRGB;
        /// <summary>
        /// Specifies an ICC profile defining the color space that SHOULD be used for blending.
        /// Note: This applies to XPS Documents only and should not be used in arbitrary PrintTickets.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageBlendColorSpace::PageBlendColorSpaceOption> ICCProfile;
        
    private:
    
        PageBlendColorSpaceOption(System::String name, bool isConst = true);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageBlendColorSpaceOption, CODEPORTING_ARGS(System::String name, bool isConst = true));
        static System::SharedPtr<PageBlendColorSpace::PageBlendColorSpaceOption> GetICCProfile();
        
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API PageBlendColorSpace(const System::ArrayPtr<System::SharedPtr<PageBlendColorSpace::PageBlendColorSpaceOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


