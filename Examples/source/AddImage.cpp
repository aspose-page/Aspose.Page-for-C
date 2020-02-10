#include "stdafx.h"
//#include "ExampleDirectories.h"
#include "..\RunExamples.h"

using namespace Aspose::Page::Xps;
using namespace Aspose::Page::Xps::XpsModel;

void AddImage()
{
	//ExStart: AddImage
	// Create new XPS Document
	System::SharedPtr<XpsDocument> doc = System::MakeObject<XpsDocument>();
	// Add Image
	System::SharedPtr<XpsPath> path = doc->AddPath(doc->CreatePathGeometry(u"M 30,20 l 258.24,0 0,56.64 -258.24,0 Z"));
	//Creating a matrix is optional, it can be used for proper positioning
	path->set_RenderTransform(doc->CreateMatrix(0.7f, 0.f, 0.f, 0.7f, 0.f, 20.f));
	//Create Image Brush
	path->set_Fill(doc->CreateImageBrush(RunExamples::dataDir() + u"QL_logo_color.tif", System::Drawing::RectangleF(0.f, 0.f, 258.24f, 56.64f), System::Drawing::RectangleF(50.f, 20.f, 193.68f, 42.48f)));
	// Save resultant XPS document
	doc->Save(RunExamples::outDir() + u"AddImage_out.xps");
	// ExEnd: AddImage
}