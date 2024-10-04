#include "stdafx.h"
#include "GettingStarted/LoadLicenseFromStreamObject.h"

#include <system/string.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/console.h>
#include <Aspose.Page.Cpp/License.h>

#include "RunExamples.h"

namespace CSharp {

namespace GettingStarted {

RTTI_INFO_IMPL_HASH(3870423936u, ::CSharp::GettingStarted::LoadLicenseFromStreamObject, ThisTypeBaseTypesInfo);

void LoadLicenseFromStreamObject::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_GettingStarted();
    // Initialize license object
    System::SharedPtr<Aspose::Page::License> license = System::MakeObject<Aspose::Page::License>();
    // Load license in FileStream
    System::SharedPtr<System::IO::FileStream> myStream = System::MakeObject<System::IO::FileStream>(u"Aspose.Total.NET.lic", System::IO::FileMode::Open);
    // Set license
    license->SetLicense(myStream);
    System::Console::WriteLine(u"License set successfully.");
    // ExEnd:1
}

} // namespace GettingStarted
} // namespace CSharp
