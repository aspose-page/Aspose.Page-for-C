#include "stdafx.h"
#include "WorkingWithDocumentConversion/PostScriptToPdf.h"

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

namespace WorkingWithDocumentConversion {

RTTI_INFO_IMPL_HASH(4271893451u, ::CSharp::WorkingWithDocumentConversion::PostScriptToPdf, ThisTypeBaseTypesInfo);

void PostScriptToPdf::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithDocumentConversion();
    
    // Initialize PsDocument with the name of PostScript file.
    System::SharedPtr<PsDocument> document = System::MakeObject<PsDocument>(dataDir + u"input.ps");
    
    // If you want to convert Postscript file despite of minor errors set this flag
    bool suppressErrors = true;
    
    //Initialize options object with necessary parameters.
    System::SharedPtr<PdfSaveOptions> options = System::MakeObject<PdfSaveOptions>(suppressErrors);
    // If you want to add special folder where fonts are stored. Default fonts folder in OS is always included.
    options->set_AdditionalFontsFolders(System::MakeArray<System::String>({u"{FONT_FOLDER}"}));
    // Default page size is 595x842 and it is not mandatory to set it in PdfSaveOptions
    // But if you need to specify sizeuse following line
    //PdfSaveOptions options = new PdfSaveOptions(suppressErrorsnew, Aspose.Page.Drawing.Size(595x842));
    // or
    //saveOptions.Size = new Aspose.Page.Drawing.Size(595x842);
    
    // Save document as PDF
    document->SaveAsPdf(dataDir + u"outputPDF_out.pdf", options);
    
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

} // namespace WorkingWithDocumentConversion
} // namespace CSharp
