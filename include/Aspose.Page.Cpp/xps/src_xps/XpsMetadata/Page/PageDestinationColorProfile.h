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
class PageDestinationColorProfile;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Defines the characteristics of the destination color profile.
/// Describes whether the application or driver selects the destination color profile to be used.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/pagedestinationcolorprofile
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PageDestinationColorProfile final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem
{
    typedef PageDestinationColorProfile ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    typedef Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem BaseType3;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Describes the <see cref="PageDestinationColorProfile"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS PageDestinationColorProfileOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef PageDestinationColorProfileOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Application specifies the destination profile to be used.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageDestinationColorProfile::PageDestinationColorProfileOption> Application;
        /// <summary>
        /// Destination profile used to perform color management.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageDestinationColorProfile::PageDestinationColorProfileOption> DriverConfiguration;
        
    private:
    
        PageDestinationColorProfileOption(System::String name, bool isConst = true);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageDestinationColorProfileOption, CODEPORTING_ARGS(System::String name, bool isConst = true));
        static System::SharedPtr<PageDestinationColorProfile::PageDestinationColorProfileOption> getApplication();
        
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API PageDestinationColorProfile(const System::ArrayPtr<System::SharedPtr<PageDestinationColorProfile::PageDestinationColorProfileOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


