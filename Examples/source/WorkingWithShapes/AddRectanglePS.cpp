#include "stdafx.h"
// C# preprocessor directive: #if ASPOSE_DRAWING

// C# INACTIVE CODE:
// using Aspose.Page.Drawing;
// using Aspose.Page.Drawing.Drawing2D;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif

#include "WorkingWithShapes/AddRectanglePS.h"

#include <system/string.h>
#include <system/io/stream.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/details/dispose_guard.h>
#include <Aspose.Page.Cpp/eps/src_eps/PsDocument.h>
#include <Aspose.Page.Cpp/eps/src_eps/Device/PsSaveOptions.h>
#include <drawing/solid_brush.h>
#include <drawing/rectangle_f.h>
#include <drawing/pen.h>
#include <drawing/drawing2d/graphics_path.h>
#include <drawing/color.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::EPS;
using namespace Aspose::Page::EPS::Device;
namespace CSharp {

namespace WorkingWithShapes {

RTTI_INFO_IMPL_HASH(4072007027u, ::CSharp::WorkingWithShapes::AddRectanglePS, ThisTypeBaseTypesInfo);

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
void AddRectanglePS::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithShapes();
    
    //Create output stream for PostScript document
    {
        System::SharedPtr<System::IO::Stream> outPsStream = System::MakeObject<System::IO::FileStream>(dataDir + u"AddRectangle_outPS.ps", System::IO::FileMode::Create);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ outPsStream});
        // ------------------------------------------
        
        try
        {
            //Create save options with A4 size
            System::SharedPtr<PsSaveOptions> options = System::MakeObject<PsSaveOptions>();
            
            // Create new 1-paged PS Document
            System::SharedPtr<PsDocument> document = System::MakeObject<PsDocument>(outPsStream, options, false);
            
            //Create graphics path from the first rectangle
            System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> path = System::MakeObject<System::Drawing::Drawing2D::GraphicsPath>();
            path->AddRectangle(System::Drawing::RectangleF(250.0f, 100.0f, 150.0f, 100.0f));
            //Set paint
            document->SetPaint(System::MakeObject<System::Drawing::SolidBrush>(System::Drawing::Color::get_Orange()));
            //Fill the rectangle
            document->Fill(path);
            
            //Create graphics path from the second rectangle
            path = System::MakeObject<System::Drawing::Drawing2D::GraphicsPath>();
            path->AddRectangle(System::Drawing::RectangleF(250.0f, 300.0f, 150.0f, 100.0f));
            //Set stroke
            document->SetStroke(System::MakeObject<System::Drawing::Pen>(System::MakeObject<System::Drawing::SolidBrush>(System::Drawing::Color::get_Red()), 3.0f));
            //Stroke (outline) the rectangle
            document->Draw(path);
            
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
