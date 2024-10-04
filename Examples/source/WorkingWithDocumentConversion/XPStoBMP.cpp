#include "stdafx.h"
// C# preprocessor directive: #if ASPOSE_DRAWING

// C# INACTIVE CODE:
// using SmoothingMode = Aspose.Page.Drawing.Drawing2D.SmoothingMode;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif

#include "WorkingWithDocumentConversion/XPStoBMP.h"

#include <system/io/stream.h>
#include <system/io/path.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/io/file_access.h>
#include <system/io/file.h>
#include <system/enum_helpers.h>
#include <system/details/dispose_guard.h>
#include <system/array.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsDocument.h>
#include <Aspose.Page.Cpp/xps/src_xps/Presentation/Image/BmpSaveOptions.h>
#include <Aspose.Page.Cpp/xps/src_xps/Import/XpsLoadOptions.h>
#include <drawing/drawing2d/smoothing_mode.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::XPS;
using namespace Aspose::Page::XPS::Presentation::Image;
namespace CSharp {

namespace WorkingWithDocumentConversion {

RTTI_INFO_IMPL_HASH(371938352u, ::CSharp::WorkingWithDocumentConversion::XPStoBMP, ThisTypeBaseTypesInfo);

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
void XPStoBMP::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithDocumentConversion();
    
    //Outut file 
    System::String outputFileName = dataDir + u"XPStoImage_out.bmp";
    
    // Load XPS document form the XPS file
    System::SharedPtr<XpsDocument> document = System::MakeObject<XpsDocument>(dataDir + u"input.xps", System::MakeObject<XpsLoadOptions>());
    
    // Initialize options object with necessary parameters.
    System::SharedPtr<BmpSaveOptions> options = System::MakeObject<BmpSaveOptions>();
    options->set_SmoothingMode(System::Drawing::Drawing2D::SmoothingMode::HighQuality);
    options->set_Resolution(300);
    options->set_PageNumbers(System::MakeArray<int32_t>({1, 2, 6}));
    
    // Save XPS document to the images byte arrays. The first dimension is for inner documents
    // and the second one is for pages within inner documents.
    System::ArrayPtr<System::ArrayPtr<System::ArrayPtr<uint8_t>>> imagesBytes = document->SaveAsImage(options);
    
    // Iterate through document partitions (fixed documents, in XPS terms)
    for (int32_t i = 0; i < imagesBytes->get_Length(); i++)
    {
        // Iterate through partition pages
        for (int32_t j = 0; j < imagesBytes[i]->get_Length(); j++)
        {
            // Initialize image output stream
            {
                System::SharedPtr<System::IO::Stream> imageStream = System::IO::File::Open(System::IO::Path::GetDirectoryName(outputFileName) + System::IO::Path::DirectorySeparatorChar + System::IO::Path::GetFileNameWithoutExtension(outputFileName) + u"_" + (i + 1) + u"_" + (j + 1) + System::IO::Path::GetExtension(outputFileName), System::IO::FileMode::Create, System::IO::FileAccess::Write);
                // Clearing resources under 'using' statement
                System::Details::DisposeGuard<1> __dispose_guard_0({ imageStream});
                // ------------------------------------------
                
                try
                {
                    imageStream->Write(imagesBytes[i][j], 0, imagesBytes[i][j]->get_Length());
                }
                catch(...)
                {
                    __dispose_guard_0.SetCurrentException(std::current_exception());
                }
            }
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
