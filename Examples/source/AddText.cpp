#include "stdafx.h"
//#include "ExampleDirectories.h"
#include "..\RunExamples.h"

using namespace Aspose::Page::Xps;
using namespace Aspose::Page::Xps::XpsModel;

void AddText()
{
	// ExStart:AddText
	// Create new XPS Document
	auto doc = System::MakeObject<XpsDocument>();
	//Create a brush 
	System::SharedPtr<XpsSolidColorBrush> textFill = doc->CreateSolidColorBrush(System::Drawing::Color::get_Black());
	//Add glyph to the document
	System::SharedPtr<XpsGlyphs> glyphs = doc->AddGlyphs(u"Arial", 12.0f, System::Drawing::FontStyle::Regular, 300.f, 450.f, u"Hello World!");
	glyphs->set_Fill(textFill);
	// Save resultant XPS document
	doc->Save(RunExamples::outDir() + u"AddText_out.xps");
	// ExEnd:AddText
}