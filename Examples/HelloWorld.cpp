// HelloWorld.cpp : Defines the entry point for the console application.
#undef ASPOSE_PAGE_UNIT_TEST
#undef ASPOSE_PAGE_SHARED_EXPORTS

#include <stdafx.h>
#include "RunExamples.h"

#include <system/string.h>
#include <system/io/path.h>
#include <system/io/directory_info.h>
#include <system/io/directory.h>
#include <system/console.h>

#include "WorkingWithXMPMetadataInEPS/GetMetadata.h"
#include "WorkingWithXMPMetadataInEPS/ChangeMetadata_ChangeValues.h"
#include "WorkingWithXMPMetadataInEPS/ChangeMetadata_ChangeNamedValueItem.h"
#include "WorkingWithXMPMetadataInEPS/ChangeMetadata_ChangeArrayItems.h"
#include "WorkingWithXMPMetadataInEPS/ChangeMetadata_AddSimpleProperties.h"
#include "WorkingWithXMPMetadataInEPS/ChangeMetadata_AddNamespace.h"
#include "WorkingWithXMPMetadataInEPS/ChangeMetadata_AddNamedValueItem.h"
#include "WorkingWithXMPMetadataInEPS/ChangeMetadata_AddArrayItems.h"
#include "WorkingWithVisualBrush/AddGrid.h"
#include "WorkingWithTransparency/SetOpacityMask.h"
#include "WorkingWithTransparency/AddTransparentObject.h"
#include "WorkingWithText/AddTextUsingUnicodeString.h"
#include "WorkingWithText/AddText.h"
#include "WorkingWithShapes/AddRectangle.h"
#include "WorkingWithShapes/AddEllipse.h"
#include "WorkingWithPages/AddPage.h"
#include "WorkingWithImages/AddTiledImage.h"
#include "WorkingWithImages/AddImage.h"
#include "WorkingWithGradient/AddVerticalGradient.h"
#include "WorkingWithGradient/AddLinearGradient.h"
#include "WorkingWithGradient/AddHorizontalGradient.h"
#include "WorkingWithDocumentMerging/XPStoPDF.h"
#include "WorkingWithDocumentMerging/PostScriptToPdf.h"
#include "WorkingWithDocumentConversion/XPStoTIFF.h"
#include "WorkingWithDocumentConversion/XPStoPNG.h"
#include "WorkingWithDocumentConversion/XPStoPDF.h"
#include "WorkingWithDocumentConversion/XPStoJPEG.h"
#include "WorkingWithDocumentConversion/XPStoBMP.h"
#include "WorkingWithDocumentConversion/PostScriptToPdf.h"
#include "WorkingWithDocumentConversion/PostScriptToImage.h"
#include "GettingStarted/SetLicenseUsingEmbeddedResource.h"
#include "GettingStarted/LoadLicenseFromStreamObject.h"
#include "GettingStarted/LoadLicenseFromFile.h"


using namespace CSharp::GettingStarted;
using namespace CSharp::WorkingWithGradient;
using namespace CSharp::WorkingWithImages;
using namespace CSharp::WorkingWithShapes;
using namespace CSharp::WorkingWithText;
using namespace CSharp::WorkingWithPages;
using namespace CSharp::WorkingWithTransparency;
using namespace CSharp::WorkingWithVisualBrush;
using namespace CSharp::WorkingWithDocumentConversion;
using namespace CSharp::WorkingWithDocumentMerging;
namespace CSharp {

	RTTI_INFO_IMPL_HASH(3777488013u, ::CSharp::RunExamples, ThisTypeBaseTypesInfo);

