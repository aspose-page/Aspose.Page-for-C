#include "stdafx.h"
// C# preprocessor directive: #if ASPOSE_DRAWING

// C# INACTIVE CODE:
// using FontStyle = Aspose.Page.Drawing.FontStyle;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif

#include "WorkingWithCrossPackageOperations/AddGlyphCloneAndChangeColor.h"

#include <system/object_ext.h>
#include <system/enum_helpers.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsGlyphs.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsColors/XpsColor.h>
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

namespace WorkingWithCrossPackageOperations {

RTTI_INFO_IMPL_HASH(3622953132u, ::CSharp::WorkingWithCrossPackageOperations::AddGlyphCloneAndChangeColor, ThisTypeBaseTypesInfo);

void AddGlyphCloneAndChangeColor::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithCrossPackageOperations();
    
    // Create the first XPS Document
    System::SharedPtr<XpsDocument> doc1 = System::MakeObject<XpsDocument>();
    
    // Add glyphs to the first document
    System::SharedPtr<XpsGlyphs> glyphs = doc1->AddGlyphs(u"Times New Roman", 200.0f, System::Drawing::FontStyle::Bold, 50.0f, 250.0f, u"Test");
    
    // Fill glyphs in the first document with one color
    glyphs->set_Fill(doc1->CreateSolidColorBrush(System::Drawing::Color::get_Green()));
    
    // Create the second XPS Document
    System::SharedPtr<XpsDocument> doc2 = System::MakeObject<XpsDocument>();
    
    // Add glyphs cloned from the one's from the first document
    glyphs = doc2->Add<System::SharedPtr<XpsGlyphs>>(glyphs->Clone());
    
    // Fill glyphs in the second document with another color
    (System::ExplicitCast<Aspose::Page::XPS::XpsModel::XpsSolidColorBrush>(glyphs->get_Fill()))->set_Color(doc2->CreateColor(System::Drawing::Color::get_Red()));
    
    // Save the first XPS document
    doc1->Save(dataDir + u"out1.xps");
    
    // Save the second XPS document
    doc2->Save(dataDir + u"out2.xps");
    // ExEnd:1
}

} // namespace WorkingWithCrossPackageOperations
} // namespace CSharp
