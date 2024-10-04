#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/eps/src_eps/LoadOptions.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace EPS
{
enum class DocumentFormat;
} // namespace EPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace EPS {

/// <summary>
/// PS document loading options.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PsLoadOptions : public Aspose::Page::EPS::LoadOptions
{
    typedef PsLoadOptions ThisType;
    typedef Aspose::Page::EPS::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates new instance of options.
    /// </summary>
    ASPOSE_PAGE_SHARED_API PsLoadOptions();
    
protected:

    PsLoadOptions(DocumentFormat sourceFormat);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PsLoadOptions, CODEPORTING_ARGS(DocumentFormat sourceFormat));
    
};

} // namespace EPS
} // namespace Page
} // namespace Aspose


