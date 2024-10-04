#include "stdafx.h"
// C# preprocessor directive: #if ASPOSE_DRAWING

// C# INACTIVE CODE:
// using Aspose.Page.Drawing;
// using Aspose.Page.Drawing.Drawing2D;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif

#include "WorkingWithText/AddTextUsingUnicodeStringPS.h"

#include <system/io/stream.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/enum_helpers.h>
#include <system/details/dispose_guard.h>
#include <system/array.h>
#include <Aspose.Page.Cpp/Font/DrFont.h>
#include <Aspose.Page.Cpp/ExternalFontCache.h>
#include <Aspose.Page.Cpp/eps/src_eps/PsDocument.h>
#include <Aspose.Page.Cpp/eps/src_eps/Device/PsSaveOptions.h>
#include <drawing/solid_brush.h>
#include <drawing/font_style.h>
#include <drawing/color.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page;
using namespace Aspose::Page::EPS;
using namespace Aspose::Page::EPS::Device;
using namespace Aspose::Page::Font;
namespace CSharp {

namespace WorkingWithText {

RTTI_INFO_IMPL_HASH(3162789598u, ::CSharp::WorkingWithText::AddTextUsingUnicodeStringPS, ThisTypeBaseTypesInfo);

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
void AddTextUsingUnicodeStringPS::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithText();
    
    System::String FONTS_FOLDER = RunExamples::GetDataDir_Data() + u"necessary_fonts/";
    
    //Create output stream for PostScript document
    {
        System::SharedPtr<System::IO::Stream> outPsStream = System::MakeObject<System::IO::FileStream>(dataDir + u"AddTextUsingUnocodeString_outPS.ps", System::IO::FileMode::Create);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ outPsStream});
        // ------------------------------------------
        
        try
        {
            //Create save options with A4 size
            System::SharedPtr<PsSaveOptions> options = System::MakeObject<PsSaveOptions>();
            // Set custom fonts folder. It will be added to system fonts folders for finding needed font.
            options->set_AdditionalFontsFolders(System::MakeArray<System::String>({FONTS_FOLDER}));
            //A text to write to PS file
            System::String str = u"試してみます。";
            int32_t fontSize = 48;
            
            // Create new 1-paged PS Document
            System::SharedPtr<PsDocument> document = System::MakeObject<PsDocument>(outPsStream, options, false);
            
            ////////////////////////////////////// Using custom font (located in custom fonts folders) for filling text /////////////////
            System::SharedPtr<DrFont> drFont = ExternalFontCache::FetchDrFont(u"Arial Unicode MS", static_cast<float>(fontSize), System::Drawing::FontStyle::Regular);
            //Fill text with default or already defined color. In given case it is black.
            document->FillText(str, drFont, 50.0f, 200.0f);
            //Fill text with Blue color.
            document->FillText(str, drFont, 50.0f, 250.0f, System::MakeObject<System::Drawing::SolidBrush>(System::Drawing::Color::get_Blue()));
            /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            
            ////////////////////////////////////// Using custom font (located in custom fonts folders) for outlining text /////////////////
            //Outline text with default or already defined pen. In given case it is black colored 1-points width pen.
            /*document.OutlineText(str, drFont, 50, 450);
                            //Outline text with blue-violet colored 2-points width pen.
                            document.OutlineText(str, drFont, 50, 500, new Pen(new SolidBrush(Color.BlueViolet), 2));
                            //Fill text with orange color and stroke with blue colored 2-points width pen.
                            document.FillAndStrokeText(str, drFont, 50, 550, new SolidBrush(Color.Orange), new Pen(new SolidBrush(Color.Blue), 2));*/
            ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            
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

} // namespace WorkingWithText
} // namespace CSharp
