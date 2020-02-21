#include "stdafx.h"
//#include "ExampleDirectories.h"
#include "..\RunExamples.h"

using namespace Aspose::Page::Xps;
using namespace Aspose::Page::Xps::XpsModel;

void AddLinearGradient()
{
	//ExStart: AddImage
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
	doc->Save(RunExamples::outDir() + u"AddLinearGradient_out.xps");
	//ExEnd: AddImage
}