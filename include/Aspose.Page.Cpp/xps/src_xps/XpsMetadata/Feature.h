#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <system/collections/ienumerable.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IPrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IFeatureItem.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace Tests
{
class PrintTicketTests;
} // namespace Tests
namespace XpsMetadata
{
class DocumentFeature;
class DocumentFeatures;
class Features;
class JobFeature;
class JobFeatures;
class Option;
class PageFeature;
class PageFeatures;
class PrintTicket;
class Property;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerator;
} // namespace Generic
} // namespace Collections
namespace Xml
{
class XmlDocument;
class XmlNode;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

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

class ASPOSE_PAGE_SHARED_CLASS Feature : public Aspose::Page::XPS::XpsMetadata::IPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IFeatureItem, public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Page::XPS::XpsMetadata::IFeatureItem>>
{
    typedef Feature ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::IPrintTicketItem BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IFeatureItem BaseType1;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Page::XPS::XpsMetadata::IFeatureItem>> BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::JobFeature;
    friend class Aspose::Page::XPS::XpsMetadata::JobFeatures;
    friend class Aspose::Page::XPS::XpsMetadata::DocumentFeature;
    friend class Aspose::Page::XPS::XpsMetadata::DocumentFeatures;
    friend class Aspose::Page::XPS::XpsMetadata::PageFeature;
    friend class Aspose::Page::XPS::XpsMetadata::PageFeatures;
    friend class Aspose::Page::XPS::XpsMetadata::Features;
    friend class Aspose::Page::XPS::XpsMetadata::Features;
    friend class Aspose::Page::XPS::XpsMetadata::PrintTicket;
    friend class Aspose::Page::XPS::Tests::PrintTicketTests;
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<IFeatureItem>>;
    /// Iterator type.
    using iterator = typename iterator_holder_type::iterator;
    /// Const iterator type.
    using const_iterator = typename iterator_holder_type::const_iterator;
    /// Virtualized element type.
    using virtualized_iterator_element = typename iterator_holder_type::virtualized_iterator_element;
    /// Virtualized type.
    using virtualized_iterator = typename iterator_holder_type::virtualized_iterator;
    
public:

    /// <summary>
    /// Returns feature name.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::String get_Name() override;
    
    /// <summary>
    /// Creates common print ticket feature instance.
    /// </summary>
    /// <param name="name">Feature name.</param>
    /// <param name="option">Mandatory <see cref="Option"></see> object.</param>
    /// <param name="properties">Arbitrary array <see cref="Property"></see> objects to insert before <paramref name="option"></paramref>.</param>
    ASPOSE_PAGE_SHARED_API Feature(System::String name, System::SharedPtr<Option> option, const System::ArrayPtr<System::SharedPtr<Property>>& properties);
    /// <summary>
    /// Creates common print ticket feature instance.
    /// </summary>
    /// <param name="name">Feature name.</param>
    /// <param name="feature">Mandatory <see cref="Feature"></see> object.</param>
    /// <param name="properties">Arbitrary array <see cref="Property"></see> objects to insert before <paramref name="feature"></paramref>.</param>
    ASPOSE_PAGE_SHARED_API Feature(System::String name, System::SharedPtr<Feature> feature, const System::ArrayPtr<System::SharedPtr<Property>>& properties);
    
