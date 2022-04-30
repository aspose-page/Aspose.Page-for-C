#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/exceptions.h>
#include <system/details/pointer_collection_helpers.h>
#include <system/constraints.h>
#include <system/collections/list.h>
#include <system/collections/ienumerable.h>
#include <system/array.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsObject.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsContext/XpsContext.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace Presentation
{
namespace Aps
{
class ApsConverter;
} // namespace Aps
namespace Xps
{
class XpsPageWriter;
} // namespace Xps
class XpsPresenter;
} // namespace Presentation
namespace Tests
{
class ChildElementsCollectionTests;
class HyperlinksTests;
class PageOperationsTests;
class XpsCanvasTests;
class XpsDocumentTests;
class XpsGlyphsTests;
class XpsPathFigureTests;
class XpsPathGeometryTests;
class XpsPathTests;
} // namespace Tests
class XpsDocument;
class XpsDocumentVisitor;
namespace XpsModel
{
enum class RegistrationType;
class XpsArcSegment;
template <typename> class XpsArray;
class XpsCanvas;
class XpsColor;
class XpsContentElement;
class XpsElementLinkTarget;
class XpsFont;
class XpsGlyphs;
class XpsGradientStop;
class XpsHyperlinkElement;
class XpsIccProfile;
class XpsImage;
class XpsImageBrush;
class XpsLinearGradientBrush;
class XpsMatrix;
class XpsPage;
class XpsPageContext;
class XpsPath;
class XpsPathFigure;
class XpsPathGeometry;
class XpsPathSegment;
class XpsPolyBezierSegment;
class XpsPolyLineSegment;
class XpsPolyQuadraticBezierSegment;
template <typename> class XpsProperty;
class XpsPropertyValueManager;
class XpsRadialGradientBrush;
class XpsSolidColorBrush;
enum class XpsSweepDirection;
class XpsTreeLoader;
class XpsTreeVisitor;
class XpsVisual;
class XpsVisualBrush;
} // namespace XpsModel
namespace XpsPackageParts
{
class FixedDocument;
class FixedPage;
} // namespace XpsPackageParts
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
namespace Drawing
{
class Color;
enum class FontStyle;
class PointF;
class RectangleF;
class SizeF;
} // namespace Drawing
namespace IO
{
class Stream;
} // namespace IO
namespace Xml
{
class XmlElement;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsModel {

enum class XpsElementType
{
    SimpleElement,
    CompositeElement
};

/// <summary>
/// Class incapsulating common XPS element features.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsElement : public Aspose::Page::XPS::XpsModel::XpsObject, public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContentElement>>
{
    typedef XpsElement ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsObject BaseType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContentElement>> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::XpsPresenter;
    friend class Aspose::Page::XPS::Presentation::Aps::ApsConverter;
    friend class Aspose::Page::XPS::Presentation::Xps::XpsPageWriter;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsArray;
    friend class Aspose::Page::XPS::XpsModel::XpsContentElement;
    friend class Aspose::Page::XPS::XpsModel::XpsHyperlinkElement;
    friend class Aspose::Page::XPS::XpsModel::XpsElementLinkTarget;
    friend class Aspose::Page::XPS::XpsModel::XpsVisual;
    friend class Aspose::Page::XPS::XpsModel::XpsVisualBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsCanvas;
    friend class Aspose::Page::XPS::XpsModel::XpsContext;
    friend class Aspose::Page::XPS::XpsModel::XpsPageContext;
    friend class Aspose::Page::XPS::XpsModel::XpsPropertyValueManager;
    friend class Aspose::Page::XPS::XpsModel::XpsTreeLoader;
    friend class Aspose::Page::XPS::XpsDocument;
    friend class Aspose::Page::XPS::XpsModel::XpsGlyphs;
    friend class Aspose::Page::XPS::XpsModel::XpsPage;
    friend class Aspose::Page::XPS::XpsModel::XpsPath;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsProperty;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedDocument;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedPage;
    friend class Aspose::Page::XPS::Tests::HyperlinksTests;
    friend class Aspose::Page::XPS::Tests::ChildElementsCollectionTests;
    friend class Aspose::Page::XPS::Tests::PageOperationsTests;
    friend class Aspose::Page::XPS::Tests::XpsCanvasTests;
    friend class Aspose::Page::XPS::Tests::XpsDocumentTests;
    friend class Aspose::Page::XPS::Tests::XpsGlyphsTests;
    friend class Aspose::Page::XPS::Tests::XpsPathFigureTests;
    friend class Aspose::Page::XPS::Tests::XpsPathGeometryTests;
    friend class Aspose::Page::XPS::Tests::XpsPathTests;
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<XpsContentElement>>;
    /// Iterator type.
    using iterator = typename iterator_holder_type::iterator;
    /// Const iterator type.
    using const_iterator = typename iterator_holder_type::const_iterator;
    /// Virtualized element type.
    using virtualized_iterator_element = typename iterator_holder_type::virtualized_iterator_element;
    /// Virtualized type.
    using virtualized_iterator = typename iterator_holder_type::virtualized_iterator;
    
public:

    ASPOSE_PAGE_SHARED_API const System::SharedPtr<XpsElement>& get_Parent() const;
    ASPOSE_PAGE_SHARED_API void set_Parent(System::SharedPtr<XpsElement> value);
    /// <summary>
    /// Returns number of child elements.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_Count();
    
    /// <summary>
    /// Provides access to element's children by index <paramref name="i"></paramref>.
    /// </summary>
    /// <param name="i">Index of child element.</param>
    /// <returns>Child element at <paramref name="i"></paramref> position.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsContentElement> idx_get(int32_t i);
    
    /// <summary>
    /// Implementation of <see cref="System::Collections::Generic::IEnumerable&lt;XpsContentElement&gt;"></see> interface.
    /// </summary>
    /// <returns>Returns enumerator for the list.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<XpsContentElement>>> GetEnumerator() override;
    ASPOSE_PAGE_SHARED_API void cpp_set_parent_weak();
    ASPOSE_PAGE_SHARED_API void cpp_set_parent_shared();
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
    ASPOSE_PAGE_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    XpsElementType _elementType;
    System::String _name;
    
    XpsElement(System::SharedPtr<XpsContext> context);
    
    ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element) override;
    virtual ASPOSE_PAGE_SHARED_API void ForcePropertyValueReferencesUpdate(System::SharedPtr<XpsElement> parent, bool add = true);
    virtual ASPOSE_PAGE_SHARED_API void UpdatePropertyValueReferences(System::SharedPtr<XpsElement> propertyValue, bool add = true);
    ASPOSE_PAGE_SHARED_API void ForceRegisterForPreprocessing(bool add = true) override;
    ASPOSE_PAGE_SHARED_API void RegisterForPreprocessing(System::SharedPtr<XpsElement> element, RegistrationType regType, bool add = true) override;
    template <typename T>
    T Add(T element)
    {
        typedef XpsContentElement BaseT_XpsContentElement;
        assert_is_base_of(BaseT_XpsContentElement, T);
        
        AssertObject();
        element->AssertObject();
        _context->Restrict(get_Count() + 1);
        
        if (element->get_Parent() == nullptr && element->_context == _context)
        {
            AddReference<T>(element);
            element->ForcePropertyValueReferencesUpdate(System::MakeSharedPtr(this));
            element->ForceRegisterForPreprocessing();
            
            return element;
        }
        
        T addedElement = System::StaticCast<typename T::Pointee_>(element->Clone(_context != element->_context, _context, System::MakeSharedPtr(this), -1));
        addedElement->ForcePropertyValueReferencesUpdate(System::MakeSharedPtr(this));
        addedElement->ForceRegisterForPreprocessing();
        
        return addedElement;
    }
    
