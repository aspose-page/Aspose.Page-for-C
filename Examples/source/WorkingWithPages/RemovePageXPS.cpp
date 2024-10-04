#include "stdafx.h"
#include "WorkingWithPages/RemovePageXPS.h"

#include <system/string.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPage.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsDocument.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::XPS;
using namespace Aspose::Page::XPS::XpsModel;
namespace CSharp {

namespace WorkingWithPages {

RTTI_INFO_IMPL_HASH(2679249332u, ::CSharp::WorkingWithPages::RemovePageXPS, ThisTypeBaseTypesInfo);

void RemovePageXPS::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithPages();
    
    // Create new XPS Document
    System::SharedPtr<XpsDocument> doc = System::MakeObject<XpsDocument>(dataDir + u"Sample2.xps");
    
    // Remove the first page (at index 1).
    doc->RemovePageAt(1);
    
    // Save resultant XPS document
    doc->Save(dataDir + u"Sample2_out.xps");
    // ExEnd:1
}

} // namespace WorkingWithPages
} // namespace CSharp
