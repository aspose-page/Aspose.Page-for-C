#include "stdafx.h"
// C# preprocessor directive: #if ASPOSE_DRAWING

// C# INACTIVE CODE:
// using Aspose.Page.Drawing;
// using Aspose.Page.Drawing.Drawing2D;
// using GradientBrush = Aspose.Page.Drawing.Drawing2D.GradientBrush;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif

#include "WorkingWithTransparency/ShowPseudoTransparencyPS.h"

#include <system/string.h>
#include <system/io/stream.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/details/dispose_guard.h>
#include <Aspose.Page.Cpp/eps/src_eps/PsDocument.h>
#include <Aspose.Page.Cpp/eps/src_eps/GradientBrush.h>
#include <Aspose.Page.Cpp/eps/src_eps/Device/PsSaveOptions.h>
#include <drawing/rectangle_f.h>
#include <drawing/drawing2d/wrap_mode.h>
#include <drawing/drawing2d/matrix.h>
#include <drawing/drawing2d/linear_gradient_brush.h>
#include <drawing/drawing2d/graphics_path.h>
#include <drawing/color.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::EPS;
using namespace Aspose::Page::EPS::Device;
namespace CSharp {

namespace WorkingWithTransparency {

RTTI_INFO_IMPL_HASH(3173837662u, ::CSharp::WorkingWithTransparency::ShowPseudoTransparencyPS, ThisTypeBaseTypesInfo);

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
void ShowPseudoTransparencyPS::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithTransparency();
    
    //Create output stream for PostScript document
    {
        System::SharedPtr<System::IO::Stream> outPsStream = System::MakeObject<System::IO::FileStream>(dataDir + u"ShowPseudoTransparency_outPS.ps", System::IO::FileMode::Create);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ outPsStream});
        // ------------------------------------------
        
        try
        {
            //Create save options with A4 size
            System::SharedPtr<PsSaveOptions> options = System::MakeObject<PsSaveOptions>();
            
            // Create new 1-paged PS Document
            System::SharedPtr<PsDocument> document = System::MakeObject<PsDocument>(outPsStream, options, false);
            
            float offsetX = 50.0f;
            float offsetY = 100.0f;
            float width = 200.0f;
            float height = 100.0f;
            
            ///////////////////////////////// Create rectangle with opaque gradient fill /////////////////////////////////////////////////////////
            System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> path = System::MakeObject<System::Drawing::Drawing2D::GraphicsPath>();
            path->AddRectangle(System::Drawing::RectangleF(offsetX, offsetY, width, height));
            
            System::SharedPtr<System::Drawing::Drawing2D::LinearGradientBrush> opaqueBrush = System::MakeObject<System::Drawing::Drawing2D::LinearGradientBrush>(System::Drawing::RectangleF(0.0f, 0.0f, 200.0f, 100.0f), System::Drawing::Color::FromArgb(0, 0, 0), System::Drawing::Color::FromArgb(40, 128, 70), 0.f);
            System::SharedPtr<System::Drawing::Drawing2D::Matrix> brushTransform = System::MakeObject<System::Drawing::Drawing2D::Matrix>(width, 0.0f, 0.0f, height, offsetX, offsetY);
            opaqueBrush->set_Transform(brushTransform);
            System::SharedPtr<GradientBrush> gradientBrush = System::MakeObject<GradientBrush>(opaqueBrush);
            gradientBrush->set_WrapMode(System::Drawing::Drawing2D::WrapMode::Clamp);
            
            document->SetPaint(gradientBrush);
            document->Fill(path);
            /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            
            offsetX = 350.0f;
            
            ///////////////////////////////// Create rectangle with translucent gradient fill ///////////////////////////////////////////////////
            //Create graphics path from the first rectangle
            path = System::MakeObject<System::Drawing::Drawing2D::GraphicsPath>();
            path->AddRectangle(System::Drawing::RectangleF(offsetX, offsetY, width, height));
            
            //Create linear gradient brush colors which transparency are not 255, but 150 and 50. So it are translucent.
            System::SharedPtr<System::Drawing::Drawing2D::LinearGradientBrush> translucentBrush = System::MakeObject<System::Drawing::Drawing2D::LinearGradientBrush>(System::Drawing::RectangleF(0.0f, 0.0f, width, height), System::Drawing::Color::FromArgb(150, 0, 0, 0), System::Drawing::Color::FromArgb(50, 40, 128, 70), 0.f);
            //Create a transform for brush.
            brushTransform = System::MakeObject<System::Drawing::Drawing2D::Matrix>(width, 0.0f, 0.0f, height, offsetX, offsetY);
            //Set transform
            translucentBrush->set_Transform(brushTransform);
            //Create GradientBrush object containing the linear gradient brush
            gradientBrush = System::MakeObject<GradientBrush>(translucentBrush);
            gradientBrush->set_WrapMode(System::Drawing::Drawing2D::WrapMode::Clamp);
            //Set paint
            document->SetPaint(gradientBrush);
            //Fill the rectangle
            document->Fill(path);
            /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            
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

} // namespace WorkingWithTransparency
} // namespace CSharp
