#include "stdafx.h"
#include "WorkingWithDocument/CreateDocumentPS.h"

#include <system/io/stream.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/details/dispose_guard.h>
#include <system/array.h>
#include <Aspose.Page.Cpp/Margins.h>
#include <Aspose.Page.Cpp/eps/src_eps/PsDocument.h>
#include <Aspose.Page.Cpp/eps/src_eps/PageConstants.h>
#include <Aspose.Page.Cpp/eps/src_eps/Device/PsSaveOptions.h>
#include <Aspose.Page.Cpp/Drawing/Size.h>

#include "RunExamples.h"


using namespace Aspose::Page::EPS;
using namespace Aspose::Page::EPS::Device;
namespace CSharp {

namespace WorkingWithDocument {

RTTI_INFO_IMPL_HASH(4013846565u, ::CSharp::WorkingWithDocument::CreateDocumentPS, ThisTypeBaseTypesInfo);

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
void CreateDocumentPS::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dir = RunExamples::GetDataDir_WorkingWithDocument();
    
    //Create output stream for PostScript document
    {
        System::SharedPtr<System::IO::Stream> outPsStream = System::MakeObject<System::IO::FileStream>(dir + u"document.ps", System::IO::FileMode::Create);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ outPsStream});
        // ------------------------------------------
        
        try
        {
            //Create save options
            System::SharedPtr<PsSaveOptions> options = System::MakeObject<PsSaveOptions>();
            //If you want to aassign page size other than A4, set page size in options
            options->set_PageSize(PageConstants::GetSize(PageConstants::SIZE_A4(), PageConstants::ORIENTATION_PORTRAIT()));
            //If you want to aassign page margins other empty, set page margins in options
            options->set_Margins(PageConstants::GetMargins(PageConstants::MARGINS_ZERO()));
            //If you plan to use fonts that located in non system folders, set additional fonts folders in options
            options->set_AdditionalFontsFolders(System::MakeArray<System::String>({dir}));
            
            //Set variable that indicates if resulting PostScript document will be multipaged
            bool multiPaged = false;
            
            // Create new multipaged PS Document with one page opened
            System::SharedPtr<PsDocument> document = System::MakeObject<PsDocument>(outPsStream, options, multiPaged);
            
            //Close current page
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

} // namespace WorkingWithDocument
} // namespace CSharp
