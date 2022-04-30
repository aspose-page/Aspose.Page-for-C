#include <stdafx.h>
#include "WorkingWithXMPMetadataInEPS/ChangeMetadata_AddArrayItems.h"

#include <system/string.h>
#include <system/scope_guard.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/io/file_access.h>
#include <system/enum_helpers.h>
#include <Aspose.Page.Cpp/eps/src_eps/XMP/XmpValue.h>
#include <Aspose.Page.Cpp/eps/src_eps/XMP/XmpMetadata.h>
#include <Aspose.Page.Cpp/eps/src_eps/PsDocument.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::EPS;
using namespace Aspose::Page::EPS::XMP;
namespace CPP {

namespace WorkingWithXMPMetadataInEPS {

RTTI_INFO_IMPL_HASH(1670204625u, ::CPP::WorkingWithXMPMetadataInEPS::ChangeMetadata_AddArrayItems, ThisTypeBaseTypesInfo);

void ChangeMetadata_AddArrayItems::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithXMPMetadataInEPS();
    // Initialize EPS file input stream
    System::SharedPtr<System::IO::FileStream> psStream = System::MakeObject<System::IO::FileStream>(dataDir + u"add_simple_props_input.eps", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    // Create PsDocument instance from stream
    System::SharedPtr<PsDocument> document = System::MakeObject<PsDocument>(psStream);
    
    
    {
        auto __finally_guard_0 = ::System::MakeScopeGuard([&psStream]()
        {
            psStream->Close();
        });
        
        try
        {
            // Get XMP metadata. If EPS file doesn't contain XMP metadata we get new one filled with values from PS metadata comments (%%Creator, %%CreateDate, %%Title etc)
            System::SharedPtr<XmpMetadata> xmp = document->GetXmpMetadata();
            
            //Change XMP metadata values
            
            // Add one more title. I will be added at the end of array by default.
            xmp->AddArrayItem(u"dc:title", System::MakeObject<XmpValue>(u"NewTitle"));
            
            // Add one more creator. It will be added in the array by an index (0).
            xmp->AddArrayItem(u"dc:creator", 0, System::MakeObject<XmpValue>(u"NewCreator"));
            
            // Save EPS file with changed XMP metadata
            
            // Create ouput stream
            System::SharedPtr<System::IO::FileStream> outPsStream = System::MakeObject<System::IO::FileStream>(RunExamples::GetOutDir() + u"add_array_items_output.eps", System::IO::FileMode::Create, System::IO::FileAccess::Write);
            
            // Save EPS file
            
            {
                auto __finally_guard_1 = ::System::MakeScopeGuard([&outPsStream]()
                {
                    outPsStream->Close();
                });
                
                try
                {
                    document->Save(outPsStream);
                    outPsStream->Flush();
                }
                catch (...)
                {
                    throw;
                }
            }
            
        }
        catch (...)
        {
            throw;
        }
    }
    
    // ExEnd:1
}

} // namespace WorkingWithXMPMetadataInEPS
} // namespace CPP
