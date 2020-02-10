#include "stdafx.h"
#include "ExampleDirectories.h"

using namespace Aspose::Page::Xps;
using namespace Aspose::Page::Xps::XpsModel;

namespace WorkingWithImages {

void AddImage()
{
    // Create new XPS Document
    System::SharedPtr<XpsDocument> doc = System::MakeObject<XpsDocument>();
    // Add Image
    System::SharedPtr<XpsPath> path = doc->AddPath(doc->CreatePathGeometry(u"M 30,20 l 258.24,0 0,56.64 -258.24,0 Z"));
    //Creating a matrix is optional, it can be used for proper positioning
    path->set_RenderTransform(doc->CreateMatrix(0.7f, 0.f, 0.f, 0.7f, 0.f, 20.f));
    //Create Image Brush
    path->set_Fill(doc->CreateImageBrush(dataDir() + u"QL_logo_color.tif", System::Drawing::RectangleF(0.f, 0.f, 258.24f, 56.64f), System::Drawing::RectangleF(50.f, 20.f, 193.68f, 42.48f)));
    // Save resultant XPS document
    doc->Save(outDir() + u"AddImage_out.xps");
    // ExEnd:1
}

void AddTiledImage()
{
    // Create new XPS Document
    System::SharedPtr<XpsDocument> doc = System::MakeObject<XpsDocument>();
    // Tile image
    // ImageBrush filled rectangle in the right top bellow
    System::SharedPtr<XpsPath> path = doc->AddPath(doc->CreatePathGeometry(u"M 10,160 L 228,160 228,305 10,305"));
    path->set_Fill(doc->CreateImageBrush(dataDir() + u"R08LN_NN.jpg", System::Drawing::RectangleF(0.f, 0.f, 128.f, 96.f), System::Drawing::RectangleF(0.f, 0.f, 64.f, 48.f)));
    (System::DynamicCast<Aspose::Page::Xps::XpsModel::XpsImageBrush>(path->get_Fill()))->set_TileMode(Aspose::Page::Xps::XpsModel::XpsTileMode::Tile);
    path->get_Fill()->set_Opacity(0.5f);
    // Save resultant XPS document
    doc->Save(outDir() + u"AddTiledImage_out.xps");
    // ExEnd:1
}

} // namespace WorkingWithImages