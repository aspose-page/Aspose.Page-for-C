#pragma once

#include <xml/xml_node.h>
#include <xml/xml_document.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/ienumerable.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IPrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IFeatureItem.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class JobFeature; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class JobFeatures; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class DocumentFeature; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class DocumentFeatures; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class PageFeature; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class PageFeatures; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class Features; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class PrintTicket; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class PrintTicketTests; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class Option; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class Property; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsMetadata {

/// <summary>
/// The <b>Aspose.Page.Xps.XpsMetadata</b> namespace provides classes that describe metadata of XPS document.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

/// <summary>
/// Class implementing common print ticket feature.
/// </summary>
class JobInputBin;
class DocumentInputBin;
class PageInputBin;
class PageMediaSize;
class PageOrientation;

class Feature : public Aspose::Page::Xps::XpsMetadata::IPrintTicketItem, public Aspose::Page::Xps::XpsMetadata::IFeatureItem, public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Page::Xps::XpsMetadata::IFeatureItem>>
{
    typedef Feature ThisType;
    typedef Aspose::Page::Xps::XpsMetadata::IPrintTicketItem BaseType;
    typedef Aspose::Page::Xps::XpsMetadata::IFeatureItem BaseType1;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Page::Xps::XpsMetadata::IFeatureItem>> BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsMetadata::JobFeature;
    friend class Aspose::Page::Xps::XpsMetadata::JobFeatures;
    friend class Aspose::Page::Xps::XpsMetadata::DocumentFeature;
    friend class Aspose::Page::Xps::XpsMetadata::DocumentFeatures;
    friend class Aspose::Page::Xps::XpsMetadata::PageFeature;
    friend class Aspose::Page::Xps::XpsMetadata::PageFeatures;
    friend class Aspose::Page::Xps::XpsMetadata::Features;
    friend class Aspose::Page::Xps::XpsMetadata::Features;
    friend class Aspose::Page::Xps::XpsMetadata::PrintTicket;
    friend class Aspose::Page::Xps::Tests::PrintTicketTests;
    
public:

    /// <summary>
    /// Returns feature name.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::String get_Name();
    
    /// <summary>
    /// Creates common print ticket feature instance.
    /// </summary>
    /// <param name="name">Feature name.</param>
    /// <param name="option">Mandatory <see cref="Option"/> object.</param>
    /// <param name="properties">Arbitrary array <see cref="Property"/> objects to insert before <paramref name="option"/>.</param>
    ASPOSE_PAGE_SHARED_API Feature(System::String name, System::SharedPtr<Option> option, const System::ArrayPtr<System::SharedPtr<Property>>& properties);
    /// <summary>
    /// Creates common print ticket feature instance.
    /// </summary>
    /// <param name="name">Feature name.</param>
    /// <param name="feature">Mandatory <see cref="Feature"/> object.</param>
    /// <param name="properties">Arbitrary array <see cref="Property"/> objects to insert before <paramref name="feature"/>.</param>
    ASPOSE_PAGE_SHARED_API Feature(System::String name, System::SharedPtr<Feature> feature, const System::ArrayPtr<System::SharedPtr<Property>>& properties);
    
    /// <summary>
    /// Adds list of items to the end of feature items list. 
    /// Each one must be a <see cref="Feature"/>, <see cref="Option"/> or <see cref="Property"/> object.
    /// </summary>
    /// <param name="items">List of items to add.</param>
    ASPOSE_PAGE_SHARED_API void Add(const System::ArrayPtr<System::SharedPtr<IFeatureItem>>& items);
    /// <summary>
    /// Returns the string representation.
    /// </summary>
    /// <returns>String representation.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::String ToString();
    /// <summary>
    /// Implementation of <see cref="System::Collections::Generic::IEnumerable&lt;IFeatureItem&gt;"/> interface.
    /// </summary>
    /// <returns>Returns enumerator for the list.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IFeatureItem>>> GetEnumerator();
    
protected:

    bool _isConst;
    
    Feature(System::String name, const System::ArrayPtr<System::SharedPtr<Option>>& options);
    Feature(System::String name, const System::ArrayPtr<System::SharedPtr<Property>>& properties);
    Feature(System::SharedPtr<System::Xml::XmlNode> node);
    
