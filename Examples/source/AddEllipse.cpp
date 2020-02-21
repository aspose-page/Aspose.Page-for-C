#include "stdafx.h"
//#include "ExampleDirectories.h"
#include "..\RunExamples.h"

using namespace Aspose::Page::Xps;
using namespace Aspose::Page::Xps::XpsModel;

void AddEllipse()
{
	// ExStart:AddEllipse
	// Create new XPS Document
	auto doc = System::MakeObject<XpsDocument>();
	// Radial gradient stroked ellipse in the lower left
	auto stops = System::MakeObject<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>>();
	stops->Add(doc->CreateGradientStop(doc->CreateColor(0, 0, 255), 0.f));
	stops->Add(doc->CreateGradientStop(doc->CreateColor(255, 0, 0), .25f));
	stops->Add(doc->CreateGradientStop(doc->CreateColor(0, 255, 0), .5f));
	stops->Add(doc->CreateGradientStop(doc->CreateColor(255, 255, 0), .75f));
	stops->Add(doc->CreateGradientStop(doc->CreateColor(255, 0, 0), 1.f));

	System::SharedPtr<XpsPath> path = doc->AddPath(doc->CreatePathGeometry(u"M 20,250 A 100,50 0 1 1 220,250 100,50 0 1 1 20,250"));
	path->set_Stroke(doc->CreateRadialGradientBrush(System::Drawing::PointF(575.f, 125.f), System::Drawing::PointF(575.f, 100.f), 75.f, 50.f));
	(System::DynamicCast<Aspose::Page::Xps::XpsModel::XpsGradientBrush>(path->get_Stroke()))->set_SpreadMethod(Aspose::Page::Xps::XpsModel::XpsSpreadMethod::Reflect);
	(System::DynamicCast<Aspose::Page::Xps::XpsModel::XpsGradientBrush>(path->get_Stroke()))->get_GradientStops()->AddRange(stops);
	stops->Clear();
	path->set_StrokeThickness(12.f);
	// Save resultant XPS document
	doc->Save(RunExamples::outDir() + u"AddEllipse_out.xps");
	// ExEnd:AddEllipse
}