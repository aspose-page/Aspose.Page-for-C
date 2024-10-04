#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/Features/EventBasedModifications/PageAPI.h"
#include "Aspose.Page.Cpp/xps/src_xps/Features/EventBasedModifications/IBeforeSavingEventHandler.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace Features
{
namespace EventBasedModifications
{
template <typename> class BeforeSavingEventArgs;
} // namespace EventBasedModifications
} // namespace Features
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace Features {

namespace EventBasedModifications {

/// <summary>
/// The base class for before-page-saving event handlers.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS BeforePageSavingEventHandler : public Aspose::Page::XPS::Features::EventBasedModifications::IBeforeSavingEventHandler<System::SharedPtr<Aspose::Page::XPS::Features::EventBasedModifications::PageAPI>>
{
    typedef BeforePageSavingEventHandler ThisType;
    typedef Aspose::Page::XPS::Features::EventBasedModifications::IBeforeSavingEventHandler<System::SharedPtr<Aspose::Page::XPS::Features::EventBasedModifications::PageAPI>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    ASPOSE_PAGE_SHARED_API BeforePageSavingEventHandler();
    
    /// <summary>
    /// Handles the event.
    /// </summary>
    /// <param name="args">Event arguments.</param>
    ASPOSE_PAGE_SHARED_API void Handle(System::SharedPtr<BeforeSavingEventArgs<System::SharedPtr<PageAPI>>> args) override = 0;
    
};

} // namespace EventBasedModifications
} // namespace Features
} // namespace XPS
} // namespace Page
} // namespace Aspose


