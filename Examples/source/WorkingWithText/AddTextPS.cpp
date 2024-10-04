#include "stdafx.h"
// C# preprocessor directive: #if ASPOSE_DRAWING

// C# INACTIVE CODE:
// using Aspose.Page.Drawing;
// using Aspose.Page.Drawing.Drawing2D;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif

#include "WorkingWithText/AddTextPS.h"

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
#include <drawing/pen.h>
#include <drawing/font_style.h>
#include <drawing/font.h>
#include <drawing/color.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page;
using namespace Aspose::Page::EPS;
using namespace Aspose::Page::EPS::Device;
using namespace Aspose::Page::Font;
namespace CSharp {

namespace WorkingWithText {

RTTI_INFO_IMPL_HASH(2116923892u, ::CSharp::WorkingWithText::AddTextPS, ThisTypeBaseTypesInfo);

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
void AddTextPS::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithText();
    
    System::String FONTS_FOLDER = RunExamples::GetDataDir_Data() + u"necessary_fonts/";
    
    //Create output stream for PostScript document
    {
        System::SharedPtr<System::IO::Stream> outPsStream = System::MakeObject<System::IO::FileStream>(dataDir + u"AddText_outPS.ps", System::IO::FileMode::Create);
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
            System::String str = u"ABCDEFGHIJKLMNO";
            int32_t fontSize = 48;
            
            // Create new 1-paged PS Document
            System::SharedPtr<PsDocument> document = System::MakeObject<PsDocument>(outPsStream, options, false);
            
            ////////////////////////////////////// Using sysem font (located in system fonts folders) for filling text //////////////////
            System::SharedPtr<System::Drawing::Font> font = System::MakeObject<System::Drawing::Font>(u"Times New Roman", static_cast<float>(fontSize), System::Drawing::FontStyle::Bold);
            //Fill text with default or already defined color. In given case it is black.
            document->FillText(str, font, 50.0f, 100.0f);
            //Fill text with Blue color.
            document->FillText(str, font, 50.0f, 150.0f, System::MakeObject<System::Drawing::SolidBrush>(System::Drawing::Color::get_Blue()));
            /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            
            ////////////////////////////////////// Using custom font (located in custom fonts folders) for filling text /////////////////
            System::SharedPtr<DrFont> drFont = ExternalFontCache::FetchDrFont(u"Palatino Linotype", static_cast<float>(fontSize), System::Drawing::FontStyle::Regular);
            //Fill text with default or already defined color. In given case it is black.
            document->FillText(str, drFont, 50.0f, 200.0f);
            //Fill text with Blue color.
            document->FillText(str, drFont, 50.0f, 250.0f, System::MakeObject<System::Drawing::SolidBrush>(System::Drawing::Color::get_Blue()));
            /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            
            ////////////////////////////////////// Using sysem font (located in system fonts folders) for outlining text ////////////////
            //Outline text with default or already defined pen. In given case it is black colored 1-points width pen.
            document->OutlineText(str, font, 50.0f, 300.0f);
            //Outline text with blue-violet colored 2-points width pen.
            document->OutlineText(str, font, 50.0f, 350.0f, System::MakeObject<System::Drawing::Pen>(System::MakeObject<System::Drawing::SolidBrush>(System::Drawing::Color::get_BlueViolet()), 2.0f));
            //Fill text with orange color and stroke with blue colored 2-points width pen.
            document->FillAndStrokeText(str, font, 50.0f, 400.0f, System::MakeObject<System::Drawing::SolidBrush>(System::Drawing::Color::get_Yellow()), System::MakeObject<System::Drawing::Pen>(System::MakeObject<System::Drawing::SolidBrush>(System::Drawing::Color::get_BlueViolet()), 2.0f));
            /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            
            ////////////////////////////////////// Using custom font (located in custom fonts folders) for outlining text /////////////////
            //Outline text with default or already defined pen. In given case it is black colored 1-points width pen.
            document->OutlineText(str, drFont, 50.0f, 450.0f);
            //Outline text with blue-violet colored 2-points width pen.
            document->OutlineText(str, drFont, 50.0f, 500.0f, System::MakeObject<System::Drawing::Pen>(System::MakeObject<System::Drawing::SolidBrush>(System::Drawing::Color::get_BlueViolet()), 2.0f));
            //Fill text with orange color and stroke with blue colored 2-points width pen.
            document->FillAndStrokeText(str, drFont, 50.0f, 550.0f, System::MakeObject<System::Drawing::SolidBrush>(System::Drawing::Color::get_Orange()), System::MakeObject<System::Drawing::Pen>(System::MakeObject<System::Drawing::SolidBrush>(System::Drawing::Color::get_Blue()), 2.0f));
            ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            
            /////////////////////////////// Using custom font (located in custom fonts folders) ang glyphs widths for filling text ////////
            drFont = ExternalFontCache::FetchDrFont(u"Palatino Linotype", static_cast<float>(fontSize), System::Drawing::FontStyle::Regular);
            //Glyphs widths
            System::ArrayPtr<float> widths = System::MakeArray<float>({87, 87, 87, 87, 34, 87, 87});
            //Fill ASCII text using with assigning glyphs widths.
            document->FillText(u"BAMBOOK", widths, drFont, 50.0f, 600.0f, System::MakeObject<System::Drawing::SolidBrush>(System::Drawing::Color::get_Blue()));
            ///////////////////////////// Using custom font (located in custom fonts folders) ang glyphs widths for filling unicode text //
            //Glyphs widths
            widths = System::MakeArray<float>({87, 34, 87, 87, 87, 87, 87});
            //Fill Unicode text using with assigning glyphs widths.
            document->FillText(u"ЗООПАРК", widths, drFont, 50.0f, 650.0f, System::MakeObject<System::Drawing::SolidBrush>(System::Drawing::Color::get_Orange()));
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
