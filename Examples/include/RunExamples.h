#pragma once
//using CSharp.WorkingWithDocumentMerging;

#include <system/object.h>

namespace System
{
class String;
} // namespace System

namespace CSharp {

class RunExamples : public System::Object
{
    typedef RunExamples ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static void Main();
	static System::String GetFullPath(const System::String& path);
	static System::String GetDataDir_GettingStarted();
    static System::String GetDataDir_WorkingWithGradient();
    static System::String GetDataDir_WorkingWithVisualBrush();
    static System::String GetDataDir_WorkingWithImages();
    static System::String GetDataDir_WorkingWithTextures();
    static System::String GetDataDir_WorkingWithShapes();
    static System::String GetDataDir_WorkingWithText();
    static System::String GetDataDir_WorkingWithPages();
    static System::String GetDataDir_WorkingWithPrintTickets();
    static System::String GetDataDir_WorkingWithTransparency();
    static System::String GetDataDir_WorkingWithDocument();
    static System::String GetDataDir_WorkingWithDocumentConversion();
    static System::String GetDataDir_WorkingWithDocumentMerging();
    static System::String GetDataDir_WorkingWithXMPMetadataInEPS();
    static System::String GetDataDir_WorkingWithEPS();
    static System::String GetDataDir_WorkingWithCrossPackageOperations();
    static System::String GetDataDir_WorkingWithImageConversion();
    static System::String GetDataDir_WorkingWithCanvas();
    static System::String GetDataDir_WorkingWithHatches();
    static System::String GetDataDir_Data();
    
};

} // namespace CSharp


