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
class PageColorManagement;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Configures color management for the current page.
/// This is considered automatic in SHIM - DM_ICMMethod Add System.
/// Describes what component should perform color management (i.e. Driver).
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/pagecolormanagement
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PageColorManagement final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem
{
    typedef PageColorManagement ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    typedef Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem BaseType3;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Describes the <see cref="PageColorManagement"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS PageColorManagementOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef PageColorManagementOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Application has performed color management to the destination profile.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageColorManagement::PageColorManagementOption> None;
        /// <summary>
        /// Application has not performed color management and the device determines color management.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageColorManagement::PageColorManagementOption> Device;
        /// <summary>
        /// Application has not performed color management and the driver determines color management.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageColorManagement::PageColorManagementOption> Driver;
        /// <summary>
        /// Color management is performed by the system. Not to be used when printing to XPSDrv print drivers.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageColorManagement::PageColorManagementOption> System;
        
    private:
    
        PageColorManagementOption(System::String name);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageColorManagementOption, CODEPORTING_ARGS(System::String name));
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API PageColorManagement(const System::ArrayPtr<System::SharedPtr<PageColorManagement::PageColorManagementOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


