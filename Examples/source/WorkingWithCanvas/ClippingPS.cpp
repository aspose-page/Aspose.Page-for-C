#include "stdafx.h"
// C# preprocessor directive: #if ASPOSE_DRAWING

// C# INACTIVE CODE:
// using Aspose.Page.Drawing;
// using Aspose.Page.Drawing.Drawing2D;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif

#include "WorkingWithCanvas/ClippingPS.h"

#include <system/string.h>
#include <system/io/stream.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/enum_helpers.h>
#include <system/details/dispose_guard.h>
#include <Aspose.Page.Cpp/eps/src_eps/PsDocument.h>
#include <Aspose.Page.Cpp/eps/src_eps/Device/PsSaveOptions.h>
#include <drawing/solid_brush.h>
#include <drawing/rectangle_f.h>
#include <drawing/pen.h>
#include <drawing/font_style.h>
#include <drawing/font.h>
#include <drawing/drawing2d/graphics_path.h>
#include <drawing/drawing2d/dash_style.h>
#include <drawing/color.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::EPS;
using namespace Aspose::Page::EPS::Device;
namespace CSharp {

namespace WorkingWithCanvas {

RTTI_INFO_IMPL_HASH(1917413869u, ::CSharp::WorkingWithCanvas::ClippingPS, ThisTypeBaseTypesInfo);

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
void ClippingPS::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithCanvas();
    
    //Create output stream for PostScript document
    {
        System::SharedPtr<System::IO::Stream> outPsStream = System::MakeObject<System::IO::FileStream>(dataDir + u"Clipping_outPS.ps", System::IO::FileMode::Create);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ outPsStream});
        // ------------------------------------------
        
        try
        {
            //Create save options with default values
            System::SharedPtr<PsSaveOptions> options = System::MakeObject<PsSaveOptions>();
            
            // Create new 1-paged PS Document
            System::SharedPtr<PsDocument> document = System::MakeObject<PsDocument>(outPsStream, options, false);
            
            //Create graphics path from the rectangle
            System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> rectanglePath = System::MakeObject<System::Drawing::Drawing2D::GraphicsPath>();
            rectanglePath->AddRectangle(System::Drawing::RectangleF(0.0f, 0.0f, 300.0f, 200.0f));
            
            ////////////////////////////////////// Clipping by shape //////////////////////////////////////////////////////////////////////
            
            //Save graphics state in order to return back to this state after transformation
            document->WriteGraphicsSave();
            
            //Displace current graphics state on 100 points to the right and 100 points to the bottom.
            document->Translate(100.0f, 100.0f);
            
            //Create graphics path from the circle
            System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> circlePath = System::MakeObject<System::Drawing::Drawing2D::GraphicsPath>();
            circlePath->AddEllipse(System::Drawing::RectangleF(50.0f, 0.0f, 200.0f, 200.0f));
            
            //Add clipping by circle to the current graphics state
            document->Clip(circlePath);
            
            //Set paint in the current graphics state
            document->SetPaint(System::MakeObject<System::Drawing::SolidBrush>(System::Drawing::Color::get_Blue()));
            
            //Fill the rectangle in the current graphics state (with clipping)
            document->Fill(rectanglePath);
            
            //Restore graphics state to the previus (upper) level
            document->WriteGraphicsRestore();
            
            //Displace upper level graphics state on 100 points to the right and 100 points to the bottom.
            document->Translate(100.0f, 100.0f);
            
            System::SharedPtr<System::Drawing::Pen> pen = System::MakeObject<System::Drawing::Pen>(System::MakeObject<System::Drawing::SolidBrush>(System::Drawing::Color::get_Blue()), 2.0f);
            pen->set_DashStyle(System::Drawing::Drawing2D::DashStyle::Dash);
            
            document->SetStroke(pen);
            
            //Draw the rectangle in the current graphics state (has no clipping) above clipped rectangle
            document->Draw(rectanglePath);
            
            ////////////////////////////////////// Clipping by text //////////////////////////////////////////////////////////////////////
            
            //Save graphics state in order to return back to this state after transformation
            document->WriteGraphicsSave();
            
            //Displace current graphics state on 100 points to the right and 100 points to the bottom.
            document->Translate(0.0f, 350.0f);
            
            int32_t fontSize = 120;
            System::SharedPtr<System::Drawing::Font> font = System::MakeObject<System::Drawing::Font>(u"Arial", static_cast<float>(fontSize), System::Drawing::FontStyle::Bold);
            
            //Clip rectangle by text's outline
            document->ClipText(u"ABC", font, 20.0f, static_cast<float>(fontSize + 10));
            document->Fill(rectanglePath);
            
            document->WriteGraphicsRestore();
            
            document->Translate(0.0f, 350.0f);
            
            document->SetStroke(pen);
            //Draw the rectangle in the current graphics state (has no clipping) above clipped rectangle
            document->Draw(rectanglePath);
            
            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            
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

} // namespace WorkingWithCanvas
} // namespace CSharp
