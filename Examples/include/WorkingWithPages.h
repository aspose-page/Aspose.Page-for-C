#pragma once

#include "stdafx.h"

namespace WorkingWithPages {

void AddPage();

void WorkingWithPagesRun()
{
	System::Console::WriteLine(u"AddPage running...");
	AddPage();
	System::Console::WriteLine(u" done");
}

} // namespace WorkingWithPages

