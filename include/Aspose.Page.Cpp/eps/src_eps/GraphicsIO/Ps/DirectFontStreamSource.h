#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <include/Aspose.Font.Cpp/src/Sources/StreamSource.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace System
{
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace EPS {

namespace GraphicsIO {

namespace Ps {

class ASPOSE_PAGE_SHARED_CLASS DirectFontStreamSource : public Aspose::Font::Sources::StreamSource
{
    typedef DirectFontStreamSource ThisType;
    typedef Aspose::Font::Sources::StreamSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    ASPOSE_PAGE_SHARED_API DirectFontStreamSource(System::SharedPtr<System::IO::Stream> stream);
    
    /**
             * <p>
             * Returns font file stream Don't forget to close the stream after use
             * </p>
             * 
             * @return
             */
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::IO::Stream> GetFontStream() override;
    /**
             * <p>
             * the direct stream source assumes that the stream is not closed after use
             * </p>
             * 
             * @return
             */
    ASPOSE_PAGE_SHARED_API bool MustCloseAfterUse() override;
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Object> Clone() override;
    
private:

    System::SharedPtr<System::IO::Stream> stream;
    
    DirectFontStreamSource();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DirectFontStreamSource, CODEPORTING_ARGS());
    
};

} // namespace Ps
} // namespace GraphicsIO
} // namespace EPS
} // namespace Aspose


