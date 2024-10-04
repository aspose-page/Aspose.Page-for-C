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
class PageBlackGenerationProcessing;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Specifies black generation behavior for CMYK separations.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/pageblackgenerationprocessing
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PageBlackGenerationProcessing final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem
{
    typedef PageBlackGenerationProcessing ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    typedef Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem BaseType3;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Describes the <see cref="PageBlackGenerationProcessing"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS PageBlackGenerationProcessingOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef PageBlackGenerationProcessingOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Automatic option.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageBlackGenerationProcessing::PageBlackGenerationProcessingOption> Automatic;
        /// <summary>
        /// Custom option.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageBlackGenerationProcessing::PageBlackGenerationProcessingOption> Custom;
        
    private:
    
        PageBlackGenerationProcessingOption(System::String name, bool isConst = true);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageBlackGenerationProcessingOption, CODEPORTING_ARGS(System::String name, bool isConst = true));
        static System::SharedPtr<PageBlackGenerationProcessing::PageBlackGenerationProcessingOption> getCustom();
        
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API PageBlackGenerationProcessing(const System::ArrayPtr<System::SharedPtr<PageBlackGenerationProcessing::PageBlackGenerationProcessingOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


