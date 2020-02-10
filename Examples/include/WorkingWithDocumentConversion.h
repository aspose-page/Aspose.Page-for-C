#pragma once

#include "stdafx.h"

namespace WorkingWithDocumentConversion {

	void XPStoBMP();
	void XPStoJPEG();
	void XPStoPDF();
	void XPStoPNG();
	void XPStoTIFF();

void WorkingWithDocumentConversionRun()
{
	System::Console::WriteLine(u"XPStoBMP running...");
	XPStoBMP();
	System::Console::WriteLine(u" done");
	System::Console::WriteLine(u"XPStoJPEG running...");
	XPStoJPEG();
	System::Console::WriteLine(u" done");
	System::Console::WriteLine(u"XPStoPDF running...");
	XPStoPDF();
	System::Console::WriteLine(u" done");
	System::Console::WriteLine(u"XPStoPNG running...");
	XPStoPNG();
	System::Console::WriteLine(u" done");
	System::Console::WriteLine(u"XPStoTIFF running...");
	XPStoTIFF();
	System::Console::WriteLine(u" done");
}

} // namespace WorkingWithDocumentConversion