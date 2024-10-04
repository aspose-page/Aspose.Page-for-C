﻿#include "stdafx.h"
// C# preprocessor directive: #if ASPOSE_DRAWING

// C# INACTIVE CODE:
// using FontStyle = Aspose.Page.Drawing.FontStyle;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif

#include "WorkingWithText/AddTextXPS.h"

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
namespace CSharp {

namespace WorkingWithText {

RTTI_INFO_IMPL_HASH(3273672362u, ::CSharp::WorkingWithText::AddTextXPS, ThisTypeBaseTypesInfo);

void AddTextXPS::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithText();
    // Create new XPS Document
    System::SharedPtr<XpsDocument> doc = System::MakeObject<XpsDocument>();
    //Create a brush 
    System::SharedPtr<XpsSolidColorBrush> textFill = doc->CreateSolidColorBrush(System::Drawing::Color::get_Black());
    //Add glyph to the document
    System::SharedPtr<XpsGlyphs> glyphs = doc->AddGlyphs(u"Arial", 12.0f, System::Drawing::FontStyle::Regular, 300.f, 450.f, u"Hello World!");
    glyphs->set_Fill(textFill);
    // Save resultant XPS document
    doc->Save(dataDir + u"AddText_out.xps");
    // ExEnd:1
}

} // namespace WorkingWithText
} // namespace CSharp