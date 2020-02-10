#pragma once

#include "stdafx.h"

namespace WorkingWithPostScriptConversion {

	void PostScriptToImage();
	void PostScriptToPdf();

void WorkingWithPostScriptConversionRun()
{
	System::Console::WriteLine(u"PostScriptToImage running...");
	PostScriptToImage();
	System::Console::WriteLine(u" done");
	System::Console::WriteLine(u"PostScriptToPdf running...");
	PostScriptToPdf();
	System::Console::WriteLine(u" done");
}

} // namespace WorkingWithPostScriptConversion