// Examples1.h
#pragma once

#include "stdafx.h"

//Example1 - Create simple xps file with image and text.
void Example1();

//Example2 - Create pages and documents
void Example2();

//Example3 - Filling with image brush and font from some xps-file
void Example3();

void ExampleSet1()
{
	System::Console::WriteLine(u"Example1 running...");
	Example1();
	System::Console::WriteLine(u" done");
	System::Console::WriteLine(u"Example2 running...");
	Example2();
	System::Console::WriteLine(u" done");
	System::Console::WriteLine(u"Example3 running...");
	Example3();
	System::Console::WriteLine(u" done");
}
