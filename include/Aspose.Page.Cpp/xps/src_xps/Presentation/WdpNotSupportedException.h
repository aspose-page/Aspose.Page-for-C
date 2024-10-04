#pragma once

#include <system/exceptions.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace XPS {

namespace Presentation {

class Details_WdpNotSupportedException;
using WdpNotSupportedException = System::ExceptionWrapper<Details_WdpNotSupportedException>;

/// <summary>
/// The exception that is thrown whenever an XPS document containing
/// WDP images is being converted in library version for .NET 2.0.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS Details_WdpNotSupportedException : public System::Details_ApplicationException
{
    typedef Details_WdpNotSupportedException ThisType;
    typedef System::Details_ApplicationException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class System::ExceptionWrapperHelper;
    template <typename T> friend class System::ExceptionWrapper;
    
protected:

    [[noreturn]] void DoThrow(const System::ExceptionPtr& self) const override;
    
    /// <summary>
    /// Creates new instance.
    /// </summary>
    ASPOSE_PAGE_SHARED_API Details_WdpNotSupportedException();
    
    ASPOSE_PAGE_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_WdpNotSupportedException, CODEPORTING_ARGS());
    
};

} // namespace Presentation
} // namespace XPS
} // namespace Page
} // namespace Aspose


