#pragma once

#include "stdafx.h"

namespace WorkingWithTransparency {

void AddTransparentObject();
void SetOpacityMask();

void WorkingWithTransparencyRun()
{
	System::Console::WriteLine(u"AddTransparentObject running...");
	AddTransparentObject();
	System::Console::WriteLine(u" done");
	System::Console::WriteLine(u"SetOpacityMask running...");
	SetOpacityMask();
	System::Console::WriteLine(u" done");
}

} // namespace WorkingWithTransparency

