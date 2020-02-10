// GettingStarted.h
#pragma once

#include "stdafx.h"

namespace GettingStarted {

void LoadLicenseFromFile();
void LoadLicenseFromStreamObject();

void GettingStartedRun()
{
    LoadLicenseFromFile();
    LoadLicenseFromStreamObject();
}

} // namespace GettingStarted