    void AddRange(const System::ArrayPtr<System::SharedPtr<IFeatureItem>>& items);
    void AddRange(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<IFeatureItem>>> items);
    System::SharedPtr<System::Xml::XmlNode> ToXml(System::SharedPtr<System::Xml::XmlDocument> document);
    
    System::SharedPtr<IFeatureItem> idx_get(int32_t i);
    
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IFeatureItem>>> _items;
    System::String pr_Name;
    
};

/// <summary>
/// Abstract class for job-level print ticket feature.
/// </summary>
class JobDuplexAllDocumentsContiguously;
class JobInputBin;

class JobFeature : public Aspose::Page::Xps::XpsMetadata::Feature
{
    typedef JobFeature ThisType;
    typedef Aspose::Page::Xps::XpsMetadata::Feature BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsMetadata::JobFeatures;
    friend class Aspose::Page::Xps::XpsMetadata::JobFeatures;
    
protected:

    JobFeature(System::String name, const System::ArrayPtr<System::SharedPtr<Option>>& options);
    
};

/// <summary>
/// Class incapsulating job-level print ticket feature.
/// </summary>
class JobFeatures : public System::Object
{
    typedef JobFeatures ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    
public:

    class JobDuplexAllDocumentsContiguously FINAL : public Aspose::Page::Xps::XpsMetadata::JobFeature
    {
        typedef JobDuplexAllDocumentsContiguously ThisType;
        typedef Aspose::Page::Xps::XpsMetadata::JobFeature BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
        FRIEND_FUNCTION_System_MakeObject;
        
    public:
    
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobFeatures::JobDuplexAllDocumentsContiguously> OneSided;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobFeatures::JobDuplexAllDocumentsContiguously> TwoSidedShortEdge;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobFeatures::JobDuplexAllDocumentsContiguously> TwoSidedLongEdge;
        
    private:
    
        JobDuplexAllDocumentsContiguously(const System::ArrayPtr<System::SharedPtr<Option>>& options);
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    class JobInputBin FINAL : public Aspose::Page::Xps::XpsMetadata::JobFeature
    {
        typedef JobInputBin ThisType;
        typedef Aspose::Page::Xps::XpsMetadata::JobFeature BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobFeatures::JobInputBin> AutoSelect;
        
        /// <summary>
        /// Creates JobInputBin feature instance.
        /// </summary>
        /// <param name="options">Array of <see cref="Option"/> objects.</param>
        ASPOSE_PAGE_SHARED_API JobInputBin(const System::ArrayPtr<System::SharedPtr<Option>>& options);
        
    protected:
    
        static System::SharedPtr<JobFeatures::JobInputBin> CreateConst(System::SharedPtr<Option> option);
        
    private:
    
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    
private:

    JobFeatures();
    
};

/// <summary>
/// Class incapsulating document-level print ticket feature.
/// </summary>
class DocumentDuplex;
class DocumentInputBin;

class DocumentFeature : public Aspose::Page::Xps::XpsMetadata::Feature
{
    typedef DocumentFeature ThisType;
    typedef Aspose::Page::Xps::XpsMetadata::Feature BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsMetadata::DocumentFeatures;
    friend class Aspose::Page::Xps::XpsMetadata::DocumentFeatures;
    
protected:

    DocumentFeature(System::String name, const System::ArrayPtr<System::SharedPtr<Option>>& options);
    
};

/// <summary>
/// Class incapsulating document-level print ticket feature.
/// </summary>
class DocumentFeatures : public System::Object
{
    typedef DocumentFeatures ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    
public:

    class DocumentDuplex FINAL : public Aspose::Page::Xps::XpsMetadata::DocumentFeature
    {
        typedef DocumentDuplex ThisType;
        typedef Aspose::Page::Xps::XpsMetadata::DocumentFeature BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
        FRIEND_FUNCTION_System_MakeObject;
        
    public:
    
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<DocumentFeatures::DocumentDuplex> OneSided;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<DocumentFeatures::DocumentDuplex> TwoSidedShortEdge;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<DocumentFeatures::DocumentDuplex> TwoSidedLongEdge;
        
