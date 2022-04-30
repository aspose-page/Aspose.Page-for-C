#include <stdafx.h>
#include "PostScriptToImage.h"

#include <system/scope_guard.h>
#include <system/object_ext.h>
#include <system/io/path.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/io/file_access.h>
#include <system/exceptions.h>
#include <system/enumerator_adapter.h>
#include <system/enum_helpers.h>
#include <system/details/dispose_guard.h>
#include <system/convert.h>
#include <system/console.h>
#include <system/collections/ilist.h>
#include <system/array.h>
#include <Aspose.Page.Cpp/eps/src_eps/PsDocument.h>
#include <Aspose.Page.Cpp/eps/src_eps/PsConverterException.h>
#include <Aspose.Page.Cpp/eps/src_eps/Device/ImageSaveOptions.h>
#include <Aspose.Page.Cpp/eps/src_eps/Device/ImageDevice.h>
#include <drawing/imaging/image_format.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::EPS;
using namespace Aspose::Page::EPS::Device;
namespace CPP {

namespace WorkingWithDocumentConversion {

RTTI_INFO_IMPL_HASH(2156412980u, ::CPP::WorkingWithDocumentConversion::PostScriptToImage, ThisTypeBaseTypesInfo);

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
void PostScriptToImage::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithDocumentConversion();
    // Initialize PDF output stream
    System::SharedPtr<System::Drawing::Imaging::ImageFormat> imageFormat = System::Drawing::Imaging::ImageFormat::get_Png();
    // Initialize PostScript input stream
    System::SharedPtr<System::IO::FileStream> psStream = System::MakeObject<System::IO::FileStream>(dataDir + u"inputForImage.ps", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    
    System::SharedPtr<PsDocument> document = System::MakeObject<PsDocument>(psStream);
    
    // If you want to convert Postscript file despite of minor errors set this flag
    bool suppressErrors = true;
    
    //Initialize options object with necessary parameters.
    System::SharedPtr<ImageSaveOptions> options = System::MakeObject<ImageSaveOptions>(suppressErrors);
    
    // If you want to add special folder where fonts are stored. Default fonts folder in OS is always included.
    options->set_AdditionalFontsFolders(System::MakeArray<System::String>({u"{FONT_FOLDER}"}));
    
    // Default image format is PNG and it is not mandatory to set it in ImageDevice
    // Default image size is 595x842 and it is not mandatory to set it in ImageDevice
    System::SharedPtr<Aspose::Page::EPS::Device::ImageDevice> device = System::MakeObject<Aspose::Page::EPS::Device::ImageDevice>();
    // But if you need to specify size and image format use constructor with parameters
    //ImageDevice device = new ImageDevice(new System.Drawing.Size(595, 842), System.Drawing.Imaging.ImageFormat.Jpeg);
    
    
    {
        auto __finally_guard_0 = ::System::MakeScopeGuard([&psStream]()
        {
            psStream->Close();
        });
        
        try
        {
            document->Save(device, options);
        }
        catch (...)
        {
            throw;
        }
    }
    
    System::ArrayPtr<System::ArrayPtr<uint8_t>> imagesBytes = device->get_ImagesBytes();
    
    int32_t i = 0;
    
    for (System::ArrayPtr<uint8_t> imageBytes : imagesBytes)
    {
        System::String imagePath = System::IO::Path::GetFullPath(RunExamples::GetOutDir() + System::String(u"out_image") + System::Convert::ToString(i) + u"." + System::ObjectExt::ToString(imageFormat).ToLower());
        {
            System::SharedPtr<System::IO::FileStream> fs = System::MakeObject<System::IO::FileStream>(imagePath, System::IO::FileMode::Create, System::IO::FileAccess::Write);
            // Clearing resources under 'using' statement
            System::Details::DisposeGuard<1> __dispose_guard_1({ fs});
            // ------------------------------------------
            
            try
            {
                fs->Write(imageBytes, 0, imageBytes->get_Length());
            }
            catch(...)
            {
                __dispose_guard_1.SetCurrentException(std::current_exception());
            }
        }
        i++;
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
#if defined(__MSVC__)
#pragma warning( pop )
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

} // namespace WorkingWithDocumentConversion
} // namespace CPP
