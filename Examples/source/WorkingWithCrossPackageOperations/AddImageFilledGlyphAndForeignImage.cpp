#include "stdafx.h"
// C# preprocessor directive: #if ASPOSE_DRAWING

// C# INACTIVE CODE:
// using FontStyle = Aspose.Page.Drawing.FontStyle;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif

#include "WorkingWithCrossPackageOperations/AddImageFilledGlyphAndForeignImage.h"

#include <system/object_ext.h>
#include <system/enum_helpers.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsGlyphs.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsFileResources/XpsImage.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsFileResources/XpsFont.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsEnums.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsImageBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsDocument.h>
#include <drawing/rectangle_f.h>
#include <drawing/font_style.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::XPS;
using namespace Aspose::Page::XPS::XpsModel;
namespace CSharp {

namespace WorkingWithCrossPackageOperations {

RTTI_INFO_IMPL_HASH(617961360u, ::CSharp::WorkingWithCrossPackageOperations::AddImageFilledGlyphAndForeignImage, ThisTypeBaseTypesInfo);

void AddImageFilledGlyphAndForeignImage::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithCrossPackageOperations();
    
    // Create the first XPS Document
    System::SharedPtr<XpsDocument> doc1 = System::MakeObject<XpsDocument>();
    
    // Add glyphs to the first document
    System::SharedPtr<XpsGlyphs> glyphs1 = doc1->AddGlyphs(u"Times New Roman", 200.0f, System::Drawing::FontStyle::Bold, 50.0f, 250.0f, u"Test");
    
    // Fill the glyphs with an image brush
    glyphs1->set_Fill(doc1->CreateImageBrush(dataDir + u"R08SY_NN.tif", System::Drawing::RectangleF(0.f, 0.f, 128.f, 192.f), System::Drawing::RectangleF(0.f, 0.f, 64.f, 96.f)));
    (System::ExplicitCast<Aspose::Page::XPS::XpsModel::XpsImageBrush>(glyphs1->get_Fill()))->set_TileMode(Aspose::Page::XPS::XpsModel::XpsTileMode::Tile);
    
    // Create the second XPS Document
    System::SharedPtr<XpsDocument> doc2 = System::MakeObject<XpsDocument>();
    
    // Add glyphs with the font from the first document to the second document
    System::SharedPtr<XpsGlyphs> glyphs2 = doc2->AddGlyphs(glyphs1->get_Font(), 200.0f, 50.0f, 250.0f, u"Test");
    
    // Create an image brush from the fill of the the first document and fill glyphs in the second document
    glyphs2->set_Fill(doc2->CreateImageBrush((System::ExplicitCast<Aspose::Page::XPS::XpsModel::XpsImageBrush>(glyphs1->get_Fill()))->get_Image(), System::Drawing::RectangleF(0.f, 0.f, 128.f, 192.f), System::Drawing::RectangleF(0.f, 0.f, 128.f, 192.f)));
    (System::ExplicitCast<Aspose::Page::XPS::XpsModel::XpsImageBrush>(glyphs2->get_Fill()))->set_TileMode(Aspose::Page::XPS::XpsModel::XpsTileMode::Tile);
    
    // Save the first XPS document
    doc1->Save(dataDir + u"out1.xps");
    
    // Save the second XPS document
    doc2->Save(dataDir + u"out2.xps");
    // ExEnd:1
}

} // namespace WorkingWithCrossPackageOperations
} // namespace CSharp
