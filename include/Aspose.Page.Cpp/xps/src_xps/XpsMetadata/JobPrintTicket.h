#pragma once

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/array.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/PrintTicket.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose { namespace Page { namespace Xps { class XpsDocument; } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsPackageParts { class FixedDocumentSequence; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class IPrintTicketItem; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsPackageParts { class FixedDocument; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsPackageParts { class FixedPage; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsMetadata {

/// <summary>
/// Class incapsulating features of a job-level print ticket
/// </summary>
class JobPrintTicket FINAL : public Aspose::Page::Xps::XpsMetadata::PrintTicket
{
    typedef JobPrintTicket ThisType;
    typedef Aspose::Page::Xps::XpsMetadata::PrintTicket BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsDocument;
    friend class Aspose::Page::Xps::XpsPackageParts::FixedDocumentSequence;
    
public:

    /// <summary>
    /// Creates job-level print ticket instance.
    /// </summary>
    /// <param name="items">Arbitrary array <see cref="IPrintTicketItem"/> objects.
    /// Each one can be <see cref="Feature"/>, <see cref="ParameterInit"/> or <see cref="Property"/> object.</param>
    ASPOSE_PAGE_SHARED_API JobPrintTicket(const System::ArrayPtr<System::SharedPtr<IPrintTicketItem>>& items);
    
protected:

    JobPrintTicket(System::String path, System::SharedPtr<System::IO::Stream> stream);
    JobPrintTicket(System::SharedPtr<PrintTicket> printTicket);
    
};

/// <summary>
/// Class incapsulating features of a document-level print ticket
/// </summary>
class DocumentPrintTicket FINAL : public Aspose::Page::Xps::XpsMetadata::PrintTicket
{
    typedef DocumentPrintTicket ThisType;
    typedef Aspose::Page::Xps::XpsMetadata::PrintTicket BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsDocument;
    friend class Aspose::Page::Xps::XpsPackageParts::FixedDocument;
    
public:

    /// <summary>
    /// Creates document-level print ticket instance.
    /// </summary>
    /// <param name="items">Arbitrary array <see cref="IPrintTicketItem"/> objects.
    /// Each one can be <see cref="Feature"/>, <see cref="ParameterInit"/> or <see cref="Property"/> object.</param>
    ASPOSE_PAGE_SHARED_API DocumentPrintTicket(const System::ArrayPtr<System::SharedPtr<IPrintTicketItem>>& items);
    
protected:

    DocumentPrintTicket(System::String path, System::SharedPtr<System::IO::Stream> stream);
    DocumentPrintTicket(System::SharedPtr<PrintTicket> printTicket);
    
};

/// <summary>
/// Class incapsulating features of a page-level print ticket
/// </summary>
class PagePrintTicket FINAL : public Aspose::Page::Xps::XpsMetadata::PrintTicket
{
    typedef PagePrintTicket ThisType;
    typedef Aspose::Page::Xps::XpsMetadata::PrintTicket BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsDocument;
    friend class Aspose::Page::Xps::XpsPackageParts::FixedPage;
    
public:

    /// <summary>
    /// Creates page-level print ticket instance.
    /// </summary>
    /// <param name="items">Arbitrary array <see cref="IPrintTicketItem"/> objects.
    /// Each one can be <see cref="Feature"/>, <see cref="ParameterInit"/> or <see cref="Property"/> object.</param>
    ASPOSE_PAGE_SHARED_API PagePrintTicket(const System::ArrayPtr<System::SharedPtr<IPrintTicketItem>>& items);
    
protected:

    PagePrintTicket(System::String path, System::SharedPtr<System::IO::Stream> stream);
    PagePrintTicket(System::SharedPtr<PrintTicket> printTicket);
    
};

} // namespace XpsMetadata
} // namespace Xps
} // namespace Page
} // namespace Aspose


