#pragma once

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/exceptions.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace EPS {

class Details_PsConverterException;
using PsConverterException = System::ExceptionWrapper<Details_PsConverterException>;

/// <summary>
/// This class contains information about an error that is
/// thrown while PS file is converted to PDF document.
/// </summary>
class Details_PsConverterException : public System::Details_Exception
{
    typedef Details_PsConverterException ThisType;
    typedef System::Details_Exception BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class System::ExceptionWrapperHelper;
    
protected:

    [[noreturn]] void DoThrow(const System::ExceptionPtr& self) const override;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PsConverterException" /> class.
    /// </summary>
    /// <param name="errorStr"> The string that describes a reason of coversion error.</param>
    ASPOSE_PAGE_SHARED_API Details_PsConverterException(System::String errorStr);
    ASPOSE_PAGE_SHARED_API Details_PsConverterException();
    
};

} // namespace EPS
} // namespace Page
} // namespace Aspose


