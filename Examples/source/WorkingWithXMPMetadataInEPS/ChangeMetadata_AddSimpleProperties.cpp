#include <stdafx.h>
#include "WorkingWithXMPMetadataInEPS/ChangeMetadata_AddSimpleProperties.h"

#include <system/string.h>
#include <system/scope_guard.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/io/file_access.h>
#include <system/enum_helpers.h>
#include <system/date_time.h>
#include <Aspose.Page.Cpp/eps/src_eps/XMP/XmpValue.h>
#include <Aspose.Page.Cpp/eps/src_eps/XMP/XmpMetadata.h>
#include <Aspose.Page.Cpp/eps/src_eps/PsDocument.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::EPS;
using namespace Aspose::Page::EPS::XMP;
namespace CPP {

namespace WorkingWithXMPMetadataInEPS {

RTTI_INFO_IMPL_HASH(401523887u, ::CPP::WorkingWithXMPMetadataInEPS::ChangeMetadata_AddSimpleProperties, ThisTypeBaseTypesInfo);

void ChangeMetadata_AddSimpleProperties::Run()
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
            
            
            System::DateTime now = System::DateTime::get_UtcNow();
            
            // Add Integer poperty
            xmp->Add(u"xmp:Intg1", System::MakeObject<XmpValue>(111));
            
            // Add DateTime poperty
            xmp->Add(u"xmp:Date1", System::MakeObject<XmpValue>(now));
            
            // Add Double poperty
            xmp->Add(u"xmp:Double1", System::MakeObject<XmpValue>(111.11));
            
            // Add String poperty
            xmp->Add(u"xmp:String1", System::MakeObject<XmpValue>(u"ABC"));
            
            // Save EPS file with changed XMP metadata
            
            // Create ouput stream
            System::SharedPtr<System::IO::FileStream> outPsStream = System::MakeObject<System::IO::FileStream>(RunExamples::GetOutDir() + u"add_simple_props_output.eps", System::IO::FileMode::Create, System::IO::FileAccess::Write);
            
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