    /// <summary>
    /// Adds list of items to the end of feature items list. 
    /// Each one must be a <see cref="Feature"></see>, <see cref="Option"></see> or <see cref="Property"></see> object.
    /// </summary>
    /// <param name="items">List of items to add.</param>
    ASPOSE_PAGE_SHARED_API void Add(const System::ArrayPtr<System::SharedPtr<IFeatureItem>>& items);
    /// <summary>
    /// Implementation of <see cref="System::Collections::Generic::IEnumerable&lt;IFeatureItem&gt;"></see> interface.
    /// </summary>
    /// <returns>Returns enumerator for the list.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IFeatureItem>>> GetEnumerator() override;
    /// <summary>
    /// Returns the string representation.
    /// </summary>
    /// <returns>String representation.</returns>
    ASPOSE_PAGE_SHARED_API System::String ToString() const override;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    ASPOSE_PAGE_SHARED_API iterator begin() noexcept;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    ASPOSE_PAGE_SHARED_API iterator end() noexcept;
    /// Gets iterator pointing to the first element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any) of the const-qualified instance of the collection
    ASPOSE_PAGE_SHARED_API const_iterator begin() const noexcept;
    /// Gets iterator pointing right after the last element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any) of the const-qualified instance of the collection
    ASPOSE_PAGE_SHARED_API const_iterator end() const noexcept;
    /// Gets iterator pointing to the first const-qualified element (if any) of the collection.
    /// @return An iterator pointing to the first const-qualified element (if any) of the collection
    ASPOSE_PAGE_SHARED_API const_iterator cbegin() const noexcept;
    /// Gets iterator pointing right after the last const-qualified element (if any) of the collection.
    /// @return An iterator pointing right after the last const-qualified element (if any) of the collection
    ASPOSE_PAGE_SHARED_API const_iterator cend() const noexcept;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    /// Provides iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_PAGE_SHARED_API virtualized_iterator* virtualizeBeginIterator() override;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    /// Provides iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_PAGE_SHARED_API virtualized_iterator* virtualizeEndIterator() override;
    /// Gets iterator pointing to the first element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_PAGE_SHARED_API virtualized_iterator* virtualizeBeginConstIterator() const override;
    /// Gets iterator pointing right after the last element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_PAGE_SHARED_API virtualized_iterator* virtualizeEndConstIterator() const override;
    
protected:

    bool _isConst;
    
    Feature(System::String name, const System::ArrayPtr<System::SharedPtr<Option>>& options);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Feature, CODEPORTING_ARGS(System::String name, const System::ArrayPtr<System::SharedPtr<Option>>& options));
    
    Feature(System::String name, const System::ArrayPtr<System::SharedPtr<Property>>& properties);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Feature, CODEPORTING_ARGS(System::String name, const System::ArrayPtr<System::SharedPtr<Property>>& properties));
    
    Feature(System::SharedPtr<System::Xml::XmlNode> node);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Feature, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlNode> node));
    void AddRange(const System::ArrayPtr<System::SharedPtr<IFeatureItem>>& items);
    void AddRange(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<IFeatureItem>>> items);
    System::SharedPtr<System::Xml::XmlNode> ToXml(System::SharedPtr<System::Xml::XmlDocument> document);
    
    System::SharedPtr<IFeatureItem> idx_get(int32_t i);
    
    virtual ASPOSE_PAGE_SHARED_API ~Feature();
    
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IFeatureItem>>> _items;
    System::String pr_Name;
    
    System::String ToString_NonConst();
    
};

/// <summary>
/// Abstract class for job-level print ticket feature.
/// </summary>
class JobDuplexAllDocumentsContiguously;
class JobInputBin;

class ASPOSE_PAGE_SHARED_CLASS JobFeature : public Aspose::Page::XPS::XpsMetadata::Feature
{
    typedef JobFeature ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::JobFeatures;
    friend class Aspose::Page::XPS::XpsMetadata::JobFeatures;
    
protected:

    JobFeature(System::String name, const System::ArrayPtr<System::SharedPtr<Option>>& options);
    
    virtual ASPOSE_PAGE_SHARED_API ~JobFeature();
    
};

