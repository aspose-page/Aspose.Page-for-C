#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

namespace Aspose
{
namespace Page
{
namespace Plugins
{
class IDataSource;
} // namespace Plugins
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Page {

namespace Plugins {

/// <summary>
/// General save instruction interface that defines common members that concrete plugin option should implement.
/// </summary>
class ISaveInstruction : public virtual System::Object
{
    typedef ISaveInstruction ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the collection of added targets (file or stream data sources) for saving operation results.
    /// </summary>
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IDataSource>>> get_SaveTargetsCollection() = 0;
    
    /// <summary>
    /// Adds new result save target
    /// </summary>
    /// <param name="saveDataSource">Target (file or stream data source) for saving operation results.</param>
    virtual void AddSaveDataSource(System::SharedPtr<IDataSource> saveDataSource) = 0;
    
};

} // namespace Plugins
} // namespace Page
} // namespace Aspose


