#include "stdafx.h"
#include "WorkingWithDocumentMerging/XPStoPDF.h"

#include <system/array.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsDocument.h>
#include <Aspose.Page.Cpp/xps/src_xps/Presentation/Pdf/PdfSaveOptions.h>
#include <Aspose.Page.Cpp/xps/src_xps/Import/XpsLoadOptions.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::XPS;
namespace CSharp {

namespace WorkingWithDocumentMerging {

RTTI_INFO_IMPL_HASH(3812426182u, ::CSharp::WorkingWithDocumentMerging::XPStoPDF, ThisTypeBaseTypesInfo);

void XPStoPDF::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithDocumentMerging();
    
    // Load XPS document form the XPS file
    System::SharedPtr<XpsDocument> document = System::MakeObject<XpsDocument>(dataDir + u"input.xps", System::MakeObject<XpsLoadOptions>());
    
    // Initialize options object with necessary parameters.
    System::SharedPtr<Aspose::Page::XPS::Presentation::Pdf::PdfSaveOptions> options = System::MakeObject<Aspose::Page::XPS::Presentation::Pdf::PdfSaveOptions>();
    options->set_JpegQualityLevel(100);
    options->set_ImageCompression(Aspose::Page::XPS::Presentation::Pdf::PdfImageCompression::Jpeg);
    options->set_TextCompression(Aspose::Page::XPS::Presentation::Pdf::PdfTextCompression::Flate);
    
    // Create an array of XPS files that will be merged with the first one
    System::ArrayPtr<System::String> filesToMerge = System::MakeArray<System::String>({dataDir + u"Demo.xps", dataDir + u"sample.xps"});
    
    // Merge XPS files to output PDF file
    document->MergeToPdf(filesToMerge, dataDir + u"mergedXPSfiles.pdf", options);
    
    // ExEnd:1
}

} // namespace WorkingWithDocumentMerging
} // namespace CSharp
