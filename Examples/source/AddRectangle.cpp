#include "stdafx.h"
//#include "ExampleDirectories.h"
#include "..\RunExamples.h"

using namespace Aspose::Page::Xps;
using namespace Aspose::Page::Xps::XpsModel;

void AddRectangle()
{
	// ExStart:AddRectangle
	// Create new XPS Document
	auto doc = System::MakeObject<XpsDocument>();
	// CMYK (blue) solid color stroked rectangle in the lower left
	System::SharedPtr<XpsPath> path = doc->AddPath(doc->CreatePathGeometry(u"M 20,10 L 220,10 220,100 20,100 Z"));
	path->set_Stroke(doc->CreateSolidColorBrush(doc->CreateColor(RunExamples::dataDir() + u"uswebuncoated.icc", System::MakeArray<float>({ 1.0f, 1.000f, 0.000f, 0.000f, 0.000f }))));
	path->set_StrokeThickness(12.f);
	// Save resultant XPS document
	doc->Save(RunExamples::outDir() + u"AddRectangle_out.xps");
	// ExEnd:AddRectangle
}