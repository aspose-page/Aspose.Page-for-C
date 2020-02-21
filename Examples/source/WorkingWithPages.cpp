#include "stdafx.h"
#include "ExampleDirectories.h"

using namespace Aspose::Page::Xps;

namespace WorkingWithPages {

void AddPage()
{
    // Create new XPS Document
    auto doc = System::MakeObject<XpsDocument>(dataDir() + u"Sample1.xps");
    
    // Add empty page at end of pages list
	doc->AddPage();
    // Insert an empty page at beginning of pages list
    doc->InsertPage(1, true);
    
    // Save resultant XPS document
    doc->Save(outDir() + u"AddPages_out.xps");

}

} // namespace WorkingWithPages