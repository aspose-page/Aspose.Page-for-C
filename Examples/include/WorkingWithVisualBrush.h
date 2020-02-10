#pragma once

#include "stdafx.h"

namespace WorkingWithVisualBrush {

void AddGrid();

void WorkingWithVisualBrushRun()
{
	System::Console::WriteLine(u"AddGrid running...");
	AddGrid();
	System::Console::WriteLine(u" done");
}

} // namespace WorkingWithVisualBrush