    template <typename T>
    T AddReference(T element)
    {
        typedef XpsContentElement BaseT_XpsContentElement;
        assert_is_base_of(BaseT_XpsContentElement, T);
        
        element->set_Parent(System::MakeSharedPtr(this));
        
        // C# preprocessor directive: #if __cplusplus
        
        element->cpp_set_parent_weak();
        
        // C# preprocessor directive: #endif
        
        _children->Add(element);
        
        return element;
    }
    
    template <typename T>
    T Remove(T element)
    {
        typedef XpsContentElement BaseT_XpsContentElement;
        assert_is_base_of(BaseT_XpsContentElement, T);
        
        AssertObject();
        element->AssertObject();
        
        element->ForcePropertyValueReferencesUpdate(get_Parent(), false);
        element->ForceRegisterForPreprocessing(false);
        RemoveReference<T>(element);
        
        return element;
    }
    
    template <typename T>
    T RemoveReference(T element)
    {
        typedef XpsContentElement BaseT_XpsContentElement;
        assert_is_base_of(BaseT_XpsContentElement, T);
        
        element->set_Parent(nullptr);
        
        // C# preprocessor directive: #if __cplusplus
        
        element->cpp_set_parent_shared();
        
        // C# preprocessor directive: #endif
        
        _children->Remove(element);
        
        return element;
    }
    
