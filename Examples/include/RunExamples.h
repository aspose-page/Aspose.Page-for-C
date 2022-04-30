#pragma once

#include <stdafx.h>
#include <system/object.h>

namespace System
{
class String;
} // namespace System

namespace CPP {

class RunExamples : public System::Object
{
    typedef RunExamples ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Main();
	static System::String GetDataDir_License();
	static System::String GetDataDir_GettingStarted();
	static System::String GetDataDir_WorkingWithGradient();
    static System::String GetDataDir_WorkingWithVisualBrush();
    static System::String GetDataDir_WorkingWithImages();
    static System::String GetDataDir_WorkingWithShapes();
    static System::String GetDataDir_WorkingWithText();
    static System::String GetDataDir_WorkingWithPages();
    static System::String GetDataDir_WorkingWithTransparency();
    static System::String GetDataDir_WorkingWithDocumentConversion();
    static System::String GetDataDir_WorkingWithDocumentMerging();
    static System::String GetDataDir_WorkingWithXMPMetadataInEPS();
    static System::String GetDataDir_Data();
	static System::String GetOutDir();
};

} // namespace CSharp


