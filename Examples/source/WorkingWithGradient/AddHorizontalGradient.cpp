﻿#include <stdafx.h>
#include "WorkingWithGradient/AddHorizontalGradient.h"

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

RTTI_INFO_IMPL_HASH(2444194325u, ::CPP::WorkingWithGradient::AddHorizontalGradient, ThisTypeBaseTypesInfo);

void AddHorizontalGradient::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithGradient();
    // Create new XPS Document
    System::SharedPtr<XpsDocument> doc = System::MakeObject<XpsDocument>();
    // Initialize List of XpsGradentStop
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> stops = System::MakeObject<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>>();
    stops->Add(doc->CreateGradientStop(doc->CreateColor(255, 244, 253, 225), 0.0673828f));
    stops->Add(doc->CreateGradientStop(doc->CreateColor(255, 251, 240, 23), 0.314453f));
    stops->Add(doc->CreateGradientStop(doc->CreateColor(255, 252, 209, 0), 0.482422f));
    stops->Add(doc->CreateGradientStop(doc->CreateColor(255, 241, 254, 161), 0.634766f));
    stops->Add(doc->CreateGradientStop(doc->CreateColor(255, 53, 253, 255), 0.915039f));
    stops->Add(doc->CreateGradientStop(doc->CreateColor(255, 12, 91, 248), 1.f));
    // Create new path by defining geometery in abbreviation form
    System::SharedPtr<XpsPath> path = doc->AddPath(doc->CreatePathGeometry(u"M 10,210 L 228,210 228,300 10,300"));
    path->set_RenderTransform(doc->CreateMatrix(1.f, 0.f, 0.f, 1.f, 20.f, 70.f));
    path->set_Fill(doc->CreateLinearGradientBrush(System::Drawing::PointF(10.f, 0.f), System::Drawing::PointF(228.f, 0.f)));
    (System::DynamicCast<Aspose::Page::XPS::XpsModel::XpsGradientBrush>(path->get_Fill()))->get_GradientStops()->AddRange(stops);
    // Save resultant XPS document
    doc->Save(RunExamples::GetOutDir() + u"AddHorizontalGradient_out.xps");
    // ExEnd:1
}

} // namespace WorkingWithGradient
} // namespace CPP
