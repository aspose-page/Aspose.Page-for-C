#include "stdafx.h"
#include "RunExamples.h"

#include "examples.h"
using namespace System;

int main()
{
	//Licensing
	ApplyLicenseFromFile();
	ApplyLicenseFromStreamObject();

	//Working with Document Conversion
	XPStoBMP();
	XPStoJPEG();
	XPStoPDF();
	XPStoPNG();
	XPStoTIFF();

	//Working with Gradient
	AddLinearGradient();
	AddVerticalGradient();
	AddHorizontalGradient();

	//Working with Images
	AddImage();
	AddTiledImage();

	//Working with Pages
	AddPage();

	//Working wiht PostScriptConversion
	PostScriptToImage();
	PostScriptToPdf();

	//Working with Shapes
	AddRectangle();
	AddEllipse();

	//Working with Text
	AddText();
	AddTextUsingUnicodeString();

	//Working with Transparency
	AddTransparentObject();
	SetOpacityMask();

	//Working with Visual Brush
	AddGrid();
}


RunExamples::RunExamples()
{

}


RunExamples::~RunExamples()
{
}

System::String RunExamples::dataDir()
{
	static System::String value;
	static std::once_flag once;
	std::call_once(once, [] {
		System::String startDir = System::IO::Directory::GetCurrentDirectory();
		auto parent = System::IO::Directory::GetParent(startDir);
		if (parent != nullptr)
		{
			startDir = parent->get_FullName();
		}
		value = System::IO::Path::Combine(startDir, u"data\\");
	});
	return value;
}

System::String RunExamples::outDir()
{
	static System::String outDir;
	static std::once_flag once;
	std::call_once(once, [] {
		System::String startDir = System::IO::Directory::GetCurrentDirectory();
		auto parent = System::IO::Directory::GetParent(startDir);
		if (parent != nullptr)
		{
			startDir = parent->get_FullName();
		}
		outDir = System::IO::Path::Combine(startDir, u"output\\");
		if (!System::IO::Directory::Exists(outDir))
			System::IO::Directory::CreateDirectory_(outDir);
	});
	return outDir;
}
