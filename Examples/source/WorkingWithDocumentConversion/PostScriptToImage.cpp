#include "stdafx.h"
#include "PostScriptToImage.h"

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
#include <Aspose.Page.Cpp/eps/src_eps/PsDocumentException.h>
#include <Aspose.Page.Cpp/eps/src_eps/PsConverterException.h>
#include <Aspose.Page.Cpp/eps/src_eps/Device/ImageSaveOptions.h>
#include <Aspose.Page.Cpp/Drawing/Imaging/ImageFormat.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::EPS;
using namespace Aspose::Page::EPS::Device;
namespace CSharp {

namespace WorkingWithDocumentConversion {

RTTI_INFO_IMPL_HASH(2156412980u, ::CSharp::WorkingWithDocumentConversion::PostScriptToImage, ThisTypeBaseTypesInfo);

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
    
    // Initialize PsDocument with the name of PostScript file.
    System::SharedPtr<PsDocument> document = System::MakeObject<PsDocument>(dataDir + u"inputForImage.ps");
    
    // If you want to convert Postscript file despite of minor errors set this flag
    bool suppressErrors = true;
    
    //Initialize options object with necessary parameters.
    System::SharedPtr<ImageSaveOptions> options = System::MakeObject<ImageSaveOptions>();
    
    //Set output image format.
    options->set_ImageFormat(Aspose::Page::Drawing::Imaging::ImageFormat::Wmf);
    
    // If you want to add special folder where fonts are stored. Default fonts folder in OS is always included.
    options->set_AdditionalFontsFolders(System::MakeArray<System::String>({u"{FONT_FOLDER}"}));
    
    // Save PS document as array of image bytes, one bytes array for one page.
    System::ArrayPtr<System::ArrayPtr<uint8_t>> imagesBytes = document->SaveAsImage(options);
    
    //Save images bytes arrays as image files.
    
    int32_t i = 0;
    
    for (System::ArrayPtr<uint8_t> imageBytes : imagesBytes)
    {
        System::String imagePath = System::IO::Path::GetFullPath(dataDir + u"out_image" + System::Convert::ToString(i) + u"." + System::ObjectExt::ToString(options->get_ImageFormat()).ToLower());
        {
            System::SharedPtr<System::IO::FileStream> fs = System::MakeObject<System::IO::FileStream>(imagePath, System::IO::FileMode::Create, System::IO::FileAccess::Write);
            // Clearing resources under 'using' statement
            System::Details::DisposeGuard<1> __dispose_guard_0({ fs});
            // ------------------------------------------
            
            try
            {
                fs->Write(imageBytes, 0, imageBytes->get_Length());
            }
            catch(...)
            {
                __dispose_guard_0.SetCurrentException(std::current_exception());
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
} // namespace CSharp
