#ifndef __java_lang_invoke_MemberNameProxy_H
#define __java_lang_invoke_MemberNameProxy_H


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
#include "java\lang\ObjectProxyForward.h"
#include "java\lang\invoke\MethodTypeProxyForward.h"
#include "java\lang\reflect\ConstructorProxyForward.h"
#include "java\lang\reflect\FieldProxyForward.h"
#include "java\lang\reflect\MethodProxyForward.h"
#include "java\lang\ClassLoaderProxyForward.h"
#include "java\lang\IllegalAccessExceptionProxyForward.h"
#include "java\lang\ReflectiveOperationExceptionProxyForward.h"
#include "java\lang\ClassProxy.h"

namespace java
{
	namespace lang
	{
		namespace invoke
		{
			class MemberNameProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				MemberNameProxy(void* unused);
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
				MemberNameProxy(jobject obj);
				MemberNameProxy(jbyte p0, ::java::lang::ClassProxy p1, ::net::sourceforge::jnipp::JStringHelper p2, ::java::lang::ObjectProxy p3);
				MemberNameProxy(::java::lang::ClassProxy p0);
				MemberNameProxy(::java::lang::ClassProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::java::lang::ClassProxy p2, jbyte p3);
				MemberNameProxy(::java::lang::ClassProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::java::lang::invoke::MethodTypeProxy p2, jbyte p3);
				MemberNameProxy(::java::lang::reflect::ConstructorProxy p0);
				MemberNameProxy(::java::lang::reflect::FieldProxy p0);
				MemberNameProxy(::java::lang::reflect::FieldProxy p0, jboolean p1);
				MemberNameProxy(::java::lang::reflect::MethodProxy p0);
				MemberNameProxy(::java::lang::reflect::MethodProxy p0, jboolean p1);

				virtual ~MemberNameProxy();
				MemberNameProxy& operator=(const MemberNameProxy& rhs);

				// methods
				/*
				 * boolean canBeStaticallyBound();
				 */
				jboolean canBeStaticallyBound();
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * boolean equals(MemberName);
				 */
				jboolean equals(::java::lang::invoke::MemberNameProxy p0);
				/*
				 * boolean hasReceiverTypeDispatch();
				 */
				jboolean hasReceiverTypeDispatch();
				/*
				 * boolean isAbstract();
				 */
				jboolean isAbstract();
				/*
				 * boolean isAccessibleFrom(Class);
				 */
				jboolean isAccessibleFrom(::java::lang::ClassProxy p0);
				/*
				 * boolean isBridge();
				 */
				jboolean isBridge();
				/*
				 * boolean isCallerSensitive();
				 */
				jboolean isCallerSensitive();
				/*
				 * boolean isConstructor();
				 */
				jboolean isConstructor();
				/*
				 * boolean isField();
				 */
				jboolean isField();
				/*
				 * boolean isFieldOrMethod();
				 */
				jboolean isFieldOrMethod();
				/*
				 * boolean isFinal();
				 */
				jboolean isFinal();
				/*
				 * boolean isGetter();
				 */
				jboolean isGetter();
				/*
				 * boolean isInvocable();
				 */
				jboolean isInvocable();
				/*
				 * boolean isMethod();
				 */
				jboolean isMethod();
				/*
				 * boolean isMethodHandleInvoke();
				 */
				jboolean isMethodHandleInvoke();
				/*
				 * boolean isNative();
				 */
				jboolean isNative();
				/*
				 * boolean isPackage();
				 */
				jboolean isPackage();
				/*
				 * boolean isPrivate();
				 */
				jboolean isPrivate();
				/*
				 * boolean isProtected();
				 */
				jboolean isProtected();
				/*
				 * boolean isPublic();
				 */
				jboolean isPublic();
				/*
				 * boolean isResolved();
				 */
				jboolean isResolved();
				/*
				 * boolean isSetter();
				 */
				jboolean isSetter();
				/*
				 * boolean isStatic();
				 */
				jboolean isStatic();
				/*
				 * boolean isSynthetic();
				 */
				jboolean isSynthetic();
				/*
				 * boolean isType();
				 */
				jboolean isType();
				/*
				 * boolean isVarargs();
				 */
				jboolean isVarargs();
				/*
				 * boolean isVolatile();
				 */
				jboolean isVolatile();
				/*
				 * byte getReferenceKind();
				 */
				jbyte getReferenceKind();
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
				 * Class getFieldType();
				 */
				::java::lang::ClassProxy getFieldType();
				/*
				 * Class getReturnType();
				 */
				::java::lang::ClassProxy getReturnType();
				/*
				 * ClassLoader getClassLoader();
				 */
				::java::lang::ClassLoaderProxy getClassLoader();
				/*
				 * Class[] getParameterTypes();
				 */
				::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> getParameterTypes();
				/*
				 * IllegalAccessException makeAccessException(String, Object);
				 */
				::java::lang::IllegalAccessExceptionProxy makeAccessException(::net::sourceforge::jnipp::JStringHelper p0, ::java::lang::ObjectProxy p1);
				/*
				 * Object getType();
				 */
				::java::lang::ObjectProxy getType();
				/*
				 * ReflectiveOperationException makeAccessException();
				 */
				::java::lang::ReflectiveOperationExceptionProxy makeAccessException();
				/*
				 * String getName();
				 */
				::net::sourceforge::jnipp::JStringHelper getName();
				/*
				 * String getSignature();
				 */
				::net::sourceforge::jnipp::JStringHelper getSignature();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * MemberName asConstructor();
				 */
				::java::lang::invoke::MemberNameProxy asConstructor();
				/*
				 * MemberName asNormalOriginal();
				 */
				::java::lang::invoke::MemberNameProxy asNormalOriginal();
				/*
				 * MemberName asSetter();
				 */
				::java::lang::invoke::MemberNameProxy asSetter();
				/*
				 * MemberName asSpecial();
				 */
				::java::lang::invoke::MemberNameProxy asSpecial();
				/*
				 * MemberName getDefinition();
				 */
				::java::lang::invoke::MemberNameProxy getDefinition();
				/*
				 * MethodType getInvocationType();
				 */
				::java::lang::invoke::MethodTypeProxy getInvocationType();
				/*
				 * MethodType getMethodOrFieldType();
				 */
				::java::lang::invoke::MethodTypeProxy getMethodOrFieldType();
				/*
				 * MethodType getMethodType();
				 */
				::java::lang::invoke::MethodTypeProxy getMethodType();
				/*
				 * static boolean isMethodHandleInvokeName(String);
				 */
				static jboolean isMethodHandleInvokeName(::net::sourceforge::jnipp::JStringHelper p0);

			};
		}
	}
}


#endif
