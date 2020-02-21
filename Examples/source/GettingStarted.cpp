#include "stdafx.h"
#include "ExampleDirectories.h"

namespace GettingStarted {

void LoadLicenseFromFile()
{
    // Initialize license object
	auto license = System::MakeObject<Aspose::Page::License>();
    // Set license
    license->SetLicense(dataDir() + u"License\\Aspose.Page.CPP.lic");

	System::Console::WriteLine(u"License set successfully.");
}

void LoadLicenseFromStreamObject()
{
    // Initialize license object
    auto license = System::MakeObject<Aspose::Page::License>();
    // Load license in FileStream
	auto myStream = System::MakeObject<System::IO::FileStream>(dataDir() + u"License\\Aspose.Page.CPP.lic", System::IO::FileMode::Open);
    // Set license
    license->SetLicense(myStream);

	System::Console::WriteLine(u"License set successfully.");
}


} // namespace GettingStarted
