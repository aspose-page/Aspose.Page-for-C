#pragma once

#include "stdafx.h"

namespace WorkingWithText {

void AddText();
void AddTextUsingUnicodeString();

void WorkingWithTextRun()
{
	System::Console::WriteLine(u"AddText running...");
	AddText();
	System::Console::WriteLine(u" done");
	System::Console::WriteLine(u"AddTextUsingUnicodeString running...");
	AddTextUsingUnicodeString();
	System::Console::WriteLine(u" done");
}

} // namespace WorkingWithText

