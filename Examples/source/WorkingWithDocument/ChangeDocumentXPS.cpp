#include "stdafx.h"
// C# preprocessor directive: #if ASPOSE_DRAWING

// C# INACTIVE CODE:
// using FontStyle = Aspose.Page.Drawing.FontStyle;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif

#include "WorkingWithDocument/ChangeDocumentXPS.h"

#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/io/file_access.h>
#include <system/io/file.h>
#include <system/enum_helpers.h>
#include <system/details/dispose_guard.h>
#include <system/array.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPage.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsGlyphs.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsSolidColorBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsDocument.h>
#include <Aspose.Page.Cpp/xps/src_xps/Import/XpsLoadOptions.h>
#include <drawing/font_style.h>
#include <drawing/color.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::XPS;
using namespace Aspose::Page::XPS::XpsModel;
namespace CSharp {

namespace WorkingWithDocument {

RTTI_INFO_IMPL_HASH(4135399013u, ::CSharp::WorkingWithDocument::ChangeDocumentXPS, ThisTypeBaseTypesInfo);

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
void ChangeDocumentXPS::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dir = RunExamples::GetDataDir_WorkingWithDocument();
    // Open a stream of XPS file
    {
        System::SharedPtr<System::IO::FileStream> xpsStream = System::IO::File::Open(dir + u"input1.xps", System::IO::FileMode::Open, System::IO::FileAccess::Read);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ xpsStream});
        // ------------------------------------------
        
        try
        {
            // Create PS document from stream
            System::SharedPtr<XpsDocument> document = System::MakeObject<XpsDocument>(xpsStream, System::MakeObject<XpsLoadOptions>());
            
            // Create fill of the signature text
            System::SharedPtr<XpsSolidColorBrush> textFill = document->CreateSolidColorBrush(System::Drawing::Color::get_BlueViolet());
            
            // Define pages where signature will be set
            System::ArrayPtr<int32_t> pageNumbers = System::MakeArray<int32_t>({1, 2, 3});
            
            // For every defined page set signature "Confirmed" at coordinates x=650 and y=950
            for (int32_t i = 0; i < pageNumbers->get_Length(); i++)
            {
                // Define active page
                document->SelectActivePage(pageNumbers[i]);
                
                // Create glyphs object
                System::SharedPtr<XpsGlyphs> glyphs = document->AddGlyphs(u"Arial", 24.0f, System::Drawing::FontStyle::Bold, 650.0f, 900.0f, u"Confirmed");
                
                // define fill for glyphs
                glyphs->set_Fill(textFill);
            }
            
            // save changed XPS document
            document->Save(dir + u"input1_out.xps");
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
