#pragma once

#include <iostream>
#include <system/string.h>

class RunExamples
{
public:
	RunExamples();
	~RunExamples();
	static System::String dataDir();
	static System::String outDir();
};

