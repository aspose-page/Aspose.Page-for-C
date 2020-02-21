
#include "stdafx.h"
//#include "ExampleDirectories.h"
#include "..\RunExamples.h"

using namespace Aspose::Page;
using namespace Aspose::Page::EPS;
using namespace Aspose::Page::EPS::Device;

// Using statement is translated using System::Details::DisposeGuard class which may store exception and then throw from destructor.
// We block the warnings related as these are false alarms (the exception, if caught, will be re-thrown from the destructor).
#if defined(__MSVC__)
#pragma warning( push )
#pragma warning(disable : 4715)
#pragma warning(disable : 4700)
#pragma warning(disable : 4701)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreturn-type"
#endif


void PostScriptToPdf()
{
	// ExStart:PostScriptToPdf
	// Initialize PDF output stream
	System::SharedPtr<System::IO::FileStream> pdfStream = System::MakeObject<System::IO::FileStream>(RunExamples::outDir() + u"outputPDF_out.pdf", System::IO::FileMode::Create, System::IO::FileAccess::Write);
	// Initialize PostScript input stream
	System::SharedPtr<System::IO::FileStream> psStream = System::MakeObject<System::IO::FileStream>(RunExamples::dataDir() + u"input.ps", System::IO::FileMode::Open, System::IO::FileAccess::Read);
	System::SharedPtr<PsDocument> document = System::MakeObject<PsDocument>(psStream);

	// If you want to convert Postscript file despite of minor errors set this flag
	bool suppressErrors = true;

	//Initialize options object with necessary parameters.
	System::SharedPtr<PdfSaveOptions> options = System::MakeObject<PdfSaveOptions>(suppressErrors);
	// If you want to add special folder where fonts are stored. Default fonts folder in OS is always included.
	options->set_AdditionalFontsFolders(System::MakeArray<System::String>({ u"{FONT_FOLDER}" }));

	// Default page size is 595x842 and it is not mandatory to set it in PdfDevice
	System::SharedPtr<Aspose::Page::EPS::Device::PdfDevice> device = System::MakeObject<Aspose::Page::EPS::Device::PdfDevice>(pdfStream);
	// But if you need to specify size and image format use following line
	//Aspose.Page.EPS.Device.PdfDevice device = new Aspose.Page.EPS.Device.PdfDevice(pdfStream, new System.Drawing.Size(595, 842));


	{
		auto __finally_guard_0 = ::System::MakeScopeGuard([&psStream, &pdfStream]()
		{
			psStream->Close();
			pdfStream->Close();
		});

		try
		{
			document->Save(device, options);
		}
		catch (...)
		{
			throw;
		}
	}
	// ExEnd:PostScriptToPdf
	//Review errors
	if (suppressErrors)
	{
		//auto ex_enumerator = (System::DynamicCastEnumerableTo<PsConverterException>(options->get_Exceptions()))->GetEnumerator();
		auto ex_enumerator = (options->get_Exceptions())->GetEnumerator();
		decltype(ex_enumerator->get_Current()) ex;
		while (ex_enumerator->MoveNext() && (ex = ex_enumerator->get_Current(), true))
		{
			System::Console::WriteLine(ex->get_Message());
		}
	}
	
}

