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
/// General data container interface that defines common methods that concrete data container (plugin options) should implement.
/// </summary>
class IDataContainer : public virtual System::Object
{
    typedef IDataContainer ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets collection of data sources
    /// </summary>
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IDataSource>>> get_DataCollection() = 0;
    
    /// <summary>
    /// Adds new data source to the collection
    /// </summary>
    /// <param name="dataSource"></param>
    virtual void AddDataSource(System::SharedPtr<IDataSource> dataSource) = 0;
    
};

} // namespace Plugins
} // namespace Page
} // namespace Aspose


