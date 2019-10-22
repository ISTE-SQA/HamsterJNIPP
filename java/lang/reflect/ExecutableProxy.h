#ifndef __java_lang_reflect_ExecutableProxy_H
#define __java_lang_reflect_ExecutableProxy_H


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
#include "java\lang\ClassProxyForward.h"
#include "java\lang\reflect\AnnotatedTypeProxyForward.h"
#include "java\util\MapProxyForward.h"
#include "java\lang\ClassProxy.h"
#include "java\lang\annotation\AnnotationProxy.h"
#include "java\lang\reflect\TypeVariableProxy.h"
#include "java\lang\annotation\AnnotationProxy.h"
#include "java\lang\reflect\AnnotatedTypeProxy.h"
#include "java\lang\reflect\ParameterProxy.h"
#include "java\lang\reflect\TypeProxy.h"

namespace java
{
	namespace lang
	{
		namespace reflect
		{
			class ExecutableProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ExecutableProxy(void* unused);
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
				ExecutableProxy(jobject obj);

				virtual ~ExecutableProxy();
				ExecutableProxy& operator=(const ExecutableProxy& rhs);

				// methods
				/*
				 * int getModifiers();
				 */
				jint getModifiers();
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
				 * String getName();
				 */
				::net::sourceforge::jnipp::JStringHelper getName();
				/*
				 * String toGenericString();
				 */
				::net::sourceforge::jnipp::JStringHelper toGenericString();
				/*
				 * Annotation[][] getParameterAnnotations();
				 */
				::net::sourceforge::jnipp::PA<::java::lang::annotation::AnnotationProxy>::ProxyArray<2> getParameterAnnotations();
				/*
				 * AnnotatedType getAnnotatedReturnType();
				 */
				::java::lang::reflect::AnnotatedTypeProxy getAnnotatedReturnType();
				/*
				 * TypeVariable[] getTypeParameters();
				 */
				::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeVariableProxy>::ProxyArray<1> getTypeParameters();
				/*
				 * boolean isSynthetic();
				 */
				jboolean isSynthetic();
				/*
				 * boolean isVarArgs();
				 */
				jboolean isVarArgs();
				/*
				 * int getParameterCount();
				 */
				jint getParameterCount();
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
				 * AnnotatedType getAnnotatedReceiverType();
				 */
				::java::lang::reflect::AnnotatedTypeProxy getAnnotatedReceiverType();
				/*
				 * AnnotatedType[] getAnnotatedExceptionTypes();
				 */
				::net::sourceforge::jnipp::PA<::java::lang::reflect::AnnotatedTypeProxy>::ProxyArray<1> getAnnotatedExceptionTypes();
				/*
				 * AnnotatedType[] getAnnotatedParameterTypes();
				 */
				::net::sourceforge::jnipp::PA<::java::lang::reflect::AnnotatedTypeProxy>::ProxyArray<1> getAnnotatedParameterTypes();
				/*
				 * Parameter[] getParameters();
				 */
				::net::sourceforge::jnipp::PA<::java::lang::reflect::ParameterProxy>::ProxyArray<1> getParameters();
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
