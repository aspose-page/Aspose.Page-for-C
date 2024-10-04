#include "stdafx.h"
#include "WorkingWithCrossPackageOperations/ManipulatePages.h"

#include <system/string.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPage.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsDocument.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::XPS;
using namespace Aspose::Page::XPS::XpsModel;
namespace CSharp {

namespace WorkingWithCrossPackageOperations {

RTTI_INFO_IMPL_HASH(1082190280u, ::CSharp::WorkingWithCrossPackageOperations::ManipulatePages, ThisTypeBaseTypesInfo);

void ManipulatePages::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithCrossPackageOperations();
    
    // Create the first XPS Document
    System::SharedPtr<XpsDocument> doc1 = System::MakeObject<XpsDocument>(dataDir + u"input1.xps");
    
    // Create the second XPS Document
    System::SharedPtr<XpsDocument> doc2 = System::MakeObject<XpsDocument>(dataDir + u"input2.xps");
    
    // Create the third XPS Document
    System::SharedPtr<XpsDocument> doc3 = System::MakeObject<XpsDocument>(dataDir + u"input3.xps");
    
    // Create the fourth XPS Document
    System::SharedPtr<XpsDocument> doc4 = System::MakeObject<XpsDocument>();
    
    // Insert active page (1 in this case) from the second document to the beginning of the fourth document
    doc4->InsertPage(1, doc2->get_Page(), false);
    
    // Insert active page (1 in this case) from the third document to the end of the fourth document
    doc4->AddPage(doc3->get_Page(), false);
    
    // Remove page 2 from the fourth document. This is an empty page that was created when document has been created.
    doc4->RemovePageAt(2);
    
    // Insert page 3 from the first document to the second postion of the fourth document
    doc4->InsertPage(2, doc1->SelectActivePage(3), false);
    
    // Save the fourth XPS document
    doc4->Save(dataDir + u"out.xps");
    // ExEnd:1
}

} // namespace WorkingWithCrossPackageOperations
} // namespace CSharp
