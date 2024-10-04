#include "stdafx.h"
#include "WorkingWithShapes/AddRectangleXPS.h"

#include <system/array.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPathGeometry.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPath.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsColors/XpsColor.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsSolidColorBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsDocument.h>

#include "RunExamples.h"


using namespace Aspose::Page::XPS;
using namespace Aspose::Page::XPS::XpsModel;
namespace CSharp {

namespace WorkingWithShapes {

RTTI_INFO_IMPL_HASH(2753819371u, ::CSharp::WorkingWithShapes::AddRectangleXPS, ThisTypeBaseTypesInfo);

void AddRectangleXPS::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithShapes();
    // Create new XPS Document
    System::SharedPtr<XpsDocument> doc = System::MakeObject<XpsDocument>();
    // CMYK (blue) solid color stroked rectangle in the lower left
    System::SharedPtr<XpsPath> path = doc->AddPath(doc->CreatePathGeometry(u"M 20,10 L 220,10 220,100 20,100 Z"));
    path->set_Stroke(doc->CreateSolidColorBrush(doc->CreateColor(dataDir + u"uswebuncoated.icc", System::MakeArray<float>({1.0f, 1.000f, 0.000f, 0.000f, 0.000f}))));
    path->set_StrokeThickness(12.f);
    // Save resultant XPS document
    doc->Save(dataDir + u"AddRectangleXPS_out.xps");
    // ExEnd:1
}

} // namespace WorkingWithShapes
} // namespace CSharp
