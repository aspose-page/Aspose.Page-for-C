#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsObject.h"
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
class NativeConverter;
class NativePathBuilder;
class XpsPresenter;
} // namespace Presentation
class XpsDocumentVisitor;
namespace XpsModel
{
template <typename> class XpsArray;
class XpsContext;
class XpsElement;
class XpsMatrixInternal;
template <typename> class XpsProperty;
class XpsPropertyValueManager;
class XpsResourceDictionary;
} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Drawing
{
namespace Drawing2D
{
class Matrix;
enum class MatrixOrder;
} // namespace Drawing2D
class PointF;
class RectangleF;
} // namespace Drawing
namespace Xml
{
class XmlElement;
class XmlNode;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsModel {

/// <summary>
/// Class incapsulating MatrixTransform property element features.
/// This element defines an arbitrary affine matrix transformation used to manipulate the coordinate
/// systems of elements.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsMatrix final : public Aspose::Page::XPS::XpsModel::XpsObject
{
    typedef XpsMatrix ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsObject BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::NativeConverter;
    friend class Aspose::Page::XPS::Presentation::NativePathBuilder;
    friend class Aspose::Page::XPS::Presentation::XpsPresenter;
    friend class Aspose::Page::XPS::Presentation::Aps::ApsConverter;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsArray;
    friend class Aspose::Page::XPS::XpsModel::XpsPropertyValueManager;
    friend class Aspose::Page::XPS::XpsModel::XpsResourceDictionary;
    friend class Aspose::Page::XPS::XpsModel::XpsElement;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsProperty;
    friend ASPOSE_PAGE_SHARED_API bool operator ==(const System::SharedPtr<XpsMatrix>& a, const System::SharedPtr<XpsMatrix>& b);
    friend ASPOSE_PAGE_SHARED_API bool operator !=(const System::SharedPtr<XpsMatrix>& a, const System::SharedPtr<XpsMatrix>& b);
    
public:

    /// <summary>
    /// Gets the M11 element.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_M11();
    /// <summary>
    /// Gets the M12 element.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_M12();
    /// <summary>
    /// Gets the M21 element.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_M21();
    /// <summary>
    /// Gets the M22 element.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_M22();
    /// <summary>
    /// Gets the M31 element.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_M31();
    /// <summary>
    /// Gets the M32 element.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_M32();
    /// <summary>
    /// Gets a value indicating whether this instance is identity matrix.
    /// </summary>
    /// <value>
    /// 	<c>True</c> if this instance is identity matrix; otherwise, <c>false</c>.
    /// </value>
    ASPOSE_PAGE_SHARED_API bool get_IsIdentity();
    
    /// <summary>
    /// Applies the affine transformation represented by this Matrix to a specified part of array of points.
    /// </summary>
    /// <param name="points">The points.</param>
    /// <param name="startIndex">The start index.</param>
    /// <param name="numberOfPoints">The number of points.</param>
    ASPOSE_PAGE_SHARED_API void TransformPoints(System::ArrayPtr<System::Drawing::PointF> points, int32_t startIndex, int32_t numberOfPoints);
    /// <summary>
    /// Applies the affine transformation represented by this Matrix to a specified point.
    /// </summary>
    /// <param name="point">The point.</param>
    /// <returns>Transformed point</returns>
    ASPOSE_PAGE_SHARED_API System::Drawing::PointF TransformPoint(System::Drawing::PointF point);
    /// <summary>
    /// Applies the affine transformation represented by this Matrix to a specified array of points.
    /// </summary>
    /// <param name="points">The points.</param>
    ASPOSE_PAGE_SHARED_API void TransformPoints(System::ArrayPtr<System::Drawing::PointF> points);
    /// <summary>
    /// Applies the affine transformation represented by this Matrix to a specified rectangle.
    /// </summary>
    /// <param name="rect">The rectangle.</param>
    /// <returns>Transformed rectangle</returns>
    ASPOSE_PAGE_SHARED_API System::Drawing::RectangleF Transform(System::Drawing::RectangleF rect);
    /// <summary>
    /// Applies the specified scale vector (scaleX and scaleY) to this Matrix in order
    /// specified by <paramref name="matrixOrder"></paramref>.
    /// </summary>
    /// <param name="scaleX">The scale X.</param>
    /// <param name="scaleY">The scale Y.</param>
    /// <param name="matrixOrder">The order.</param>
    ASPOSE_PAGE_SHARED_API void Scale(float scaleX, float scaleY, System::Drawing::Drawing2D::MatrixOrder matrixOrder);
    /// <summary>
    /// Applies the specified scale vector (scaleX and scaleY) to this Matrix in default (Prepend) order.
    /// </summary>
    /// <param name="scaleX">The scale x.</param>
    /// <param name="scaleY">The scale y.</param>
    ASPOSE_PAGE_SHARED_API void Scale(float scaleX, float scaleY);
    /// <summary>
    /// Applies the specified translation vector to this Matrix in order specified by <paramref name="matrixOrder"></paramref>.
    /// </summary>
    /// <param name="offsetX">The offset X.</param>
    /// <param name="offsetY">The offset Y.</param>
    /// <param name="matrixOrder">The order.</param>
    ASPOSE_PAGE_SHARED_API void Translate(float offsetX, float offsetY, System::Drawing::Drawing2D::MatrixOrder matrixOrder);
    /// <summary>
    /// Applies the specified translation vector to this Matrix.
    /// </summary>
    /// <param name="offsetX">The offset X.</param>
    /// <param name="offsetY">The offset Y.</param>
    ASPOSE_PAGE_SHARED_API void Translate(float offsetX, float offsetY);
    /// <summary>
    /// Multiplies this matrix by the matrix specified by the <paramref name="matrix"></paramref>
    /// in order specified by <paramref name="matrixOrder"></paramref>.
    /// </summary>
    /// <param name="matrix">The matrix.</param>
    /// <param name="matrixOrder">The order.</param>
    ASPOSE_PAGE_SHARED_API void Multiply(System::SharedPtr<System::Drawing::Drawing2D::Matrix> matrix, System::Drawing::Drawing2D::MatrixOrder matrixOrder);
    /// <summary>
    /// Multiplies this matrix by the matrix specified by the <paramref name="matrix"></paramref>
    /// in default (Prepend) order.
    /// </summary>
    /// <param name="matrix">The matrix.</param>
    ASPOSE_PAGE_SHARED_API void Multiply(System::SharedPtr<System::Drawing::Drawing2D::Matrix> matrix);
    /// <summary>
    /// Multiplies this matrix by the matrix specified by the <paramref name="matrix"></paramref>
    /// in order specified by <paramref name="matrixOrder"></paramref>.
    /// </summary>
    /// <param name="matrix">The matrix.</param>
    /// <param name="matrixOrder">The order.</param>
    ASPOSE_PAGE_SHARED_API void Multiply(System::SharedPtr<XpsMatrix> matrix, System::Drawing::Drawing2D::MatrixOrder matrixOrder);
    /// <summary>
    /// Multiplies this matrix by the matrix specified by the <paramref name="matrix"></paramref>
    /// in default (Prepend) order.
    /// </summary>
    /// <param name="matrix">The matrix.</param>
    ASPOSE_PAGE_SHARED_API void Multiply(System::SharedPtr<XpsMatrix> matrix);
    /// <summary>
    ///  Applies specified skew transformation to this Matrix.
    /// </summary>
    /// <param name="skewX">The skew x.</param>
    /// <param name="skewY">The skew y.</param>
    ASPOSE_PAGE_SHARED_API void Skew(double skewX, double skewY);
    /// <summary>
    /// Applies clockwise rotation by <paramref name="angle"></paramref> to this Matrix in order
    /// specified by <paramref name="matrixOrder"></paramref>.
    /// </summary>
    /// <param name="angle">The angle.</param>
    /// <param name="matrixOrder">The order.</param>
    ASPOSE_PAGE_SHARED_API void Rotate(float angle, System::Drawing::Drawing2D::MatrixOrder matrixOrder);
    /// <summary>
    /// Applies clockwise rotation by <paramref name="angle"></paramref> to this Matrix in default (Prepend) order.
    /// </summary>
    /// <param name="angle">The angle.</param>
    ASPOSE_PAGE_SHARED_API void Rotate(float angle);
    /// <summary>
    /// Applies clockwise rotation by <paramref name="angle"></paramref> around the <paramref name="pivot"></paramref>
    /// to this Matrix in order specified by <paramref name="matrixOrder"></paramref>.
    /// </summary>
    /// <param name="angle">The angle.</param>
    /// <param name="pivot">The pivot point.</param>
    /// <param name="matrixOrder">The order.</param>
    ASPOSE_PAGE_SHARED_API void RotateAround(float angle, System::Drawing::PointF pivot, System::Drawing::Drawing2D::MatrixOrder matrixOrder);
    /// <summary>
    /// Applies clockwise rotation by <paramref name="angle"></paramref> around the <paramref name="pivot"></paramref>
    /// to this Matrix in default (Prepend) order.
    /// </summary>
    /// <param name="angle">The angle.</param>
    /// <param name="pivot">The pivot point.</param>
    ASPOSE_PAGE_SHARED_API void RotateAround(float angle, System::Drawing::PointF pivot);
    /// <summary>
    /// Resets this Matrix to identity matrix.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void Reset();
    /// <summary>
    /// Returns a hash code for this instance.
    /// </summary>
    /// <returns>
    /// A hash code for this instance, suitable for use in hashing algorithms and data structures like a hash table. 
    /// </returns>
    ASPOSE_PAGE_SHARED_API int32_t GetHashCode() const override;
    /// <summary>
    /// Determines whether the specified <see cref="System::Object"></see> is equal to this instance.
    /// </summary>
    /// <param name="obj">The <see cref="System::Object"></see> to compare with this instance.</param>
    /// <returns>
    ///   <c>true</c> if the specified <see cref="System::Object"></see> is equal to this instance; otherwise, <c>false</c>.
    /// </returns>
    ASPOSE_PAGE_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// The actual implementation.
    /// </summary>
    /// <param name="a">The first matrix.</param>
    /// <param name="b">The second matrix.</param>
    /// <returns>[true] if martrix are equals</returns>
    static ASPOSE_PAGE_SHARED_API bool Equals(System::SharedPtr<XpsMatrix> a, System::SharedPtr<XpsMatrix> b);
    /// <summary>
    /// Clones this transformation matrix.
    /// </summary>
    /// <returns>Clone of this transformation matrix.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsMatrix> Clone();
    /// <summary>
    /// Returns the string representation of this <see cref="XpsMatrix"></see> instance.
    /// </summary>
    /// <returns>String representation</returns>
    ASPOSE_PAGE_SHARED_API System::String ToString() const override;
    
protected:

    static int32_t IdentityHash;
    
    System::SharedPtr<XpsMatrixInternal> get_Matrix() const;
    
    XpsMatrix(System::SharedPtr<System::Xml::XmlNode> matrixNode, System::SharedPtr<XpsContext> context);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsMatrix, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlNode> matrixNode, System::SharedPtr<XpsContext> context));
    
