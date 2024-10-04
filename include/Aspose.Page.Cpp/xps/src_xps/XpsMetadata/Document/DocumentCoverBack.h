#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

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
class DocumentCoverBack;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the back (ending) cover sheet. Each document will have a separate sheet.
/// The cover sheet should be printed on the <see cref="PageMediaSize"></see> and <see cref="PageMediaType"></see>
/// used for the final page of the document. The cover sheet should be integrated into processing options
/// (such as <see cref="DocumentDuplex"></see>, <see cref="DocumentNUp"></see>) as indicated by the Option specified.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/documentcoverback
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS DocumentCoverBack final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem
{
    typedef DocumentCoverBack ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Describes the <see cref="DocumentCoverBack"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS CoverBackOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef CoverBackOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Specifies no cover will be output.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<DocumentCoverBack::CoverBackOption> NoCover;
        /// <summary>
        /// Specifies the cover indicated by "CoverBackSource" should be printed on the back side 
        /// of the cover sheet. If a <see cref="DocumentCoverBackSource"></see> <see cref="ParameterInit"></see>
        /// element is not specified, this Option should be ignored.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<DocumentCoverBack::CoverBackOption> PrintBack;
        /// <summary>
        /// Specifies the cover indicated by "CoverBackSource" may be printed on either sides 
        /// of the cover sheet. If a <see cref="DocumentCoverBackSource"></see> <see cref="ParameterInit"></see>
        /// element is not specified, this Option should be ignored.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<DocumentCoverBack::CoverBackOption> PrintBoth;
        /// <summary>
        /// Specifies the cover indicated by "CoverBackSource" should be printed on the front side 
        /// of the cover sheet. If a <see cref="DocumentCoverBackSource"></see> <see cref="ParameterInit"></see>
        /// element is not specified, this Option should be ignored.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<DocumentCoverBack::CoverBackOption> PrintFront;
        /// <summary>
        /// Specifies a blank cover sheet should be printed.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<DocumentCoverBack::CoverBackOption> BlankCover;
        
    private:
    
        CoverBackOption(System::String name, bool addSource = true);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CoverBackOption, CODEPORTING_ARGS(System::String name, bool addSource = true));
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API DocumentCoverBack(const System::ArrayPtr<System::SharedPtr<DocumentCoverBack::CoverBackOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


