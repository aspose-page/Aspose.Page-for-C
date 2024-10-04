#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

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
class IJobPrintTicketItem;
} // namespace XpsMetadata
namespace XpsPackageParts
{
class FixedDocumentSequence;
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
/// The class that incapsulates a job-level print ticket.
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
    /// Creates a job-level print ticket instance.
    /// </summary>
    /// <param name="items">An arbitrary array of <see cref="IJobPrintTicketItem"></see> instances.
    /// Each one can be a <see cref="Feature"></see>, a <see cref="ParameterInit"></see> or a <see cref="Property"></see> instance.</param>
    ASPOSE_PAGE_SHARED_API JobPrintTicket(const System::ArrayPtr<System::SharedPtr<IJobPrintTicketItem>>& items);
    
    /// <summary>
    /// Adds an array of items to the end of this PrintTicket item list. 
    /// Each one may be a <see cref="Feature"></see>, an <see cref="Option"></see> or a <see cref="Property"></see> instance.
    /// </summary>
    /// <param name="items">An array of items to add.</param>
    ASPOSE_PAGE_SHARED_API void Add(const System::ArrayPtr<System::SharedPtr<IJobPrintTicketItem>>& items);
    
protected:

    JobPrintTicket(System::String path, System::SharedPtr<System::IO::Stream> stream);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(JobPrintTicket, CODEPORTING_ARGS(System::String path, System::SharedPtr<System::IO::Stream> stream));
    
    JobPrintTicket(System::SharedPtr<PrintTicket> printTicket);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(JobPrintTicket, CODEPORTING_ARGS(System::SharedPtr<PrintTicket> printTicket));
    
    virtual ASPOSE_PAGE_SHARED_API ~JobPrintTicket();
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


