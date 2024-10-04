#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace Plugins
{
class IOperationResult;
class PsConverter;
class XpsConverter;
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
/// Represents container that contains the result collection of processing the plugin.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS ResultContainer : public System::Object
{
    typedef ResultContainer ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::Plugins::XpsConverter;
    friend class Aspose::Page::Plugins::PsConverter;
    
public:

    /// <summary>
    /// Gets collection of the operation results
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IOperationResult>>> get_ResultCollection() const;
    
protected:

    /// <summary>
    /// Initializes new result container
    /// </summary>
    ResultContainer();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ResultContainer, CODEPORTING_ARGS());
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IOperationResult>>> _resultCollection;
    
};

} // namespace Plugins
} // namespace Page
} // namespace Aspose


