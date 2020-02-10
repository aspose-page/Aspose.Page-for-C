#include "stdafx.h"
//#include "ExampleDirectories.h"
#include "..\RunExamples.h"

using namespace Aspose::Page::Xps;

void AddPage()
{
	//ExStart: AddPage
	// Create new XPS Document
	auto doc = System::MakeObject<XpsDocument>(RunExamples::dataDir() + u"Sample1.xps");

	// Add empty page at end of pages list
	doc->AddPage();
	// Insert an empty page at beginning of pages list
	doc->InsertPage(1, true);

	// Save resultant XPS document
	doc->Save(RunExamples::outDir() + u"AddPages_out.xps");
	//ExEnd: AddPage
}