/// <summary>
/// Class incapsulating job-level print ticket feature.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS JobFeatures : public System::Object
{
    typedef JobFeatures ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Convenience class for JobDuplexAllDocumentsContiguously print ticket feature.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS JobDuplexAllDocumentsContiguously final : public Aspose::Page::XPS::XpsMetadata::JobFeature
    {
        typedef JobDuplexAllDocumentsContiguously ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::JobFeature BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Constant for OneSided mode.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobFeatures::JobDuplexAllDocumentsContiguously> OneSided;
        /// <summary>
        /// Constant for TwoSidedShortEdge mode (Automatic if possible, Manual otherwise).
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobFeatures::JobDuplexAllDocumentsContiguously> TwoSidedShortEdge;
        /// <summary>
        /// Constant for TwoSidedLongEdge mode (Automatic if possible, Manual otherwise).
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobFeatures::JobDuplexAllDocumentsContiguously> TwoSidedLongEdge;
        
    protected:
    
        virtual ASPOSE_PAGE_SHARED_API ~JobDuplexAllDocumentsContiguously();
        
    private:
    
        JobDuplexAllDocumentsContiguously(const System::ArrayPtr<System::SharedPtr<Option>>& options);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(JobDuplexAllDocumentsContiguously, CODEPORTING_ARGS(const System::ArrayPtr<System::SharedPtr<Option>>& options));
        
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    /// <summary>
    /// Convenience class for JobInputBin print ticket feature.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS JobInputBin final : public Aspose::Page::XPS::XpsMetadata::JobFeature
    {
        typedef JobInputBin ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::JobFeature BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// AutoSelect valued constant.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobFeatures::JobInputBin> AutoSelect;
        
        /// <summary>
        /// Creates JobInputBin feature instance.
        /// </summary>
        /// <param name="options">Array of <see cref="Option"></see> objects.</param>
        ASPOSE_PAGE_SHARED_API JobInputBin(const System::ArrayPtr<System::SharedPtr<Option>>& options);
        
    protected:
    
        static System::SharedPtr<JobFeatures::JobInputBin> CreateConst(System::SharedPtr<Option> option);
        
        virtual ASPOSE_PAGE_SHARED_API ~JobInputBin();
        
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

class ASPOSE_PAGE_SHARED_CLASS DocumentFeature : public Aspose::Page::XPS::XpsMetadata::Feature
{
    typedef DocumentFeature ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::DocumentFeatures;
    friend class Aspose::Page::XPS::XpsMetadata::DocumentFeatures;
    
protected:

    DocumentFeature(System::String name, const System::ArrayPtr<System::SharedPtr<Option>>& options);
    
    virtual ASPOSE_PAGE_SHARED_API ~DocumentFeature();
    
};

/// <summary>
/// Class incapsulating document-level print ticket feature.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS DocumentFeatures : public System::Object
{
    typedef DocumentFeatures ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Convenience class for DocumentDuplex print ticket feature.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS DocumentDuplex final : public Aspose::Page::XPS::XpsMetadata::DocumentFeature
    {
        typedef DocumentDuplex ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::DocumentFeature BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Constant for OneSided mode.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<DocumentFeatures::DocumentDuplex> OneSided;
        /// <summary>
        /// Constant for TwoSidedShortEdge mode (Automatic if possible, Manual otherwise).
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<DocumentFeatures::DocumentDuplex> TwoSidedShortEdge;
        /// <summary>
        /// Constant for TwoSidedLongEdge mode (Automatic if possible, Manual otherwise).
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<DocumentFeatures::DocumentDuplex> TwoSidedLongEdge;
        
    protected:
    
        virtual ASPOSE_PAGE_SHARED_API ~DocumentDuplex();
        
    private:
    
        DocumentDuplex(const System::ArrayPtr<System::SharedPtr<Option>>& options);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DocumentDuplex, CODEPORTING_ARGS(const System::ArrayPtr<System::SharedPtr<Option>>& options));
        
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    /// <summary>
    /// Convenience class for DocumentInputBin print ticket feature.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS DocumentInputBin final : public Aspose::Page::XPS::XpsMetadata::DocumentFeature
    {
        typedef DocumentInputBin ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::DocumentFeature BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// AutoSelect valued constant.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<DocumentFeatures::DocumentInputBin> AutoSelect;
        
        /// <summary>
        /// Creates DocumentInputBin feature instance.
        /// </summary>
        /// <param name="options">Array of <see cref="Option"></see> objects.</param>
        ASPOSE_PAGE_SHARED_API DocumentInputBin(const System::ArrayPtr<System::SharedPtr<Option>>& options);
        
    protected:
    
        static System::SharedPtr<DocumentFeatures::DocumentInputBin> CreateConst(System::SharedPtr<Option> option);
        
        virtual ASPOSE_PAGE_SHARED_API ~DocumentInputBin();
        
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

class ASPOSE_PAGE_SHARED_CLASS PageFeature : public Aspose::Page::XPS::XpsMetadata::Feature
{
    typedef PageFeature ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::PageFeatures;
    
protected:

    PageFeature(System::String name, const System::ArrayPtr<System::SharedPtr<Option>>& options);
    
    virtual ASPOSE_PAGE_SHARED_API ~PageFeature();
    
};

/// <summary>
/// Abstract class for page-level print ticket feature.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PageFeatures : public System::Object
{
    typedef PageFeatures ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Convenience class for PageInputBin print ticket feature.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS PageInputBin final : public Aspose::Page::XPS::XpsMetadata::PageFeature
    {
        typedef PageInputBin ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::PageFeature BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// AutoSelect valued constant.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageFeatures::PageInputBin> AutoSelect;
        
        /// <summary>
        /// Creates PageInputBin feature instance.
        /// </summary>
        /// <param name="options">Array of <see cref="Option"></see> objects.</param>
        ASPOSE_PAGE_SHARED_API PageInputBin(const System::ArrayPtr<System::SharedPtr<Option>>& options);
        
    protected:
    
        static System::SharedPtr<PageFeatures::PageInputBin> CreateConst(System::SharedPtr<Option> option);
        
        virtual ASPOSE_PAGE_SHARED_API ~PageInputBin();
        
    private:
    
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    
private:

    PageFeatures();
    
};

/// <summary>
/// Class incapsulating common print ticket feature.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS Features : public System::Object
{
    typedef Features ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Convenience class for PageMediaSize print ticket feature.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS PageMediaSize final : public Aspose::Page::XPS::XpsMetadata::Feature
    {
        typedef PageMediaSize ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Creates PageMediaSize feature instance.
        /// </summary>
        /// <param name="options">Array of <see cref="Option"></see> objects.</param>
        ASPOSE_PAGE_SHARED_API PageMediaSize(const System::ArrayPtr<System::SharedPtr<Option>>& options);
        
    protected:
    
        virtual ASPOSE_PAGE_SHARED_API ~PageMediaSize();
        
    };
    
    /// <summary>
    /// Convenience class for PageOrientation print ticket feature.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS PageOrientation final : public Aspose::Page::XPS::XpsMetadata::Feature
    {
        typedef PageOrientation ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Landscape orientation
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Features::PageOrientation> Landscape;
        /// <summary>
        /// Portrait orientation
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Features::PageOrientation> Portrait;
        /// <summary>
        /// Reverse landscape orientation
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Features::PageOrientation> ReverseLandscape;
        /// <summary>
        /// Reverse portrait orientation
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Features::PageOrientation> ReversePortrait;
        
    protected:
    
        static System::SharedPtr<Features::PageOrientation> CreateConst(System::SharedPtr<Option> option);
        
        virtual ASPOSE_PAGE_SHARED_API ~PageOrientation();
        
    private:
    
        /// <summary>
        /// Creates PageOrientation feature instance.
        /// </summary>
        /// <param name="options">Array of <see cref="Option"></see> objects.</param>
        PageOrientation(const System::ArrayPtr<System::SharedPtr<Option>>& options);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageOrientation, CODEPORTING_ARGS(const System::ArrayPtr<System::SharedPtr<Option>>& options));
        
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    
private:

    Features();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Features, CODEPORTING_ARGS());
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


