#include "stdafx.h"
#include "ExampleDirectories.h"

using namespace System::Drawing;
using namespace Aspose::Page;
using namespace Aspose::Page::Xps;
using namespace Aspose::Page::Xps::Presentation::Image;

namespace WorkingWithDocumentConversion {

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

void XPStoBMP()
{
    // Input file
    System::String inputFileName = dataDir() + u"input.xps";
    //Outut file 
    System::String outputFileName = outDir() + u"XPStoImage_out.bmp";
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
            System::SharedPtr<BmpSaveOptions> options = [&]{ auto tmp_0 = System::MakeObject<BmpSaveOptions>(); tmp_0->set_SmoothingMode(System::Drawing::Drawing2D::SmoothingMode::HighQuality); tmp_0->set_Resolution(300); tmp_0->set_PageNumbers(System::MakeArray<int32_t>({1, 2, 6})); return tmp_0; }();
            
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
						System::String str = System::IO::Path::GetDirectoryName(outputFileName) + u"\\" + System::IO::Path::GetFileNameWithoutExtension(outputFileName) + u"_" + (i + 1) + u"_" + (j + 1) + System::IO::Path::GetExtension(outputFileName);
                        System::SharedPtr<System::IO::Stream> imageStream = System::IO::File::Open(str, System::IO::FileMode::Create, System::IO::FileAccess::Write);
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
}

void XPStoJPEG()
{
    // Input file
    System::String inputFileName = dataDir() + u"input.xps";
    //Outut file 
    System::String outputFileName = outDir() + u"XPStoImage_out.jpeg";
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
            System::SharedPtr<JpegSaveOptions> options = [&]{ auto tmp_0 = System::MakeObject<JpegSaveOptions>(); tmp_0->set_SmoothingMode(System::Drawing::Drawing2D::SmoothingMode::HighQuality); tmp_0->set_Resolution(300); tmp_0->set_PageNumbers(System::MakeArray<int32_t>({1, 2, 6})); return tmp_0; }();
            
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
                        System::SharedPtr<System::IO::Stream> imageStream = System::IO::File::Open(System::IO::Path::GetDirectoryName(outputFileName) + u"\\" + System::IO::Path::GetFileNameWithoutExtension(outputFileName) + u"_" + (i + 1) + u"_" + (j + 1) + System::IO::Path::GetExtension(outputFileName), System::IO::FileMode::Create, System::IO::FileAccess::Write);
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
}

void XPStoPDF()
{
    // Initialize PDF output stream
    {
        System::SharedPtr<System::IO::Stream> pdfStream = System::IO::File::Open(outDir() + u"XPStoPDF.pdf", System::IO::FileMode::Create, System::IO::FileAccess::Write);
        // Clearing resources under 'using' statement
		System::Details::DisposeGuard<1> __dispose_guard_1({ pdfStream });
        // ------------------------------------------
        
        try{
            System::SharedPtr<System::IO::Stream> xpsStream = System::IO::File::Open(dataDir() + u"input.xps", System::IO::FileMode::Open, System::IO::FileAccess::Read);
            // Clearing resources under 'using' statement
            System::Details::DisposeGuard<1> __dispose_guard_0({ xpsStream});
            // ------------------------------------------
            
            try
            {
                // Load XPS document form the stream
                System::SharedPtr<XpsDocument> document = System::MakeObject<XpsDocument>(xpsStream, System::MakeObject<XpsLoadOptions>());
                // or load XPS document directly from file. No xpsStream is needed then.
                // XpsDocument document = new XpsDocument(inputFileName, new XpsLoadOptions());
                
                // Initialize options object with necessary parameters.
                System::SharedPtr<Aspose::Page::Xps::Presentation::Pdf::PdfSaveOptions> options = [&]{ auto tmp_0 = System::MakeObject<Aspose::Page::Xps::Presentation::Pdf::PdfSaveOptions>(); tmp_0->set_JpegQualityLevel(100); tmp_0->set_ImageCompression(Aspose::Page::Xps::Presentation::Pdf::PdfImageCompression::Jpeg); tmp_0->set_TextCompression(Aspose::Page::Xps::Presentation::Pdf::PdfTextCompression::Flate); tmp_0->set_PageNumbers(System::MakeArray<int32_t>({1, 2, 6})); return tmp_0; }();
                
                // Create rendering device for PDF format
                System::SharedPtr<Aspose::Page::Xps::Presentation::Pdf::PdfDevice> device = System::MakeObject<Aspose::Page::Xps::Presentation::Pdf::PdfDevice>(pdfStream);
                
                document->Save(device, options);
            }
            catch(...)
            {
                __dispose_guard_0.SetCurrentException(std::current_exception());
            }
        }
        catch(...)
        {
            __dispose_guard_1.SetCurrentException(std::current_exception());
        }
    }
}

void XPStoPNG()
{
    // Input file
    System::String inputFileName = dataDir() + u"input.xps";
    //Outut file 
    System::String outputFileName = outDir() + u"XPStoImage_out.png";
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
            System::SharedPtr<PngSaveOptions> options = [&]{ auto tmp_0 = System::MakeObject<PngSaveOptions>(); tmp_0->set_SmoothingMode(System::Drawing::Drawing2D::SmoothingMode::HighQuality); tmp_0->set_Resolution(300); tmp_0->set_PageNumbers(System::MakeArray<int32_t>({1, 2, 6})); return tmp_0; }();
            
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
                        System::SharedPtr<System::IO::Stream> imageStream = System::IO::File::Open(System::IO::Path::GetDirectoryName(outputFileName) + u"\\" + System::IO::Path::GetFileNameWithoutExtension(outputFileName) + u"_" + (i + 1) + u"_" + (j + 1) + System::IO::Path::GetExtension(outputFileName), System::IO::FileMode::Create, System::IO::FileAccess::Write);
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
}

void XPStoTIFF()
{
    // Input file
    System::String inputFileName = dataDir() + u"input.xps";
    //Outut file 
    System::String outputFileName = outDir() + u"XPStoImage_out.tif";
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
            System::SharedPtr<TiffSaveOptions> options = [&]{ auto tmp_0 = System::MakeObject<TiffSaveOptions>(); tmp_0->set_SmoothingMode(System::Drawing::Drawing2D::SmoothingMode::HighQuality); tmp_0->set_Resolution(300); tmp_0->set_PageNumbers(System::MakeArray<int32_t>({1, 2, 6})); return tmp_0; }();
            
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
                        System::SharedPtr<System::IO::Stream> imageStream = System::IO::File::Open(System::IO::Path::GetDirectoryName(outputFileName) + u"\\" + System::IO::Path::GetFileNameWithoutExtension(outputFileName) + u"_" + (i + 1) + u"_" + (j + 1) + System::IO::Path::GetExtension(outputFileName), System::IO::FileMode::Create, System::IO::FileAccess::Write);
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
}

#if defined(__MSVC__)
#pragma warning( pop )
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

} // namespace WorkingWithDocumentConversion