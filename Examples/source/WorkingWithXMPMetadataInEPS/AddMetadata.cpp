﻿#include "stdafx.h"
#include "WorkingWithXMPMetadataInEPS/AddMetadata.h"

#include <system/scope_guard.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/io/file_access.h>
#include <system/enum_helpers.h>
#include <system/details/dispose_guard.h>
#include <system/console.h>
#include <system/array.h>
#include <Aspose.Page.Cpp/eps/src_eps/XMP/XmpValue.h>
#include <Aspose.Page.Cpp/eps/src_eps/XMP/XmpMetadata.h>
#include <Aspose.Page.Cpp/eps/src_eps/PsDocument.h>

#include "RunExamples.h"


using namespace Aspose::Page::EPS;
using namespace Aspose::Page::EPS::XMP;
namespace CSharp {

namespace WorkingWithXMPMetadataInEPS {

RTTI_INFO_IMPL_HASH(903495879u, ::CSharp::WorkingWithXMPMetadataInEPS::AddMetadata, ThisTypeBaseTypesInfo);

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
void AddMetadata::Run()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithXMPMetadataInEPS();
    // Initialize EPS file input stream
    System::SharedPtr<System::IO::FileStream> psStream = System::MakeObject<System::IO::FileStream>(dataDir + u"add_input.eps", System::IO::FileMode::Open, System::IO::FileAccess::Read);
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
            
            // Check metadata values extracted from PS metadata comments and set up in new XMP metadata
            
            // Get "CreatorTool" value
            if (xmp->Contains(u"xmp:CreatorTool"))
            {
                System::Console::WriteLine(System::String(u"CreatorTool: ") + xmp->idx_get(u"xmp:CreatorTool")->ToStringValue());
            }
            
            // Get "CreateDate" value
            if (xmp->Contains(u"xmp:CreateDate"))
            {
                System::Console::WriteLine(System::String(u"CreateDate: ") + xmp->idx_get(u"xmp:CreateDate")->ToStringValue());
            }
            
            // Get "format" value
            if (xmp->Contains(u"dc:format"))
            {
                System::Console::WriteLine(System::String(u"Format: ") + xmp->idx_get(u"dc:format")->ToStringValue());
            }
            
            // Get "title" value
            if (xmp->Contains(u"dc:title"))
            {
                System::Console::WriteLine(System::String(u"Title: ") + xmp->idx_get(u"dc:title")->ToArray()->idx_get(0)->ToStringValue());
            }
            
            // Get "creator" value
            if (xmp->Contains(u"dc:creator"))
            {
                System::Console::WriteLine(System::String(u"Creator: ") + xmp->idx_get(u"dc:creator")->ToArray()->idx_get(0)->ToStringValue());
            }
            
            // Get "MetadataDate" value
            if (xmp->Contains(u"xmp:MetadataDate"))
            {
                System::Console::WriteLine(System::String(u"MetadataDate: ") + xmp->idx_get(u"xmp:MetadataDate")->ToStringValue());
            }
            
            // Save EPS file with new XMP metadata
            
            // Create ouput stream
            {
                System::SharedPtr<System::IO::FileStream> outPsStream = System::MakeObject<System::IO::FileStream>(dataDir + u"add_output.eps", System::IO::FileMode::Create, System::IO::FileAccess::Write);
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
