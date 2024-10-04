#include "stdafx.h"
#include "WorkingWithTransparency/SetOpacityMaskXPS.h"

#include <system/object_ext.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPathGeometry.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPath.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsEnums.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsColors/XpsColor.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsCanvas.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsSolidColorBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsImageBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsDocument.h>
#include <drawing/rectangle_f.h>

#include "RunExamples.h"


using namespace Aspose::Page::XPS;
using namespace Aspose::Page::XPS::XpsModel;
namespace CSharp {

namespace WorkingWithTransparency {

RTTI_INFO_IMPL_HASH(929496318u, ::CSharp::WorkingWithTransparency::SetOpacityMaskXPS, ThisTypeBaseTypesInfo);

void SetOpacityMaskXPS::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithTransparency();
    // Create new XPS Document
    System::SharedPtr<XpsDocument> doc = System::MakeObject<XpsDocument>();
    //Add Canvas to XpsDocument instance
    System::SharedPtr<XpsCanvas> canvas = doc->AddCanvas();
    // Rectangle with opacity masked by ImageBrush
    System::SharedPtr<XpsPath> path = canvas->AddPath(doc->CreatePathGeometry(u"M 10,180 L 228,180 228,285 10,285"));
    path->set_Fill(doc->CreateSolidColorBrush(doc->CreateColor(1.0f, 0.0f, 0.0f)));
    path->set_OpacityMask(doc->CreateImageBrush(dataDir + u"R08SY_NN.tif", System::Drawing::RectangleF(0.f, 0.f, 128.f, 192.f), System::Drawing::RectangleF(0.f, 0.f, 64.f, 96.f)));
    (System::ExplicitCast<Aspose::Page::XPS::XpsModel::XpsImageBrush>(path->get_OpacityMask()))->set_TileMode(Aspose::Page::XPS::XpsModel::XpsTileMode::Tile);
    // Save resultant XPS document
    doc->Save(dataDir + u"OpacityMask_out.xps");
    // ExEnd:1
}

} // namespace WorkingWithTransparency
} // namespace CSharp
