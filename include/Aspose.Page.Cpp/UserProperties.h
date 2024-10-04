#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/details/pointer_collection_helpers.h>
#include <system/collections/dictionary.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
class Margins;
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
namespace Drawing
{
class Color;
namespace Drawing2D
{
class Matrix;
} // namespace Drawing2D
class Rectangle;
class RectangleF;
class Size;
} // namespace Drawing
} // namespace System

namespace Aspose {

namespace Page {

/// <summary>
/// Special property class which allows typed properties to be set and
/// returned. It also allows the hookup of two default property objects
/// to be searched if this property object does not contain the property.    
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS UserProperties : public System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Object>>
{
    typedef UserProperties ThisType;
    typedef System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Object>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Copies properties, including its defaults into this UserProperties
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API void set_Properties(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Object>>> value);
    
    /// <summary>
    /// Initializes an empty instance of UserProperties class.
    /// </summary>
    ASPOSE_PAGE_SHARED_API UserProperties();
    /// <summary>
    /// Initializes an of UserProperties class with default values.
    /// </summary>
    /// <param name="defaults">Default properties values.</param>
    ASPOSE_PAGE_SHARED_API UserProperties(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Object>>> defaults);
    /// <summary>
    /// Constructs UserProperties with a defaults and altDefaults table,
    /// which are searched in that order.
    /// </summary>
    /// <param name="defaults">Default properties values.</param>
    /// <param name="altDefaults">An alternative properties values.</param>
    ASPOSE_PAGE_SHARED_API UserProperties(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Object>>> defaults, System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Object>>> altDefaults);
    
    /// <summary>
    /// Returns properties names.
    /// </summary>
    /// <returns>Enumerator of properties names.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::String>> PropertyNames();
    virtual ASPOSE_PAGE_SHARED_API void PrintProperties();
    /// <summary>
    /// Sets string property value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <param name="value">The value of property. </param>
    /// <returns>A property.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Object> SetProperty(System::String key, System::String value);
    /// <summary>
    /// Sets string array property value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <param name="value">The value of property. </param>
    /// <returns>A property.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Object> SetProperty(System::String key, System::ArrayPtr<System::String> value);
    /// <summary>
    /// Sets string array property value in specified properties table.
    /// </summary>
    /// <param name="properties">The properties table. </param>
    /// <param name="key">The name of property. </param>
    /// <param name="value">The value of property. </param>
    /// <returns>A property.</returns>
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Object> SetProperty(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Object>>> properties, System::String key, System::ArrayPtr<System::String> value);
    /// <summary>
    /// Sets color property value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <param name="value">The value of property. </param>
    /// <returns>A property.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Object> SetProperty(System::String key, System::Drawing::Color value);
    /// <summary>
    /// Sets color property value in specified properties table.
    /// </summary>
    /// <param name="properties">The properties table. </param>
    /// <param name="key">The name of property. </param>
    /// <param name="value">The value of property. </param>
    /// <returns>A property.</returns>
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Object> SetProperty(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Object>>> properties, System::String key, System::Drawing::Color value);
    /// <summary>
    /// Sets rectangle property value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <param name="value">The value of property. </param>
    /// <returns>A property.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Object> SetProperty(System::String key, System::Drawing::Rectangle value);
    /// <summary>
    /// Sets rectangle property value in specified properties table.
    /// </summary>
    /// <param name="properties">The properties table. </param>
    /// <param name="key">The name of property. </param>
    /// <param name="value">The value of property. </param>
    /// <returns>A property.</returns>
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Object> SetProperty(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Object>>> properties, System::String key, System::Drawing::Rectangle value);
    /// <summary>
    /// Sets margins property value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <param name="value">The value of property. </param>
    /// <returns>A property.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Object> SetProperty(System::String key, System::SharedPtr<Margins> value);
    /// <summary>
    /// Sets margins property value in specified properties table.
    /// </summary>
    /// <param name="properties">The properties table. </param>
    /// <param name="key">The name of property. </param>
    /// <param name="value">The value of property. </param>
    /// <returns>A property.</returns>
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Object> SetProperty(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Object>>> properties, System::String key, System::SharedPtr<Margins> value);
    /// <summary>
    /// Sets size property value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <param name="value">The value of property. </param>
    /// <returns>A property.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Object> SetProperty(System::String key, System::Drawing::Size value);
    /// <summary>
    /// Sets size property value in specified properties table.
    /// </summary>
    /// <param name="properties">The properties table. </param>
    /// <param name="key">The name of property. </param>
    /// <param name="value">The value of property. </param>
    /// <returns>A property.</returns>
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Object> SetProperty(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Object>>> properties, System::String key, System::Drawing::Size value);
    /// <summary>
    /// Sets integer property value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <param name="value">The value of property. </param>
    /// <returns>A property.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Object> SetProperty(System::String key, int32_t value);
    /// <summary>
    /// Sets integer property value in specified properties table.
    /// </summary>
    /// <param name="properties">The properties table. </param>
    /// <param name="key">The name of property. </param>
    /// <param name="value">The value of property. </param>
    /// <returns>A property.</returns>
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Object> SetProperty(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Object>>> properties, System::String key, int32_t value);
    /// <summary>
    /// Sets double property value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <param name="value">The value of property. </param>
    /// <returns>A property.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Object> SetProperty(System::String key, double value);
    /// <summary>
    /// Sets double property value in specified properties table.
    /// </summary>
    /// <param name="properties">The properties table. </param>
    /// <param name="key">The name of property. </param>
    /// <param name="value">The value of property. </param>
    /// <returns>A property.</returns>
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Object> SetProperty(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Object>>> properties, System::String key, double value);
    /// <summary>
    /// Sets float property value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <param name="value">The value of property. </param>
    /// <returns>A property.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Object> SetProperty(System::String key, float value);
    /// <summary>
    /// Sets float property value in specified properties table.
    /// </summary>
    /// <param name="properties">The properties table. </param>
    /// <param name="key">The name of property. </param>
    /// <param name="value">The value of property. </param>
    /// <returns>A property.</returns>
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Object> SetProperty(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Object>>> properties, System::String key, float value);
    /// <summary>
    /// Sets boolean property value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <param name="value">The value of property. </param>
    /// <returns>A property.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Object> SetProperty(System::String key, bool value);
    /// <summary>
    /// Sets boolean property value in specified properties table.
    /// </summary>
    /// <param name="properties">The properties table. </param>
    /// <param name="key">The name of property. </param>
    /// <param name="value">The value of property. </param>
    /// <returns>A property.</returns>
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Object> SetProperty(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Object>>> properties, System::String key, bool value);
    /// <summary>
    /// Sets matrix property value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <param name="value">The value of property. </param>
    /// <returns>A property.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Object> SetProperty(System::String key, System::SharedPtr<System::Drawing::Drawing2D::Matrix> value);
    /// <summary>
    /// Sets matrix property value in specified properties table.
    /// </summary>
    /// <param name="properties">The properties table. </param>
    /// <param name="key">The name of property. </param>
    /// <param name="value">The value of property. </param>
    /// <returns>A property.</returns>
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Object> SetProperty(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Object>>> properties, System::String key, System::SharedPtr<System::Drawing::Drawing2D::Matrix> value);
    /// <summary>
    /// Gets string property value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <returns>Property value.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::String GetProperty(System::String key);
    /// <summary>
    /// Gets string property value. If requested property is absent, returns provided default value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <param name="defValue">Default value of property. </param>
    /// <returns>Property value.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::String GetProperty(System::String key, System::String defValue);
    /// <summary>
    /// Gets string array property value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <returns>Property value.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::ArrayPtr<System::String> GetPropertyStringArray(System::String key);
    /// <summary>
    /// Gets string array property value. If requested property is absent, returns provided default value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <param name="defValue">Default value of property. </param>
    /// <returns>Property value.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::ArrayPtr<System::String> GetPropertyStringArray(System::String key, System::ArrayPtr<System::String> defValue);
    /// <summary>
    /// Gets color property value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <returns>Property value.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::Drawing::Color GetPropertyColor(System::String key);
    /// <summary>
    /// Gets color property value. If requested property is absent, returns provided default value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <param name="defValue">Default value of property. </param>
    /// <returns>Property value.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::Drawing::Color GetPropertyColor(System::String key, System::Drawing::Color defValue);
    /// <summary>
    /// Gets rectangle property value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <returns>Property value.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::Drawing::RectangleF GetPropertyRectangle(System::String key);
    /// <summary>
    /// Gets rectangle property value. If requested property is absent, returns provided default value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <param name="defValue">Default value of property. </param>
    /// <returns>Property value.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::Drawing::RectangleF GetPropertyRectangle(System::String key, System::Drawing::RectangleF defValue);
    /// <summary>
    /// Gets margins property value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <returns>Property value.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<Margins> GetPropertyMargins(System::String key);
    /// <summary>
    /// Gets margins property value. If requested property is absent, returns provided default value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <param name="defValue">Default value of property. </param>
    /// <returns>Property value.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<Margins> GetPropertyMargins(System::String key, System::SharedPtr<Margins> defValue);
    /// <summary>
    /// Gets size property value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <returns>Property value.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::Drawing::Size GetPropertySize(System::String key);
    /// <summary>
    /// Gets size property value. If requested property is absent, returns provided default value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <param name="defValue">Default value of property. </param>
    /// <returns>Property value.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::Drawing::Size GetPropertySize(System::String key, System::Drawing::Size defValue);
    /// <summary>
    /// Gets integer property value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <returns>Property value.</returns>
    virtual ASPOSE_PAGE_SHARED_API int32_t GetPropertyInt(System::String key);
    /// <summary>
    /// Gets integer property value. If requested property is absent, returns provided default value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <param name="defValue">Default value of property. </param>
    /// <returns>Property value.</returns>
    virtual ASPOSE_PAGE_SHARED_API int32_t GetPropertyInt(System::String key, int32_t defValue);
    /// <summary>
    /// Gets double property value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <returns>Property value.</returns>
    virtual ASPOSE_PAGE_SHARED_API double GetPropertyDouble(System::String key);
    /// <summary>
    /// Gets double property value. If requested property is absent, returns provided default value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <param name="defValue">Default value of property. </param>
    /// <returns>Property value.</returns>
    virtual ASPOSE_PAGE_SHARED_API double GetPropertyDouble(System::String key, double defValue);
    /// <summary>
    /// Gets float property value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <returns>Property value.</returns>
    virtual ASPOSE_PAGE_SHARED_API float GetPropertyFloat(System::String key);
    /// <summary>
    /// Gets float property value. If requested property is absent, returns provided default value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <param name="defValue">Default value of property. </param>
    /// <returns>Property value.</returns>
    virtual ASPOSE_PAGE_SHARED_API float GetPropertyFloat(System::String key, float defValue);
    /// <summary>
    /// Gets matrix property value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <returns>Property value.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Drawing2D::Matrix> GetPropertyMatrix(System::String key);
    /// <summary>
    /// Gets matrix property value. If requested property is absent, returns provided default value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <param name="defValue">Default value of property. </param>
    /// <returns>Property value.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Drawing2D::Matrix> GetPropertyMatrix(System::String key, System::SharedPtr<System::Drawing::Drawing2D::Matrix> defValue);
    /// <summary>
    /// Gets boolean property value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <returns>Property value.</returns>
    virtual ASPOSE_PAGE_SHARED_API bool IsProperty(System::String key);
    /// <summary>
    /// Gets boolean property value. If requested property is absent, returns provided default value.
    /// </summary>
    /// <param name="key">The name of property. </param>
    /// <param name="defValue">Default value of property. </param>
    /// <returns>Property value.</returns>
    virtual ASPOSE_PAGE_SHARED_API bool IsProperty(System::String key, bool defValue);
    ASPOSE_PAGE_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// <summary>
    /// An alternative properties values.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Object>>> altDefaults;
    
    virtual ASPOSE_PAGE_SHARED_API ~UserProperties();
    
};

} // namespace Page
} // namespace Aspose


