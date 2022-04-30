#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/PrintTicket.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace Tests
{
class PrintTicketTests;
} // namespace Tests
class XpsDocument;
namespace XpsMetadata
{
class IPrintTicketItem;
} // namespace XpsMetadata
namespace XpsPackageParts
{
class FixedDocument;
class FixedDocumentSequence;
class FixedPage;
} // namespace XpsPackageParts
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Class incapsulating features of a job-level print ticket
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS JobPrintTicket final : public Aspose::Page::XPS::XpsMetadata::PrintTicket
{
    typedef JobPrintTicket ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::PrintTicket BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsDocument;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedDocumentSequence;
    friend class Aspose::Page::XPS::Tests::PrintTicketTests;
    
public:

    /// <summary>
    /// Creates job-level print ticket instance.
    /// </summary>
    /// <param name="items">Arbitrary array <see cref="IPrintTicketItem"></see> objects.
    /// Each one can be <see cref="Feature"></see>, <see cref="ParameterInit"></see> or <see cref="Property"></see> object.</param>
    ASPOSE_PAGE_SHARED_API JobPrintTicket(const System::ArrayPtr<System::SharedPtr<IPrintTicketItem>>& items);
    
protected:

    JobPrintTicket(System::String path, System::SharedPtr<System::IO::Stream> stream);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(JobPrintTicket, CODEPORTING_ARGS(System::String path, System::SharedPtr<System::IO::Stream> stream));
    
    JobPrintTicket(System::SharedPtr<PrintTicket> printTicket);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(JobPrintTicket, CODEPORTING_ARGS(System::SharedPtr<PrintTicket> printTicket));
    
    virtual ASPOSE_PAGE_SHARED_API ~JobPrintTicket();
    
};

/// <summary>
/// Class incapsulating features of a document-level print ticket
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS DocumentPrintTicket final : public Aspose::Page::XPS::XpsMetadata::PrintTicket
{
    typedef DocumentPrintTicket ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::PrintTicket BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsDocument;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedDocument;
    
public:

    /// <summary>
    /// Creates document-level print ticket instance.
    /// </summary>
    /// <param name="items">Arbitrary array <see cref="IPrintTicketItem"></see> objects.
    /// Each one can be <see cref="Feature"></see>, <see cref="ParameterInit"></see> or <see cref="Property"></see> object.</param>
    ASPOSE_PAGE_SHARED_API DocumentPrintTicket(const System::ArrayPtr<System::SharedPtr<IPrintTicketItem>>& items);
    
protected:

    DocumentPrintTicket(System::String path, System::SharedPtr<System::IO::Stream> stream);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DocumentPrintTicket, CODEPORTING_ARGS(System::String path, System::SharedPtr<System::IO::Stream> stream));
    
    DocumentPrintTicket(System::SharedPtr<PrintTicket> printTicket);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DocumentPrintTicket, CODEPORTING_ARGS(System::SharedPtr<PrintTicket> printTicket));
    
    virtual ASPOSE_PAGE_SHARED_API ~DocumentPrintTicket();
    
};

/// <summary>
/// Class incapsulating features of a page-level print ticket
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PagePrintTicket final : public Aspose::Page::XPS::XpsMetadata::PrintTicket
{
    typedef PagePrintTicket ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::PrintTicket BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsDocument;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedPage;
    
public:

    /// <summary>
    /// Creates page-level print ticket instance.
    /// </summary>
    /// <param name="items">Arbitrary array <see cref="IPrintTicketItem"></see> objects.
    /// Each one can be <see cref="Feature"></see>, <see cref="ParameterInit"></see> or <see cref="Property"></see> object.</param>
    ASPOSE_PAGE_SHARED_API PagePrintTicket(const System::ArrayPtr<System::SharedPtr<IPrintTicketItem>>& items);
    
protected:

    PagePrintTicket(System::String path, System::SharedPtr<System::IO::Stream> stream);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PagePrintTicket, CODEPORTING_ARGS(System::String path, System::SharedPtr<System::IO::Stream> stream));
    
    PagePrintTicket(System::SharedPtr<PrintTicket> printTicket);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PagePrintTicket, CODEPORTING_ARGS(System::SharedPtr<PrintTicket> printTicket));
    
    virtual ASPOSE_PAGE_SHARED_API ~PagePrintTicket();
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


