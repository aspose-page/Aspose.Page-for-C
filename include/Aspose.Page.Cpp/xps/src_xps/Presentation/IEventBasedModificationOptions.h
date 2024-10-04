#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

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
class BeforePageSavingEventHandler;
} // namespace EventBasedModifications
} // namespace Features
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IList;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace Presentation {

/// <summary>
/// Defines options relevant to handling event-based modifications during document saving.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS IEventBasedModificationOptions : public virtual System::Object
{
    typedef IEventBasedModificationOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// The collection of event handlers that performs modifications to an XPS page just before it is saved.
    /// </summary>
    virtual System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Page::XPS::Features::EventBasedModifications::BeforePageSavingEventHandler>>> get_BeforePageSavingEventHandlers() = 0;
    
};

} // namespace Presentation
} // namespace XPS
} // namespace Page
} // namespace Aspose


