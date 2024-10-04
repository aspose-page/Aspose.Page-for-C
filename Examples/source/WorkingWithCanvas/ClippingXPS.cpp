#include "stdafx.h"
#include "WorkingWithCanvas/ClippingXPS.h"

#include <system/string.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPathGeometry.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPath.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsMatrix.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsColors/XpsColor.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsCanvas.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsSolidColorBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsDocument.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::XPS;
using namespace Aspose::Page::XPS::XpsModel;
namespace CSharp {

namespace WorkingWithCanvas {

RTTI_INFO_IMPL_HASH(2381024497u, ::CSharp::WorkingWithCanvas::ClippingXPS, ThisTypeBaseTypesInfo);

void ClippingXPS::Run()
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
    System::SharedPtr<XpsPathGeometry> rectGeom = doc->CreatePathGeometry(u"M 0,0 L 500,0 500,300 0,300 Z");
    
    // Create a fill for rectangles
    System::SharedPtr<XpsBrush> fill = doc->CreateSolidColorBrush(doc->CreateColor(12, 15, 159));
    
    // Add another canvas with clip to the main canvas
    System::SharedPtr<XpsCanvas> canvas2 = canvas1->AddCanvas();
    
    // Create circle geometry for clip
    System::SharedPtr<XpsPathGeometry> clipGeom = doc->CreatePathGeometry(u"M250,250 A100,100 0 1 1 250,50 100,100 0 1 1 250,250");
    canvas2->set_Clip(clipGeom);
    
    // Create rectangle in this canvas and fill it
    System::SharedPtr<XpsPath> rect = canvas2->AddPath(rectGeom);
    rect->set_Fill(fill);
    
    // Add the second canvas with stroked rectangle to the main canvas
    System::SharedPtr<XpsCanvas> canvas3 = canvas1->AddCanvas();
    
    // Create rectangle in this canvas and stroke it
    rect = canvas3->AddPath(rectGeom);
    rect->set_Stroke(fill);
    rect->set_StrokeThickness(2.0f);
    
    // Save resultant XPS document
    doc->Save(dataDir + u"output2.xps");
    // ExEnd:1
}

} // namespace WorkingWithCanvas
} // namespace CSharp