	void RunExamples::Main()
	{
		System::Console::WriteLine(u"Open RunExamples.cs. \nIn Main() method uncomment the example that you want to run.");
		System::Console::WriteLine(u"=====================================================");
		// Uncomment the one you want to try out

		// =====================================================
		// =====================================================
		// Getting Started
		// =====================================================
		// =====================================================
		GettingStarted::LoadLicenseFromFile::Run();
		//GettingStarted::LoadLicenseFromStreamObject::Run();
		//GettingStarted::SetLicenseUsingEmbeddedResource::Run();
		// SecureLicense.Run();

		// =====================================================
		// =====================================================
		// WorkingWithDocumentConversion
		// =====================================================
		// =====================================================
		System::Console::WriteLine(u"Conversion::PostScriptToPdf running...");
		WorkingWithDocumentConversion::PostScriptToPdf::Run();
		System::Console::WriteLine(u"Conversion::PostScriptToImage running...");
		WorkingWithDocumentConversion::PostScriptToImage::Run();
		System::Console::WriteLine(u"Conversion::XPStoPNG running...");
		WorkingWithDocumentConversion::XPStoPNG::Run();
		System::Console::WriteLine(u"Conversion::XPStoBMP running...");
		WorkingWithDocumentConversion::XPStoBMP::Run();
		System::Console::WriteLine(u"Conversion::XPStoJPEG running...");
		WorkingWithDocumentConversion::XPStoJPEG::Run();
		System::Console::WriteLine(u"Conversion::XPStoTIFF running...");
		WorkingWithDocumentConversion::XPStoTIFF::Run();
		System::Console::WriteLine(u"Conversion::XPStoPDF running...");
		WorkingWithDocumentConversion::XPStoPDF::Run();

		// =====================================================
		// =====================================================
		// WorkingWithDocumentMerging
		// =====================================================
		// =====================================================
		System::Console::WriteLine(u"Merging PostScriptToPdf running...");
		CSharp::WorkingWithDocumentMerging::PostScriptToPdf::Run();
		System::Console::WriteLine(u"Merging XPStoPDF running...");
		CSharp::WorkingWithDocumentMerging::XPStoPDF::Run();

		// =====================================================
		// =====================================================
		// WorkingWithXMPMetadataInEPS
		// =====================================================
		// =====================================================
		System::Console::WriteLine(u"GetMetadata running...");
		CSharp::WorkingWithXMPMetadataInEPS::GetMetadata::Run();
		System::Console::WriteLine(u"ChangeMetadata_ChangeValues running...");
		CSharp::WorkingWithXMPMetadataInEPS::ChangeMetadata_ChangeValues::Run();
		System::Console::WriteLine(u"ChangeMetadata_AddSimpleProperties running...");
		CSharp::WorkingWithXMPMetadataInEPS::ChangeMetadata_AddSimpleProperties::Run();
		System::Console::WriteLine(u"ChangeMetadata_AddArrayItems running...");
		CSharp::WorkingWithXMPMetadataInEPS::ChangeMetadata_AddArrayItems::Run();
		System::Console::WriteLine(u"ChangeMetadata_ChangeArrayItems running...");
		CSharp::WorkingWithXMPMetadataInEPS::ChangeMetadata_ChangeArrayItems::Run();
		System::Console::WriteLine(u"ChangeMetadata_AddNamedValueItem running...");
		CSharp::WorkingWithXMPMetadataInEPS::ChangeMetadata_AddNamedValueItem::Run();
		System::Console::WriteLine(u"ChangeMetadata_ChangeNamedValueItem running...");
		CSharp::WorkingWithXMPMetadataInEPS::ChangeMetadata_ChangeNamedValueItem::Run();
		System::Console::WriteLine(u"ChangeMetadata_AddNamespace running...");
		CSharp::WorkingWithXMPMetadataInEPS::ChangeMetadata_AddNamespace::Run();

		// =====================================================
		// =====================================================
		// WorkingWithText
		// =====================================================
		// =====================================================
		System::Console::WriteLine(u"AddText running...");
		WorkingWithText::AddText::Run();
		System::Console::WriteLine(u"AddTextUsingUnicodeString running...");
		WorkingWithText::AddTextUsingUnicodeString::Run();

		// =====================================================
		// =====================================================
		// WorkingWithImages
		// =====================================================
		// =====================================================
		System::Console::WriteLine(u"AddImage running...");
		WorkingWithImages::AddImage::Run();
		System::Console::WriteLine(u"AddTiledImage running...");
		WorkingWithImages::AddTiledImage::Run();

		// =====================================================
		// =====================================================
		// WorkingWithGradient
		// =====================================================
		// =====================================================
		System::Console::WriteLine(u"AddLinearGradient running...");
		WorkingWithGradient::AddLinearGradient::Run();
		System::Console::WriteLine(u"AddVerticalGradient running...");
		WorkingWithGradient::AddVerticalGradient::Run();
		System::Console::WriteLine(u"AddHorizontalGradient running...");
		WorkingWithGradient::AddHorizontalGradient::Run();

		// =====================================================
		// =====================================================
		// WorkingWithShapes
		// =====================================================
		// =====================================================
		System::Console::WriteLine(u"AddRectangle running...");
		WorkingWithShapes::AddRectangle::Run();
		System::Console::WriteLine(u"AddEllipse running...");
		WorkingWithShapes::AddEllipse::Run();

		// =====================================================
		// =====================================================
		// WorkingWithPages
		// =====================================================
		// =====================================================
		System::Console::WriteLine(u"AddPage running...");
		WorkingWithPages::AddPage::Run();

		// =====================================================
		// =====================================================
		// WorkingWithTransparency
		// =====================================================
		// =====================================================
		System::Console::WriteLine(u"AddTransparentObject running...");
		WorkingWithTransparency::AddTransparentObject::Run();
		System::Console::WriteLine(u"SetOpacityMask running...");
		WorkingWithTransparency::SetOpacityMask::Run();

		// =====================================================
		// =====================================================
		//WorkingWithGrid
		// =====================================================
		// =====================================================
		System::Console::WriteLine(u"AddGrid running...");
		WorkingWithVisualBrush::AddGrid::Run();



		// Stop before exiting
		System::Console::WriteLine(u"\n\nProgram Finished. Press any key to exit....");
		System::Console::ReadKey();
	}

