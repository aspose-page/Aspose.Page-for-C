#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace EPS
{
class ApsLoadOptions;
class PsLoadOptions;
} // namespace EPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace EPS {

/// <summary>
/// Enumerates source file formats to convert (if not PS) into PS before creating PS document.
/// </summary>
enum class DocumentFormat
{
    /// <summary>
    /// PS format. Default.
    /// </summary>
    PS,
    /// <summary>
    /// Internal XML model called APS
    /// </summary>
    APS
};

/// <summary>
/// Basic class for document loading options.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS LoadOptions : public System::Object
{
    typedef LoadOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::EPS::ApsLoadOptions;
    friend class Aspose::Page::EPS::PsLoadOptions;
    
protected:

    LoadOptions(DocumentFormat sourceFormat);
    
    DocumentFormat getSourceFormat();
    
private:

    DocumentFormat _sourceFormat;
    
};

} // namespace EPS
} // namespace Page
} // namespace Aspose


