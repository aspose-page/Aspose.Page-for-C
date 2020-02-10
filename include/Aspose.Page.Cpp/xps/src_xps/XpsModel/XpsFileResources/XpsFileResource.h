#pragma once

#include <system/type_info.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/scope_guard.h>
#include <system/object_ext.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/io/seekorigin.h>
#include <system/exceptions.h>
#include <system/details/force_copy_constructor.h>
#include <system/constraints.h>

#include "xps/src_xps/XpsModel/XpsContext/XpsContext.h"
#include "xps/src_xps/Util/XpsUtils.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose { namespace Page { namespace Xps { namespace Presentation { class NativeConverter; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Aps { class ApsConverter; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Xps { class XpsSerializer; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Xps { class XpsSerializationContext; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Xps { class XpsSerializationContextBase; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsElement; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsGradientBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsGradientStop; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsImageBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsSolidColorBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsIccBasedColor; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsFont; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsIccProfile; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsImage; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsGlyphs; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class XpsFontTests; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class XpsIccProfileTests; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class XpsImageTests; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// Class incapsulating common features of all file resources.
/// </summary>
class XpsFileResource : public System::Object
{
    typedef XpsFileResource ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::Presentation::NativeConverter;
    friend class Aspose::Page::Xps::Presentation::Aps::ApsConverter;
    friend class Aspose::Page::Xps::Presentation::Xps::XpsSerializer;
    friend class Aspose::Page::Xps::Presentation::Xps::XpsSerializationContext;
    friend class Aspose::Page::Xps::Presentation::Xps::XpsSerializationContextBase;
    friend class Aspose::Page::Xps::XpsModel::XpsElement;
    friend class Aspose::Page::Xps::XpsModel::XpsGradientBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsGradientStop;
    friend class Aspose::Page::Xps::XpsModel::XpsImageBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsSolidColorBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsIccBasedColor;
    friend class Aspose::Page::Xps::XpsModel::XpsContext;
    friend class Aspose::Page::Xps::XpsModel::XpsFont;
    friend class Aspose::Page::Xps::XpsModel::XpsIccProfile;
    friend class Aspose::Page::Xps::XpsModel::XpsImage;
    friend class Aspose::Page::Xps::XpsModel::XpsGlyphs;
    friend class Aspose::Page::Xps::Tests::XpsFontTests;
    friend class Aspose::Page::Xps::Tests::XpsIccProfileTests;
    friend class Aspose::Page::Xps::Tests::XpsImageTests;
    
protected:

    System::SharedPtr<XpsContext> _context;
    System::String _source;
    bool _isExternal;
    System::SharedPtr<System::IO::Stream> _stream;
    
    System::String get_Source();
    void set_Source(System::String value);
    System::SharedPtr<System::IO::Stream> get_Stream();
    virtual ASPOSE_PAGE_SHARED_API System::String get_DefaultNamePrefix();
    virtual ASPOSE_PAGE_SHARED_API System::String get_Extension();
    
    XpsFileResource(System::SharedPtr<XpsContext> context, System::String source);
    XpsFileResource(System::SharedPtr<XpsContext> context, bool isExternal = false);
    XpsFileResource(System::SharedPtr<XpsContext> context, System::SharedPtr<System::IO::Stream> stream, bool isExternal = false);
    
    virtual ASPOSE_PAGE_SHARED_API void Load();
    template <typename T>
    static T GetXpsResource(System::SharedPtr<XpsContext> context, T fileResource, System::SharedPtr<System::IO::Stream> stream)
    {
        typedef XpsFileResource BaseT_XpsFileResource;
        assert_is_base_of(BaseT_XpsFileResource, T);
        
        System::String hash = context->GetFileResourceHash(stream);
        if (hash != nullptr)
        {
            return System::StaticCast<typename T::Pointee_>(context->GetFileResource(hash));
        }
        
        stream->Seek(0, System::IO::SeekOrigin::Begin);
        
        {
            auto __finally_guard_0 = ::System::MakeScopeGuard([&stream]()
            {
                stream->Seek(0, System::IO::SeekOrigin::Begin);
            });
            
            try
            {
                hash = XpsUtils::ComputeHash(stream);
                System::SharedPtr<XpsFileResource> cachedResource = context->GetFileResource(hash);
                if (cachedResource != nullptr && System::ObjectExt::GetType(cachedResource) != System::ObjectExt::GetType<T>())
                {
                    throw System::ArgumentException(u"Invalid resource type.");
                }
                
                context->AddFileResourceHash(stream, hash);
                if (cachedResource == nullptr)
                {
                    context->AddFileResource(hash, fileResource);
                    XpsUtils::CopyStream(stream, fileResource->get_Stream());
                    return fileResource;
                }
                
                return System::StaticCast<typename T::Pointee_>(cachedResource);
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
                System::String hash = XpsUtils::ComputeHash(fileResource->_stream);
                System::SharedPtr<XpsFileResource> resource = context->GetFileResource(hash);
                if (resource != nullptr && System::ObjectExt::GetType(resource) != System::ObjectExt::GetType<T>())
                {
                    throw System::ArgumentException(u"Invalid resource type.");
                }
                
                if (resource == nullptr)
                {
                    context->AddFileResource(hash, fileResource);
                    return System::Details::ForceCopyConstructor(fileResource);
                }
                
                return System::StaticCast<typename T::Pointee_>(resource);
            }
            catch (...)
            {
                throw;
            }
        }
    }
    
    static System::SharedPtr<XpsFileResource> Create(System::SharedPtr<XpsContext> context, System::String path, System::SharedPtr<System::IO::Stream> stream);
    void Internalize();
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


