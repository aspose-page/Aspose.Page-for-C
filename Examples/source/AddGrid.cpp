#include "stdafx.h"
//#include "ExampleDirectories.h"
#include "..\RunExamples.h"

using namespace Aspose::Page::Xps;
using namespace Aspose::Page::Xps::XpsModel;

void AddGrid()
{
	// ExStart:AddGrid
	auto doc = System::MakeObject<XpsDocument>();
	// Geometry for magenta grid VisualBrush
	System::SharedPtr<XpsPathGeometry> pathGeometry = doc->CreatePathGeometry();
	pathGeometry->AddSegment(doc->CreatePolyLineSegment(System::MakeArray<System::Drawing::PointF>({ System::Drawing::PointF(240.f, 5.f), System::Drawing::PointF(240.f, 310.f), System::Drawing::PointF(0.f, 310.f) })));
	pathGeometry->idx_get(0)->set_StartPoint(System::Drawing::PointF(0.f, 5.f));

	// Canvas for magenta grid VisualBrush
	System::SharedPtr<XpsCanvas> visualCanvas = doc->CreateCanvas();

	System::SharedPtr<XpsPath> visualPath = visualCanvas->AddPath(doc->CreatePathGeometry(u"M 0,4 L 4,4 4,0 6,0 6,4 10,4 10,6 6,6 6,10 4,10 4,6 0,6 Z"));
	visualPath->set_Fill(doc->CreateSolidColorBrush(doc->CreateColor(1.f, .61f, 0.1f, 0.61f)));

	System::SharedPtr<XpsPath> gridPath = doc->CreatePath(pathGeometry);
	//Create Visual Brush, it is specified by some XPS fragment (vector graphics and glyphs)
	gridPath->set_Fill(doc->CreateVisualBrush(visualCanvas, System::Drawing::RectangleF(0.f, 0.f, 10.f, 10.f), System::Drawing::RectangleF(0.f, 0.f, 10.f, 10.f)));
	(System::DynamicCast<Aspose::Page::Xps::XpsModel::XpsVisualBrush>(gridPath->get_Fill()))->set_TileMode(Aspose::Page::Xps::XpsModel::XpsTileMode::Tile);
	// New canvas
	System::SharedPtr<XpsCanvas> canvas = doc->AddCanvas();
	canvas->set_RenderTransform(doc->CreateMatrix(1.f, 0.f, 0.f, 1.f, 268.f, 70.f));
	// Add grid
	canvas->AddPath(gridPath);
	// Red transparent rectangle in the middle top
	System::SharedPtr<XpsPath> path = canvas->AddPath(doc->CreatePathGeometry(u"M 30,20 l 258.24,0 0,56.64 -258.24,0 Z"));
	path = canvas->AddPath(doc->CreatePathGeometry(u"M 10,10 L 228,10 228,100 10,100"));
	path->set_Fill(doc->CreateSolidColorBrush(doc->CreateColor(1.0f, 0.0f, 0.0f)));
	path->set_Opacity(0.7f);
	// Save resultant XPS document
	doc->Save(RunExamples::outDir() + u"AddGrid_out.xps");
	// ExEnd:AddGrid
}