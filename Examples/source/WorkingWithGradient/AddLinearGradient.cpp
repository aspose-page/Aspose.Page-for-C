#include <stdafx.h>
#include "WorkingWithGradient/AddLinearGradient.h"

#include <system/string.h>
#include <system/exceptions.h>
#include <system/collections/list.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPathGeometry.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPath.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsMatrix.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsColors/XpsColor.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsLinearGradientBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsGradientStop.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsGradientBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsDocument.h>
#include <drawing/point_f.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::XPS;
using namespace Aspose::Page::XPS::XpsModel;
namespace CPP {

namespace WorkingWithGradient {

RTTI_INFO_IMPL_HASH(997816086u, ::CPP::WorkingWithGradient::AddLinearGradient, ThisTypeBaseTypesInfo);

void AddLinearGradient::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithGradient();
    // Create new XPS Document
    System::SharedPtr<XpsDocument> doc = System::MakeObject<XpsDocument>();
    // Initialize List of XpsGradentStop
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> stops = System::MakeObject<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>>();
    // Add Colors to Gradient
    stops->Add(doc->CreateGradientStop(doc->CreateColor(0, 142, 4), 0.f));
    stops->Add(doc->CreateGradientStop(doc->CreateColor(255, 202, 0), 0.144531f));
    stops->Add(doc->CreateGradientStop(doc->CreateColor(255, 250, 0), 0.264648f));
    stops->Add(doc->CreateGradientStop(doc->CreateColor(255, 0, 0), 0.414063f));
    stops->Add(doc->CreateGradientStop(doc->CreateColor(233, 0, 255), 0.544922f));
    stops->Add(doc->CreateGradientStop(doc->CreateColor(107, 27, 190), 0.694336f));
    stops->Add(doc->CreateGradientStop(doc->CreateColor(63, 0, 255), 0.844727f));
    stops->Add(doc->CreateGradientStop(doc->CreateColor(0, 199, 80), 1.f));
    // Create new path by defining geometery in abbreviation form
    System::SharedPtr<XpsPath> path = doc->AddPath(doc->CreatePathGeometry(u"M 10,10 L 228,10 228,100 10,100"));
    path->set_RenderTransform(doc->CreateMatrix(1.f, 0.f, 0.f, 1.f, 20.f, 70.f));
    path->set_Fill(doc->CreateLinearGradientBrush(System::Drawing::PointF(10.f, 10.f), System::Drawing::PointF(228.f, 100.f)));
    (System::DynamicCast<Aspose::Page::XPS::XpsModel::XpsGradientBrush>(path->get_Fill()))->get_GradientStops()->AddRange(stops);
    // Save resultant XPS document
    doc->Save(RunExamples::GetOutDir() + u"AddLinearGradient_out.xps");
    // ExEnd:1
}

} // namespace WorkingWithGradient
} // namespace CPP
