#include "stdafx.h"
// C# preprocessor directive: #if ASPOSE_DRAWING

// C# INACTIVE CODE:
// using Aspose.Page.Drawing;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif

#include "WorkingWithEPS/ResizeEPS.h"

#include <system/string.h>
#include <system/io/stream.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/io/file_access.h>
#include <system/enum_helpers.h>
#include <system/details/dispose_guard.h>
#include <Aspose.Page.Cpp/Units.h>
#include <Aspose.Page.Cpp/eps/src_eps/PsDocument.h>
#include <drawing/size_f.h>
#include <drawing/size.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page;
using namespace Aspose::Page::EPS;
namespace CSharp {

namespace WorkingWithEPS {

RTTI_INFO_IMPL_HASH(3514648796u, ::CSharp::WorkingWithEPS::ResizeEPS, ThisTypeBaseTypesInfo);

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
void ResizeEPS::RunPoints()
{
    // ExStart:1
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithEPS();
    
    //Create an input stream for EPS file
    {
        System::SharedPtr<System::IO::Stream> inputEpsStream = System::MakeObject<System::IO::FileStream>(dataDir + u"input.eps", System::IO::FileMode::Open, System::IO::FileAccess::Read);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_1({ inputEpsStream});
        // ------------------------------------------
        
        try
        {
            //Initialize PsDocument object with input stream
            System::SharedPtr<PsDocument> doc = System::MakeObject<PsDocument>(inputEpsStream);
            
            //Get size of EPS image
            System::Drawing::Size oldSize = doc->ExtractEpsSize();
            
            //Create an output stream for resized EPS
            {
                System::SharedPtr<System::IO::Stream> outputEpsStream = System::MakeObject<System::IO::FileStream>(dataDir + u"output_resize_points.eps", System::IO::FileMode::Create, System::IO::FileAccess::Write);
                // Clearing resources under 'using' statement
                System::Details::DisposeGuard<1> __dispose_guard_0({ outputEpsStream});
                // ------------------------------------------
                
                try
                {
                    //Increase EPS size in 2 times and save to the output stream
                    doc->ResizeEps(outputEpsStream, System::Drawing::SizeF(static_cast<float>(oldSize.get_Width() * 2), static_cast<float>(oldSize.get_Height() * 2)), Aspose::Page::Units::Points);
                }
                catch(...)
                {
                    __dispose_guard_0.SetCurrentException(std::current_exception());
                }
            }
        }
        catch(...)
        {
            __dispose_guard_1.SetCurrentException(std::current_exception());
        }
    }
    // ExEnd:1
}
#if defined(__MSVC__)
#pragma warning( pop )
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

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
void ResizeEPS::RunInches()
{
    // ExStart:2
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithEPS();
    
    //Create an input stream for EPS file
    {
        System::SharedPtr<System::IO::Stream> inputEpsStream = System::MakeObject<System::IO::FileStream>(dataDir + u"input.eps", System::IO::FileMode::Open, System::IO::FileAccess::Read);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_1({ inputEpsStream});
        // ------------------------------------------
        
        try
        {
            //Initialize PsDocument object with input stream
            System::SharedPtr<PsDocument> doc = System::MakeObject<PsDocument>(inputEpsStream);
            
            //Get size of EPS image
            System::Drawing::Size oldSize = doc->ExtractEpsSize();
            
            //Create an output stream for resized EPS
            {
                System::SharedPtr<System::IO::Stream> outputEpsStream = System::MakeObject<System::IO::FileStream>(dataDir + u"output_resize_inches.eps", System::IO::FileMode::Create, System::IO::FileAccess::Write);
                // Clearing resources under 'using' statement
                System::Details::DisposeGuard<1> __dispose_guard_0({ outputEpsStream});
                // ------------------------------------------
                
                try
                {
                    //Save EPS to the output stream with new size assigned in inches
                    doc->ResizeEps(outputEpsStream, System::Drawing::SizeF(5.791f, 3.625f), Aspose::Page::Units::Inches);
                }
                catch(...)
                {
                    __dispose_guard_0.SetCurrentException(std::current_exception());
                }
            }
        }
        catch(...)
        {
            __dispose_guard_1.SetCurrentException(std::current_exception());
        }
    }
    // ExEnd:2
}
#if defined(__MSVC__)
#pragma warning( pop )
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

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
void ResizeEPS::RunMms()
{
    // ExStart:3
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithEPS();
    
    //Create an input stream for EPS file
    {
        System::SharedPtr<System::IO::Stream> inputEpsStream = System::MakeObject<System::IO::FileStream>(dataDir + u"input.eps", System::IO::FileMode::Open, System::IO::FileAccess::Read);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_1({ inputEpsStream});
        // ------------------------------------------
        
        try
        {
            //Initialize PsDocument object with input stream
            System::SharedPtr<PsDocument> doc = System::MakeObject<PsDocument>(inputEpsStream);
            
            //Get size of EPS image
            System::Drawing::Size oldSize = doc->ExtractEpsSize();
            
            //Create an output stream for resized EPS
            {
                System::SharedPtr<System::IO::Stream> outputEpsStream = System::MakeObject<System::IO::FileStream>(dataDir + u"output_resize_mms.eps", System::IO::FileMode::Create, System::IO::FileAccess::Write);
                // Clearing resources under 'using' statement
                System::Details::DisposeGuard<1> __dispose_guard_0({ outputEpsStream});
                // ------------------------------------------
                
                try
                {
                    //Save EPS to the output stream with new size assigned in millimeters
                    doc->ResizeEps(outputEpsStream, System::Drawing::SizeF(196.0f, 123.0f), Aspose::Page::Units::Millimeters);
                }
                catch(...)
                {
                    __dispose_guard_0.SetCurrentException(std::current_exception());
                }
            }
        }
        catch(...)
        {
            __dispose_guard_1.SetCurrentException(std::current_exception());
        }
    }
    // ExEnd:3
}
#if defined(__MSVC__)
#pragma warning( pop )
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

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
void ResizeEPS::RunPercents()
{
    // ExStart:3
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_WorkingWithEPS();
    
    //Create an input stream for EPS file
    {
        System::SharedPtr<System::IO::Stream> inputEpsStream = System::MakeObject<System::IO::FileStream>(dataDir + u"input.eps", System::IO::FileMode::Open, System::IO::FileAccess::Read);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_1({ inputEpsStream});
        // ------------------------------------------
        
        try
        {
            //Initialize PsDocument object with input stream
            System::SharedPtr<PsDocument> doc = System::MakeObject<PsDocument>(inputEpsStream);
            
            //Get size of EPS image
            System::Drawing::Size oldSize = doc->ExtractEpsSize();
            
            //Create an output stream for resized EPS
            {
                System::SharedPtr<System::IO::Stream> outputEpsStream = System::MakeObject<System::IO::FileStream>(dataDir + u"output_resize_percents.eps", System::IO::FileMode::Create, System::IO::FileAccess::Write);
                // Clearing resources under 'using' statement
                System::Details::DisposeGuard<1> __dispose_guard_0({ outputEpsStream});
                // ------------------------------------------
                
                try
                {
                    //Save EPS to the output stream with new size assigned in percents
                    doc->ResizeEps(outputEpsStream, System::Drawing::SizeF(200.0f, 200.0f), Aspose::Page::Units::Percents);
                }
                catch(...)
                {
                    __dispose_guard_0.SetCurrentException(std::current_exception());
                }
            }
        }
        catch(...)
        {
            __dispose_guard_1.SetCurrentException(std::current_exception());
        }
    }
    // ExEnd:3
}
#if defined(__MSVC__)
#pragma warning( pop )
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

} // namespace WorkingWithEPS
} // namespace CSharp