    template <typename T>
    T Insert(int32_t index, T element)
    {
        typedef XpsContentElement BaseT_XpsContentElement;
        assert_is_base_of(BaseT_XpsContentElement, T);
        
        AssertObject();
        element->AssertObject();
        _context->Restrict(get_Count() + 1);
        if (index < 0 || index > _children->get_Count())
        {
            throw System::IndexOutOfRangeException(System::String(u"Index out of range: ") + index + u".");
        }
        
        if (element->get_Parent() == nullptr && element->_context == _context)
        {
            InsertReference<T>(index, element);
            element->ForcePropertyValueReferencesUpdate(System::MakeSharedPtr(this));
            element->ForceRegisterForPreprocessing();
            
            return element;
        }
        
        T insertedElement = System::StaticCast<typename T::Pointee_>(element->Clone(_context != element->_context, _context, System::MakeSharedPtr(this), index));
        insertedElement->ForcePropertyValueReferencesUpdate(System::MakeSharedPtr(this));
        insertedElement->ForceRegisterForPreprocessing();
        
        return insertedElement;
    }
    
    template <typename T>
    T InsertReference(int32_t index, T element)
    {
        typedef XpsContentElement BaseT_XpsContentElement;
        assert_is_base_of(BaseT_XpsContentElement, T);
        
        element->set_Parent(System::MakeSharedPtr(this));
        
        // C# preprocessor directive: #if __cplusplus
        
        element->cpp_set_parent_weak();
        
        // C# preprocessor directive: #endif
        
        _children->Insert(index, element);
        
        return element;
    }
    
