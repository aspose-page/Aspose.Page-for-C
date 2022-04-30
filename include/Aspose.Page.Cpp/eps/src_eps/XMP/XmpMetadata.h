#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.
/*using Aspose.Pdf.Engine.Factory;
using Aspose.Pdf.Engine.Filters;
using Aspose.Pdf.Engine.IO;*/

#include <system/collections/idictionary.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace EPS
{
namespace Postscript
{
class PSInputFile;
} // namespace Postscript
namespace XMP
{
class XmpDataCollection;
class XmpValue;
} // namespace XMP
} // namespace EPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class ICollection;
template <typename> class IEnumerator;
template <typename, typename> class KeyValuePair;
} // namespace Generic
} // namespace Collections
namespace IO
{
class Stream;
} // namespace IO
namespace Xml
{
class XmlNamespaceManager;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Page {

namespace EPS {

namespace XMP {

/// <summary>
/// Provides access to XMP metadata stream.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XmpMetadata final : public System::Collections::Generic::IDictionary<System::String, System::SharedPtr<Aspose::Page::EPS::XMP::XmpValue>>
{
    typedef XmpMetadata ThisType;
    typedef System::Collections::Generic::IDictionary<System::String, System::SharedPtr<Aspose::Page::EPS::XMP::XmpValue>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::EPS::Postscript::PSInputFile;
    
public:

    /// <summary>
    /// Checks if colleciton has fixed size.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_IsFixedSize() const;
    /// <summary>
    /// Checks if collection is read-only.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_IsReadOnly() const override;
    /// <summary>
    /// Gets collection of metadata keys.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::ICollection<System::String>> get_Keys() const override;
    /// <summary>
    /// Gets values in the metadata.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<XmpValue>>> get_Values() const override;
    /// <summary>
    /// Gets count of elements in the collection.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_Count() const override;
    /// <summary>
    /// Checks if collection is synchronized.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_IsSynchronized();
    /// <summary>
    /// Gets collection synchronization object.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() const;
    /// <summary>
    /// Gets namespace manager.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Xml::XmlNamespaceManager> get_NamespaceManager();
    
    /// <summary>
    /// Registers namespace URI.
    /// </summary>
    /// <param name="prefix">The value of prefix.</param>
    /// <param name="namespaceUri">The value of namespace URI.</param>
    ASPOSE_PAGE_SHARED_API void RegisterNamespaceUri(System::String prefix, System::String namespaceUri);
    /// <summary>
    /// Registers namespace URI.
    /// </summary>
    /// <param name="prefix">The value of prefix.</param>
    /// <param name="namespaceUri">The value of namespace URI.</param>
    /// <param name="schemaDescription">The value of schema description.</param>
    ASPOSE_PAGE_SHARED_API void RegisterNamespaceUri(System::String prefix, System::String namespaceUri, System::String schemaDescription);
    /// <summary>
    /// Returns  namespace URI by prefix.
    /// </summary>
    /// <param name="prefix">The value of prefix.</param>
    /// <returns>The value of namespace URI.</returns>
    ASPOSE_PAGE_SHARED_API System::String GetNamespaceUriByPrefix(System::String prefix);
    /// <summary>
    /// Returns prefix by namespace URI.
    /// </summary>
    /// <param name="namespaceUri">Namespace URI.</param>
    /// <returns>The value of prefix.</returns>
    ASPOSE_PAGE_SHARED_API System::String GetPrefixByNamespaceUri(System::String namespaceUri);
    /// <summary>
    /// Adds value to metadata.
    /// </summary>
    /// <param name="key">The key to add.</param>
    /// <param name="value">Value which will be added.</param>
    ASPOSE_PAGE_SHARED_API void Add(const System::String& key, const System::SharedPtr<XmpValue>& value) override;
    /// <summary>
    /// Adds value to metadata.
    /// </summary>
    /// <param name="key">The key to add.</param>
    /// <param name="value">Value which will be added.</param>
    ASPOSE_PAGE_SHARED_API void Add(const System::String& key, const System::SharedPtr<System::Object>& value);
    /// <summary>
    /// Clears metadata.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void Clear() override;
    /// <summary>
    /// Checks does key is contained in metadata.
    /// </summary>
    /// <param name="key">The key of entry to find.</param>
    /// <returns>True if key is contained in the metadata.</returns>
    ASPOSE_PAGE_SHARED_API bool Contains(const System::String& key) const;
    /// <summary>
    /// Returns dictionary enumerator.
    /// </summary>
    /// <returns>Enumerator.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>>> GetEnumerator() override;
    /// <summary>
    /// Removes entry from metadata. 
    /// </summary>
    /// <param name="key">The key of entry to remove.</param>
    /// <returns>True - if key removed; otherwise, false.</returns>
    ASPOSE_PAGE_SHARED_API bool Remove(const System::String& key) override;
    
    /// <summary>
    /// Gets data from metadata.
    /// </summary>
    /// <param name="key">The key name.</param>
    /// <returns>XmpMetadata object.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XmpValue> idx_get(const System::String& key) const override;
    /// <summary>
    /// Sets data from metadata.
    /// </summary>
    /// <param name="key">The key name.</param>
    /// <param name="value">XmpMetadata object.</param>
    ASPOSE_PAGE_SHARED_API void idx_set(const System::String& key, System::SharedPtr<XmpValue> value) override;
    
    /// <summary>
    /// Copies elements of the collection into array.
    /// </summary>
    /// <param name="array">Destination array.</param>
    /// <param name="index">Starting index.</param>
    ASPOSE_PAGE_SHARED_API void CopyTo(System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>> array, int32_t index) override;
    /// <summary>
    /// Determines does this dictionary contasins specified key.
    /// </summary>
    /// <param name="key">Key to search in the dictionary.</param>
    /// <returns>true if key is found.</returns>
    ASPOSE_PAGE_SHARED_API bool ContainsKey(const System::String& key) const override;
    /// <summary>
    /// Tries to find key in the dictionary and retreives value if found.
    /// </summary>
    /// <param name="key">Key to search in the dictionary.</param>
    /// <param name="value">Retreived value.</param>
    /// <returns>true if key was found.</returns>
    ASPOSE_PAGE_SHARED_API bool TryGetValue(const System::String& key, System::SharedPtr<XmpValue>& value) const override;
    /// <summary>
    /// Adds pair with key and value into the dictionary.
    /// </summary>
    /// <param name="item">Item to be added.</param>
    ASPOSE_PAGE_SHARED_API void Add(const System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>& item) override;
    /// <summary>
    /// Adds value into an array. The value will be added at the end of the array.
    /// </summary>
    /// <param name="arrayKey">Key of the array to search in the dictionary.</param>
    /// <param name="value">Value to add into the array.</param>
    ASPOSE_PAGE_SHARED_API void AddArrayItem(System::String arrayKey, System::SharedPtr<XmpValue> value);
    /// <summary>
    /// Adds value into an array by specified index.
    /// </summary>
    /// <param name="arrayKey">Key of the array to search in the dictionary.</param>
    /// <param name="index">Index of new value in the array.</param>
    /// <param name="value">Value to add into the array.</param>
    ASPOSE_PAGE_SHARED_API void AddArrayItem(System::String arrayKey, int32_t index, System::SharedPtr<XmpValue> value);
    /// <summary>
    /// Sets value in an array. Previous value will be replaced with new one.
    /// </summary>
    /// <param name="arrayKey">Key of the array to search in the dictionary.</param>
    /// <param name="index">Index of new value in the array.</param>
    /// <param name="value">Value to set in the array.</param>
    ASPOSE_PAGE_SHARED_API void SetArrayItem(System::String arrayKey, int32_t index, System::SharedPtr<XmpValue> value);
    /// <summary>
    /// Adds named value into a structure.
    /// </summary>
    /// <param name="structureKey">Key of the structure to search in the dictionary.</param>
    /// <param name="valueKey">Name of the value to add into the struture.</param>
    /// <param name="value">Value to add into the struture.</param>
    ASPOSE_PAGE_SHARED_API void AddNamedValue(System::String structureKey, System::String valueKey, System::SharedPtr<XmpValue> value);
    /// <summary>
    /// Sets named value into a structure. Previous named value, if already exists, will be replaced with new one.
    /// </summary>
    /// <param name="structureKey">Key of the structure to search in the dictionary.</param>
    /// <param name="valueKey">Name of the value to set into the struture.</param>
    /// <param name="value">Value to set into the struture.</param>
    ASPOSE_PAGE_SHARED_API void SetNamedValue(System::String structureKey, System::String valueKey, System::SharedPtr<XmpValue> value);
    /// <summary>
    /// Checks does specified key-value pair is contained in the dictionary.
    /// </summary>
    /// <param name="item">Key-value pair.</param>
    /// <returns>true if this pauir was found.</returns>
    ASPOSE_PAGE_SHARED_API bool Contains(const System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>& item) const override;
    /// <summary>
    /// Removes key/value pair from the colleciton.
    /// </summary>
    /// <param name="item">Key/value pair to be removed.</param>
    /// <returns>true if pair was found and removed.</returns>
    ASPOSE_PAGE_SHARED_API bool Remove(const System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>& item) override;
    
protected:

    /// <summary>
    /// Constructor of the XmpMetadata.
    /// </summary>
    /// <param name="stream"></param>
    XmpMetadata(System::SharedPtr<System::IO::Stream> stream);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XmpMetadata, CODEPORTING_ARGS(System::SharedPtr<System::IO::Stream> stream));
    
    XmpMetadata(System::SharedPtr<XmpDataCollection> _data);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XmpMetadata, CODEPORTING_ARGS(System::SharedPtr<XmpDataCollection> _data));
    
    /// <summary>
    /// Creates empty metadata object.
    /// </summary>
    XmpMetadata();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XmpMetadata, CODEPORTING_ARGS());
    /// <summary>
    /// Returns XmpDataCollection object.
    /// </summary>
    /// <returns>XmpMetadata object.</returns>
    System::SharedPtr<XmpDataCollection> GetData();
    
    virtual ASPOSE_PAGE_SHARED_API ~XmpMetadata();
    
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    System::SharedPtr<XmpDataCollection> data;
    static const System::String _defaultXmpNamespacePrefix;
    static const System::String _defaultXmpNamespaceUri;
    
    System::SharedPtr<System::Xml::XmlNamespaceManager> GetNamespaceManager();
    void AddArrayItem(System::ArrayPtr<System::SharedPtr<XmpValue>> arr, System::String arrayKey, int32_t index, System::SharedPtr<XmpValue> value);
    
};

} // namespace XMP
} // namespace EPS
} // namespace Page
} // namespace Aspose


