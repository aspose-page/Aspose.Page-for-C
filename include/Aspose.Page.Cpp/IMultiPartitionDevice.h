#pragma once

#include "Aspose.Page.Cpp/IMultiPageDevice.h"

namespace Aspose {

namespace Page {

/// <summary>
/// Basic interface for multi-partition device.
/// </summary>
class IMultiPartitionDevice : public Aspose::Page::IMultiPageDevice
{
    typedef IMultiPartitionDevice ThisType;
    typedef Aspose::Page::IMultiPageDevice BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the number of the current page within the current document partition.
    /// </summary>
    virtual int32_t get_CurrentRelativePageNumber() = 0;
    
    /// <summary>
    /// Starts the new document partition.
    /// </summary>
    virtual void OpenPartition() = 0;
    /// <summary>
    /// Accomplishes the current document partition.
    /// </summary>
    virtual void ClosePartition() = 0;
    
};

} // namespace Page
} // namespace Aspose


