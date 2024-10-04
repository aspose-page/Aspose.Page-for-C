#include "stdafx.h"
#include "WorkingWithShapes/ApplyDifferentColorSpacesXPS.h"

#include <system/array.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPathGeometry.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPath.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsColors/XpsColor.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsSolidColorBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsBrush.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsDocument.h>
#include <drawing/color.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::XPS;
using namespace Aspose::Page::XPS::XpsModel;
namespace CSharp {

namespace WorkingWithShapes {

RTTI_INFO_IMPL_HASH(980662872u, ::CSharp::WorkingWithShapes::ApplyDifferentColorSpacesXPS, ThisTypeBaseTypesInfo);

void ApplyDifferentColorSpacesXPS::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithShapes();
    
    // Create new XPS Document
    System::SharedPtr<XpsDocument> doc = System::MakeObject<XpsDocument>();
    
    // ARGB solid color filled rectangle
    System::SharedPtr<XpsPath> rect1 = doc->AddPath(doc->CreatePathGeometry(u"M 20,10 L 220,10 220,100 20,100 Z"));
    rect1->set_Fill(doc->CreateSolidColorBrush(doc->CreateColor(System::Drawing::Color::FromArgb(222, 12, 15, 159))));
    
    // ARGB solid color filled rectangle, another way
    System::SharedPtr<XpsPath> rect2 = doc->AddPath(doc->CreatePathGeometry(u"M 20,210 L 220,210 220,300 20,300 Z"));
    rect2->set_Fill(doc->CreateSolidColorBrush(doc->CreateColor(222, 12, 15, 159)));
    
    // sRGB solid color filled rectangle
    System::SharedPtr<XpsPath> rect3 = doc->AddPath(doc->CreatePathGeometry(u"M 20,410 L 220,410 220,500 20,500 Z"));
    rect3->set_Fill(doc->CreateSolidColorBrush(doc->CreateColor(12, 15, 159)));
    
    // scRGB solid color filled rectangle
    System::SharedPtr<XpsPath> rect4 = doc->AddPath(doc->CreatePathGeometry(u"M 20,610 L 220,610 220,700 20,700 Z"));
    rect4->set_Fill(doc->CreateSolidColorBrush(doc->CreateColor(0.08706f, 0.04706f, 0.05882f, 0.62353f)));
    
    // CMYK (blue) solid color filled rectangle
    System::SharedPtr<XpsPath> rect5 = doc->AddPath(doc->CreatePathGeometry(u"M 20,810 L 220,810 220,900 20,900 Z"));
    rect5->set_Fill(doc->CreateSolidColorBrush(doc->CreateColor(dataDir + u"uswebuncoated.icc", System::MakeArray<float>({1.0f, 1.000f, 0.000f, 0.000f, 0.000f}))));
    
    // Save resultant XPS document
    doc->Save(dataDir + u"ApplyDifferentColorSpaces_outXPS.xps");
    // ExEnd:1
}

} // namespace WorkingWithShapes
} // namespace CSharp
