#include "stdafx.h"
#include "GettingStarted/ApplyMeteredLicense.h"

#include <system/io/file_stream.h>
#include <system/io/file.h>
#include <system/details/dispose_guard.h>
#include <system/array.h>
#include <Aspose.Page.Cpp/Metered/Metered.h>
#include <Aspose.Page.Cpp/eps/src_eps/PsDocument.h>
#include <Aspose.Page.Cpp/eps/src_eps/Device/ImageSaveOptions.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page;
using namespace Aspose::Page::EPS;
using namespace Aspose::Page::EPS::Device;
namespace CSharp {

namespace GettingStarted {

RTTI_INFO_IMPL_HASH(1018556387u, ::CSharp::GettingStarted::ApplyMeteredLicense, ThisTypeBaseTypesInfo);

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
void ApplyMeteredLicense::Run()
{
    // ExStart:1
    // set metered public and private keys
    System::SharedPtr<Aspose::Page::Metered> metered = System::MakeObject<Aspose::Page::Metered>();
    // Access the setMeteredKey property and pass public and private keys as parameters
    metered->SetMeteredKey(u"<type public key here>", u"<type private key here>");
    
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_GettingStarted();
    //Create an instance of PostScript document from PS file
    System::SharedPtr<PsDocument> document = System::MakeObject<PsDocument>(dataDir + u"input.eps");
    //Save EPS file as image bytes. One bytes array for one page. In our case we have one page.
    System::ArrayPtr<System::ArrayPtr<uint8_t>> imagesBytes = document->SaveAsImage(System::MakeObject<ImageSaveOptions>());
    //Save image bytes to file
    {
        System::SharedPtr<System::IO::FileStream> fos = System::IO::File::OpenWrite(dataDir + u"eps_out.png");
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ fos});
        // ------------------------------------------
        
        try
        {
            fos->Write(imagesBytes[0], 0, imagesBytes[0]->get_Length());
        }
        catch(...)
        {
            __dispose_guard_0.SetCurrentException(std::current_exception());
        }
    }
    
    //Now we can check visually if Metered License is applied.
    //If resulting image doesn't contain red evaluation message It means Metered License is applied successfully.
    // ExEnd:1
}
#if defined(__MSVC__)
#pragma warning( pop )
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

} // namespace GettingStarted
} // namespace CSharp
