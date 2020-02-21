#include "stdafx.h"
#include "examples.h"
//#include "ExampleDirectories.h"
#include "..\RunExamples.h"

using namespace System::Drawing;
using namespace Aspose::Page;
using namespace Aspose::Page::Xps;
using namespace Aspose::Page::Xps::Presentation::Image;

void XPStoPDF()
{
	// Initialize PDF output stream
	{
		System::SharedPtr<System::IO::Stream> pdfStream = System::IO::File::Open(RunExamples::outDir() + u"XPStoPDF.pdf", System::IO::FileMode::Create, System::IO::FileAccess::Write);
		// Clearing resources under 'using' statement
		System::Details::DisposeGuard<1> __dispose_guard_1({ pdfStream });
		// ------------------------------------------

		try {
			System::SharedPtr<System::IO::Stream> xpsStream = System::IO::File::Open(RunExamples::dataDir() + u"input.xps", System::IO::FileMode::Open, System::IO::FileAccess::Read);
			// Clearing resources under 'using' statement
			System::Details::DisposeGuard<1> __dispose_guard_0({ xpsStream });
			// ------------------------------------------

			try
			{
				// Load XPS document form the stream
				System::SharedPtr<XpsDocument> document = System::MakeObject<XpsDocument>(xpsStream, System::MakeObject<XpsLoadOptions>());
				// or load XPS document directly from file. No xpsStream is needed then.
				// XpsDocument document = new XpsDocument(inputFileName, new XpsLoadOptions());

				// Initialize options object with necessary parameters.
				System::SharedPtr<Aspose::Page::Xps::Presentation::Pdf::PdfSaveOptions> options = [&] { auto tmp_0 = System::MakeObject<Aspose::Page::Xps::Presentation::Pdf::PdfSaveOptions>(); tmp_0->set_JpegQualityLevel(100); tmp_0->set_ImageCompression(Aspose::Page::Xps::Presentation::Pdf::PdfImageCompression::Jpeg); tmp_0->set_TextCompression(Aspose::Page::Xps::Presentation::Pdf::PdfTextCompression::Flate); tmp_0->set_PageNumbers(System::MakeArray<int32_t>({ 1, 2, 6 })); return tmp_0; }();

				// Create rendering device for PDF format
				System::SharedPtr<Aspose::Page::Xps::Presentation::Pdf::PdfDevice> device = System::MakeObject<Aspose::Page::Xps::Presentation::Pdf::PdfDevice>(pdfStream);

				document->Save(device, options);
			}
			catch (...)
			{
				__dispose_guard_0.SetCurrentException(std::current_exception());
			}
		}
		catch (...)
		{
			__dispose_guard_1.SetCurrentException(std::current_exception());
		}
	}
}