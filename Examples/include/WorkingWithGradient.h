#pragma once

#include "stdafx.h"

namespace WorkingWithGradient {

void AddLinearGradient();    
void AddVerticalGradient();  
void AddHorizontalGradient();    

void WorkingWithGradientRun()
{
	System::Console::WriteLine(u"AddLinearGradient running...");
	AddLinearGradient();
	System::Console::WriteLine(u" done");
	System::Console::WriteLine(u"AddVerticalGradient running...");
	AddVerticalGradient();
	System::Console::WriteLine(u" done");
	System::Console::WriteLine(u"AddHorizontalGradient running...");
	AddHorizontalGradient();
	System::Console::WriteLine(u" done");
}

} // namespace WorkingWithGradient
