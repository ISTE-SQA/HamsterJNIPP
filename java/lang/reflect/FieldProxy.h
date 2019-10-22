#ifndef __java_lang_reflect_FieldProxy_H
#define __java_lang_reflect_FieldProxy_H


#include <jni.h>
#include <string>

#include "net/sourceforge/jnipp/JBooleanArrayHelper.h"
#include "net/sourceforge/jnipp/JByteArrayHelper.h"
#include "net/sourceforge/jnipp/JCharArrayHelper.h"
#include "net/sourceforge/jnipp/JDoubleArrayHelper.h"
#include "net/sourceforge/jnipp/JFloatArrayHelper.h"
#include "net/sourceforge/jnipp/JIntArrayHelper.h"
#include "net/sourceforge/jnipp/JLongArrayHelper.h"
#include "net/sourceforge/jnipp/JShortArrayHelper.h"
#include "net/sourceforge/jnipp/JStringHelper.h"
#include "net/sourceforge/jnipp/JStringHelperArray.h"
#include "net/sourceforge/jnipp/ProxyArray.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxyForward.h"
#include "java\lang\ClassProxyForward.h"
#include "java\lang\annotation\AnnotationProxyForward.h"
#include "java\lang\reflect\AnnotatedTypeProxyForward.h"
#include "java\lang\reflect\TypeProxyForward.h"
#include "sun\reflect\FieldAccessorProxyForward.h"
#include "java\util\MapProxyForward.h"
#include "sun\reflect\generics\repository\FieldRepositoryProxyForward.h"
#include "java\lang\annotation\AnnotationProxy.h"

namespace java
{
	namespace lang
	{
		namespace reflect
		{
			class FieldProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				FieldProxy(void* unused);
				virtual jobject _getPeerObject() const;

			public:
				static jclass _getObjectClass();
				static inline std::string _getClassName()
				{
					return className;
				}

				jclass getObjectClass();
				operator jobject();
				// constructors
				FieldProxy(jobject obj);

				virtual ~FieldProxy();
				FieldProxy& operator=(const FieldProxy& rhs);

				// methods
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * boolean getBoolean(Object);
				 */
				jboolean getBoolean(::java::lang::ObjectProxy p0);
				/*
				 * boolean isEnumConstant();
				 */
				jboolean isEnumConstant();
				/*
				 * boolean isSynthetic();
				 */
				jboolean isSynthetic();
				/*
				 * byte getByte(Object);
				 */
				jbyte getByte(::java::lang::ObjectProxy p0);
				/*
				 * char getChar(Object);
				 */
				jchar getChar(::java::lang::ObjectProxy p0);
				/*
				 * double getDouble(Object);
				 */
				jdouble getDouble(::java::lang::ObjectProxy p0);
				/*
				 * float getFloat(Object);
				 */
				jfloat getFloat(::java::lang::ObjectProxy p0);
				/*
				 * int getInt(Object);
				 */
				jint getInt(::java::lang::ObjectProxy p0);
				/*
				 * int getModifiers();
				 */
				jint getModifiers();
				/*
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * Class getDeclaringClass();
				 */
				::java::lang::ClassProxy getDeclaringClass();
				/*
				 * Class getType();
				 */
				::java::lang::ClassProxy getType();
				/*
				 * Object get(Object);
				 */
				::java::lang::ObjectProxy get(::java::lang::ObjectProxy p0);
				/*
				 * String getName();
				 */
				::net::sourceforge::jnipp::JStringHelper getName();
				/*
				 * String toGenericString();
				 */
				::net::sourceforge::jnipp::JStringHelper toGenericString();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * Annotation getAnnotation(Class);
				 */
				::java::lang::annotation::AnnotationProxy getAnnotation(::java::lang::ClassProxy p0);
				/*
				 * Annotation[] getAnnotationsByType(Class);
				 */
				::net::sourceforge::jnipp::PA<::java::lang::annotation::AnnotationProxy>::ProxyArray<1> getAnnotationsByType(::java::lang::ClassProxy p0);
				/*
				 * Annotation[] getDeclaredAnnotations();
				 */
				::net::sourceforge::jnipp::PA<::java::lang::annotation::AnnotationProxy>::ProxyArray<1> getDeclaredAnnotations();
				/*
				 * AnnotatedType getAnnotatedType();
				 */
				::java::lang::reflect::AnnotatedTypeProxy getAnnotatedType();
				/*
				 * Type getGenericType();
				 */
				::java::lang::reflect::TypeProxy getGenericType();
				/*
				 * long getLong(Object);
				 */
				jlong getLong(::java::lang::ObjectProxy p0);
				/*
				 * short getShort(Object);
				 */
				jshort getShort(::java::lang::ObjectProxy p0);
				/*
				 * void set(Object, Object);
				 */
				void set(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1);
				/*
				 * void setBoolean(Object, boolean);
				 */
				void setBoolean(::java::lang::ObjectProxy p0, jboolean p1);
				/*
				 * void setByte(Object, byte);
				 */
				void setByte(::java::lang::ObjectProxy p0, jbyte p1);
				/*
				 * void setChar(Object, char);
				 */
				void setChar(::java::lang::ObjectProxy p0, jchar p1);
				/*
				 * void setDouble(Object, double);
				 */
				void setDouble(::java::lang::ObjectProxy p0, jdouble p1);
				/*
				 * void setFloat(Object, float);
				 */
				void setFloat(::java::lang::ObjectProxy p0, jfloat p1);
				/*
				 * void setInt(Object, int);
				 */
				void setInt(::java::lang::ObjectProxy p0, jint p1);
				/*
				 * void setLong(Object, long);
				 */
				void setLong(::java::lang::ObjectProxy p0, jlong p1);
				/*
				 * void setShort(Object, short);
				 */
				void setShort(::java::lang::ObjectProxy p0, jshort p1);

			};
		}
	}
}


#endif