    private:
    
        DocumentDuplex(const System::ArrayPtr<System::SharedPtr<Option>>& options);
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    class DocumentInputBin FINAL : public Aspose::Page::Xps::XpsMetadata::DocumentFeature
    {
        typedef DocumentInputBin ThisType;
        typedef Aspose::Page::Xps::XpsMetadata::DocumentFeature BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<DocumentFeatures::DocumentInputBin> AutoSelect;
        
        /// <summary>
        /// Creates DocumentInputBin feature instance.
        /// </summary>
        /// <param name="options">Array of <see cref="Option"/> objects.</param>
        ASPOSE_PAGE_SHARED_API DocumentInputBin(const System::ArrayPtr<System::SharedPtr<Option>>& options);
        
    protected:
    
        static System::SharedPtr<DocumentFeatures::DocumentInputBin> CreateConst(System::SharedPtr<Option> option);
        
    private:
    
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    
private:

    DocumentFeatures();
    
};

/// <summary>
/// Abstract class for page-level print ticket feature.
/// </summary>
class PageInputBin;

class PageFeature : public Aspose::Page::Xps::XpsMetadata::Feature
{
    typedef PageFeature ThisType;
    typedef Aspose::Page::Xps::XpsMetadata::Feature BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsMetadata::PageFeatures;
    
protected:

    PageFeature(System::String name, const System::ArrayPtr<System::SharedPtr<Option>>& options);
    
};

/// <summary>
/// Abstract class for page-level print ticket feature.
/// </summary>
class PageFeatures : public System::Object
{
    typedef PageFeatures ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    
public:

    class PageInputBin FINAL : public Aspose::Page::Xps::XpsMetadata::PageFeature
    {
        typedef PageInputBin ThisType;
        typedef Aspose::Page::Xps::XpsMetadata::PageFeature BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageFeatures::PageInputBin> AutoSelect;
        
        /// <summary>
        /// Creates PageInputBin feature instance.
        /// </summary>
        /// <param name="options">Array of <see cref="Option"/> objects.</param>
        ASPOSE_PAGE_SHARED_API PageInputBin(const System::ArrayPtr<System::SharedPtr<Option>>& options);
        
    protected:
    
        static System::SharedPtr<PageFeatures::PageInputBin> CreateConst(System::SharedPtr<Option> option);
        
    private:
    
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    
private:

    PageFeatures();
    
};

/// <summary>
/// Class incapsulating common print ticket feature.
/// </summary>
class Features : public System::Object
{
    typedef Features ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    
public:

    class PageMediaSize FINAL : public Aspose::Page::Xps::XpsMetadata::Feature
    {
        typedef PageMediaSize ThisType;
        typedef Aspose::Page::Xps::XpsMetadata::Feature BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Creates PageMediaSize feature instance.
        /// </summary>
        /// <param name="options">Array of <see cref="Option"/> objects.</param>
        ASPOSE_PAGE_SHARED_API PageMediaSize(const System::ArrayPtr<System::SharedPtr<Option>>& options);
        
    };
    
    class PageOrientation FINAL : public Aspose::Page::Xps::XpsMetadata::Feature
    {
        typedef PageOrientation ThisType;
        typedef Aspose::Page::Xps::XpsMetadata::Feature BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
        FRIEND_FUNCTION_System_MakeObject;
        
    public:
    
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Features::PageOrientation> Landscape;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Features::PageOrientation> Portrait;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Features::PageOrientation> ReverseLandscape;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Features::PageOrientation> ReversePortrait;
        
    protected:
    
        static System::SharedPtr<Features::PageOrientation> CreateConst(System::SharedPtr<Option> option);
        
    private:
    
        /// <summary>
        /// Creates PageOrientation feature instance.
        /// </summary>
        /// <param name="options">Array of <see cref="Option"/> objects.</param>
        PageOrientation(const System::ArrayPtr<System::SharedPtr<Option>>& options);
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    
private:

    Features();
    
};

} // namespace XpsMetadata
} // namespace Xps
} // namespace Page
} // namespace Aspose


