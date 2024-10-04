#include "stdafx.h"
#include "WorkingWithPrintTickets/EditPrintTicket.h"

#include <system/array.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Page/PageMediaSize.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/JobPrintTicket.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/JobCopiesAllDocuments.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/IJobPrintTicketItem.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsDocument.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::XPS;
using namespace Aspose::Page::XPS::XpsMetadata;
namespace CSharp {

namespace WorkingWithPrintTickets {

RTTI_INFO_IMPL_HASH(164687749u, ::CSharp::WorkingWithPrintTickets::EditPrintTicket, ThisTypeBaseTypesInfo);

void EditPrintTicket::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dir = RunExamples::GetDataDir_WorkingWithPrintTickets();
    
    // Open XPS Document with print tickets
    System::SharedPtr<XpsDocument> xDocs = System::MakeObject<XpsDocument>(dir + u"input3.xps");
    
    System::SharedPtr<JobPrintTicket> pt = xDocs->get_JobPrintTicket();
    
    // Remove some parameters from job print ticket
    pt->Remove(System::MakeArray<System::String>({u"ns0000:PageDevmodeSnapshot", u"ns0000:JobInterleaving", u"ns0000:JobImageType"}));
    
    // Add some parameters to job print ticket
    pt->Add(System::MakeArray<System::SharedPtr<IJobPrintTicketItem>>({System::MakeObject<JobCopiesAllDocuments>(2), System::MakeObject<PageMediaSize>(System::MakeArray<System::SharedPtr<PageMediaSize::IPageMediaSizeItem>>({PageMediaSize::PageMediaSizeOption::ISOA4}))}));
    
    // Save the document with changed job print ticket.
    xDocs->Save(dir + u"output3.xps");
    
    // ExEnd:1
}

} // namespace WorkingWithPrintTickets
} // namespace CSharp
