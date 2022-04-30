#include <stdafx.h>
#include "WorkingWithImages/AddTiledImage.h"

#include <system/string.h>
#include <system/exceptions.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPathGeometry.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPath.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsEnums.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsImageBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsDocument.h>
#include <drawing/rectangle_f.h>

#include "RunExamples.h"


using namespace Aspose::Page::XPS;
using namespace Aspose::Page::XPS::XpsModel;
namespace CPP {

namespace WorkingWithImages {

RTTI_INFO_IMPL_HASH(830494u, ::CPP::WorkingWithImages::AddTiledImage, ThisTypeBaseTypesInfo);

void AddTiledImage::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithImages();
    // Create new XPS Document
    System::SharedPtr<XpsDocument> doc = System::MakeObject<XpsDocument>();
    // Tile image
    // ImageBrush filled rectangle in the right top bellow
    System::SharedPtr<XpsPath> path = doc->AddPath(doc->CreatePathGeometry(u"M 10,160 L 228,160 228,305 10,305"));
    path->set_Fill(doc->CreateImageBrush(dataDir + u"R08LN_NN.jpg", System::Drawing::RectangleF(0.f, 0.f, 128.f, 96.f), System::Drawing::RectangleF(0.f, 0.f, 64.f, 48.f)));
    (System::DynamicCast<Aspose::Page::XPS::XpsModel::XpsImageBrush>(path->get_Fill()))->set_TileMode(Aspose::Page::XPS::XpsModel::XpsTileMode::Tile);
    path->get_Fill()->set_Opacity(0.5f);
    // Save resultant XPS document
    doc->Save(RunExamples::GetOutDir() + u"AddTiledImage_out.xps");
    // ExEnd:1
}

} // namespace WorkingWithImages
} // namespace CPP
