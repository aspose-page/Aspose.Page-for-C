#include <stdafx.h>
#include "WorkingWithText/AddTextUsingUnicodeString.h"

#include <system/string.h>
#include <system/enum_helpers.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsGlyphs.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsSolidColorBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsDocument.h>
#include <drawing/font_style.h>
#include <drawing/color.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::XPS;
using namespace Aspose::Page::XPS::XpsModel;
namespace CPP {

namespace WorkingWithText {

RTTI_INFO_IMPL_HASH(2781134939u, ::CPP::WorkingWithText::AddTextUsingUnicodeString, ThisTypeBaseTypesInfo);

void AddTextUsingUnicodeString::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithText();
    // Create new XPS Document
    System::SharedPtr<XpsDocument> doc = System::MakeObject<XpsDocument>();
    // Add Text
    System::SharedPtr<XpsSolidColorBrush> textFill = doc->CreateSolidColorBrush(System::Drawing::Color::get_Black());
    System::SharedPtr<XpsGlyphs> glyphs = doc->AddGlyphs(u"Arial", 20.0f, System::Drawing::FontStyle::Regular, 400.f, 200.f, u"TEN. rof SPX.esopsA");
    glyphs->set_BidiLevel(1);
    glyphs->set_Fill(textFill);
    // Save resultant XPS document
    doc->Save(RunExamples::GetOutDir() + u"AddText_out.xps");
    // ExEnd:1
}

} // namespace WorkingWithText
} // namespace CPP
