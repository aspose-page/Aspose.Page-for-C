#include <stdafx.h>
#include "WorkingWithImages/AddImage.h"

#include <system/string.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPathGeometry.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPath.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsMatrix.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsImageBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsDocument.h>
#include <drawing/rectangle_f.h>

#include "RunExamples.h"


using namespace Aspose::Page::XPS;
using namespace Aspose::Page::XPS::XpsModel;
namespace CPP {

namespace WorkingWithImages {

RTTI_INFO_IMPL_HASH(1584832066u, ::CPP::WorkingWithImages::AddImage, ThisTypeBaseTypesInfo);

void AddImage::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithImages();
    // Create new XPS Document
    System::SharedPtr<XpsDocument> doc = System::MakeObject<XpsDocument>();
    // Add Image
    System::SharedPtr<XpsPath> path = doc->AddPath(doc->CreatePathGeometry(u"M 30,20 l 258.24,0 0,56.64 -258.24,0 Z"));
    //Creating a matrix is optional, it can be used for proper positioning
    path->set_RenderTransform(doc->CreateMatrix(0.7f, 0.f, 0.f, 0.7f, 0.f, 20.f));
    //Create Image Brush
    path->set_Fill(doc->CreateImageBrush(dataDir + u"QL_logo_color.tif", System::Drawing::RectangleF(0.f, 0.f, 258.24f, 56.64f), System::Drawing::RectangleF(50.f, 20.f, 193.68f, 42.48f)));
    // Save resultant XPS document
    doc->Save(RunExamples::GetOutDir() + u"AddImage_out.xps");
    // ExEnd:1
}

} // namespace WorkingWithImages
} // namespace CPP
