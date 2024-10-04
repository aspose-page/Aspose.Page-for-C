#include "stdafx.h"
#include "WorkingWithDocumentMerging/XPStoXPS.h"

#include <system/array.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsDocument.h>
#include <Aspose.Page.Cpp/xps/src_xps/Import/XpsLoadOptions.h>

#include "RunExamples.h"


using namespace Aspose::Page::XPS;
namespace CSharp {

namespace WorkingWithDocumentMerging {

RTTI_INFO_IMPL_HASH(3879305423u, ::CSharp::WorkingWithDocumentMerging::XPStoXPS, ThisTypeBaseTypesInfo);

void XPStoXPS::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithDocumentMerging();
    
    // Load XPS document from XPS file
    System::SharedPtr<XpsDocument> document = System::MakeObject<XpsDocument>(dataDir + u"input.xps", System::MakeObject<XpsLoadOptions>());
    
    // Create an array of XPS files that will be merged with the first one
    System::ArrayPtr<System::String> filesToMerge = System::MakeArray<System::String>({dataDir + u"Demo.xps", dataDir + u"sample.xps"});
    
    // Merge XPS files to output XPS document
    document->Merge(filesToMerge, dataDir + u"mergedXPSfiles.xps");
    
    // ExEnd:1
}

} // namespace WorkingWithDocumentMerging
} // namespace CSharp
