#include "stdafx.h"
#include "WorkingWithXMPMetadataInEPS/GetMetadata.h"

#include <system/scope_guard.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/io/file_access.h>
#include <system/enum_helpers.h>
#include <system/console.h>
#include <system/collections/dictionary.h>
#include <system/array.h>
#include <Aspose.Page.Cpp/eps/src_eps/XMP/XmpValue.h>
#include <Aspose.Page.Cpp/eps/src_eps/XMP/XmpMetadata.h>
#include <Aspose.Page.Cpp/eps/src_eps/PsDocument.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::EPS;
using namespace Aspose::Page::EPS::XMP;
namespace CSharp {

namespace WorkingWithXMPMetadataInEPS {

RTTI_INFO_IMPL_HASH(2153886748u, ::CSharp::WorkingWithXMPMetadataInEPS::GetMetadata, ThisTypeBaseTypesInfo);

void GetMetadata::Run()
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
            
            // Get a width of a thumbnail image if exists
            if (xmp->Contains(u"xmp:Thumbnails") && xmp->idx_get(u"xmp:Thumbnails")->get_IsArray())
            {
                System::SharedPtr<XmpValue> val = xmp->idx_get(u"xmp:Thumbnails")->ToArray()->idx_get(0);
                if (val->get_IsNamedValues() && val->ToDictionary()->ContainsKey(u"xmpGImg:width"))
                {
                    System::Console::WriteLine(System::String::Format(u"Thumbnail Width: {0}", val->ToDictionary()->idx_get(u"xmpGImg:width")->ToInteger()));
                }
            }
            
            // Get "format" value
            if (xmp->Contains(u"dc:format"))
            {
                System::Console::WriteLine(System::String(u"Format: ") + xmp->idx_get(u"dc:format")->ToStringValue());
            }
            
            // Get "DocumentID" value
            if (xmp->Contains(u"xmpMM:DocumentID"))
            {
                System::Console::WriteLine(System::String(u"DocumentID: ") + xmp->idx_get(u"xmpMM:DocumentID")->ToStringValue());
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
} // namespace CSharp
