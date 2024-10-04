#include "stdafx.h"
#include "WorkingWithShapes/UseShapeUtilitiesXPS.h"

#include <system/string.h>
#include <system/details/dispose_guard.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPathGeometry.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPath.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPage.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsSolidColorBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsDocument.h>
#include <Aspose.Page.Cpp/xps/src_xps/DocumentUtils.h>
#include <drawing/rectangle_f.h>
#include <drawing/point_f.h>
#include <drawing/color.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::XPS;
using namespace Aspose::Page::XPS::XpsModel;
namespace CSharp {

namespace WorkingWithShapes {

RTTI_INFO_IMPL_HASH(2166090445u, ::CSharp::WorkingWithShapes::UseShapeUtilitiesXPS, ThisTypeBaseTypesInfo);

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
void UseShapeUtilitiesXPS::Run()
{
    // ExStart:UsingShapeUtils
    // For complete examples and data files, please go to https://github.com/aspose-page/Aspose.Page-for-.NET
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithShapes();
    // Create new XPS Document
    {
        System::SharedPtr<XpsDocument> doc = System::MakeObject<XpsDocument>();
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ doc});
        // ------------------------------------------
        
        try
        {
            // Set first page's size.
            doc->get_Page()->set_Width(650.f);
            doc->get_Page()->set_Height(240.f);
            
            // Draw a circle with center (120, 120) and radius 100.
            System::SharedPtr<XpsPath> path = doc->CreatePath(doc->get_Utils()->CreateCircle(System::Drawing::PointF(120.f, 120.f), 100.f));
            path->set_Fill(doc->CreateSolidColorBrush(System::Drawing::Color::get_Green()));
            doc->Add<System::SharedPtr<XpsPath>>(path);
            
            // Inscribe a regular pentagon in the circle.
            path = doc->CreatePath(doc->get_Utils()->CreateRegularInscribedNGon(5, System::Drawing::PointF(120.f, 120.f), 100.f));
            path->set_Fill(doc->CreateSolidColorBrush(System::Drawing::Color::get_Red()));
            doc->Add<System::SharedPtr<XpsPath>>(path);
            
            // Circumscribe a regular hexagon around the circle.
            path = doc->CreatePath(doc->get_Utils()->CreateRegularCircumscribedNGon(6, System::Drawing::PointF(120.f, 120.f), 100.f));
            path->set_Stroke(doc->CreateSolidColorBrush(System::Drawing::Color::get_Magenta()));
            path->set_StrokeThickness(3.f);
            doc->Add<System::SharedPtr<XpsPath>>(path);
            
            // Draw a sector of the circle centered at (340, 120), starting at -45 degrees and ending at +45 degrees.
            path = doc->CreatePath(doc->get_Utils()->CreatePieSlice(System::Drawing::PointF(340.f, 120.f), 100.f, -45.f, 45.f));
            path->set_Stroke(doc->CreateSolidColorBrush(System::Drawing::Color::get_Red()));
            path->set_StrokeThickness(5.f);
            doc->Add<System::SharedPtr<XpsPath>>(path);
            
            // Draw a segment of the circle centered at (340, 120), starting at -45 degrees and ending at +45 degrees.
            path = doc->CreatePath(doc->get_Utils()->CreateCircularSegment(System::Drawing::PointF(340.f, 120.f), 100.f, -45.f, 45.f));
            path->set_Fill(doc->CreateSolidColorBrush(System::Drawing::Color::get_Black()));
            doc->Add<System::SharedPtr<XpsPath>>(path);
            
            // Draw a rectangle with the top left vertex (530, 20), width 100 units and height 200 units.
            path = doc->CreatePath(doc->get_Utils()->CreateRectangle(System::Drawing::RectangleF(530.f, 20.f, 100.f, 200.f)));
            path->set_Stroke(doc->CreateSolidColorBrush(System::Drawing::Color::get_Red()));
            doc->Add<System::SharedPtr<XpsPath>>(path);
            
            // Draw an ellipse with center (580, 120) and radii 50 and 100.
            path = doc->CreatePath(doc->get_Utils()->CreateEllipse(System::Drawing::PointF(580.f, 120.f), 50.f, 100.f));
            path->set_Fill(doc->CreateSolidColorBrush(System::Drawing::Color::get_Yellow()));
            doc->Add<System::SharedPtr<XpsPath>>(path);
            
            doc->Save(dataDir + u"UseShapeUtilsXPS_out.xps");
        }
        catch(...)
        {
            __dispose_guard_0.SetCurrentException(std::current_exception());
        }
    }
    // ExEnd:UsingShapeUtils
}
#if defined(__MSVC__)
#pragma warning( pop )
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

} // namespace WorkingWithShapes
} // namespace CSharp
