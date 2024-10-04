#include "stdafx.h"
//using CSharp.WorkingWithDocumentMerging;
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
#include "WorkingWithXMPMetadataInEPS/AddMetadata.h"
#include "WorkingWithVisualBrush/AddGrid.h"
#include "WorkingWithTransparency/ShowPseudoTransparencyPS.h"
#include "WorkingWithTransparency/SetOpacityMaskXPS.h"
#include "WorkingWithTransparency/AddTransparentObjectXPS.h"
#include "WorkingWithTransparency/AddTransparentImagePS.h"
#include "WorkingWithTexture/AddTextureTilingPatternPS.h"
#include "WorkingWithText/AddTextXPS.h"
#include "WorkingWithText/AddTextUsingUnicodeStringXPS.h"
#include "WorkingWithText/AddTextUsingUnicodeStringPS.h"
#include "WorkingWithText/AddTextPS.h"
#include "WorkingWithShapes/UseShapeUtilitiesXPS.h"
#include "WorkingWithShapes/ApplyDifferentColorSpacesXPS.h"
#include "WorkingWithShapes/AddRectangleXPS.h"
#include "WorkingWithShapes/AddRectanglePS.h"
#include "WorkingWithShapes/AddEllipseXPS.h"
#include "WorkingWithShapes/AddEllipsePS.h"
#include "WorkingWithPrintTickets/LinkPrintTickets.h"
#include "WorkingWithPrintTickets/GetPrintTickets.h"
#include "WorkingWithPrintTickets/EditPrintTicket.h"
#include "WorkingWithPrintTickets/CreateCustomPrintTicket.h"
#include "WorkingWithPages/RemovePageXPS.h"
#include "WorkingWithPages/AddPageXPS.h"
#include "WorkingWithPages/AddPage2PS.h"
#include "WorkingWithPages/AddPage1PS.h"
#include "WorkingWithImages/UseImageUtilitiesXPS.h"
#include "WorkingWithImages/AddTiledImageXPS.h"
#include "WorkingWithImages/AddImageXPS.h"
#include "WorkingWithImages/AddImagePS.h"
#include "WorkingWithImageConversion/SaveImageAsEPS.h"
#include "WorkingWithHatches/AddHatchPatternPS.h"
#include "WorkingWithGradient/AddVerticalGradientXPS.h"
#include "WorkingWithGradient/AddVerticalGradientPS.h"
#include "WorkingWithGradient/AddRadialGradient2PS.h"
#include "WorkingWithGradient/AddRadialGradient1PS.h"
#include "WorkingWithGradient/AddHorizontalGradientXPS.h"
#include "WorkingWithGradient/AddHorizontalGradientPS.h"
#include "WorkingWithGradient/AddDiagonalGradientXPS.h"
#include "WorkingWithGradient/AddDiagonalGradientPS.h"
#include "WorkingWithEPS/ResizeEPS.h"
#include "WorkingWithEPS/CropEPS.h"
#include "WorkingWithDocumentConversion/XPStoTIFF.h"
#include "WorkingWithDocumentConversion/XPStoPNG.h"
#include "WorkingWithDocumentConversion/XPStoPDF.h"
#include "WorkingWithDocumentConversion/XPStoJPEG.h"
#include "WorkingWithDocumentConversion/XPStoBMP.h"
#include "WorkingWithDocumentConversion/PostScriptToPdf.h"
#include "WorkingWithDocumentConversion/PostScriptToImage.h"
#include "WorkingWithDocument/CreateDocumentXPS.h"
#include "WorkingWithDocument/CreateDocumentPS.h"
#include "WorkingWithDocument/ChangeDocumentXPS.h"
#include "WorkingWithCrossPackageOperations/ManipulatePages.h"
#include "WorkingWithCrossPackageOperations/AddImageFilledGlyphAndForeignImage.h"
#include "WorkingWithCrossPackageOperations/AddGlyphCloneAndChangeColor.h"
#include "WorkingWithCanvas/TransformationsXPS.h"
#include "WorkingWithCanvas/TransformationsPS.h"
#include "WorkingWithCanvas/ClippingXPS.h"
#include "WorkingWithCanvas/ClippingPS.h"
#include "GettingStarted/LoadLicenseFromFile.h"


