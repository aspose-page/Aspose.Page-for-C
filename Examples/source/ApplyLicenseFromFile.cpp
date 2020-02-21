#include "stdafx.h"
#include "examples.h"

using namespace Aspose::Page;

void ApplyLicenseFromFile()
{
	std::cout << "ApplyLicenseFromFile example started." << std::endl;
	//ExStart:ApplyLicenseFromFile
	System::SharedPtr<License> license = System::MakeObject<License>();

	// This line attempts to set a license from several locations relative to the executable and Aspose.Page.dll.
	// You can also use the additional overload to load a license from a stream, this is useful for instance when the
	// license is stored as an embedded resource
	try
	{
		license->SetLicense(u"Aspose.Page.Cpp.lic");
		std::cout << "License set successfully." << std::endl;
	}
	catch (System::Exception& e)
	{
		// We do not ship any license with this example, visit the Aspose site to obtain either a temporary or permanent license.
		std::cout << "There was an error setting the license: " << e->get_Message().ToUtf8String() << std::endl;
	}
	//ExEnd:ApplyLicenseFromFile
	std::cout << "ApplyLicenseFromFile example finished." << std::endl << std::endl;
}