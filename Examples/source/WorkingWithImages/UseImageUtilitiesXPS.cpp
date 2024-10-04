#include "stdafx.h"
#include "WorkingWithImages/UseImageUtilitiesXPS.h"

#include <system/object_ext.h>
#include <system/details/dispose_guard.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPathGeometry.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPath.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPage.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsEnums.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsSolidColorBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsImageBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsDocument.h>
#include <Aspose.Page.Cpp/xps/src_xps/DocumentUtils.h>
#include <drawing/rectangle_f.h>
#include <drawing/color.h>

#include "RunExamples.h"


using namespace Aspose::Page::XPS;
using namespace Aspose::Page::XPS::XpsModel;
namespace CSharp {

namespace WorkingWithImages {

RTTI_INFO_IMPL_HASH(1955306061u, ::CSharp::WorkingWithImages::UseImageUtilitiesXPS, ThisTypeBaseTypesInfo);

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
void UseImageUtilitiesXPS::Run()
{
    // ExStart:UsingImageUtils
    // For complete examples and data files, please go to https://github.com/aspose-page/Aspose.Page-for-.NET
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithImages();
    // Create new XPS Document
    {
        System::SharedPtr<XpsDocument> doc = System::MakeObject<XpsDocument>();
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ doc});
        // ------------------------------------------
        
        try
        {
            // Set first page's size.
            doc->get_Page()->set_Width(540.f);
            doc->get_Page()->set_Height(220.f);
            
            // Draw the image box.
            System::Drawing::RectangleF imageBox(10.f, 10.f, 200.f, 200.f);
            System::SharedPtr<XpsPath> path = doc->AddPath(doc->get_Utils()->CreateRectangle(imageBox));
            path->set_Stroke(doc->CreateSolidColorBrush(System::Drawing::Color::get_Black()));
            // Add an image to fit width.
            path = doc->get_Utils()->CreateImage(dataDir + u"R08LN_NN.jpg", imageBox, Aspose::Page::XPS::ImageMode::FitToWidth);
            // Prevent tiling.
            (System::ExplicitCast<Aspose::Page::XPS::XpsModel::XpsImageBrush>(path->get_Fill()))->set_TileMode(Aspose::Page::XPS::XpsModel::XpsTileMode::None);
            doc->Add<System::SharedPtr<XpsPath>>(path);
            
            // Add an image to fit width.
            doc->Add<System::SharedPtr<XpsPath>>(doc->get_Utils()->CreateImage(dataDir + u"R08LN_NN.jpg", System::Drawing::RectangleF(220.f, 10.f, 200.f, 100.f), Aspose::Page::XPS::ImageMode::FitToHeight));
            
            // Add an image to fit width.
            doc->Add<System::SharedPtr<XpsPath>>(doc->get_Utils()->CreateImage(dataDir + u"R08LN_NN.jpg", System::Drawing::RectangleF(430.f, 10.f, 100.f, 200.f), Aspose::Page::XPS::ImageMode::FitToBox));
            
            // Save resultant XPS document 
            doc->Save(dataDir + u"UseImageUtilsXPS_out.xps");
        }
        catch(...)
        {
            __dispose_guard_0.SetCurrentException(std::current_exception());
        }
    }
    // ExEnd:UsingImageUtils
}
#if defined(__MSVC__)
#pragma warning( pop )
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

} // namespace WorkingWithImages
} // namespace CSharp
