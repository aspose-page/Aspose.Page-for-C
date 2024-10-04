#include "stdafx.h"
#include "WorkingWithPages/AddPage1PS.h"

#include <system/string.h>
#include <system/io/stream.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/details/dispose_guard.h>
#include <Aspose.Page.Cpp/eps/src_eps/PsDocument.h>
#include <Aspose.Page.Cpp/eps/src_eps/Device/PsSaveOptions.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::EPS;
using namespace Aspose::Page::EPS::Device;
namespace CSharp {

namespace WorkingWithPages {

RTTI_INFO_IMPL_HASH(3201637368u, ::CSharp::WorkingWithPages::AddPage1PS, ThisTypeBaseTypesInfo);

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
void AddPage1PS::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithPages();
    
    //Create output stream for PostScript document
    {
        System::SharedPtr<System::IO::Stream> outPsStream = System::MakeObject<System::IO::FileStream>(dataDir + u"document1.ps", System::IO::FileMode::Create);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ outPsStream});
        // ------------------------------------------
        
        try
        {
            //Create save options with A4 size
            System::SharedPtr<PsSaveOptions> options = System::MakeObject<PsSaveOptions>();
            
            // Create new 2-paged PS Document
            System::SharedPtr<PsDocument> document = System::MakeObject<PsDocument>(outPsStream, options, 2);
            
            //Add the first page
            document->OpenPage();
            
            //Add content
            
            //Close the first page
            document->ClosePage();
            
            //Add the second page with different size
            document->OpenPage(400.0f, 700.0f);
            
            //Add content
            
            //Close the second page
            document->ClosePage();
            
            //Save the document
            document->Save();
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

} // namespace WorkingWithPages
} // namespace CSharp
