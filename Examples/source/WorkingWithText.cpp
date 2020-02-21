#include "stdafx.h"
#include "ExampleDirectories.h"

using namespace Aspose::Page::Xps;
using namespace Aspose::Page::Xps::XpsModel;

namespace WorkingWithText {

void AddText()
{
    // ExStart:1
    // Create new XPS Document
    auto doc = System::MakeObject<XpsDocument>();
    //Create a brush 
    System::SharedPtr<XpsSolidColorBrush> textFill = doc->CreateSolidColorBrush(System::Drawing::Color::get_Black());
    //Add glyph to the document
    System::SharedPtr<XpsGlyphs> glyphs = doc->AddGlyphs(u"Arial", 12.0f, System::Drawing::FontStyle::Regular, 300.f, 450.f, u"Hello World!");
    glyphs->set_Fill(textFill);
    // Save resultant XPS document
    doc->Save(outDir() + u"AddText_out.xps");
    // ExEnd:1
}

void AddTextUsingUnicodeString()
{
    // ExStart:1
    // Create new XPS Document
    auto doc = System::MakeObject<XpsDocument>();
    // Add Text
    System::SharedPtr<XpsSolidColorBrush> textFill = doc->CreateSolidColorBrush(System::Drawing::Color::get_Black());
    System::SharedPtr<XpsGlyphs> glyphs = doc->AddGlyphs(u"Arial", 20.0f, System::Drawing::FontStyle::Regular, 400.f, 200.f, u"++C. rof SPX.esopsA");
    glyphs->set_BidiLevel(1);
    glyphs->set_Fill(textFill);
    // Save resultant XPS document
    doc->Save(outDir() + u"AddText_out.xps");
    // ExEnd:1
}

} // namespace WorkingWithText