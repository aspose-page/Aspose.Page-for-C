#include <stdafx.h>
#include "WorkingWithDocumentConversion/XPStoPNG.h"

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
#include <Aspose.Page.Cpp/xps/src_xps/Presentation/Image/PngSaveOptions.h>
#include <Aspose.Page.Cpp/xps/src_xps/Presentation/Image/ImageDevice.h>
#include <Aspose.Page.Cpp/xps/src_xps/Import/XpsLoadOptions.h>
#include <drawing/drawing2d/smoothing_mode.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::XPS;
using namespace Aspose::Page::XPS::Presentation::Image;
namespace CPP {

namespace WorkingWithDocumentConversion {

RTTI_INFO_IMPL_HASH(487665012u, ::CPP::WorkingWithDocumentConversion::XPStoPNG, ThisTypeBaseTypesInfo);

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
void XPStoPNG::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithDocumentConversion();
    // Input file
    System::String inputFileName = dataDir + u"input.xps";
    //Outut file 
    System::String outputFileName = RunExamples::GetOutDir() + u"XPStoImage_out.png";
    // Initialize XPS input stream
    {
        System::SharedPtr<System::IO::Stream> xpsStream = System::IO::File::Open(inputFileName, System::IO::FileMode::Open, System::IO::FileAccess::Read);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_1({ xpsStream});
        // ------------------------------------------
        
        try
        {
            // Load XPS document form the stream
            System::SharedPtr<XpsDocument> document = System::MakeObject<XpsDocument>(xpsStream, System::MakeObject<XpsLoadOptions>());
            // or load XPS document directly from file. No xpsStream is needed then.
            // XpsDocument document = new XpsDocument(inputFileName, new XpsLoadOptions());
            
            // Initialize options object with necessary parameters.
            System::SharedPtr<PngSaveOptions> options = System::MakeObject<PngSaveOptions>();
            options->set_SmoothingMode(System::Drawing::Drawing2D::SmoothingMode::HighQuality);
            options->set_Resolution(300);
            options->set_PageNumbers(System::MakeArray<int32_t>({1, 2, 6}));
            
            // Create rendering device for PDF format
            System::SharedPtr<ImageDevice> device = System::MakeObject<ImageDevice>();
            
            document->Save(device, options);
            
            // Iterate through document partitions (fixed documents, in XPS terms)
            for (int32_t i = 0; i < device->get_Result()->get_Length(); i++)
            {
                for (int32_t j = 0; j < device->get_Result()[i]->get_Length(); j++)
                {
                    // Initialize image output stream
                    {
                        System::SharedPtr<System::IO::Stream> imageStream = System::IO::File::Open(System::IO::Path::Combine(System::IO::Path::GetDirectoryName(outputFileName), System::IO::Path::GetFileNameWithoutExtension(outputFileName) + u"_" + (i + 1) + u"_" + (j + 1) + System::IO::Path::GetExtension(outputFileName)), System::IO::FileMode::Create, System::IO::FileAccess::Write);
                        // Clearing resources under 'using' statement
                        System::Details::DisposeGuard<1> __dispose_guard_0({ imageStream});
                        // ------------------------------------------
                        
                        try
                        {
                            imageStream->Write(device->get_Result()[i][j], 0, device->get_Result()[i][j]->get_Length());
                        }
                        catch(...)
                        {
                            __dispose_guard_0.SetCurrentException(std::current_exception());
                        }
                    }
                }
            }
        }
        catch(...)
        {
            __dispose_guard_1.SetCurrentException(std::current_exception());
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
} // namespace CPP
