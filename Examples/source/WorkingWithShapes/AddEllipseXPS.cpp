#include "stdafx.h"
#include "WorkingWithShapes/AddEllipseXPS.h"

#include <system/object_ext.h>
#include <system/collections/list.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPathGeometry.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPath.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsEnums.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsColors/XpsColor.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsRadialGradientBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsGradientStop.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsGradientBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsDocument.h>
#include <drawing/point_f.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::XPS;
using namespace Aspose::Page::XPS::XpsModel;
namespace CSharp {

namespace WorkingWithShapes {

RTTI_INFO_IMPL_HASH(1563285724u, ::CSharp::WorkingWithShapes::AddEllipseXPS, ThisTypeBaseTypesInfo);

void AddEllipseXPS::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithShapes();
    // Create new XPS Document
    System::SharedPtr<XpsDocument> doc = System::MakeObject<XpsDocument>();
    // Radial gradient stroked ellipse in the lower left
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> stops = System::MakeObject<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>>();
    stops->Add(doc->CreateGradientStop(doc->CreateColor(0, 0, 255), 0.f));
    stops->Add(doc->CreateGradientStop(doc->CreateColor(255, 0, 0), .25f));
    stops->Add(doc->CreateGradientStop(doc->CreateColor(0, 255, 0), .5f));
    stops->Add(doc->CreateGradientStop(doc->CreateColor(255, 255, 0), .75f));
    stops->Add(doc->CreateGradientStop(doc->CreateColor(255, 0, 0), 1.f));
    
    System::SharedPtr<XpsPath> path = doc->AddPath(doc->CreatePathGeometry(u"M 20,250 A 100,50 0 1 1 220,250 100,50 0 1 1 20,250"));
    path->set_Stroke(doc->CreateRadialGradientBrush(System::Drawing::PointF(575.f, 125.f), System::Drawing::PointF(575.f, 100.f), 75.f, 50.f));
    (System::ExplicitCast<Aspose::Page::XPS::XpsModel::XpsGradientBrush>(path->get_Stroke()))->set_SpreadMethod(Aspose::Page::XPS::XpsModel::XpsSpreadMethod::Reflect);
    (System::ExplicitCast<Aspose::Page::XPS::XpsModel::XpsGradientBrush>(path->get_Stroke()))->get_GradientStops()->AddRange(stops);
    stops->Clear();
    path->set_StrokeThickness(12.f);
    // Save resultant XPS document
    doc->Save(dataDir + u"AddEllipse_outXPS.xps");
    // ExEnd:1
}

} // namespace WorkingWithShapes
} // namespace CSharp
