#include "stdafx.h"
//#include "ExampleDirectories.h"
#include "..\RunExamples.h"

using namespace Aspose::Page::Xps;
using namespace Aspose::Page::Xps::XpsModel; 

void AddTextUsingUnicodeString()
{
	// ExStart:AddTextUsingUnicodeString
	// Create new XPS Document
	auto doc = System::MakeObject<XpsDocument>();
	// Add Text
	System::SharedPtr<XpsSolidColorBrush> textFill = doc->CreateSolidColorBrush(System::Drawing::Color::get_Black());
	System::SharedPtr<XpsGlyphs> glyphs = doc->AddGlyphs(u"Arial", 20.0f, System::Drawing::FontStyle::Regular, 400.f, 200.f, u"++C. rof SPX.esopsA");
	glyphs->set_BidiLevel(1);
	glyphs->set_Fill(textFill);
	// Save resultant XPS document
	doc->Save(RunExamples::outDir() + u"AddText_out.xps");
	// ExEnd:AddTextUsingUnicodeString
}