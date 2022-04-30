#include <stdafx.h>
#include "WorkingWithXMPMetadataInEPS/ChangeMetadata_ChangeValues.h"

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

#include "RunExamples.h"


using namespace Aspose::Page::EPS;
using namespace Aspose::Page::EPS::XMP;
namespace CPP {

namespace WorkingWithXMPMetadataInEPS {

RTTI_INFO_IMPL_HASH(2659908393u, ::CPP::WorkingWithXMPMetadataInEPS::ChangeMetadata_ChangeValues, ThisTypeBaseTypesInfo);

void ChangeMetadata_ChangeValues::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithXMPMetadataInEPS();
    // Initialize EPS file input stream
    System::SharedPtr<System::IO::FileStream> psStream = System::MakeObject<System::IO::FileStream>(dataDir + u"get_input.eps", System::IO::FileMode::Open, System::IO::FileAccess::Read);
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
            
            
            // Change ModifyDate value
            System::DateTime now = System::DateTime::get_UtcNow();
            xmp->idx_set(u"xmp:ModifyDate", XmpValue::to_XmpValue(now));
            
            // Change Creator value
            System::SharedPtr<XmpValue> value = System::MakeObject<XmpValue>(u"Aspose.Page");
            xmp->Add(u"dc:creator", value);
            
            // Change Title value
            value = System::MakeObject<XmpValue>(u"(PAGEJAVA-29.eps)");
            xmp->Add(u"dc:title", value);
            
            // Save EPS file with changed XMP metadata
            
            // Create ouput stream
            System::SharedPtr<System::IO::FileStream> outPsStream = System::MakeObject<System::IO::FileStream>(RunExamples::GetOutDir() + u"change_values_output.eps", System::IO::FileMode::Create, System::IO::FileAccess::Write);
            
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
