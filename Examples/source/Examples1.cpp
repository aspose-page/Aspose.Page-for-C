// Examples1.cpp - creating xps-files with graphics primitives
#include "stdafx.h"
//#include "ExampleDirectories.h"
#include "..\RunExamples.h"

using namespace System;
using namespace Aspose::Page;
using namespace Aspose::Page::Xps;
using namespace Aspose::Page::Xps::XpsModel;

System::SharedPtr<Aspose::Page::Xps::XpsModel::XpsGlyphs> GetNthGlyphs(System::SharedPtr<Aspose::Page::Xps::XpsModel::XpsElement> el, int32_t n, int32_t& cnt)
{
	for (int32_t i = 0; i < el->get_Count(); i++)
	{
		System::SharedPtr<XpsGlyphs> glyphs = GetNthGlyphs(el->idx_get(i), n, System::Ref(cnt));
		if (glyphs == nullptr)
		{
			continue;
		}
		return glyphs;
	}
	if (System::ObjectExt::Is<XpsGlyphs>(el) && ++cnt == n)
	{
		return System::DynamicCast<Aspose::Page::Xps::XpsModel::XpsGlyphs>(el);
	}
	return nullptr;
}

System::SharedPtr<Aspose::Page::Xps::XpsModel::XpsGlyphs> GetNthGlyphs(System::SharedPtr<Aspose::Page::Xps::XpsModel::XpsElement> el, int32_t n)
{
	int32_t cnt = 0;
	return GetNthGlyphs(el, n, System::Ref(cnt));
}

//Example1 - Create simple xps file with image and text.
void Example1()
{
    // new document
    auto doc = System::MakeObject<XpsDocument>();
    
    // Logo as header
    System::SharedPtr<XpsPath> path = doc->AddPath(doc->CreatePathGeometry(u"M 30,20 l 258.24,0 0,56.64 -258.24,0 Z"));
    path->set_RenderTransform(doc->CreateMatrix(0.7f, 0.f, 0.f, 0.7f, 0.f, 20.f));
    path->set_Fill(doc->CreateImageBrush(RunExamples::dataDir() + u"QL_logo_color.tif", System::Drawing::RectangleF(0.f, 0.f, 258.24f, 56.64f), System::Drawing::RectangleF(50.f, 20.f, 193.68f, 42.48f)));
    
    // Text as footer
    System::SharedPtr<XpsSolidColorBrush> textFill = doc->CreateSolidColorBrush(System::Drawing::Color::get_Black());
    System::SharedPtr<XpsGlyphs> glyphs = doc->AddGlyphs(u"Arial", 12.0f, System::Drawing::FontStyle::Regular, 40.f, 1015.f, u"Copyright &#xa9; 2006 QualityLogic, Inc.");
    glyphs->set_Fill(textFill);
    glyphs = doc->AddGlyphs(u"Arial", 12.0f, System::Drawing::FontStyle::Regular, 475.f, 1003.f, u"For information on QualityLogic XPS test products,");
    glyphs->set_Fill(textFill);

    // save in file
    doc->Save(RunExamples::outDir() + u"example1.xps");
}

//Example2 - Create pages and documents
void Example2()
{
    // new document (1 fixed document with 1 default size page)
	auto doc = System::MakeObject<XpsDocument>();
	//add 2-nd page on 1-st document and set active
	doc->AddPage();
	//add 2-nd document with 1 page (3-th page in file) - and no activate
	doc->AddDocument(false);

	//1-th document , 2 page is still active
	System::SharedPtr<XpsSolidColorBrush> textFill = doc->CreateSolidColorBrush(System::Drawing::Color::get_Black());
	System::SharedPtr<XpsGlyphs> glyphs = doc->AddGlyphs(u"Arial", 12.0f, System::Drawing::FontStyle::Regular, 200.f, 500.f, u"Text on Page 2 (Document 1),");
	glyphs->set_Fill(textFill);

	doc->SelectActiveDocument(2);
	glyphs = doc->AddGlyphs(u"Arial", 12.0f, System::Drawing::FontStyle::Regular, 200.f, 500.f, u"Text on Document 2 (Page #3 in file),");
	glyphs->set_Fill(textFill);

	doc->Save(RunExamples::outDir() + u"example2.xps");
}

//Example3 - Filling with image brush and font from some xps-file
void Example3()
{
    // new document
    auto doc = System::MakeObject<XpsDocument>();
    //new brush
    System::SharedPtr<XpsSolidColorBrush> brush = doc->CreateSolidColorBrush(System::Drawing::Color::get_Black());
    // new image brush
    System::SharedPtr<XpsImageBrush> imageBrush = doc->CreateImageBrush(RunExamples::dataDir() + u"R08LN_NN.jpg", System::Drawing::RectangleF(0.f, 0.f, 128.f, 96.f), System::Drawing::RectangleF(20.f, 0.f, 174.f, 130.5f));
    imageBrush->set_TileMode(Aspose::Page::Xps::XpsModel::XpsTileMode::Tile);
    
    // add line from dashes
    System::SharedPtr<XpsPath> path = doc->AddPath(doc->CreatePathGeometry(u"M0,100 L800,100"));
    path->set_Stroke(brush);
    path->set_StrokeThickness(0.5f);
    path->set_StrokeDashArray(System::MakeArray<float>({5, 2, 1, 2}));
    
    //open source xps
    System::SharedPtr<XpsDocument> fontSource = System::MakeObject<XpsDocument>(RunExamples::dataDir() + u"OSHARED-36877.xps");
    //select page
    System::SharedPtr<XpsPage> page = fontSource->SelectActivePage(3);
    //select gliphs    
    System::SharedPtr<XpsGlyphs> glyphs = GetNthGlyphs(page, 1);
    //fill text with image brush
    System::SharedPtr<XpsGlyphs> g = doc->AddGlyphs(glyphs->get_Font(), 120.0f, 50.0f, 100.0f, u"Καλίμπρι | ");
    g->set_Fill(imageBrush);

	doc->Save(RunExamples::outDir() + u"example3.xps");
}

