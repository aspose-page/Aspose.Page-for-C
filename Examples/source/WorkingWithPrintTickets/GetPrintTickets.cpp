#include "stdafx.h"
#include "WorkingWithPrintTickets/GetPrintTickets.h"

#include <system/string.h>
#include <system/console.h>
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

RTTI_INFO_IMPL_HASH(1276083206u, ::CSharp::WorkingWithPrintTickets::GetPrintTickets, ThisTypeBaseTypesInfo);

void GetPrintTickets::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dir = RunExamples::GetDataDir_WorkingWithPrintTickets();
    
    // Open XPS Document without print tickets
    System::SharedPtr<XpsDocument> xDocs = System::MakeObject<XpsDocument>(dir + u"input1.xps");
    
    // Get job print ticket
    System::SharedPtr<JobPrintTicket> jobPrintTicket = xDocs->get_JobPrintTicket();
    // must be null for this document
    
    // Get document print ticket
    System::SharedPtr<DocumentPrintTicket> docPrintTicket = xDocs->GetDocumentPrintTicket(1);
    // must be null for this document
    
    // Get page print ticket
    System::SharedPtr<PagePrintTicket> pagePrintTicket = xDocs->GetPagePrintTicket(1, 1);
    // must be null for this document
    
    
    // Save the document. Default print tickets are automatically added to document while saving.
    xDocs->Save(dir + u"output1.xps");
    
    // Open saved earlier XPS Document with print tickets
    System::SharedPtr<XpsDocument> xDocs2 = System::MakeObject<XpsDocument>(dir + u"output1.xps");
    
    // Print tickets must not be null
    
    System::Console::WriteLine(xDocs2->get_JobPrintTicket());
    
    System::Console::WriteLine(xDocs2->GetDocumentPrintTicket(1));
    
    System::Console::WriteLine(xDocs2->GetPagePrintTicket(1, 1));
    
    // ExEnd:1
}

} // namespace WorkingWithPrintTickets
} // namespace CSharp
