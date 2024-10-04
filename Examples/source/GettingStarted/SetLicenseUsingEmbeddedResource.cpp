#include "stdafx.h"
#include "GettingStarted/SetLicenseUsingEmbeddedResource.h"

#include <system/string.h>
#include <system/console.h>
#include <Aspose.Page.Cpp/License.h>

#include "RunExamples.h"

namespace CSharp {

namespace GettingStarted {

RTTI_INFO_IMPL_HASH(3965459737u, ::CSharp::GettingStarted::SetLicenseUsingEmbeddedResource, ThisTypeBaseTypesInfo);

void SetLicenseUsingEmbeddedResource::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_GettingStarted();
    // Initialize license object
    System::SharedPtr<Aspose::Page::License> license = System::MakeObject<Aspose::Page::License>();
    // Set license
    license->SetLicense(u"MergedAPI.Aspose.Total.NET.lic");
    // Set the value to indicate that license will be embedded in the application
    license->set_Embedded(true);
    System::Console::WriteLine(u"License set successfully.");
    // ExEnd:1
}

} // namespace GettingStarted
} // namespace CSharp
