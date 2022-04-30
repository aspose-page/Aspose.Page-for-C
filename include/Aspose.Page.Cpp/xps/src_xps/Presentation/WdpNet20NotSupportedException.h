#pragma once

#include <system/exceptions.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace XPS {

namespace Presentation {

class Details_WdpNet20NotSupportedException;
using WdpNet20NotSupportedException = System::ExceptionWrapper<Details_WdpNet20NotSupportedException>;

/// <summary>
/// The exception that is thrown whenever an XPS document containing
/// WDP images is being converted in library version for .NET 2.0.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS Details_WdpNet20NotSupportedException : public System::Details_ApplicationException
{
    typedef Details_WdpNet20NotSupportedException ThisType;
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
    ASPOSE_PAGE_SHARED_API Details_WdpNet20NotSupportedException();
    
    ASPOSE_PAGE_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_WdpNet20NotSupportedException, CODEPORTING_ARGS());
    
};

} // namespace Presentation
} // namespace XPS
} // namespace Page
} // namespace Aspose


