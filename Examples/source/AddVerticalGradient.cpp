#include "stdafx.h"
//#include "ExampleDirectories.h"
#include "..\RunExamples.h"

using namespace Aspose::Page::Xps;
using namespace Aspose::Page::Xps::XpsModel;

void AddVerticalGradient()
{
	//ExStart: AddVerticalGradient
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
	doc->Save(RunExamples::outDir() + u"AddVerticalGradient_out.xps");
	//ExEnd: AddVerticalGradient
}