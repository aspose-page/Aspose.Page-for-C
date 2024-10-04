#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/type_info.h>
#include <system/scope_guard.h>
#include <system/object_ext.h>
#include <system/io/stream.h>
#include <system/io/seekorigin.h>
#include <system/exceptions.h>
#include <system/details/force_copy_constructor.h>
#include <system/constraints.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsContext/XpsContext.h"
#include "Aspose.Page.Cpp/xps/src_xps/Util/XpsUtils.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
class DocumentUtils;
namespace Presentation
{
class NativeConverter;
namespace Xps
{
class XpsSerializationContext;
class XpsSerializationContextBase;
class XpsSerializer;
} // namespace Xps
} // namespace Presentation
namespace Tests
{
class XpsFontTests;
class XpsIccProfileTests;
class XpsImageTests;
} // namespace Tests
namespace XpsModel
{
class XpsElement;
class XpsFont;
class XpsGlyphs;
class XpsGradientBrush;
class XpsGradientStop;
class XpsIccBasedColor;
class XpsIccProfile;
class XpsImage;
class XpsImageBrush;
class XpsSolidColorBrush;
} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsModel {

/// <summary>
/// Class incapsulating common features of all file resources.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsFileResource : public System::Object
{
    typedef XpsFileResource ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::NativeConverter;
    friend class Aspose::Page::XPS::DocumentUtils;
    friend class Aspose::Page::XPS::Presentation::Xps::XpsSerializer;
    friend class Aspose::Page::XPS::Presentation::Xps::XpsSerializationContext;
    friend class Aspose::Page::XPS::Presentation::Xps::XpsSerializationContextBase;
    friend class Aspose::Page::XPS::XpsModel::XpsGradientBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsGradientStop;
    friend class Aspose::Page::XPS::XpsModel::XpsImageBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsSolidColorBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsIccBasedColor;
    friend class Aspose::Page::XPS::XpsModel::XpsContext;
    friend class Aspose::Page::XPS::XpsModel::XpsElement;
    friend class Aspose::Page::XPS::XpsModel::XpsFont;
    friend class Aspose::Page::XPS::XpsModel::XpsIccProfile;
    friend class Aspose::Page::XPS::XpsModel::XpsImage;
    friend class Aspose::Page::XPS::XpsModel::XpsGlyphs;
    friend class Aspose::Page::XPS::Tests::XpsFontTests;
    friend class Aspose::Page::XPS::Tests::XpsIccProfileTests;
    friend class Aspose::Page::XPS::Tests::XpsImageTests;
    
protected:

    System::SharedPtr<XpsContext> get_Context() const;
    bool get_IsExternal() const;
    System::String get_Source() const;
    void set_Source(System::String value);
    System::SharedPtr<System::IO::Stream> get_Stream() const;
    virtual ASPOSE_PAGE_SHARED_API System::String get_DefaultNamePrefix();
    virtual ASPOSE_PAGE_SHARED_API System::String get_Extension();
    int32_t get_Hash() const;
    void set_Hash(int32_t value);
    
    XpsFileResource(System::SharedPtr<XpsContext> context, System::String source);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsFileResource, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::String source));
    
    XpsFileResource(System::SharedPtr<XpsContext> context, bool isExternal = false);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsFileResource, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, bool isExternal = false));
    
    XpsFileResource(System::SharedPtr<XpsContext> context, System::SharedPtr<System::IO::Stream> stream, bool isExternal = false);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsFileResource, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::SharedPtr<System::IO::Stream> stream, bool isExternal = false));
    
    XpsFileResource(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsFileResource> resource);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsFileResource, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsFileResource> resource));
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::IO::Stream> CreateStream();
    virtual ASPOSE_PAGE_SHARED_API void LoadExternal();
    template <typename T>
    static T GetXpsResource(System::SharedPtr<XpsContext> context, T fileResource, System::SharedPtr<System::IO::Stream> stream)
    {
        typedef XpsFileResource BaseT_XpsFileResource;
        assert_is_base_of(BaseT_XpsFileResource, T);
        
        System::String hash = context->GetFileResourceHash(stream);
        if (hash != nullptr)
        {
            return System::ExplicitCast<T>(context->GetFileResource(hash));
        }
        
        stream->Seek(0, System::IO::SeekOrigin::Begin);
        
        {
            auto __finally_guard_0 = ::System::MakeScopeGuard([&fileResource, &stream]()
            {
                if (fileResource->_isExternal)
                {
                    stream->Seek(0, System::IO::SeekOrigin::Begin);
                }
                else
                {
                    stream->Dispose();
                }
            });
            
            try
            {
                hash = XpsUtils::ComputeHash(stream);
                // Consider optimizing this.
                System::SharedPtr<XpsFileResource> cachedResource = context->GetFileResource(hash);
                if (cachedResource != nullptr && System::ObjectExt::GetType(cachedResource) != System::ObjectExt::GetType<T>())
                {
                    throw System::ArgumentException(u"Invalid resource type.");
                }
                
                context->AddFileResourceHash(stream, hash);
                if (cachedResource != nullptr)
                {
                    return System::ExplicitCast<T>(cachedResource);
                }
                
                context->AddFileResource(hash, fileResource);
                XpsUtils::CopyStream(stream, fileResource->get_Stream());
                
                return System::Details::ForceCopyConstructor(fileResource);
            }
            catch (...)
            {
                throw;
            }
        }
    }
    
    template <typename T>
    static T GetXpsResource(System::SharedPtr<XpsContext> context, T fileResource)
    {
        typedef XpsFileResource BaseT_XpsFileResource;
        assert_is_base_of(BaseT_XpsFileResource, T);
        
        
        {
            auto __finally_guard_0 = ::System::MakeScopeGuard([&fileResource]()
            {
                fileResource->_stream->Seek(0, System::IO::SeekOrigin::Begin);
            });
            
            try
            {
                fileResource->_stream->Seek(0, System::IO::SeekOrigin::Begin);
                System::String hash = ComputeHash(fileResource->_stream);
                System::SharedPtr<XpsFileResource> resource = context->GetFileResource(hash);
                if (resource != nullptr && System::ObjectExt::GetType(resource) != System::ObjectExt::GetType<T>())
                {
                    throw System::ArgumentException(u"Invalid resource type.");
                }
                
                if (resource != nullptr)
                {
                    return System::ExplicitCast<T>(resource);
                }
                
                if (fileResource->_context != context)
                {
                    fileResource = System::ExplicitCast<T>(fileResource->Clone(context));
                }
                context->AddFileResource(hash, fileResource);
                
                return System::Details::ForceCopyConstructor(fileResource);
            }
            catch (...)
            {
                throw;
            }
        }
    }
    
    static System::String ComputeHash(System::SharedPtr<System::IO::Stream> stream);
    static void CopyStream(System::SharedPtr<System::IO::Stream> source, System::SharedPtr<System::IO::Stream> dest);
    static System::SharedPtr<XpsFileResource> Create(System::SharedPtr<XpsContext> context, System::String path, System::SharedPtr<System::IO::Stream> stream);
    void Internalize();
    void Assert();
    void Dispose();
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsFileResource> Clone(System::SharedPtr<XpsContext> context);
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsFileResource();
    
private:

    System::WeakPtr<XpsContext> _context;
    System::String _source;
    bool _isExternal;
    System::SharedPtr<System::IO::Stream> _stream;
    bool _isDisposed;
    int32_t _hash;
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


