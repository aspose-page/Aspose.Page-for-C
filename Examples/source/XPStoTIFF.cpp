#include "stdafx.h"
#include "examples.h"
//#include "ExampleDirectories.h"
#include "..\RunExamples.h"

using namespace System::Drawing;
using namespace Aspose::Page;
using namespace Aspose::Page::Xps;
using namespace Aspose::Page::Xps::Presentation::Image;

void XPStoTIFF()
{
	//ExStart: XPStoTIFF
	// Input file
	System::String inputFileName = RunExamples::dataDir() + u"input.xps";
	//Outut file 
	System::String outputFileName = RunExamples::outDir() + u"XPStoImage_out.tif";
	// Initialize XPS input stream
	{
		System::SharedPtr<System::IO::Stream> xpsStream = System::IO::File::Open(inputFileName, System::IO::FileMode::Open, System::IO::FileAccess::Read);
		// Clearing resources under 'using' statement
		System::Details::DisposeGuard<1> __dispose_guard_1({ xpsStream });
		// ------------------------------------------

		try
		{
			// Load XPS document form the stream
			System::SharedPtr<XpsDocument> document = System::MakeObject<XpsDocument>(xpsStream, System::MakeObject<XpsLoadOptions>());
			// or load XPS document directly from file. No xpsStream is needed then.
			// XpsDocument document = new XpsDocument(inputFileName, new XpsLoadOptions());

			// Initialize options object with necessary parameters.
			System::SharedPtr<TiffSaveOptions> options = [&] { auto tmp_0 = System::MakeObject<TiffSaveOptions>(); tmp_0->set_SmoothingMode(System::Drawing::Drawing2D::SmoothingMode::HighQuality); tmp_0->set_Resolution(300); tmp_0->set_PageNumbers(System::MakeArray<int32_t>({ 1, 2, 6 })); return tmp_0; }();

			// Create rendering device for PDF format
			System::SharedPtr<ImageDevice> device = System::MakeObject<ImageDevice>();

			document->Save(device, options);

			// Iterate through document partitions (fixed documents, in XPS terms)
			for (int32_t i = 0; i < device->get_Result()->get_Length(); i++)
			{
				for (int32_t j = 0; j < device->get_Result()[i]->get_Length(); j++)
				{
					// Initialize image output stream
					{
						System::SharedPtr<System::IO::Stream> imageStream = System::IO::File::Open(System::IO::Path::GetDirectoryName(outputFileName) + u"\\" + System::IO::Path::GetFileNameWithoutExtension(outputFileName) + u"_" + (i + 1) + u"_" + (j + 1) + System::IO::Path::GetExtension(outputFileName), System::IO::FileMode::Create, System::IO::FileAccess::Write);
						// Clearing resources under 'using' statement
						System::Details::DisposeGuard<1> __dispose_guard_0({ imageStream });
						// ------------------------------------------

						try
						{
							imageStream->Write(device->get_Result()[i][j], 0, device->get_Result()[i][j]->get_Length());
						}
						catch (...)
						{
							__dispose_guard_0.SetCurrentException(std::current_exception());
						}
					}
				}
			}
		}
		catch (...)
		{
			__dispose_guard_1.SetCurrentException(std::current_exception());
		}
	}
	//ExEnd: XPStoTIFF
}