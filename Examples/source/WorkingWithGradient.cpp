#include "stdafx.h"
#include "ExampleDirectories.h"

using namespace Aspose::Page::Xps;
using namespace Aspose::Page::Xps::XpsModel;

namespace WorkingWithGradient {

void AddHorizontalGradient()
{
    // Create new XPS Document
    auto doc = System::MakeObject<XpsDocument>();
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
    (System::DynamicCast<Aspose::Page::Xps::XpsModel::XpsGradientBrush>(path->get_Fill()))->get_GradientStops()->AddRange(stops);
    // Save resultant XPS document
    doc->Save(outDir() + u"AddHorizontalGradient_out.xps");
}

void AddLinearGradient()
{
    // Create new XPS Document
	auto doc = System::MakeObject<XpsDocument>();
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
    (System::DynamicCast<Aspose::Page::Xps::XpsModel::XpsGradientBrush>(path->get_Fill()))->get_GradientStops()->AddRange(stops);
    // Save resultant XPS document
    doc->Save(outDir() + u"AddLinearGradient_out.xps");
}

void AddVerticalGradient()
{
    // Create new XPS Document
	auto doc = System::MakeObject<XpsDocument>();
    // Initialize List of XpsGradentStop
	auto stops = System::MakeObject<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>>();
    stops->Add(doc->CreateGradientStop(doc->CreateColor(253, 255, 12, 0), 0.f));
    stops->Add(doc->CreateGradientStop(doc->CreateColor(252, 255, 154, 0), 0.359375f));
    stops->Add(doc->CreateGradientStop(doc->CreateColor(252, 255, 56, 0), 0.424805f));
    stops->Add(doc->CreateGradientStop(doc->CreateColor(253, 255, 229, 0), 0.879883f));
    stops->Add(doc->CreateGradientStop(doc->CreateColor(252, 255, 255, 234), 1.f));
    // Create new path by defining geometery in abbreviation form
    System::SharedPtr<XpsPath> path = doc->AddPath(doc->CreatePathGeometry(u"M 10,110 L 228,110 228,200 10,200"));
    path->set_RenderTransform(doc->CreateMatrix(1.f, 0.f, 0.f, 1.f, 20.f, 70.f));
    path->set_Fill(doc->CreateLinearGradientBrush(System::Drawing::PointF(10.f, 110.f), System::Drawing::PointF(10.f, 200.f)));
    (System::DynamicCast<Aspose::Page::Xps::XpsModel::XpsGradientBrush>(path->get_Fill()))->get_GradientStops()->AddRange(stops);
    // Save resultant XPS document
    doc->Save(outDir() + u"AddVerticalGradient_out.xps");
}

} // namespace WorkingWithGradient