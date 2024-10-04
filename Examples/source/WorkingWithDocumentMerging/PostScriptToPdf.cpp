#include "stdafx.h"
#include "WorkingWithDocumentMerging/PostScriptToPdf.h"

#include <system/exceptions.h>
#include <system/enumerator_adapter.h>
#include <system/console.h>
#include <system/collections/ilist.h>
#include <system/array.h>
#include <Aspose.Page.Cpp/eps/src_eps/PsDocument.h>
#include <Aspose.Page.Cpp/eps/src_eps/Device/PdfSaveOptions.h>

#include "RunExamples.h"


using namespace Aspose::Page::EPS;
using namespace Aspose::Page::EPS::Device;
namespace CSharp {

namespace WorkingWithDocumentMerging {

RTTI_INFO_IMPL_HASH(1487217858u, ::CSharp::WorkingWithDocumentMerging::PostScriptToPdf, ThisTypeBaseTypesInfo);

void PostScriptToPdf::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithDocumentMerging();
    
    // Initialize PS document with the first PostScript file
    System::SharedPtr<PsDocument> document = System::MakeObject<PsDocument>(dataDir + u"input.ps");
    
    // Create an array of PostScript files that will be merged with the first one
    System::ArrayPtr<System::String> filesForMerge = System::MakeArray<System::String>({dataDir + u"input2.ps", dataDir + u"input3.ps"});
    
    // If you want to convert Postscript file despite of minor errors set this flag
    bool suppressErrors = true;
    
    //Initialize options object with necessary parameters.
    System::SharedPtr<PdfSaveOptions> options = System::MakeObject<PdfSaveOptions>(suppressErrors);
    // If you want to add special folder where fonts are stored. Default fonts folder in OS is always included.
    options->set_AdditionalFontsFolders(System::MakeArray<System::String>({u"{FONT_FOLDER}"}));
    
    // Default page size is 595x842 and it is not mandatory to set it in SaveOptions
    // But if you need to specify the page size following line
    //PdfSaveOptions options = new PdfSaveOptions(suppressErrors, new Aspose.Page.Drawing.Size(595, 842));
    
    document->MergeToPdf(dataDir + u"outputPDF_out.pdf", filesForMerge, options);
    
    //Review errors
    if (suppressErrors)
    {
        for (auto&& ex : System::IterateOver(options->get_Exceptions()))
        {
            System::Console::WriteLine(ex->get_Message());
        }
    }
    // ExEnd:1
}

} // namespace WorkingWithDocumentMerging
} // namespace CSharp
