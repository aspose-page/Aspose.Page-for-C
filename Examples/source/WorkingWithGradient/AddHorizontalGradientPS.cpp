#include "stdafx.h"
// C# preprocessor directive: #if ASPOSE_DRAWING

// C# INACTIVE CODE:
// using Aspose.Page.Drawing;
// using Aspose.Page.Drawing.Drawing2D;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif

#include "WorkingWithGradient/AddHorizontalGradientPS.h"

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
#include <drawing/drawing2d/matrix.h>
#include <drawing/drawing2d/linear_gradient_brush.h>
#include <drawing/drawing2d/graphics_path.h>
#include <drawing/color.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::EPS;
using namespace Aspose::Page::EPS::Device;
namespace CSharp {

namespace WorkingWithGradient {

RTTI_INFO_IMPL_HASH(3619539864u, ::CSharp::WorkingWithGradient::AddHorizontalGradientPS, ThisTypeBaseTypesInfo);

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
void AddHorizontalGradientPS::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithGradient();
    
    //Create output stream for PostScript document
    {
        System::SharedPtr<System::IO::Stream> outPsStream = System::MakeObject<System::IO::FileStream>(dataDir + u"HorizontalGradient_outPS.ps", System::IO::FileMode::Create);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ outPsStream});
        // ------------------------------------------
        
        try
        {
            //Create save options with A4 size
            System::SharedPtr<PsSaveOptions> options = System::MakeObject<PsSaveOptions>();
            
            // Create new 1-paged PS Document
            System::SharedPtr<PsDocument> document = System::MakeObject<PsDocument>(outPsStream, options, false);
            
            float offsetX = 200.0f;
            float offsetY = 100.0f;
            float width = 200.0f;
            float height = 100.0f;
            
            //Create graphics path from the first rectangle
            System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> path = System::MakeObject<System::Drawing::Drawing2D::GraphicsPath>();
            path->AddRectangle(System::Drawing::RectangleF(offsetX, offsetY, width, height));
            
            //Create linear gradient brush with rectangle as a bounds, start and end colors
            System::SharedPtr<System::Drawing::Drawing2D::LinearGradientBrush> brush = System::MakeObject<System::Drawing::Drawing2D::LinearGradientBrush>(System::Drawing::RectangleF(0.0f, 0.0f, width, height), System::Drawing::Color::FromArgb(150, 0, 0, 0), System::Drawing::Color::FromArgb(50, 40, 128, 70), 0.f);
            //Create a transform for brush. X and Y scale component must be equal to width and height of the rectangle correspondingly.
            //Translation components are offsets of the rectangle
            System::SharedPtr<System::Drawing::Drawing2D::Matrix> brushTransform = System::MakeObject<System::Drawing::Drawing2D::Matrix>(width, 0.0f, 0.0f, height, offsetX, offsetY);
            //Set transform
            brush->set_Transform(brushTransform);
            
            //Set paint
            document->SetPaint(brush);
            
            //Fill the rectangle
            document->Fill(path);
            
            //Fill text with gradient
            System::SharedPtr<System::Drawing::Font> font = System::MakeObject<System::Drawing::Font>(u"Arial", 96.0f, System::Drawing::FontStyle::Bold);
            document->FillAndStrokeText(u"ABC", font, 200.0f, 300.0f, brush, System::MakeObject<System::Drawing::Pen>(System::MakeObject<System::Drawing::SolidBrush>(System::Drawing::Color::get_Black()), 2.0f));
            
            //Set current stroke
            document->SetStroke(System::MakeObject<System::Drawing::Pen>(brush, 5.0f));
            //Outline text with gradient
            document->OutlineText(u"ABC", font, 200.0f, 400.0f);
            
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

} // namespace WorkingWithGradient
} // namespace CSharp
