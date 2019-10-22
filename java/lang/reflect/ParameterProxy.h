#ifndef __java_lang_reflect_ParameterProxy_H
#define __java_lang_reflect_ParameterProxy_H


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
#include "java\lang\reflect\ExecutableProxyForward.h"
#include "java\lang\reflect\TypeProxyForward.h"
#include "java\util\MapProxyForward.h"
#include "java\lang\annotation\AnnotationProxy.h"

namespace java
{
	namespace lang
	{
		namespace reflect
		{
			class ParameterProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ParameterProxy(void* unused);
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
				ParameterProxy(jobject obj);

				virtual ~ParameterProxy();
				ParameterProxy& operator=(const ParameterProxy& rhs);

				// methods
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * boolean isImplicit();
				 */
				jboolean isImplicit();
				/*
				 * boolean isNamePresent();
				 */
				jboolean isNamePresent();
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
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * Class getType();
				 */
				::java::lang::ClassProxy getType();
				/*
				 * String getName();
				 */
				::net::sourceforge::jnipp::JStringHelper getName();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * Annotation getAnnotation(Class);
				 */
				::java::lang::annotation::AnnotationProxy getAnnotation(::java::lang::ClassProxy p0);
				/*
				 * Annotation getDeclaredAnnotation(Class);
				 */
				::java::lang::annotation::AnnotationProxy getDeclaredAnnotation(::java::lang::ClassProxy p0);
				/*
				 * Annotation[] getAnnotations();
				 */
				::net::sourceforge::jnipp::PA<::java::lang::annotation::AnnotationProxy>::ProxyArray<1> getAnnotations();
				/*
				 * Annotation[] getAnnotationsByType(Class);
				 */
				::net::sourceforge::jnipp::PA<::java::lang::annotation::AnnotationProxy>::ProxyArray<1> getAnnotationsByType(::java::lang::ClassProxy p0);
				/*
				 * Annotation[] getDeclaredAnnotations();
				 */
				::net::sourceforge::jnipp::PA<::java::lang::annotation::AnnotationProxy>::ProxyArray<1> getDeclaredAnnotations();
				/*
				 * Annotation[] getDeclaredAnnotationsByType(Class);
				 */
				::net::sourceforge::jnipp::PA<::java::lang::annotation::AnnotationProxy>::ProxyArray<1> getDeclaredAnnotationsByType(::java::lang::ClassProxy p0);
				/*
				 * AnnotatedType getAnnotatedType();
				 */
				::java::lang::reflect::AnnotatedTypeProxy getAnnotatedType();
				/*
				 * Executable getDeclaringExecutable();
				 */
				::java::lang::reflect::ExecutableProxy getDeclaringExecutable();
				/*
				 * Type getParameterizedType();
				 */
				::java::lang::reflect::TypeProxy getParameterizedType();

			};
		}
	}
}


#endif
