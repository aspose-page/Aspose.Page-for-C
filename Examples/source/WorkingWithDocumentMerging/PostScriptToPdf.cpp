#include <stdafx.h>
#include "WorkingWithDocumentMerging/PostScriptToPdf.h"

#include <system/scope_guard.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/io/file_access.h>
#include <system/exceptions.h>
#include <system/enumerator_adapter.h>
#include <system/enum_helpers.h>
#include <system/console.h>
#include <system/collections/ilist.h>
#include <system/array.h>
#include <Aspose.Page.Cpp/eps/src_eps/PsDocument.h>
#include <Aspose.Page.Cpp/eps/src_eps/Device/PdfSaveOptions.h>
#include <Aspose.Page.Cpp/eps/src_eps/Device/PdfDevice.h>

#include "RunExamples.h"


using namespace Aspose::Page::EPS;
using namespace Aspose::Page::EPS::Device;
namespace CPP {

namespace WorkingWithDocumentMerging {

RTTI_INFO_IMPL_HASH(1487217858u, ::CPP::WorkingWithDocumentMerging::PostScriptToPdf, ThisTypeBaseTypesInfo);

void PostScriptToPdf::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithDocumentMerging();
    // Initialize PDF output stream
    System::SharedPtr<System::IO::FileStream> pdfStream = System::MakeObject<System::IO::FileStream>(RunExamples::GetOutDir() + u"outputPDF_out.pdf", System::IO::FileMode::Create, System::IO::FileAccess::Write);
    // Initialize the first PostScript file input stream
    System::SharedPtr<System::IO::FileStream> psStream = System::MakeObject<System::IO::FileStream>(dataDir + u"input.ps", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    System::SharedPtr<PsDocument> document = System::MakeObject<PsDocument>(psStream);
    
    // Create an array of PostScript files that will be merged with the first one
    System::ArrayPtr<System::String> filesForMerge = System::MakeArray<System::String>({dataDir + u"input2.ps", dataDir + u"input3.ps"});
    
    // If you want to convert Postscript file despite of minor errors set this flag
    bool suppressErrors = true;
    
    //Initialize options object with necessary parameters.
    System::SharedPtr<PdfSaveOptions> options = System::MakeObject<PdfSaveOptions>(suppressErrors);
    // If you want to add special folder where fonts are stored. Default fonts folder in OS is always included.
    options->set_AdditionalFontsFolders(System::MakeArray<System::String>({u"{FONT_FOLDER}"}));
    
    // Default page size is 595x842 and it is not mandatory to set it in PdfDevice
    System::SharedPtr<Aspose::Page::EPS::Device::PdfDevice> device = System::MakeObject<Aspose::Page::EPS::Device::PdfDevice>(pdfStream);
    // But if you need to specify size and image format use following line
    //Aspose.Page.EPS.Device.PdfDevice device = new Aspose.Page.EPS.Device.PdfDevice(pdfStream, new System.Drawing.Size(595, 842));
    
    
    {
        auto __finally_guard_0 = ::System::MakeScopeGuard([&psStream, &pdfStream]()
        {
            psStream->Close();
            pdfStream->Close();
        });
        
        try
        {
            document->Merge(filesForMerge, device, options);
        }
        catch (...)
        {
            throw;
        }
    }
    
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
} // namespace CPP
