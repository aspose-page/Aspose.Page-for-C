﻿#include <stdafx.h>
#include "GettingStarted/LoadLicenseFromFile.h"

#include <system/string.h>
#include <system/console.h>
#include <Aspose.Page.Cpp/License.h>

#include "RunExamples.h"


using namespace Aspose::Page;
namespace CPP {

namespace GettingStarted {

RTTI_INFO_IMPL_HASH(3779146461u, ::CPP::GettingStarted::LoadLicenseFromFile, ThisTypeBaseTypesInfo);

void LoadLicenseFromFile::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_License();
    // Initialize license object
    System::SharedPtr<License> license = System::MakeObject<License>();
    // Set license
    license->SetLicense(dataDir+u"Aspose.Page.CPP.lic");
    System::Console::WriteLine(u"License set successfully.");
    // ExEnd:1
}

} // namespace GettingStarted
} // namespace CPP