	System::String RunExamples::GetDataDir_License()
	{
		return System::IO::Path::GetFullPath(GetDataDir_Data() + u"License/");
	}

	System::String RunExamples::GetDataDir_GettingStarted()
	{
		return System::IO::Path::GetFullPath(GetDataDir_Data() + u"GettingStarted/");
	}

	System::String RunExamples::GetDataDir_WorkingWithGradient()
	{
		return System::IO::Path::GetFullPath(GetDataDir_Data() + u"WorkingWithGradient/");
	}

	System::String RunExamples::GetDataDir_WorkingWithVisualBrush()
	{
		return System::IO::Path::GetFullPath(GetDataDir_Data() + u"WorkingWithVisualBrush/");
	}

	System::String RunExamples::GetDataDir_WorkingWithImages()
	{
		return System::IO::Path::GetFullPath(GetDataDir_Data() + u"WorkingWithImages/");
	}

	System::String RunExamples::GetDataDir_WorkingWithShapes()
	{
		return System::IO::Path::GetFullPath(GetDataDir_Data() + u"WorkingWithShapes/");
	}

	System::String RunExamples::GetDataDir_WorkingWithText()
	{
		return System::IO::Path::GetFullPath(GetDataDir_Data() + u"WorkingWithText/");
	}

	System::String RunExamples::GetDataDir_WorkingWithPages()
	{
		return System::IO::Path::GetFullPath(GetDataDir_Data() + u"WorkingWithPages/");
	}

	System::String RunExamples::GetDataDir_WorkingWithTransparency()
	{
		return System::IO::Path::GetFullPath(GetDataDir_Data() + u"WorkingWithTransparency/");
	}

	System::String RunExamples::GetDataDir_WorkingWithDocumentConversion()
	{
		return System::IO::Path::GetFullPath(GetDataDir_Data() + u"WorkingWithDocumentConversion/");
	}

	System::String RunExamples::GetDataDir_WorkingWithDocumentMerging()
	{
		return System::IO::Path::GetFullPath(GetDataDir_Data() + u"WorkingWithDocumentMerging/");
	}

	System::String RunExamples::GetDataDir_WorkingWithXMPMetadataInEPS()
	{
		return System::IO::Path::GetFullPath(GetDataDir_Data() + u"WorkingWithXMPMetadataInEPS/");
	}

	System::String RunExamples::GetDataDir_Data()
	{
		auto parent = System::IO::Directory::GetParent(System::IO::Directory::GetCurrentDirectory())->get_Parent();
		System::String startDirectory;
		if (parent != nullptr)
		{
			auto directoryInfo = parent->get_Parent();
			if (directoryInfo != nullptr)
			{
				startDirectory = directoryInfo->get_FullName();
			}
		}
		else
		{
			startDirectory = parent->get_FullName();
		}
		return System::IO::Path::Combine(startDirectory, u"Data\\");
	}

} // namespace CSharp

int main(int argc, char** argv)
{
	(void)argc;
	(void)argv;
	CSharp::RunExamples::Main();
	return 0;
}
