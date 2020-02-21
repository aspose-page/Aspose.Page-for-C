#include "stdafx.h"
//#include "ExampleDirectories.h"
#include "..\RunExamples.h"

using namespace Aspose::Page::Xps;
using namespace Aspose::Page::Xps::XpsModel;

void SetOpacityMask()
{
	// ExStart:SetOpacityMask
	// Create new XPS Document
	System::SharedPtr<XpsDocument> doc = System::MakeObject<XpsDocument>();
	//Add Canvas to XpsDocument instance
	System::SharedPtr<XpsCanvas> canvas = doc->AddCanvas();
	// Rectangle with opacity masked by ImageBrush
	System::SharedPtr<XpsPath> path = canvas->AddPath(doc->CreatePathGeometry(u"M 10,180 L 228,180 228,285 10,285"));
	path->set_Fill(doc->CreateSolidColorBrush(doc->CreateColor(1.0f, 0.0f, 0.0f)));
	path->set_OpacityMask(doc->CreateImageBrush(RunExamples::dataDir() + u"R08SY_NN.tif", System::Drawing::RectangleF(0.f, 0.f, 128.f, 192.f), System::Drawing::RectangleF(0.f, 0.f, 64.f, 96.f)));
	(System::DynamicCast<Aspose::Page::Xps::XpsModel::XpsImageBrush>(path->get_OpacityMask()))->set_TileMode(Aspose::Page::Xps::XpsModel::XpsTileMode::Tile);
	// Save resultant XPS document
	doc->Save(RunExamples::outDir() + u"OpacityMask_out.xps");
	// ExEnd:SetOpacityMask
}