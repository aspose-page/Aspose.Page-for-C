#include "stdafx.h"
#include "WorkingWithXMPMetadataInEPS/ChangeMetadata_ChangeValues.h"

#include <system/string.h>
#include <system/scope_guard.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/io/file_access.h>
#include <system/enum_helpers.h>
#include <system/details/dispose_guard.h>
#include <system/date_time.h>
#include <Aspose.Page.Cpp/eps/src_eps/XMP/XmpValue.h>
#include <Aspose.Page.Cpp/eps/src_eps/XMP/XmpMetadata.h>
#include <Aspose.Page.Cpp/eps/src_eps/PsDocument.h>

#include "RunExamples.h"


using namespace Aspose::Page::EPS;
using namespace Aspose::Page::EPS::XMP;
namespace CSharp {

namespace WorkingWithXMPMetadataInEPS {

RTTI_INFO_IMPL_HASH(2659908393u, ::CSharp::WorkingWithXMPMetadataInEPS::ChangeMetadata_ChangeValues, ThisTypeBaseTypesInfo);

// Using statement is translated using System::Details::DisposeGuard class which may store exception and then throw from destructor.
// We block the warnings related as these are false alarms (the exception, if caught, will be re-thrown from the destructor).
#if defined(__MSVC__)
#pragma warning( push )
#pragma warning(disable : 4715)
#pragma warning(disable : 4700)
#pragma warning(disable : 4701)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreturn-type"
#endif
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
            {
                System::SharedPtr<System::IO::FileStream> outPsStream = System::MakeObject<System::IO::FileStream>(dataDir + u"change_values_output.eps", System::IO::FileMode::Create, System::IO::FileAccess::Write);
                // Clearing resources under 'using' statement
                System::Details::DisposeGuard<1> __dispose_guard_1({ outPsStream});
                // ------------------------------------------
                
                try
                {
                    // Save EPS file
                    document->Save(outPsStream);
                }
                catch(...)
                {
                    __dispose_guard_1.SetCurrentException(std::current_exception());
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
#if defined(__MSVC__)
#pragma warning( pop )
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

} // namespace WorkingWithXMPMetadataInEPS
} // namespace CSharp
