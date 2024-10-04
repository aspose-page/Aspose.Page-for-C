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
class PageSourceColorProfile;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Defines the characteristics of the source color profile.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/pagesourcecolorprofile
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PageSourceColorProfile final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem
{
    typedef PageSourceColorProfile ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    typedef Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem BaseType3;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Describes the <see cref="PageSourceColorProfile"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS PageSourceColorProfileOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef PageSourceColorProfileOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Source profile used to perform color management for untagged RGB data.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageSourceColorProfile::PageSourceColorProfileOption> RGB;
        /// <summary>
        /// Source profile used to perform color management for untagged CMYK data.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageSourceColorProfile::PageSourceColorProfileOption> CMYK;
        /// <summary>
        /// No source profile.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageSourceColorProfile::PageSourceColorProfileOption> None;
        
    private:
    
        PageSourceColorProfileOption(System::String name);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageSourceColorProfileOption, CODEPORTING_ARGS(System::String name));
        static System::SharedPtr<PageSourceColorProfile::PageSourceColorProfileOption> Get(System::String name);
        
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API PageSourceColorProfile(const System::ArrayPtr<System::SharedPtr<PageSourceColorProfile::PageSourceColorProfileOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


