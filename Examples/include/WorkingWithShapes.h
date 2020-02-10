#pragma once

#include "stdafx.h"

namespace WorkingWithShapes {

void AddRectangle();
void AddEllipse();

void WorkingWithShapesRun()
{
	System::Console::WriteLine(u"AddRectangle running...");
	AddRectangle();
	System::Console::WriteLine(u" done");
	System::Console::WriteLine(u"AddEllipse running...");
	AddEllipse();
	System::Console::WriteLine(u" done");
}

} // namespace WorkingWithShapes