using namespace CSharp::GettingStarted;
using namespace CSharp::WorkingWithGradient;
using namespace CSharp::WorkingWithImages;
using namespace CSharp::WorkingWithShapes;
using namespace CSharp::WorkingWithText;
using namespace CSharp::WorkingWithPages;
using namespace CSharp::WorkingWithTransparency;
using namespace CSharp::WorkingWithVisualBrush;
using namespace CSharp::WorkingWithDocument;
using namespace CSharp::WorkingWithDocumentConversion;
using namespace CSharp::WorkingWithPrintTickets;
using namespace CSharp::WorkingWithCrossPackageOperations;
using namespace CSharp::WorkingWithImageConversion;
using namespace CSharp::WorkingWithCanvas;
using namespace CSharp::WorkingWithEPS;
namespace CSharp {

RTTI_INFO_IMPL_HASH(3777488013u, ::CSharp::RunExamples, ThisTypeBaseTypesInfo);

void RunExamples::Main()
{
    System::Console::WriteLine(Aspose::Page::BuildVersionInfo::Product);
	System::Console::WriteLine(Aspose::Page::BuildVersionInfo::AssemblyVersion);
    System::Console::WriteLine(u"Open RunExamples.cpp. \nIn Main() method uncomment the example that you want to run.");
    System::Console::WriteLine(u"=====================================================");
    // Uncomment the one you want to try out
    
    // =====================================================
    // =====================================================
    // Getting Started
    // =====================================================
    // =====================================================    
    GettingStarted::LoadLicenseFromFile::Run();
    //ApplyMeteredLicense.Run();
    // LoadLicenseFromStreamObject.Run();
    // SetLicenseUsingEmbeddedResource.Run();
    // SecureLicense.Run();
    
    // =====================================================
    // =====================================================
    // WorkingWithDocument
    // =====================================================
    // =====================================================
	System::Console::WriteLine(u"CreateDocumentXPS running...");
	WorkingWithDocument::CreateDocumentXPS::Run();
	System::Console::WriteLine(u"ChangeDocumentXPS running...");
	WorkingWithDocument::ChangeDocumentXPS::Run();
	System::Console::WriteLine(u"CreateDocumentPS running...");
	WorkingWithDocument::CreateDocumentPS::Run();
    
    // =====================================================
    // =====================================================
    // WorkingWithDocumentConversion
    // =====================================================
    // =====================================================
	System::Console::WriteLine(u"PostScriptToPdf running...");
	WorkingWithDocumentConversion::PostScriptToPdf::Run();
	System::Console::WriteLine(u"PostScriptToImage running...");
	WorkingWithDocumentConversion::PostScriptToImage::Run();
	System::Console::WriteLine(u"XPStoPNG running...");
	WorkingWithDocumentConversion::XPStoPNG::Run();
	System::Console::WriteLine(u"XPStoBMP running...");
	WorkingWithDocumentConversion::XPStoBMP::Run();
	System::Console::WriteLine(u"XPStoJPEG running...");
	WorkingWithDocumentConversion::XPStoJPEG::Run();
	System::Console::WriteLine(u"XPStoTIFF running...");
	WorkingWithDocumentConversion::XPStoTIFF::Run();
	System::Console::WriteLine(u"XPStoPDF running...");
	WorkingWithDocumentConversion::XPStoPDF::Run();
    
    // =====================================================
    // =====================================================
    // WorkingWithDocumentMerging
    // =====================================================
    // =====================================================
    //CSharp.WorkingWithDocumentMerging.PostScriptToPdf.Run();
    //CSharp.WorkingWithDocumentMerging.XPStoPDF.Run();
    //CSharp.WorkingWithDocumentMerging.XPStoXPS.Run();
    
    // =====================================================
    // =====================================================
    // WorkingWithXMPMetadataInEPS
    // =====================================================
    // =====================================================
	System::Console::WriteLine(u"GetMetadata running...");
	CSharp::WorkingWithXMPMetadataInEPS::GetMetadata::Run();
	System::Console::WriteLine(u"AddMetadata running...");
	CSharp::WorkingWithXMPMetadataInEPS::AddMetadata::Run();
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
	System::Console::WriteLine(u"AddTextXPS running...");
	WorkingWithText::AddTextXPS::Run();
	System::Console::WriteLine(u"AddTextUsingUnicodeStringXPS running...");
	WorkingWithText::AddTextUsingUnicodeStringXPS::Run();
	System::Console::WriteLine(u"AddTextPS running...");
	WorkingWithText::AddTextPS::Run();
	System::Console::WriteLine(u"AddTextUsingUnicodeStringPS running...");
	WorkingWithText::AddTextUsingUnicodeStringPS::Run();
    
    // =====================================================
    // =====================================================
    // WorkingWithImages
    // =====================================================
    // =====================================================
	System::Console::WriteLine(u"AddImageXPS running...");
	WorkingWithImages::AddImageXPS::Run();
	System::Console::WriteLine(u"AddTiledImageXPS running...");
	WorkingWithImages::AddTiledImageXPS::Run();
	System::Console::WriteLine(u"AddImagePS running...");
	WorkingWithShapes::AddImagePS::Run();
    
	System::Console::WriteLine(u"UseImageUtilitiesXPS running...");
	WorkingWithImages::UseImageUtilitiesXPS::Run();
    
    // =====================================================
    // =====================================================
    // WorkingWithTextures
    // =====================================================
    // =====================================================
	System::Console::WriteLine(u"WorkingWithTextures running...");
	WorkingWithShapes::AddTextureTilingPatternPS::Run();
    
    // =====================================================
    // =====================================================
    // WorkingWithHatchPattern
    // =====================================================
    // =====================================================
	System::Console::WriteLine(u"WorkingWithHatchPattern running...");
	WorkingWithShapes::AddHatchPatternPS::Run();
    
    // =====================================================
    // =====================================================
    // WorkingWithGradient
    // =====================================================
    // =====================================================
	System::Console::WriteLine(u"WorkingWithGradient running...");
	WorkingWithGradient::AddDiagonalGradientXPS::Run();
	WorkingWithGradient::AddVerticalGradientXPS::Run();
	WorkingWithGradient::AddHorizontalGradientXPS::Run();
    WorkingWithGradient::AddHorizontalGradientPS::Run();
    WorkingWithGradient::AddVerticalGradientPS::Run();
    WorkingWithGradient::AddDiagonalGradientPS::Run();
    WorkingWithGradient::AddRadialGradient1PS::Run();
    WorkingWithGradient::AddRadialGradient2PS::Run();
    
    // =====================================================
    // =====================================================
    // WorkingWithShapes
    // =====================================================
    // =====================================================
	System::Console::WriteLine(u"WorkingWithShapes running...");
	WorkingWithShapes::AddRectangleXPS::Run();
    WorkingWithShapes::AddEllipseXPS::Run();
    WorkingWithShapes::ApplyDifferentColorSpacesXPS::Run();
    WorkingWithShapes::AddEllipsePS::Run();
    WorkingWithShapes::AddRectanglePS::Run();
    
    WorkingWithShapes::UseShapeUtilitiesXPS::Run();
    
    // =====================================================
    // =====================================================
    // WorkingWithPages
    // =====================================================
    // =====================================================
	System::Console::WriteLine(u"WorkingWithPages running...");
	WorkingWithPages::AddPageXPS::Run();
    WorkingWithPages::RemovePageXPS::Run();
    WorkingWithPages::AddPage1PS::Run();
    WorkingWithPages::AddPage2PS::Run();
    
    // =====================================================
    // =====================================================
    // WorkingWithPrintTickets
    // =====================================================
    // =====================================================
	System::Console::WriteLine(u"WorkingWithPrintTickets running...");
	WorkingWithPrintTickets::GetPrintTickets::Run();
    WorkingWithPrintTickets::LinkPrintTickets::Run();
    WorkingWithPrintTickets::CreateCustomPrintTicket::Run();
    WorkingWithPrintTickets::EditPrintTicket::Run();
    
    // =====================================================
    // =====================================================
    // WorkingWithTransparency
    // =====================================================
    // =====================================================
	System::Console::WriteLine(u"WorkingWithTransparency running...");
	WorkingWithTransparency::AddTransparentObjectXPS::Run();
    WorkingWithTransparency::SetOpacityMaskXPS::Run();
    WorkingWithTransparency::ShowPseudoTransparencyPS::Run();
    WorkingWithTransparency::AddTransparentImagePS::Run();
    
    // =====================================================
    // =====================================================
    //WorkingWithGrid
    // =====================================================
    // =====================================================
	System::Console::WriteLine(u"WorkingWithGrid running...");
	WorkingWithVisualBrush::AddGrid::Run();
    
    // =====================================================
    // =====================================================
    //WorkingWithCrossPackageOperations
    // =====================================================
    // =====================================================
	System::Console::WriteLine(u"WorkingWithCrossPackageOperations running...");
	WorkingWithCrossPackageOperations::AddImageFilledGlyphAndForeignImage::Run();
    WorkingWithCrossPackageOperations::AddGlyphCloneAndChangeColor::Run();
    WorkingWithCrossPackageOperations::ManipulatePages::Run();
    
    // =====================================================
    // =====================================================
    //WorkingWithImageConversion
    // =====================================================
    // =====================================================
	System::Console::WriteLine(u"WorkingWithImageConversion running...");
	WorkingWithImageConversion::SaveImageAsEPS::Run();
    
    // =====================================================
    // =====================================================
    //ResizeEPS
    // =====================================================
    // =====================================================
	System::Console::WriteLine(u"ResizeEPS running...");
	WorkingWithEPS::ResizeEPS::RunPoints();
    WorkingWithEPS::ResizeEPS::RunInches();
    WorkingWithEPS::ResizeEPS::RunMms();
    WorkingWithEPS::ResizeEPS::RunPercents();
    WorkingWithEPS::CropEPS::Run();
    
    // =====================================================
    // =====================================================
    //WorkingWithCanvas
    // =====================================================
    // =====================================================
	System::Console::WriteLine(u"WorkingWithCanvas running...");
	WorkingWithCanvas::TransformationsXPS::Run();
    WorkingWithCanvas::ClippingXPS::Run();
    WorkingWithCanvas::TransformationsPS::Run();
    WorkingWithCanvas::ClippingPS::Run();
    
    
    // Stop before exiting
    System::Console::WriteLine(u"\n\nProgram Finished. Press any key to exit....");
    System::Console::ReadKey();
}

System::String RunExamples::GetFullPath(const System::String& path)
{
	if (!System::IO::Directory::Exists(path))
		System::IO::Directory::CreateDirectory_(path);

	return System::IO::Path::GetFullPath(path);
}


System::String RunExamples::GetDataDir_GettingStarted()
{
    return RunExamples::GetFullPath(RunExamples::GetDataDir_Data() + u"GettingStarted" + System::IO::Path::DirectorySeparatorChar);
}

System::String RunExamples::GetDataDir_WorkingWithGradient()
{
    return RunExamples::GetFullPath(RunExamples::GetDataDir_Data() + u"WorkingWithGradient" + System::IO::Path::DirectorySeparatorChar);
}

System::String RunExamples::GetDataDir_WorkingWithVisualBrush()
{
    return RunExamples::GetFullPath(RunExamples::GetDataDir_Data() + u"WorkingWithVisualBrush" + System::IO::Path::DirectorySeparatorChar);
}

System::String RunExamples::GetDataDir_WorkingWithImages()
{
	return RunExamples::GetFullPath(RunExamples::GetDataDir_Data() + u"WorkingWithImages" + System::IO::Path::DirectorySeparatorChar);
}

System::String RunExamples::GetDataDir_WorkingWithTextures()
{
    return RunExamples::GetFullPath(RunExamples::GetDataDir_Data() + u"WorkingWithTextures" + System::IO::Path::DirectorySeparatorChar);
}

System::String RunExamples::GetDataDir_WorkingWithShapes()
{
    return RunExamples::GetFullPath(RunExamples::GetDataDir_Data() + u"WorkingWithShapes" + System::IO::Path::DirectorySeparatorChar);
}

System::String RunExamples::GetDataDir_WorkingWithText()
{
    return RunExamples::GetFullPath(RunExamples::GetDataDir_Data() + u"WorkingWithText" + System::IO::Path::DirectorySeparatorChar);
}

System::String RunExamples::GetDataDir_WorkingWithPages()
{
    return RunExamples::GetFullPath(RunExamples::GetDataDir_Data() + u"WorkingWithPages" + System::IO::Path::DirectorySeparatorChar);
}

System::String RunExamples::GetDataDir_WorkingWithPrintTickets()
{
    return RunExamples::GetFullPath(RunExamples::GetDataDir_Data() + u"WorkingWithPrintTickets" + System::IO::Path::DirectorySeparatorChar);
}

System::String RunExamples::GetDataDir_WorkingWithTransparency()
{
    return RunExamples::GetFullPath(RunExamples::GetDataDir_Data() + u"WorkingWithTransparency" + System::IO::Path::DirectorySeparatorChar);
}

System::String RunExamples::GetDataDir_WorkingWithDocument()
{
    return RunExamples::GetFullPath(RunExamples::GetDataDir_Data() + u"WorkingWithDocument" + System::IO::Path::DirectorySeparatorChar);
}

System::String RunExamples::GetDataDir_WorkingWithDocumentConversion()
{
    return RunExamples::GetFullPath(RunExamples::GetDataDir_Data() + u"WorkingWithDocumentConversion" + System::IO::Path::DirectorySeparatorChar);
}

System::String RunExamples::GetDataDir_WorkingWithDocumentMerging()
{
    return RunExamples::GetFullPath(RunExamples::GetDataDir_Data() + u"WorkingWithDocumentMerging" + System::IO::Path::DirectorySeparatorChar);
}

System::String RunExamples::GetDataDir_WorkingWithXMPMetadataInEPS()
{
    return RunExamples::GetFullPath(RunExamples::GetDataDir_Data() + u"WorkingWithXMPMetadataInEPS" + System::IO::Path::DirectorySeparatorChar);
}

System::String RunExamples::GetDataDir_WorkingWithEPS()
{
    return RunExamples::GetFullPath(RunExamples::GetDataDir_Data() + u"WorkingWithEPS" + System::IO::Path::DirectorySeparatorChar);
}

System::String RunExamples::GetDataDir_WorkingWithCrossPackageOperations()
{
    return RunExamples::GetFullPath(RunExamples::GetDataDir_Data() + u"WorkingWithCrossPackageOperations" + System::IO::Path::DirectorySeparatorChar);
}

System::String RunExamples::GetDataDir_WorkingWithImageConversion()
{
    return RunExamples::GetFullPath(RunExamples::GetDataDir_Data() + u"WorkingWithImageConversion" + System::IO::Path::DirectorySeparatorChar);
}

System::String RunExamples::GetDataDir_WorkingWithCanvas()
{
    return RunExamples::GetFullPath(RunExamples::GetDataDir_Data() + u"WorkingWithCanvas" + System::IO::Path::DirectorySeparatorChar);
}

System::String RunExamples::GetDataDir_WorkingWithHatches()
{
    return RunExamples::GetFullPath(RunExamples::GetDataDir_Data() + u"WorkingWithHatches" + System::IO::Path::DirectorySeparatorChar);
}

System::String RunExamples::GetDataDir_Data()
{
	static System::String value;
	static std::once_flag once;
	std::call_once(once, [] {
		System::String startDir = System::IO::Directory::GetCurrentDirectory();
		value = System::IO::Path::Combine(startDir, u"../data/");
	});
	return value;

}

} // namespace CSharp

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;
    CSharp::RunExamples::Main();
    return 0;
}
