#pragma once

#include <xml/xml_node.h>
#include <drawing/drawing2d/matrix_order.h>
#include <drawing/drawing2d/matrix.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsElement.h"

namespace Aspose { namespace Page { namespace Xps { namespace Presentation { class NativeConverter; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { class NativePathBuilder; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { class XpsPresenter; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Aps { class ApsConverter; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsTransformableBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsCanvas; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPropertyValueManager; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsResourceDictionary; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsGlyphs; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPath; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { template<typename> class XpsProperty; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsMatrixInternal; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsDocumentVisitor; } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// Class incapsulating MatrixTransform property element features.
/// This element defines an arbitrary affine matrix transformation used to manipulate the coordinate
/// systems of elements.
/// </summary>
class XpsMatrix FINAL : public Aspose::Page::Xps::XpsModel::XpsElement
{
    typedef XpsMatrix ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::Presentation::NativeConverter;
    friend class Aspose::Page::Xps::Presentation::NativePathBuilder;
    friend class Aspose::Page::Xps::Presentation::XpsPresenter;
    friend class Aspose::Page::Xps::Presentation::Aps::ApsConverter;
    friend class Aspose::Page::Xps::XpsModel::XpsElement;
    friend class Aspose::Page::Xps::XpsModel::XpsTransformableBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsCanvas;
    friend class Aspose::Page::Xps::XpsModel::XpsPropertyValueManager;
    friend class Aspose::Page::Xps::XpsModel::XpsResourceDictionary;
    friend class Aspose::Page::Xps::XpsModel::XpsGlyphs;
    friend class Aspose::Page::Xps::XpsModel::XpsPath;
    template<typename FT0> friend class Aspose::Page::Xps::XpsModel::XpsProperty;
    friend ASPOSE_PAGE_SHARED_API bool operator ==(System::SharedPtr<XpsMatrix> const &a, System::SharedPtr<XpsMatrix> const &b);
    friend ASPOSE_PAGE_SHARED_API bool operator !=(System::SharedPtr<XpsMatrix> const &a, System::SharedPtr<XpsMatrix> const &b);
    
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
    /// specified by <paramref name="matrixOrder"/>.
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
    /// Applies the specified translation vector to this Matrix in order specified by <paramref name="matrixOrder"/>.
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
    /// Multiplies this matrix by the matrix specified by the <paramref name="matrix"/>
    /// in order specified by <paramref name="matrixOrder"/>.
    /// </summary>
    /// <param name="matrix">The matrix.</param>
    /// <param name="matrixOrder">The order.</param>
    ASPOSE_PAGE_SHARED_API void Multiply(System::SharedPtr<System::Drawing::Drawing2D::Matrix> matrix, System::Drawing::Drawing2D::MatrixOrder matrixOrder);
    /// <summary>
    /// Multiplies this matrix by the matrix specified by the <paramref name="matrix"/>
    /// in default (Prepend) order.
    /// </summary>
    /// <param name="matrix">The matrix.</param>
    ASPOSE_PAGE_SHARED_API void Multiply(System::SharedPtr<System::Drawing::Drawing2D::Matrix> matrix);
    /// <summary>
    /// Multiplies this matrix by the matrix specified by the <paramref name="matrix"/>
    /// in order specified by <paramref name="matrixOrder"/>.
    /// </summary>
    /// <param name="matrix">The matrix.</param>
    /// <param name="matrixOrder">The order.</param>
    ASPOSE_PAGE_SHARED_API void Multiply(System::SharedPtr<XpsMatrix> matrix, System::Drawing::Drawing2D::MatrixOrder matrixOrder);
    /// <summary>
    /// Multiplies this matrix by the matrix specified by the <paramref name="matrix"/>
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
    /// Applies clockwise rotation by <paramref name="angle"/> to this Matrix in order
    /// specified by <paramref name="matrixOrder"/>.
    /// </summary>
    /// <param name="angle">The angle.</param>
    /// <param name="matrixOrder">The order.</param>
    ASPOSE_PAGE_SHARED_API void Rotate(float angle, System::Drawing::Drawing2D::MatrixOrder matrixOrder);
    /// <summary>
    /// Applies clockwise rotation by <paramref name="angle"/> to this Matrix in default (Prepend) order.
    /// </summary>
    /// <param name="angle">The angle.</param>
    ASPOSE_PAGE_SHARED_API void Rotate(float angle);
    /// <summary>
    /// Applies clockwise rotation by <paramref name="angle"/> around the <paramref name="pivot"/>
    /// to this Matrix in order specified by <paramref name="matrixOrder"/>.
    /// </summary>
    /// <param name="angle">The angle.</param>
    /// <param name="pivot">The pivot point.</param>
    /// <param name="matrixOrder">The order.</param>
    ASPOSE_PAGE_SHARED_API void RotateAround(float angle, System::Drawing::PointF pivot, System::Drawing::Drawing2D::MatrixOrder matrixOrder);
    /// <summary>
    /// Applies clockwise rotation by <paramref name="angle"/> around the <paramref name="pivot"/>
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
    virtual ASPOSE_PAGE_SHARED_API int32_t GetHashCode() const;
    /// <summary>
    /// Determines whether the specified <see cref="object"/> is equal to this instance.
    /// </summary>
    /// <param name="obj">The <see cref="object"/> to compare with this instance.</param>
    /// <returns>
    ///   <c>true</c> if the specified <see cref="object"/> is equal to this instance; otherwise, <c>false</c>.
    /// </returns>
    virtual ASPOSE_PAGE_SHARED_API bool Equals(System::SharedPtr<System::Object> obj);
    /// <summary>
    /// The actual implementation.
    /// </summary>
    /// <param name="a">The first matrix.</param>
    /// <param name="b">The second matrix.</param>
    /// <returns>[true] if martrix are equals</returns>
    static ASPOSE_PAGE_SHARED_API bool Equals(System::SharedPtr<XpsMatrix> a, System::SharedPtr<XpsMatrix> b);
    /// <summary>
    /// Returns the string representation of this <see cref="XpsMatrix"/> instance.
    /// </summary>
    /// <returns>String representation</returns>
    virtual ASPOSE_PAGE_SHARED_API System::String ToString();
    /// <summary>
    /// Clones this transformation matrix.
    /// </summary>
    /// <returns>Clone of this transformation matrix.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsMatrix> Clone();
    
protected:

    System::SharedPtr<XpsMatrixInternal> get_Matrix();
    
    XpsMatrix(System::SharedPtr<System::Xml::XmlNode> matrixNode, System::SharedPtr<XpsContext> context);
    XpsMatrix(System::SharedPtr<System::Xml::XmlElement> matrixElement, System::SharedPtr<XpsContext> context);
    XpsMatrix(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsMatrixInternal> matrix);
    XpsMatrix(System::SharedPtr<XpsContext> context, float M11, float M12, float M21, float M22, float M31, float M32);
    
    static System::SharedPtr<XpsMatrixInternal> XmlNodeToDrMatrix(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context);
    static System::SharedPtr<XpsMatrixInternal> XmlNodeToDrMatrix(System::SharedPtr<System::Xml::XmlNode> node, System::SharedPtr<XpsContext> context);
    virtual ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor);
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsElement> Clone(bool deep, System::SharedPtr<XpsContext> context, System::SharedPtr<XpsElement> parent, int32_t index);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<XpsMatrixInternal> _matrix;
    
};

ASPOSE_PAGE_SHARED_API bool operator ==(System::SharedPtr<XpsMatrix> const &a, System::SharedPtr<XpsMatrix> const &b);
ASPOSE_PAGE_SHARED_API bool operator !=(System::SharedPtr<XpsMatrix> const &a, System::SharedPtr<XpsMatrix> const &b);

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


