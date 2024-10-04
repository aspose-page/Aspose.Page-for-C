#include "stdafx.h"
#include "WorkingWithCanvas/TransformationsXPS.h"

#include <system/string.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPathGeometry.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPath.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsMatrix.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsColors/XpsColor.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsCanvas.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsSolidColorBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsDocument.h>
#include <drawing/point_f.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::XPS;
using namespace Aspose::Page::XPS::XpsModel;
namespace CSharp {

namespace WorkingWithCanvas {

RTTI_INFO_IMPL_HASH(3024908473u, ::CSharp::WorkingWithCanvas::TransformationsXPS, ThisTypeBaseTypesInfo);

void TransformationsXPS::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithCanvas();
    
    // Create new XPS Document
    System::SharedPtr<XpsDocument> doc = System::MakeObject<XpsDocument>();
    
    // Create main canvas, common for all page elemnts
    System::SharedPtr<XpsCanvas> canvas1 = doc->AddCanvas();
    
    // Make left and top offsets in the main canvas
    canvas1->set_RenderTransform(doc->CreateMatrix(1.0f, 0.0f, 0.0f, 1.0f, 20.0f, 10.0f));
    
    // Create rectangle path geometry
    System::SharedPtr<XpsPathGeometry> rectGeom = doc->CreatePathGeometry(u"M 0,0 L 200,0 200,100 0,100 Z");
    
    // Create a fill for rectangles
    System::SharedPtr<XpsBrush> fill = doc->CreateSolidColorBrush(doc->CreateColor(12, 15, 159));
    
    // Add new canvas without any transformations to the main canvas
    System::SharedPtr<XpsCanvas> canvas2 = canvas1->AddCanvas();
    // Create rectangle in this canvas and fill it
    System::SharedPtr<XpsPath> rect = canvas2->AddPath(rectGeom);
    rect->set_Fill(fill);
    
    // Add new canvas with translate transformation to the main canvas
    System::SharedPtr<XpsCanvas> canvas3 = canvas1->AddCanvas();
    // Translate this canvas to position new rectangle below previous rectnagle
    canvas3->set_RenderTransform(doc->CreateMatrix(1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 200.0f));
    // Translate this canvas to right side of page
    canvas3->get_RenderTransform()->Translate(500.0f, 0.0f);
    // Create rectangle in this canvas and fill it
    rect = canvas3->AddPath(rectGeom);
    rect->set_Fill(fill);
    
    // Add new canvas with double scale transformation to the main canvas
    System::SharedPtr<XpsCanvas> canvas4 = canvas1->AddCanvas();
    // Translate this canvas to position new rectangle below previous rectnagle
    canvas4->set_RenderTransform(doc->CreateMatrix(1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 400.0f));
    // Scale this canvas
    canvas4->get_RenderTransform()->Scale(2.0f, 2.0f);
    // Create rectangle in this canvas and fill it
    rect = canvas4->AddPath(rectGeom);
    rect->set_Fill(fill);
    
    // Add new canvas with rotation around a point transformation to the main canvas
    System::SharedPtr<XpsCanvas> canvas5 = canvas1->AddCanvas();
    // Translate this canvas to position new rectangle below previous rectnagle
    canvas5->set_RenderTransform(doc->CreateMatrix(1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 800.0f));
    // Rotate this canvas aroud a point on 45 degrees
    
    canvas5->get_RenderTransform()->RotateAround(45.0f, System::Drawing::PointF(100.0f, 50.0f));
    rect = canvas5->AddPath(rectGeom);
    rect->set_Fill(fill);
    
    // Save resultant XPS document
    doc->Save(dataDir + u"output1.xps");
    // ExEnd:1
}

} // namespace WorkingWithCanvas
} // namespace CSharp
