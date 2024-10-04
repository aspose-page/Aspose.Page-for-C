#include "stdafx.h"
// C# preprocessor directive: #if ASPOSE_DRAWING

// C# INACTIVE CODE:
// using Aspose.Page.Drawing;
// using Aspose.Page.Drawing.Drawing2D;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif

#include "WorkingWithHatches/AddHatchPatternPS.h"

#include <system/string.h>
#include <system/io/stream.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/enum_helpers.h>
#include <system/details/dispose_guard.h>
#include <Aspose.Page.Cpp/eps/src_eps/PsDocument.h>
#include <Aspose.Page.Cpp/eps/src_eps/Device/PsSaveOptions.h>
#include <drawing/rectangle_f.h>
#include <drawing/pen.h>
#include <drawing/font_style.h>
#include <drawing/font.h>
#include <drawing/drawing2d/hatch_style.h>
#include <drawing/drawing2d/hatch_brush.h>
#include <drawing/drawing2d/graphics_path.h>
#include <drawing/color.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::EPS;
using namespace Aspose::Page::EPS::Device;
namespace CSharp {

namespace WorkingWithShapes {

RTTI_INFO_IMPL_HASH(3136732402u, ::CSharp::WorkingWithShapes::AddHatchPatternPS, ThisTypeBaseTypesInfo);

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
void AddHatchPatternPS::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithHatches();
    
    //Create output stream for PostScript document
    {
        System::SharedPtr<System::IO::Stream> outPsStream = System::MakeObject<System::IO::FileStream>(dataDir + u"AddHatchPattern_outPS.ps", System::IO::FileMode::Create);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ outPsStream});
        // ------------------------------------------
        
        try
        {
            //Create save options with A4 size
            System::SharedPtr<PsSaveOptions> options = System::MakeObject<PsSaveOptions>();
            
            // Create new 1-paged PS Document
            System::SharedPtr<PsDocument> document = System::MakeObject<PsDocument>(outPsStream, options, false);
            
            int32_t x0 = 20;
            int32_t y0 = 100;
            int32_t squareSide = 32;
            int32_t width = 500;
            int32_t sumX = 0;
            
            //Restore graphics state
            document->WriteGraphicsSave();
            
            //Translate to initial point
            document->Translate(static_cast<float>(x0), static_cast<float>(y0));
            
            //Create rectngle path for every pattern square
            System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> path = System::MakeObject<System::Drawing::Drawing2D::GraphicsPath>();
            path->AddRectangle(System::Drawing::RectangleF(0.0f, 0.0f, static_cast<float>(squareSide), static_cast<float>(squareSide)));
            
            //Create pen for outlining pattern square
            System::SharedPtr<System::Drawing::Pen> pen = System::MakeObject<System::Drawing::Pen>(System::Drawing::Color::get_Black(), 2.0f);
            
            //For every hatch pattern style 
            for (System::Drawing::Drawing2D::HatchStyle hatchStyle = static_cast<System::Drawing::Drawing2D::HatchStyle>(0); hatchStyle <= (System::Drawing::Drawing2D::HatchStyle)52; hatchStyle++)
            {
                //Set paint with current hatch brush style
                document->SetPaint(System::MakeObject<System::Drawing::Drawing2D::HatchBrush>(hatchStyle, System::Drawing::Color::get_Black(), System::Drawing::Color::get_White()));
                
                //Calculate displacement in order to don't go beyond the page bounds
                int32_t x = squareSide;
                int32_t y = 0;
                if (sumX >= width)
                {
                    x = -(sumX - squareSide);
                    y += squareSide;
                }
                //Translate current graphics state
                document->Translate(static_cast<float>(x), static_cast<float>(y));
                //Fill pattern square
                document->Fill(path);
                //Set stroke
                document->SetStroke(pen);
                //Draw square outline
                document->Draw(path);
                
                //Calculate distance from X0
                if (sumX >= width)
                {
                    sumX = squareSide;
                }
                else
                {
                    sumX += x;
                }
            }
            
            //Restore graphics state
            document->WriteGraphicsRestore();
            
            //Fill text with hatch pattern
            System::SharedPtr<System::Drawing::Drawing2D::HatchBrush> brush = System::MakeObject<System::Drawing::Drawing2D::HatchBrush>(System::Drawing::Drawing2D::HatchStyle::DiagonalCross, System::Drawing::Color::get_Red(), System::Drawing::Color::get_Yellow());
            System::SharedPtr<System::Drawing::Font> font = System::MakeObject<System::Drawing::Font>(u"Arial", 96.0f, System::Drawing::FontStyle::Bold);
            document->FillAndStrokeText(u"ABC", font, 200.0f, 300.0f, brush, pen);
            
            //Outline text with hatch pattern
            brush = System::MakeObject<System::Drawing::Drawing2D::HatchBrush>(System::Drawing::Drawing2D::HatchStyle::Percent50, System::Drawing::Color::get_Blue(), System::Drawing::Color::get_White());
            document->OutlineText(u"ABC", font, 200.0f, 400.0f, System::MakeObject<System::Drawing::Pen>(brush, 5.0f));
            
            
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

} // namespace WorkingWithShapes
} // namespace CSharp
