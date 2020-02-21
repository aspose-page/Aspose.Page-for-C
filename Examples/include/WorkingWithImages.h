#pragma once

#include "stdafx.h"

namespace WorkingWithImages {

void AddImage();
void AddTiledImage();

void WorkingWithImagesRun()
{
	System::Console::WriteLine(u"AddImage running...");
	AddImage();
	System::Console::WriteLine(u" done");
	System::Console::WriteLine(u"AddTiledImage running...");
	AddTiledImage();
	System::Console::WriteLine(u" done");
}

} // namespace WorkingWithImages

