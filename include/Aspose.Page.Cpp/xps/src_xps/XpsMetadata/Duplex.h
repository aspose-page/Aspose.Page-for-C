#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/ScoredProperty.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Option.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Feature.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace XpsMetadata
{
class DocumentDuplex;
class Duplex;
class IOptionItem;
class JobDuplexAllDocumentsContiguously;
class Value;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// The base class for <see cref="JobDuplexAllDocumentsContiguously"></see> and <see cref="DocumentDuplex"></see> features classes.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS Duplex : public Aspose::Page::XPS::XpsMetadata::Feature
{
    typedef Duplex ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::DocumentDuplex;
    friend class Aspose::Page::XPS::XpsMetadata::JobDuplexAllDocumentsContiguously;
    
public:

    /// <summary>
    /// Defines possible values of the <see cref="DuplexOption"></see>'s <em>DuplexMode</em> scored property.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS DuplexMode final : public Aspose::Page::XPS::XpsMetadata::ScoredProperty
    {
        typedef DuplexMode ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::ScoredProperty BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Automatic value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Duplex::DuplexMode> Automatic;
        /// <summary>
        /// Manual value.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Duplex::DuplexMode> Manual;
        
    private:
    
        DuplexMode(System::SharedPtr<Value> value);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DuplexMode, CODEPORTING_ARGS(System::SharedPtr<Value> value));
        
    };
    
    /// <summary>
    /// Describes the <see cref="JobDuplexAllDocumentsContiguously"></see> and <see cref="DocumentDuplex"></see> features options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS DuplexOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef DuplexOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Specifies one sided printing.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Duplex::DuplexOption> OneSided;
        
        /// <summary>
        /// Specifies two sided printing such that the page is flipped parallel to the
        /// <em>MediaSizeWidth</em> direction.
        /// </summary>
        /// <param name="duplexMode">The <em>DuplexMode</em></param>
        /// <returns>The <em>Duplex</em> option.</returns>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Duplex::DuplexOption> TwoSidedShortEdge(System::SharedPtr<Duplex::DuplexMode> duplexMode);
        /// <summary>
        /// Specifies two sided printing such that the page is flipped parallel to the
        /// <em>MediaSizeHeight</em> direction.
        /// </summary>
        /// <param name="duplexMode">The <em>DuplexMode</em></param>
        /// <returns>The <em>Duplex</em> option.</returns>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Duplex::DuplexOption> TwoSidedLongEdge(System::SharedPtr<Duplex::DuplexMode> duplexMode);
        
    protected:
    
        ASPOSE_PAGE_SHARED_API System::ArrayPtr<System::String> get_Names() override;
        
    private:
    
        static System::ArrayPtr<System::String> _names;
        
        DuplexOption(System::String name, const System::ArrayPtr<System::SharedPtr<IOptionItem>>& items);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DuplexOption, CODEPORTING_ARGS(System::String name, const System::ArrayPtr<System::SharedPtr<IOptionItem>>& items));
        
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    
protected:

    Duplex(System::String name, const System::ArrayPtr<System::SharedPtr<Duplex::DuplexOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


