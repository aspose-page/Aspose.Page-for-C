#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if ASPOSE_PDF_DRAWING

// C# INACTIVE CODE:
// using Aspose.Page.Drawing;
// using FontStyle = Aspose.Page.Drawing.FontStyle;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif


#include <system/object.h>
#include <system/enum_helpers.h>
#include <system/constraints.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsElement.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsContentElement.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace Tests
{
class XpsCanvasTests;
} // namespace Tests
class XpsDocumentVisitor;
namespace XpsModel
{
template <typename> class XpsArray;
class XpsContentElement;
class XpsContext;
enum class XpsEdgeMode;
class XpsElement;
class XpsGlyphs;
class XpsObject;
class XpsPath;
class XpsPathGeometry;
template <typename> class XpsProperty;
class XpsTreeLoader;
class XpsVisual;
} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Drawing
{
enum class FontStyle;
} // namespace Drawing
class String;
namespace Xml
{
class XmlElement;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsModel {

/// <summary>
/// The <b>Aspose.Page.Xps.XpsModel</b> namespace provides classes that describe elements of XPS document.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

/// <summary>
/// Class incapsulating Canvas element features.
/// This element groups elements together. For example, Glyphs and Path elements
/// can be grouped in a canvas in order to be identified as a unit (as a hyperlink destination) or
/// to apply a composed property value to each child and ancestor element.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsCanvas final : public Aspose::Page::XPS::XpsModel::XpsContentElement
{
    typedef XpsCanvas ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsContentElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsArray;
    friend class Aspose::Page::XPS::XpsModel::XpsVisual;
    friend class Aspose::Page::XPS::XpsModel::XpsTreeLoader;
    friend class Aspose::Page::XPS::XpsModel::XpsElement;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsProperty;
    friend class Aspose::Page::XPS::Tests::XpsCanvasTests;
    
public:

    /// <summary>
    /// Returns/sets the value that controls how edges of paths within the canvas are rendered.
    /// </summary>
    ASPOSE_PAGE_SHARED_API XpsEdgeMode get_EdgeMode() const;
    /// <summary>
    /// Returns/sets the value that controls how edges of paths within the canvas are rendered.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_EdgeMode(XpsEdgeMode value);
    
    /// <summary>
    /// Adds an element to this canvas's child list.
    /// </summary>
    /// <typeparam name="T">The type of the element to add.</typeparam>
    /// <param name="element">The element to be added.</param>
    /// <returns>Added element.</returns>
    template <typename T>
    T Add(T element)
    {
        typedef XpsContentElement BaseT_XpsContentElement;
        assert_is_base_of(BaseT_XpsContentElement, T);
        
        return Aspose::Page::XPS::XpsModel::XpsElement::Add<T>(element);
    }
    
    /// <summary>
    /// Inserts an element to this canvas's child list at <paramref name="index"></paramref> position.
    /// </summary>
    /// <typeparam name="T">The type of the element to add.</typeparam>
    /// <param name="index">Position at which an element should be inserted.</param>
    /// <param name="element">The element to be inserted.</param>
    /// <returns>Inserted element.</returns>
    template <typename T>
    T Insert(int32_t index, T element)
    {
        typedef XpsContentElement BaseT_XpsContentElement;
        assert_is_base_of(BaseT_XpsContentElement, T);
        
        return Aspose::Page::XPS::XpsModel::XpsElement::Insert<T>(index, element);
    }
    
    /// <summary>
    /// Adds a new canvas to this canvas's child list.
    /// </summary>
    /// <returns>Added canvas.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsCanvas> AddCanvas();
    /// <summary>
    /// Inserts a new canvas to this canvas's child list at <paramref name="index"></paramref> position.
    /// </summary>
    /// <param name="index">Position at which a new canvas should be inserted.</param>
    /// <returns>Inserted canvas.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsCanvas> InsertCanvas(int32_t index);
    /// <summary>
    /// Adds a new path to this canvas's child list.
    /// </summary>
    /// <param name="data">The geometry of the path.</param>
    /// <returns>Added path.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPath> AddPath(System::SharedPtr<XpsPathGeometry> data);
    /// <summary>
    /// Inserts a new path to this canvas's child list at <paramref name="index"></paramref> position.
    /// </summary>
    /// <param name="index">Position at which a new path should be inserted.</param>
    /// <param name="data">The geometry of the path.</param>
    /// <returns>Inserted path.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPath> InsertPath(int32_t index, System::SharedPtr<XpsPathGeometry> data);
    /// <summary>
    /// Adds new glyphs to this canvas's child list.
    /// </summary>
    /// <param name="fontFamily">Font family.</param>
    /// <param name="fontSize">Font size.</param>
    /// <param name="fontStyle">Font style.</param>
    /// <param name="originX">Glyphs origin X coordinate.</param>
    /// <param name="originY">Glyphs origin T coordinate.</param>
    /// <param name="unicodeString">String to be printed.</param>
    /// <returns>Added glyphs.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsGlyphs> AddGlyphs(System::String fontFamily, float fontSize, System::Drawing::FontStyle fontStyle, float originX, float originY, System::String unicodeString);
    /// <summary>
    /// Inserts new glyphs to this canvas's child list at <paramref name="index"></paramref> position.
    /// </summary>
    /// <param name="index">Position at which new glyphs should be inserted.</param>
    /// <param name="fontFamily">Font family.</param>
    /// <param name="fontSize">Font size.</param>
    /// <param name="fontStyle">Font style.</param>
    /// <param name="originX">Glyphs origin X coordinate.</param>
    /// <param name="originY">Glyphs origin T coordinate.</param>
    /// <param name="unicodeString">String to be printed.</param>
    /// <returns>Added glyphs.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsGlyphs> InsertGlyphs(int32_t index, System::String fontFamily, float fontSize, System::Drawing::FontStyle fontStyle, float originX, float originY, System::String unicodeString);
    /// <summary>
    /// Clones this canvas.
    /// </summary>
    /// <returns>Clone of this canvas.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsCanvas> Clone();
    
protected:

    XpsCanvas(System::SharedPtr<XpsContext> context, int32_t elementId = -1);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsCanvas, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, int32_t elementId = -1));
    
    XpsCanvas(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsElement> parent, int32_t elementId = -1);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsCanvas, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsElement> parent, int32_t elementId = -1));
    ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element) override;
    ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor) override;
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsElement> Clone(bool deep, System::SharedPtr<XpsContext> context, System::SharedPtr<XpsElement> parent, int32_t index = -1) override;
    ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsObject> obj) override;
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsCanvas();
    
private:

    XpsEdgeMode _edgeMode;
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


