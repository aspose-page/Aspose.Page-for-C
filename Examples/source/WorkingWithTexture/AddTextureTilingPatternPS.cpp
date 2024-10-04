#include "stdafx.h"
// C# preprocessor directive: #if ASPOSE_DRAWING

// C# INACTIVE CODE:
// using Aspose.Page.Drawing;
// using Aspose.Page.Drawing.Drawing2D;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif

#include "WorkingWithTexture/AddTextureTilingPatternPS.h"

#include <system/string.h>
#include <system/io/stream.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/enum_helpers.h>
#include <system/details/dispose_guard.h>
#include <Aspose.Page.Cpp/eps/src_eps/PsDocument.h>
#include <Aspose.Page.Cpp/eps/src_eps/Device/PsSaveOptions.h>
#include <drawing/texture_brush.h>
#include <drawing/solid_brush.h>
#include <drawing/rectangle_f.h>
#include <drawing/pen.h>
#include <drawing/font_style.h>
#include <drawing/font.h>
#include <drawing/drawing2d/wrap_mode.h>
#include <drawing/drawing2d/matrix.h>
#include <drawing/drawing2d/graphics_path.h>
#include <drawing/color.h>
#include <drawing/brush.h>
#include <drawing/bitmap.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::EPS;
using namespace Aspose::Page::EPS::Device;
namespace CSharp {

namespace WorkingWithShapes {

RTTI_INFO_IMPL_HASH(3664022316u, ::CSharp::WorkingWithShapes::AddTextureTilingPatternPS, ThisTypeBaseTypesInfo);

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
void AddTextureTilingPatternPS::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithTextures();
    
    //Create output stream for PostScript document
    {
        System::SharedPtr<System::IO::Stream> outPsStream = System::MakeObject<System::IO::FileStream>(dataDir + u"AddTextureTilingPattern_outPS.ps", System::IO::FileMode::Create);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_1({ outPsStream});
        // ------------------------------------------
        
        try
        {
            //Create save options with A4 size
            System::SharedPtr<PsSaveOptions> options = System::MakeObject<PsSaveOptions>();
            
            // Create new 1-paged PS Document
            System::SharedPtr<PsDocument> document = System::MakeObject<PsDocument>(outPsStream, options, false);
            
            
            document->WriteGraphicsSave();
            document->Translate(200.0f, 100.0f);
            
            //Create a Bitmap object from image file
            {
                System::SharedPtr<System::Drawing::Bitmap> image = System::MakeObject<System::Drawing::Bitmap>(dataDir + u"TestTexture.bmp");
                // Clearing resources under 'using' statement
                System::Details::DisposeGuard<1> __dispose_guard_0({ image});
                // ------------------------------------------
                
                try
                {
                    //Create texture brush from the image
                    System::SharedPtr<System::Drawing::TextureBrush> brush = System::MakeObject<System::Drawing::TextureBrush>(image, System::Drawing::Drawing2D::WrapMode::Tile);
                    
                    //Add scaling in X direction to the mattern
                    System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform = System::MakeObject<System::Drawing::Drawing2D::Matrix>(2.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f);
                    brush->set_Transform(transform);
                    
                    //Set this texture brush as current paint
                    document->SetPaint(brush);
                }
                catch(...)
                {
                    __dispose_guard_0.SetCurrentException(std::current_exception());
                }
            }
            
            //Create rectangle path
            System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> path = System::MakeObject<System::Drawing::Drawing2D::GraphicsPath>();
            path->AddRectangle(System::Drawing::RectangleF(0.0f, 0.0f, 200.0f, 100.0f));
            
            //Fill rectangle
            document->Fill(path);
            
            //Get current paint
            System::SharedPtr<System::Drawing::Brush> paint = document->GetPaint();
            
            //Set red stroke
            document->SetStroke(System::MakeObject<System::Drawing::Pen>(System::MakeObject<System::Drawing::SolidBrush>(System::Drawing::Color::get_Red()), 2.0f));
            //Stroke the rectangle
            document->Draw(path);
            
            document->WriteGraphicsRestore();
            
            //Fill text with texture pattern                
            System::SharedPtr<System::Drawing::Font> font = System::MakeObject<System::Drawing::Font>(u"Arial", 96.0f, System::Drawing::FontStyle::Bold);
            document->FillAndStrokeText(u"ABC", font, 200.0f, 300.0f, paint, System::MakeObject<System::Drawing::Pen>(System::Drawing::Color::get_Black(), 2.0f));
            
            //Outline text with texture pattern
            document->OutlineText(u"ABC", font, 200.0f, 400.0f, System::MakeObject<System::Drawing::Pen>(paint, 5.0f));
            
            //Close current page
            document->ClosePage();
            
            //Save the document
            document->Save();
        }
        catch(...)
        {
            __dispose_guard_1.SetCurrentException(std::current_exception());
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
