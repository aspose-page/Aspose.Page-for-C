#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/exceptions.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Page {

namespace EPS {

class Details_PsConverterException;
using PsConverterException = System::ExceptionWrapper<Details_PsConverterException>;

/// <summary>
/// This class contains information about an error that is
/// thrown while PS file is converted to PDF document.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS Details_PsConverterException : public System::Details_Exception
{
    typedef Details_PsConverterException ThisType;
    typedef System::Details_Exception BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class System::ExceptionWrapperHelper;
    template <typename T> friend class System::ExceptionWrapper;
    
protected:

    [[noreturn]] void DoThrow(const System::ExceptionPtr& self) const override;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PsConverterException"></see> class.
    /// </summary>
    ASPOSE_PAGE_SHARED_API Details_PsConverterException();
    
    ASPOSE_PAGE_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_PsConverterException, CODEPORTING_ARGS());
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PsConverterException"></see> class.
    /// </summary>
    /// <param name="errorStr"> The string that describes a reason of coversion error.</param>
    ASPOSE_PAGE_SHARED_API Details_PsConverterException(System::String errorStr);
    
    ASPOSE_PAGE_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_PsConverterException, CODEPORTING_ARGS(System::String errorStr));
    
};

} // namespace EPS
} // namespace Page
} // namespace Aspose


