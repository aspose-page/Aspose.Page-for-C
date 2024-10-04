#include "stdafx.h"
#include "WorkingWithDocumentConversion/XPStoPDF.h"

#include <system/io/stream.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/io/file_access.h>
#include <system/io/file.h>
#include <system/enum_helpers.h>
#include <system/details/dispose_guard.h>
#include <system/array.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsDocument.h>
#include <Aspose.Page.Cpp/xps/src_xps/Presentation/Pdf/PdfSaveOptions.h>
#include <Aspose.Page.Cpp/xps/src_xps/Import/XpsLoadOptions.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::XPS;
namespace CSharp {

namespace WorkingWithDocumentConversion {

RTTI_INFO_IMPL_HASH(487009021u, ::CSharp::WorkingWithDocumentConversion::XPStoPDF, ThisTypeBaseTypesInfo);

// Using statement is translated using System::Details::DisposeGuard class which may store exception and then throw from destructor.
// We block the warnings related as these are false alarms (the exception, if caught, will be re-thrown from the destructor).
#if defined(__MSVC__)
#pragma warning( push )
#pragma warning(disable : 4715)
#pragma warning(disable : 4700)
#pragma warning(disable : 4701)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreturn-type"
#endif
void XPStoPDF::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithDocumentConversion();
    
    // Initialize PDF output stream
    {
        System::SharedPtr<System::IO::Stream> pdfStream = System::IO::File::Open(dataDir + u"XPStoPDF_out.pdf", System::IO::FileMode::OpenOrCreate, System::IO::FileAccess::Write);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ pdfStream});
        // ------------------------------------------
        
        try
        {
            // Load XPS document form the XPS file
            System::SharedPtr<XpsDocument> document = System::MakeObject<XpsDocument>(dataDir + u"input.xps", System::MakeObject<XpsLoadOptions>());
            
            // Initialize options object with necessary parameters.
            System::SharedPtr<Aspose::Page::XPS::Presentation::Pdf::PdfSaveOptions> options = System::MakeObject<Aspose::Page::XPS::Presentation::Pdf::PdfSaveOptions>();
            options->set_JpegQualityLevel(100);
            options->set_ImageCompression(Aspose::Page::XPS::Presentation::Pdf::PdfImageCompression::Jpeg);
            options->set_TextCompression(Aspose::Page::XPS::Presentation::Pdf::PdfTextCompression::Flate);
            options->set_PageNumbers(System::MakeArray<int32_t>({1, 2, 6}));
            
            document->SaveAsPdf(pdfStream, options);
        }
        catch(...)
        {
            __dispose_guard_0.SetCurrentException(std::current_exception());
        }
    }
    // ExEnd:1
}
#if defined(__MSVC__)
#pragma warning( pop )
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

} // namespace WorkingWithDocumentConversion
} // namespace CSharp
