#include <stdafx.h>
#include "WorkingWithGradient/AddVerticalGradient.h"

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

RTTI_INFO_IMPL_HASH(1980753223u, ::CPP::WorkingWithGradient::AddVerticalGradient, ThisTypeBaseTypesInfo);

void AddVerticalGradient::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithGradient();
    // Create new XPS Document
    System::SharedPtr<XpsDocument> doc = System::MakeObject<XpsDocument>();
    // Initialize List of XpsGradentStop
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> stops = System::MakeObject<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>>();
    stops->Add(doc->CreateGradientStop(doc->CreateColor(253, 255, 12, 0), 0.f));
    stops->Add(doc->CreateGradientStop(doc->CreateColor(252, 255, 154, 0), 0.359375f));
    stops->Add(doc->CreateGradientStop(doc->CreateColor(252, 255, 56, 0), 0.424805f));
    stops->Add(doc->CreateGradientStop(doc->CreateColor(253, 255, 229, 0), 0.879883f));
    stops->Add(doc->CreateGradientStop(doc->CreateColor(252, 255, 255, 234), 1.f));
    // Create new path by defining geometery in abbreviation form
    System::SharedPtr<XpsPath> path = doc->AddPath(doc->CreatePathGeometry(u"M 10,110 L 228,110 228,200 10,200"));
    path->set_RenderTransform(doc->CreateMatrix(1.f, 0.f, 0.f, 1.f, 20.f, 70.f));
    path->set_Fill(doc->CreateLinearGradientBrush(System::Drawing::PointF(10.f, 110.f), System::Drawing::PointF(10.f, 200.f)));
    (System::DynamicCast<Aspose::Page::XPS::XpsModel::XpsGradientBrush>(path->get_Fill()))->get_GradientStops()->AddRange(stops);
    // Save resultant XPS document
    doc->Save(RunExamples::GetOutDir() + u"AddVerticalGradient_out.xps");
    // ExEnd:1
}

} // namespace WorkingWithGradient
} // namespace CPP
