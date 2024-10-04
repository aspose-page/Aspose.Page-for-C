#include "stdafx.h"
#include "WorkingWithPrintTickets/CreateCustomPrintTicket.h"

#include <system/details/dispose_guard.h>
#include <system/array.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Page/PageOutputColor.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Page/PageOrientation.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsMetadata/OutputBin.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/JobPrintTicket.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/JobOutputBin.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/JobInputBin.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/JobDuplexAllDocumentsContiguously.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/IJobPrintTicketItem.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsMetadata/InputBin.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Duplex.h>
#include <Aspose.Page.Cpp/xps/src_xps/XpsDocument.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Page::XPS;
using namespace Aspose::Page::XPS::XpsMetadata;
namespace CSharp {

namespace WorkingWithPrintTickets {

RTTI_INFO_IMPL_HASH(179575010u, ::CSharp::WorkingWithPrintTickets::CreateCustomPrintTicket, ThisTypeBaseTypesInfo);

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
void CreateCustomPrintTicket::Run()
{
    // ExStart:CreateCustomPrintTicket
    // For complete examples and data files, please go to https://github.com/aspose-page/Aspose.Page-for-.NET
    // The path to the documents directory.
    System::String dir = RunExamples::GetDataDir_WorkingWithPrintTickets();
    
    // Create new XPS document
    {
        System::SharedPtr<XpsDocument> document = System::MakeObject<XpsDocument>();
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ document});
        // ------------------------------------------
        
        try
        {
            // Set a custom job-level print ticket
            document->set_JobPrintTicket(System::MakeObject<JobPrintTicket>(System::MakeArray<System::SharedPtr<IJobPrintTicketItem>>({System::MakeObject<JobInputBin>(System::MakeArray<System::SharedPtr<InputBin::IInputBinItem>>({InputBin::InputBinOption::Manual->Clone()->Add(System::MakeArray<System::SharedPtr<InputBin::IInputBinOptionItem>>({InputBin::FeedFace::FaceDown, InputBin::FeedDirection::LongEdgeFirst, System::MakeObject<InputBin::MediaSheetCapacity>(100)}))})), System::MakeObject<JobOutputBin>(System::MakeArray<System::SharedPtr<OutputBin::IOutputBinItem>>({System::MakeObject<OutputBin::OutputBinOption>(System::MakeArray<System::SharedPtr<OutputBin::IOutputBinOptionItem>>({OutputBin::BinType::Sorter})), System::MakeObject<OutputBin::OutputBinOption>(System::MakeArray<System::SharedPtr<OutputBin::IOutputBinOptionItem>>({OutputBin::BinType::Stacker, System::MakeObject<OutputBin::MediaSheetCapacity>(100)}))})), System::MakeObject<PageOrientation>(System::MakeArray<System::SharedPtr<PageOrientation::PageOrientationOption>>({PageOrientation::PageOrientationOption::Landscape})), System::MakeObject<JobDuplexAllDocumentsContiguously>(System::MakeArray<System::SharedPtr<Duplex::DuplexOption>>({Duplex::DuplexOption::TwoSidedLongEdge(Duplex::DuplexMode::Automatic)})), System::MakeObject<PageOutputColor>(System::MakeArray<System::SharedPtr<PageOutputColor::IPageOutputColorItem>>({PageOutputColor::PageOutputColorOption::Grayscale(0, 8)}))})));
            
            // Save the document with the custom job-level print ticket.
            document->Save(dir + u"output1.xps");
        }
        catch(...)
        {
            __dispose_guard_0.SetCurrentException(std::current_exception());
        }
    }
    // ExEnd:CreateCustomPrintTicket
}
#if defined(__MSVC__)
#pragma warning( pop )
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

} // namespace WorkingWithPrintTickets
} // namespace CSharp
