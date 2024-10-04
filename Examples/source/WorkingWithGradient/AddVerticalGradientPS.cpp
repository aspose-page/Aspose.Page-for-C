#include "stdafx.h"
// C# preprocessor directive: #if ASPOSE_DRAWING

// C# INACTIVE CODE:
// using Aspose.Page.Drawing;
// using Aspose.Page.Drawing.Drawing2D;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif

#include "WorkingWithGradient/AddVerticalGradientPS.h"

#include <system/io/stream.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/details/dispose_guard.h>
#include <system/array.h>
#include <Aspose.Page.Cpp/eps/src_eps/PsDocument.h>
#include <Aspose.Page.Cpp/eps/src_eps/Device/PsSaveOptions.h>
#include <drawing/rectangle_f.h>
#include <drawing/drawing2d/matrix.h>
#include <drawing/drawing2d/linear_gradient_brush.h>
#include <drawing/drawing2d/graphics_path.h>
#include <drawing/drawing2d/color_blend.h>
#include <drawing/color.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::EPS;
using namespace Aspose::Page::EPS::Device;
namespace CSharp {

namespace WorkingWithGradient {

RTTI_INFO_IMPL_HASH(1169409482u, ::CSharp::WorkingWithGradient::AddVerticalGradientPS, ThisTypeBaseTypesInfo);

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
void AddVerticalGradientPS::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithGradient();
    
    //Create output stream for PostScript document
    {
        System::SharedPtr<System::IO::Stream> outPsStream = System::MakeObject<System::IO::FileStream>(dataDir + u"VerticalGradient_outPS.ps", System::IO::FileMode::Create);
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
            
            //Create an array of interpolation colors
            System::ArrayPtr<System::Drawing::Color> colors = System::MakeArray<System::Drawing::Color>({System::Drawing::Color::get_Red(), System::Drawing::Color::get_Green(), System::Drawing::Color::get_Blue(), System::Drawing::Color::get_Orange(), System::Drawing::Color::get_DarkOliveGreen()});
            System::ArrayPtr<float> positions = System::MakeArray<float>({0.0f, 0.1873f, 0.492f, 0.734f, 1.0f});
            System::SharedPtr<System::Drawing::Drawing2D::ColorBlend> colorBlend = System::MakeObject<System::Drawing::Drawing2D::ColorBlend>();
            colorBlend->set_Colors(colors);
            colorBlend->set_Positions(positions);
            
            //Create linear gradient brush with rectangle as a bounds, start and end colors
            System::SharedPtr<System::Drawing::Drawing2D::LinearGradientBrush> brush = System::MakeObject<System::Drawing::Drawing2D::LinearGradientBrush>(System::Drawing::RectangleF(0.0f, 0.0f, width, height), System::Drawing::Color::get_Beige(), System::Drawing::Color::get_DodgerBlue(), 0.f);
            //Set interpolation colors
            brush->set_InterpolationColors(colorBlend);
            //Create a transform for brush. X and Y scale component must be equal to width and height of the rectangle correspondingly.
            //Translation components are offsets of the rectangle
            System::SharedPtr<System::Drawing::Drawing2D::Matrix> brushTransform = System::MakeObject<System::Drawing::Drawing2D::Matrix>(width, 0.0f, 0.0f, height, offsetX, offsetY);
            //Rotate transform to get colors change in vertical direction from up to down
            brushTransform->Rotate(90.0f);
            //Set transform
            brush->set_Transform(brushTransform);
            
            //Set paint
            document->SetPaint(brush);
            
            //Fill the rectangle
            document->Fill(path);
            
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
