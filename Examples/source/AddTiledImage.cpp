#include "stdafx.h"
//#include "ExampleDirectories.h"
#include "..\RunExamples.h"

using namespace Aspose::Page::Xps;
using namespace Aspose::Page::Xps::XpsModel;


void AddTiledImage()
{
	//ExStart: AddTiledImage
	// Create new XPS Document
	System::SharedPtr<XpsDocument> doc = System::MakeObject<XpsDocument>();
	// Tile image
	// ImageBrush filled rectangle in the right top bellow
	System::SharedPtr<XpsPath> path = doc->AddPath(doc->CreatePathGeometry(u"M 10,160 L 228,160 228,305 10,305"));
	path->set_Fill(doc->CreateImageBrush(RunExamples::dataDir() + u"R08LN_NN.jpg", System::Drawing::RectangleF(0.f, 0.f, 128.f, 96.f), System::Drawing::RectangleF(0.f, 0.f, 64.f, 48.f)));
	(System::DynamicCast<Aspose::Page::Xps::XpsModel::XpsImageBrush>(path->get_Fill()))->set_TileMode(Aspose::Page::Xps::XpsModel::XpsTileMode::Tile);
	path->get_Fill()->set_Opacity(0.5f);
	// Save resultant XPS document
	doc->Save(RunExamples::outDir() + u"AddTiledImage_out.xps");
	// ExEnd: AddTiledImage
}