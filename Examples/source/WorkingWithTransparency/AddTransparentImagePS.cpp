#include "stdafx.h"
// C# preprocessor directive: #if ASPOSE_DRAWING

// C# INACTIVE CODE:
// using Aspose.Page.Drawing;
// using Aspose.Page.Drawing.Drawing2D;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif

#include "WorkingWithTransparency/AddTransparentImagePS.h"

#include <system/string.h>
#include <system/nullable.h>
#include <system/io/stream.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/details/dispose_guard.h>
#include <Aspose.Page.Cpp/eps/src_eps/PsDocument.h>
#include <Aspose.Page.Cpp/eps/src_eps/Device/PsSaveOptions.h>
#include <drawing/drawing2d/matrix.h>
#include <drawing/color.h>
#include <drawing/bitmap.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::EPS;
using namespace Aspose::Page::EPS::Device;
namespace CSharp {

namespace WorkingWithTransparency {

RTTI_INFO_IMPL_HASH(3781271333u, ::CSharp::WorkingWithTransparency::AddTransparentImagePS, ThisTypeBaseTypesInfo);

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
void AddTransparentImagePS::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithTransparency();
    
    //Create output stream for PostScript document
    {
        System::SharedPtr<System::IO::Stream> outPsStream = System::MakeObject<System::IO::FileStream>(dataDir + u"AddTransparentImage_outPS.ps", System::IO::FileMode::Create);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_2({ outPsStream});
        // ------------------------------------------
        
        try
        {
            //Create save options with A4 size
            System::SharedPtr<PsSaveOptions> options = System::MakeObject<PsSaveOptions>();
            //Set page's background color to see white image on it's own transparent background
            options->set_BackgroundColor(System::Drawing::Color::FromArgb(211, 8, 48));
            
            // Create new 1-paged PS Document
            System::SharedPtr<PsDocument> document = System::MakeObject<PsDocument>(outPsStream, options, false);
            
            
            document->WriteGraphicsSave();
            document->Translate(20.0f, 100.0f);
            
            //Create bitmap from translucent image file
            {
                System::SharedPtr<System::Drawing::Bitmap> image = System::MakeObject<System::Drawing::Bitmap>(dataDir + u"mask1.png");
                // Clearing resources under 'using' statement
                System::Details::DisposeGuard<1> __dispose_guard_0({ image});
                // ------------------------------------------
                
                try
                {
                    //Add this image to document as usual opaque RGB image
                    document->DrawImage(image, System::MakeObject<System::Drawing::Drawing2D::Matrix>(1.0f, 0.0f, 0.0f, 1.0f, 100.0f, 0.0f), System::Drawing::Color::Empty);
                }
                catch(...)
                {
                    __dispose_guard_0.SetCurrentException(std::current_exception());
                }
            }
            
            //Again create bitmap from the same image file
            {
                System::SharedPtr<System::Drawing::Bitmap> image = System::MakeObject<System::Drawing::Bitmap>(dataDir + u"mask1.png");
                // Clearing resources under 'using' statement
                System::Details::DisposeGuard<1> __dispose_guard_1({ image});
                // ------------------------------------------
                
                try
                {
                    //Add this image to document as transparent image image
                    document->DrawTransparentImage(image, System::MakeObject<System::Drawing::Drawing2D::Matrix>(1.0f, 0.0f, 0.0f, 1.0f, 350.0f, 0.0f), 255);
                }
                catch(...)
                {
                    __dispose_guard_1.SetCurrentException(std::current_exception());
                }
            }
            
            document->WriteGraphicsRestore();
            
            //Close current page
            document->ClosePage();
            
            //Save the document
            document->Save();
        }
        catch(...)
        {
            __dispose_guard_2.SetCurrentException(std::current_exception());
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
