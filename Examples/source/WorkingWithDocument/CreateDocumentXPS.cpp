#include "stdafx.h"
// C# preprocessor directive: #if ASPOSE_DRAWING

// C# INACTIVE CODE:
// using FontStyle = Aspose.Page.Drawing.FontStyle;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif

#include "WorkingWithDocument/CreateDocumentXPS.h"

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

namespace WorkingWithDocument {

RTTI_INFO_IMPL_HASH(1416631481u, ::CSharp::WorkingWithDocument::CreateDocumentXPS, ThisTypeBaseTypesInfo);

void CreateDocumentXPS::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dir = RunExamples::GetDataDir_WorkingWithDocument();
    // Create new XPS Document
    System::SharedPtr<XpsDocument> xDocs = System::MakeObject<XpsDocument>();
    
    // add glyph to the document
    auto glyphs = xDocs->AddGlyphs(u"Arial", 12.0f, System::Drawing::FontStyle::Regular, 300.f, 450.f, u"Hello World!");
    
    glyphs->set_Fill(xDocs->CreateSolidColorBrush(System::Drawing::Color::get_Black()));
    
    // save result
    xDocs->Save(dir + u"output.xps");
    // ExEnd:1
}

} // namespace WorkingWithDocument
} // namespace CSharp
