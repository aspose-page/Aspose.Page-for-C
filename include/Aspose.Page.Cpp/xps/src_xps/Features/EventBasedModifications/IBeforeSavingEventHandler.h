#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <system/constraints.h>

#include "Aspose.Page.Cpp/xps/src_xps/Features/EventBasedModifications/IModificationAPI.h"

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
/// Defines the common before-saving event handler interface.
/// </summary>
/// <typeparam name="T">The modification API type.</typeparam>
template<typename T>
class IBeforeSavingEventHandler : public virtual System::Object
{
    typedef IModificationAPI BaseT_IModificationAPI;
    assert_is_base_of(BaseT_IModificationAPI, T);
    
    typedef IBeforeSavingEventHandler<T> ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_TEMPLATE_CLASS(ThisType, ThisTypeBaseTypesInfo);
    
public:

    /// <summary>
    /// Handles the event.
    /// </summary>
    /// <param name="args">Event arguments.</param>
    virtual void Handle(System::SharedPtr<BeforeSavingEventArgs<T>> args) = 0;
    
};

} // namespace EventBasedModifications
} // namespace Features
} // namespace XPS
} // namespace Page
} // namespace Aspose


