#include <stdafx.h>
#include "WorkingWithPages/AddPage.h"

#include <system/string.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPage.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsDocument.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::XPS;
using namespace Aspose::Page::XPS::XpsModel;
namespace CPP {

namespace WorkingWithPages {

RTTI_INFO_IMPL_HASH(84556988u, ::CPP::WorkingWithPages::AddPage, ThisTypeBaseTypesInfo);

void AddPage::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithPages();
    // Create new XPS Document
    System::SharedPtr<XpsDocument> doc = System::MakeObject<XpsDocument>(dataDir + u"Sample1.xps");
    
    // Insert an empty page at beginning of pages list
    doc->InsertPage(1, true);
    
    // Save resultant XPS document
    doc->Save(RunExamples::GetOutDir() + u"AddPages_out.xps");
    // ExEnd:1
}

} // namespace WorkingWithPages
} // namespace CPP
