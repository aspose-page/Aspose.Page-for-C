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
class DocumentSeparatorSheet;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the separator sheet usage for a document.
/// Separator sheets should appear in the output as indicated by the Option specified below.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/documentseparatorsheet
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS DocumentSeparatorSheet final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem
{
    typedef DocumentSeparatorSheet ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Describes the <see cref="DocumentSeparatorSheet"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS DocumentSeparatorSheetOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef DocumentSeparatorSheetOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Specifies a separator sheet at the start and end of the document.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<DocumentSeparatorSheet::DocumentSeparatorSheetOption> BothSheets;
        /// <summary>
        /// Specifies a separator sheet at the end of the document.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<DocumentSeparatorSheet::DocumentSeparatorSheetOption> EndSheet;
        /// <summary>
        /// Specifies no separator sheet(s).
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<DocumentSeparatorSheet::DocumentSeparatorSheetOption> None;
        /// <summary>
        /// Specifies a separator sheet at the start of the document.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<DocumentSeparatorSheet::DocumentSeparatorSheetOption> StartSheet;
        
    private:
    
        DocumentSeparatorSheetOption(System::String name);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DocumentSeparatorSheetOption, CODEPORTING_ARGS(System::String name));
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API DocumentSeparatorSheet(const System::ArrayPtr<System::SharedPtr<DocumentSeparatorSheet::DocumentSeparatorSheetOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