    System::SharedPtr<XpsContentElement> RemoveAt(int32_t index);
    System::SharedPtr<XpsContentElement> RemoveReferenceAt(int32_t index, System::SharedPtr<XpsContentElement> element);
    /// <summary>
    /// Clones all the children of <paramref name="element"></paramref> and add them to this element.
    /// </summary>
    /// <param name="element">An element whose children are to be cloned.</param>
    /// <param name="deep">Flag indicating if a deep clone must be made.</param>
    void CloneChildren(System::SharedPtr<XpsElement> element, bool deep = true);
    System::SharedPtr<XpsCanvas> CreateCanvas(System::SharedPtr<XpsContext> context);
    System::SharedPtr<XpsPath> CreatePath(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsPathGeometry> data);
    System::SharedPtr<XpsGlyphs> CreateGlyphs(System::SharedPtr<XpsContext> context, System::String fontFamily, float fontRenderingEmSize, System::Drawing::FontStyle fontStyle, float originX, float originY, System::String unicodeString);
    System::SharedPtr<XpsGlyphs> CreateGlyphs(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsFont> font, float fontRenderingEmSize, float originX, float originY, System::String unicodeString);
    System::SharedPtr<XpsMatrix> CreateMatrix(System::SharedPtr<XpsContext> context, float m11, float m12, float m21, float m22, float m31, float m32);
    System::SharedPtr<XpsPathGeometry> CreatePathGeometry(System::SharedPtr<XpsContext> context);
    System::SharedPtr<XpsPathGeometry> CreatePathGeometry(System::SharedPtr<XpsContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsPathFigure>>> pathFigures);
    System::SharedPtr<XpsPathGeometry> CreatePathGeometry(System::SharedPtr<XpsContext> context, System::String abbreviatedGeometry);
    System::SharedPtr<XpsPathFigure> CreatePathFigure(System::SharedPtr<XpsContext> context, System::Drawing::PointF startPoint, bool isClosed = false);
    System::SharedPtr<XpsPathFigure> CreatePathFigure(System::SharedPtr<XpsContext> context, System::Drawing::PointF startPoint, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsPathSegment>>> segments, bool isClosed = false);
    System::SharedPtr<XpsArcSegment> CreateArcSegment(System::SharedPtr<XpsContext> context, System::Drawing::PointF point, System::Drawing::SizeF size, float rotationAngle, bool isLargeArc, XpsSweepDirection sweepDirection, bool isStroked = true);
    System::SharedPtr<XpsPolyLineSegment> CreatePolyLineSegment(System::SharedPtr<XpsContext> context, System::ArrayPtr<System::Drawing::PointF> points, bool isStroked = true);
    System::SharedPtr<XpsPolyBezierSegment> CreatePolyBezierSegment(System::SharedPtr<XpsContext> context, System::ArrayPtr<System::Drawing::PointF> points, bool isStroked = true);
    System::SharedPtr<XpsPolyQuadraticBezierSegment> CreatePolyQuadraticBezierSegment(System::SharedPtr<XpsContext> context, System::ArrayPtr<System::Drawing::PointF> points, bool isStroked = true);
    System::SharedPtr<XpsSolidColorBrush> CreateSolidColorBrush(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsColor> color);
    System::SharedPtr<XpsSolidColorBrush> CreateSolidColorBrush(System::SharedPtr<XpsContext> context, System::Drawing::Color color);
    System::SharedPtr<XpsGradientStop> CreateGradientStop(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsColor> color, float offset);
    System::SharedPtr<XpsGradientStop> CreateGradientStop(System::Drawing::Color color, float offset);
    System::SharedPtr<XpsLinearGradientBrush> CreateLinearGradientBrush(System::SharedPtr<XpsContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> gradientStops, System::Drawing::PointF startPoint, System::Drawing::PointF endPoint);
    System::SharedPtr<XpsLinearGradientBrush> CreateLinearGradientBrush(System::SharedPtr<XpsContext> context, System::Drawing::PointF startPoint, System::Drawing::PointF endPoint);
    System::SharedPtr<XpsRadialGradientBrush> CreateRadialGradientBrush(System::SharedPtr<XpsContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsGradientStop>>> gradientStops, System::Drawing::PointF center, System::Drawing::PointF gradientOrigin, float radiusX, float radiusY);
    System::SharedPtr<XpsRadialGradientBrush> CreateRadialGradientBrush(System::SharedPtr<XpsContext> context, System::Drawing::PointF center, System::Drawing::PointF gradientOrigin, float radiusX, float radiusY);
    System::SharedPtr<XpsVisualBrush> CreateVisualBrush(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsContentElement> element, System::Drawing::RectangleF viewbox, System::Drawing::RectangleF viewport);
    System::SharedPtr<XpsImageBrush> CreateImageBrush(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsImage> image, System::Drawing::RectangleF viewbox, System::Drawing::RectangleF viewport);
    System::SharedPtr<XpsImageBrush> CreateImageBrush(System::SharedPtr<XpsContext> context, System::String imagePath, System::Drawing::RectangleF viewbox, System::Drawing::RectangleF viewport);
    System::SharedPtr<XpsColor> CreateColor(System::Drawing::Color color);
    System::SharedPtr<XpsColor> CreateColor(int32_t a, int32_t r, int32_t g, int32_t b);
    System::SharedPtr<XpsColor> CreateColor(int32_t r, int32_t g, int32_t b);
    System::SharedPtr<XpsColor> CreateColor(float a, float r, float g, float b);
    System::SharedPtr<XpsColor> CreateColor(float r, float g, float b);
    System::SharedPtr<XpsColor> CreateColor(System::SharedPtr<XpsContext> context, System::String path, const System::ArrayPtr<float>& components);
    System::SharedPtr<XpsColor> CreateColor(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsIccProfile> iccProfile, const System::ArrayPtr<float>& components);
    System::SharedPtr<XpsImage> CreateImage(System::SharedPtr<XpsContext> context, System::String imagePath);
    System::SharedPtr<XpsImage> CreateImage(System::SharedPtr<XpsContext> context, System::SharedPtr<System::IO::Stream> stream);
    System::SharedPtr<XpsIccProfile> CreateIccProfile(System::SharedPtr<XpsContext> context, System::String iccProfilePath);
    System::SharedPtr<XpsIccProfile> CreateIccProfile(System::SharedPtr<XpsContext> context, System::SharedPtr<System::IO::Stream> stream);
    System::SharedPtr<XpsFont> CreateFont(System::SharedPtr<XpsContext> context, System::String fontFamily, System::Drawing::FontStyle fontStyle);
    System::SharedPtr<XpsFont> CreateFont(System::SharedPtr<XpsContext> context, System::SharedPtr<System::IO::Stream> stream);
    virtual System::SharedPtr<XpsElement> Clone(bool deep, System::SharedPtr<XpsContext> context, System::SharedPtr<XpsElement> parent, int32_t index) = 0;
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsObject> Clone(bool deep, System::SharedPtr<XpsContext> context) override;
    void Accept(System::SharedPtr<XpsTreeVisitor> visitor, System::SharedPtr<System::Xml::XmlElement> element);
    ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor) override;
    ASPOSE_PAGE_SHARED_API void AcceptProperties(System::SharedPtr<XpsDocumentVisitor> visitor) override;
    ASPOSE_PAGE_SHARED_API void Dispose() override;
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsElement();
    
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsContentElement>>> _children;
    System::SharedPtr<XpsElement> pr_Parent;
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


