#include "stdafx.h"
#include "WorkingWithImageConversion/SaveImageAsEPS.h"

#include <system/string.h>
#include <Aspose.Page.Cpp/eps/src_eps/PsDocument.h>
#include <Aspose.Page.Cpp/eps/src_eps/Device/PsSaveOptions.h>

#include "RunExamples.h"


using namespace Aspose::Page::EPS;
using namespace Aspose::Page::EPS::Device;
namespace CSharp {

namespace WorkingWithImageConversion {

RTTI_INFO_IMPL_HASH(4246381689u, ::CSharp::WorkingWithImageConversion::SaveImageAsEPS, ThisTypeBaseTypesInfo);

void SaveImageAsEPS::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithImageConversion();
    
    // Create default options
    System::SharedPtr<PsSaveOptions> options = System::MakeObject<PsSaveOptions>();
    
    // Save JPEG image to EPS file
    PsDocument::SaveImageAsEps(dataDir + u"input1.jpg", dataDir + u"output1.eps", options);
    
    // ExEnd:1
}

} // namespace WorkingWithImageConversion
} // namespace CSharp