    XpsMatrix(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsMatrixInternal> matrix);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsMatrix, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsMatrixInternal> matrix));
    
    XpsMatrix(System::SharedPtr<XpsContext> context, float M11, float M12, float M21, float M22, float M31, float M32);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsMatrix, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, float M11, float M12, float M21, float M22, float M31, float M32));
    static System::SharedPtr<XpsMatrixInternal> XmlNodeToDrMatrix(System::SharedPtr<System::Xml::XmlElement> element);
    static System::SharedPtr<XpsMatrixInternal> XmlNodeToDrMatrix(System::SharedPtr<System::Xml::XmlNode> node, System::SharedPtr<XpsContext> context);
    ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element) override;
    ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor) override;
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsObject> Clone(bool deep, System::SharedPtr<XpsContext> context) override;
    ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsObject> obj) override;
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsMatrix();
    
private:

    System::SharedPtr<XpsMatrixInternal> _matrix;
    
    System::String ToString_NonConst();
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

ASPOSE_PAGE_SHARED_API bool operator ==(const System::SharedPtr<XpsMatrix>& a, const System::SharedPtr<XpsMatrix>& b);
ASPOSE_PAGE_SHARED_API bool operator !=(const System::SharedPtr<XpsMatrix>& a, const System::SharedPtr<XpsMatrix>& b);

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


