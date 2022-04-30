#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
class ApsLoadOptions;
enum class DocumentFormat;
class XpsDocument;
class XpsLoadOptions;
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

/// <summary>
/// Basic class for document loading options.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS LoadOptions : public System::Object
{
    typedef LoadOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::ApsLoadOptions;
    friend class Aspose::Page::XPS::XpsLoadOptions;
    friend class Aspose::Page::XPS::XpsDocument;
    
protected:

    DocumentFormat get_SourceFormat() const;
    
    LoadOptions(DocumentFormat sourceFormat);
    
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    DocumentFormat _sourceFormat;
    
};

} // namespace XPS
} // namespace Page
} // namespace Aspose


