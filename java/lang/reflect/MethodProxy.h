#ifndef __java_lang_reflect_MethodProxy_H
#define __java_lang_reflect_MethodProxy_H


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
#include "sun\reflect\generics\repository\MethodRepositoryProxyForward.h"
#include "sun\reflect\MethodAccessorProxyForward.h"
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
			class MethodProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				MethodProxy(void* unused);
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
				MethodProxy(jobject obj);

				virtual ~MethodProxy();
				MethodProxy& operator=(const MethodProxy& rhs);

				// methods
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * boolean isBridge();
				 */
				jboolean isBridge();
				/*
				 * boolean isDefault();
				 */
				jboolean isDefault();
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
				 * Class getReturnType();
				 */
				::java::lang::ClassProxy getReturnType();
				/*
				 * Class[] getExceptionTypes();
				 */
				::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> getExceptionTypes();
				/*
				 * Class[] getParameterTypes();
				 */
				::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> getParameterTypes();
				/*
				 * Object getDefaultValue();
				 */
				::java::lang::ObjectProxy getDefaultValue();
				/*
				 * Object invoke(Object, Object[]);
				 */
				::java::lang::ObjectProxy invoke(::java::lang::ObjectProxy p0, ::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p1);
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
				 * AnnotatedType getAnnotatedReturnType();
				 */
				::java::lang::reflect::AnnotatedTypeProxy getAnnotatedReturnType();
				/*
				 * Type getGenericReturnType();
				 */
				::java::lang::reflect::TypeProxy getGenericReturnType();
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
