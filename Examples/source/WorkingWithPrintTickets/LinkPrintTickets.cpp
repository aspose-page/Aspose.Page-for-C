#include "stdafx.h"
#include "WorkingWithPrintTickets/LinkPrintTickets.h"

#include <system/string.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Page/PagePrintTicket.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/JobPrintTicket.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Document/DocumentPrintTicket.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsDocument.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::XPS;
using namespace Aspose::Page::XPS::XpsMetadata;
namespace CSharp {

namespace WorkingWithPrintTickets {

RTTI_INFO_IMPL_HASH(3641517598u, ::CSharp::WorkingWithPrintTickets::LinkPrintTickets, ThisTypeBaseTypesInfo);

void LinkPrintTickets::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dir = RunExamples::GetDataDir_WorkingWithPrintTickets();
    
    // Create new XPS document
    System::SharedPtr<XpsDocument> xDocs1 = System::MakeObject<XpsDocument>();
    
    // Open XPS Document with print tickets
    System::SharedPtr<XpsDocument> xDocs2 = System::MakeObject<XpsDocument>(dir + u"input2.xps");
    
    // Link job print ticket
    xDocs1->set_JobPrintTicket(xDocs2->get_JobPrintTicket());
    
    // Link document print ticket
    xDocs1->SetDocumentPrintTicket(1, xDocs2->GetDocumentPrintTicket(2));
    
    // Link page print ticket
    xDocs1->SetPagePrintTicket(1, 1, xDocs2->GetPagePrintTicket(3, 2));
    
    
    // Save the document with linked print tickets.
    xDocs1->Save(dir + u"output1.xps");
    
    // ExEnd:1
}

} // namespace WorkingWithPrintTickets
} // namespace CSharp
