#ifndef __java_lang_reflect_ConstructorProxy_H
#define __java_lang_reflect_ConstructorProxy_H


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
#include "sun\reflect\generics\repository\ConstructorRepositoryProxyForward.h"
#include "sun\reflect\ConstructorAccessorProxyForward.h"
#include "java\lang\ClassProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\lang\annotation\AnnotationProxy.h"
#include "java\lang\annotation\AnnotationProxy.h"
#include "java\lang\reflect\TypeVariableProxy.h"
#include "java\lang\reflect\TypeProxy.h"

namespace java
{
	namespace lang
	{
		namespace reflect
		{
			class ConstructorProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ConstructorProxy(void* unused);
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
				ConstructorProxy(jobject obj);

				virtual ~ConstructorProxy();
				ConstructorProxy& operator=(const ConstructorProxy& rhs);

				// methods
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * boolean isSynthetic();
				 */
				jboolean isSynthetic();
				/*
				 * boolean isVarArgs();
				 */
				jboolean isVarArgs();
				/*
				 * int getModifiers();
				 */
				jint getModifiers();
				/*
				 * int getParameterCount();
				 */
				jint getParameterCount();
				/*
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * Class getDeclaringClass();
				 */
				::java::lang::ClassProxy getDeclaringClass();
				/*
				 * Class[] getExceptionTypes();
				 */
				::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> getExceptionTypes();
				/*
				 * Class[] getParameterTypes();
				 */
				::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> getParameterTypes();
				/*
				 * Object newInstance(Object[]);
				 */
				::java::lang::ObjectProxy newInstance(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0);
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
				 * Annotation[] getDeclaredAnnotations();
				 */
				::net::sourceforge::jnipp::PA<::java::lang::annotation::AnnotationProxy>::ProxyArray<1> getDeclaredAnnotations();
				/*
				 * Annotation[][] getParameterAnnotations();
				 */
				::net::sourceforge::jnipp::PA<::java::lang::annotation::AnnotationProxy>::ProxyArray<2> getParameterAnnotations();
				/*
				 * AnnotatedType getAnnotatedReceiverType();
				 */
				::java::lang::reflect::AnnotatedTypeProxy getAnnotatedReceiverType();
				/*
				 * AnnotatedType getAnnotatedReturnType();
				 */
				::java::lang::reflect::AnnotatedTypeProxy getAnnotatedReturnType();
				/*
				 * TypeVariable[] getTypeParameters();
				 */
				::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeVariableProxy>::ProxyArray<1> getTypeParameters();
				/*
				 * Type[] getGenericExceptionTypes();
				 */
				::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1> getGenericExceptionTypes();
				/*
				 * Type[] getGenericParameterTypes();
				 */
				::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1> getGenericParameterTypes();

			};
		}
	}
}


#endif
