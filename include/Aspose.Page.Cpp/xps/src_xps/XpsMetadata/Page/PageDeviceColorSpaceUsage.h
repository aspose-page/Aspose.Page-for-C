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
class PageDeviceColorSpaceUsage;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// In conjunction with the <see cref="PageDeviceColorSpaceProfileURI"></see> parameter, this parameter defines
/// the rendering behavior for elements presented in a device color space.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/pagedevicecolorspaceusage
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PageDeviceColorSpaceUsage final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem
{
    typedef PageDeviceColorSpaceUsage ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    typedef Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem BaseType3;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Describes the <see cref="PageDeviceColorSpaceUsage"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS PageDeviceColorSpaceUsageOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef PageDeviceColorSpaceUsageOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// If the device determines that the profile specified by the <see cref="PageDeviceColorSpaceProfileURI"></see> parameter
        /// can be used as a device color space profile, all elements using the same profile are treated as already being specified
        /// in device color space. All other elements MUST use the profile specified for that element. If the profile cannot be
        /// used as a device color space profile, elements using the profile MUST be color managed like any other element using the color profile.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageDeviceColorSpaceUsage::PageDeviceColorSpaceUsageOption> MatchToDefault;
        /// <summary>
        /// If the profile specified by the PageDeviceColorSpaceProfileURI parameter has a number of channels matching the number
        /// of primaries of the device, it SHOULD be used instead of the devices internal color management for all elements.
        /// Elements using this profile are assumed to be in device color space and will not be color managed further.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageDeviceColorSpaceUsage::PageDeviceColorSpaceUsageOption> OverrideDeviceDefault;
        
    private:
    
        PageDeviceColorSpaceUsageOption(System::String name);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageDeviceColorSpaceUsageOption, CODEPORTING_ARGS(System::String name));
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API PageDeviceColorSpaceUsage(const System::ArrayPtr<System::SharedPtr<PageDeviceColorSpaceUsage::PageDeviceColorSpaceUsageOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


