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

class Details_PsDocumentException;
using PsDocumentException = System::ExceptionWrapper<Details_PsDocumentException>;

/// <summary>
/// This class contains information about an error that is
/// thrown while PostScript file is created, edited and saved.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS Details_PsDocumentException : public System::Details_Exception
{
    typedef Details_PsDocumentException ThisType;
    typedef System::Details_Exception BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class System::ExceptionWrapperHelper;
    template <typename T> friend class System::ExceptionWrapper;
    
protected:

    [[noreturn]] void DoThrow(const System::ExceptionPtr& self) const override;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PsDocumentException"></see> class.
    /// </summary>
    /// <param name="errorStr"> The string that describes a reason of error.</param>
    ASPOSE_PAGE_SHARED_API Details_PsDocumentException(System::String errorStr);
    
    ASPOSE_PAGE_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_PsDocumentException, CODEPORTING_ARGS(System::String errorStr));
    
};

} // namespace EPS
} // namespace Page
} // namespace Aspose


