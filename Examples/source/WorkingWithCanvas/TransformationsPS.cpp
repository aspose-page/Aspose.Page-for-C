#include "stdafx.h"
// C# preprocessor directive: #if ASPOSE_DRAWING

// C# INACTIVE CODE:
// using Aspose.Page.Drawing;
// using Aspose.Page.Drawing.Drawing2D;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif

#include "WorkingWithCanvas/TransformationsPS.h"

#include <system/string.h>
#include <system/io/stream.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/details/dispose_guard.h>
#include <Aspose.Page.Cpp/eps/src_eps/PsDocument.h>
#include <Aspose.Page.Cpp/eps/src_eps/Device/PsSaveOptions.h>
#include <drawing/solid_brush.h>
#include <drawing/rectangle_f.h>
#include <drawing/drawing2d/matrix.h>
#include <drawing/drawing2d/graphics_path.h>
#include <drawing/color.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::EPS;
using namespace Aspose::Page::EPS::Device;
namespace CSharp {

namespace WorkingWithCanvas {

RTTI_INFO_IMPL_HASH(109777957u, ::CSharp::WorkingWithCanvas::TransformationsPS, ThisTypeBaseTypesInfo);

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
void TransformationsPS::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithCanvas();
    
    //Create output stream for PostScript document
    {
        System::SharedPtr<System::IO::Stream> outPsStream = System::MakeObject<System::IO::FileStream>(dataDir + u"Transformations_outPS.ps", System::IO::FileMode::Create);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ outPsStream});
        // ------------------------------------------
        
        try
        {
            //Create save options with default values
            System::SharedPtr<PsSaveOptions> options = System::MakeObject<PsSaveOptions>();
            
            // Create new 1-paged PS Document
            System::SharedPtr<PsDocument> document = System::MakeObject<PsDocument>(outPsStream, options, false);
            
            document->Translate(100.0f, 100.0f);
            
            //Create graphics path from the rectangle
            System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> path = System::MakeObject<System::Drawing::Drawing2D::GraphicsPath>();
            path->AddRectangle(System::Drawing::RectangleF(0.0f, 0.0f, 150.0f, 100.0f));
            
            ////////////////////////////////////// No transformations ///////////////////////////////////////////////////////////////
            //Set paint in graphics state on upper level
            document->SetPaint(System::MakeObject<System::Drawing::SolidBrush>(System::Drawing::Color::get_Orange()));
            
            //Fill the first rectangle that is on on upper level graphics state and that is without any transformations.
            document->Fill(path);
            /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            
            
            
            ////////////////////////////////////// Translation //////////////////////////////////////////////////////////////////////
            
            //Save graphics state in order to return back to this state after transformation
            document->WriteGraphicsSave();
            
            //Displace current graphics state on 250 to the right. So we add translation component to the current transformation.
            document->Translate(250.0f, 0.0f);
            
            //Set paint in the current graphics state
            document->SetPaint(System::MakeObject<System::Drawing::SolidBrush>(System::Drawing::Color::get_Blue()));
            
            //Fill the second rectangle in the current graphics state (has translation transformation)
            document->Fill(path);
            
            //Restore graphics state to the previus (upper) level
            document->WriteGraphicsRestore();
            /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            
            
            //Displace on 200 to the bottom.
            document->Translate(0.0f, 200.0f);
            
            ////////////////////////////////////// Scaling //////////////////////////////////////////////////////////////////////////
            //Save graphics state in order to return back to this state after transformation
            document->WriteGraphicsSave();
            
            //Scale current graphics state on 0.5 in X axis and on 0.75f in Y axis. So we add scale component to the current transformation.
            document->Scale(0.5f, 0.75f);
            
            //Set paint in the current graphics state
            document->SetPaint(System::MakeObject<System::Drawing::SolidBrush>(System::Drawing::Color::get_Red()));
            
            //Fill the third rectangle in the current graphics state (has scale transformation)
            document->Fill(path);
            
            //Restore graphics state to the previus (upper) level
            document->WriteGraphicsRestore();
            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            
            
            //Displace upper level graphics state on 250 to the right.
            document->Translate(250.0f, 0.0f);
            
            
            ////////////////////////////////////// Rotation //////////////////////////////////////////////////////////////////////
            //Save graphics state in order to return back to this state after transformation
            document->WriteGraphicsSave();
            
            //Rotate current graphics state on 45 degrees around origin of current graphics state (350, 300). So we add rotation component to the current transformation.
            document->Rotate(45);
            
            //Set paint in the current graphics state
            document->SetPaint(System::MakeObject<System::Drawing::SolidBrush>(System::Drawing::Color::get_Green()));
            
            //Fill the fourth rectangle in the current graphics state (has rotation transformation)
            document->Fill(path);
            
            //Restore graphics state to the previus (upper) level
            document->WriteGraphicsRestore();
            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            
            
            //Returns upper level graphics state back to the left and displace on 200 to the bottom.
            document->Translate(-250.0f, 200.0f);
            
            
            ////////////////////////////////////// Shearing //////////////////////////////////////////////////////////////////////
            //Save graphics state in order to return back to this state after transformation
            document->WriteGraphicsSave();
            
            //Shear current graphics state. So we add shear component to the current transformation.
            document->Shear(0.1f, 0.2f);
            
            //Set paint in the current graphics state
            document->SetPaint(System::MakeObject<System::Drawing::SolidBrush>(System::Drawing::Color::get_Pink()));
            
            //Fill the fifth rectangle in the current graphics state (has shear transformation)
            document->Fill(path);
            
            //Restore graphics state to the previus (upper) level
            document->WriteGraphicsRestore();
            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            
            
            //Displace upper level graphics state on 250 to the right.
            document->Translate(250.0f, 0.0f);
            
            
            ////////////////////////////////////// Complex transformation ////////////////////////////////////////////////////////
            //Save graphics state in order to return back to this state after transformation
            document->WriteGraphicsSave();
            
            //Transform current graphics state with complex transformation. So we add translation, scale and rotation components to the current transformation.
            document->Transform(System::MakeObject<System::Drawing::Drawing2D::Matrix>(1.2f, -0.965925f, 0.258819f, 1.5f, 0.f, 50.0f));
            
            //Set paint in the current graphics state
            document->SetPaint(System::MakeObject<System::Drawing::SolidBrush>(System::Drawing::Color::get_Aquamarine()));
            
            //Fill the sixth rectangle in the current graphics state (has complex transformation)
            document->Fill(path);
            
            //Restore graphics state to the previus (upper) level
            document->WriteGraphicsRestore();
            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            
            
            //Returns upper level graphics state back to the left and displace on 200 to the bottom.
            document->Translate(-250.0f, 200.0f);
            
            
            ////////////////////////////////////// Again no transformation ////////////////////////////////////////////////////////
            // Demonstrates that current graphics state's color is orange that was set up at the beginning of the code. 
            //Fill the seventh rectangle in the current graphics state (has no transformation)
            document->Fill(path);
            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            
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
