#ifndef __java_lang_invoke_MethodTypeProxy_H
#define __java_lang_invoke_MethodTypeProxy_H


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
#include "java\util\ListProxyForward.h"
#include "java\lang\ClassLoaderProxyForward.h"
#include "java\lang\invoke\InvokersProxyForward.h"
#include "java\lang\invoke\MethodTypeFormProxyForward.h"
#include "java\lang\invoke\MethodType_ConcurrentWeakInternSetProxyForward.h"
#include "java\lang\ClassProxy.h"
#include "java\io\ObjectStreamFieldProxy.h"
#include "java\lang\invoke\MethodTypeProxy.h"

namespace java
{
	namespace lang
	{
		namespace invoke
		{
			class MethodTypeProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				MethodTypeProxy(void* unused);
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
				MethodTypeProxy(jobject obj);

				virtual ~MethodTypeProxy();
				MethodTypeProxy& operator=(const MethodTypeProxy& rhs);

				// methods
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * boolean hasPrimitives();
				 */
				jboolean hasPrimitives();
				/*
				 * boolean hasWrappers();
				 */
				jboolean hasWrappers();
				/*
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * int parameterCount();
				 */
				jint parameterCount();
				/*
				 * Class parameterType(int);
				 */
				::java::lang::ClassProxy parameterType(jint p0);
				/*
				 * Class returnType();
				 */
				::java::lang::ClassProxy returnType();
				/*
				 * Class[] parameterArray();
				 */
				::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> parameterArray();
				/*
				 * String toMethodDescriptorString();
				 */
				::net::sourceforge::jnipp::JStringHelper toMethodDescriptorString();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * MethodType appendParameterTypes(Class[]);
				 */
				::java::lang::invoke::MethodTypeProxy appendParameterTypes(::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p0);
				/*
				 * MethodType appendParameterTypes(List);
				 */
				::java::lang::invoke::MethodTypeProxy appendParameterTypes(::java::util::ListProxy p0);
				/*
				 * MethodType changeParameterType(int, Class);
				 */
				::java::lang::invoke::MethodTypeProxy changeParameterType(jint p0, ::java::lang::ClassProxy p1);
				/*
				 * MethodType changeReturnType(Class);
				 */
				::java::lang::invoke::MethodTypeProxy changeReturnType(::java::lang::ClassProxy p0);
				/*
				 * MethodType dropParameterTypes(int, int);
				 */
				::java::lang::invoke::MethodTypeProxy dropParameterTypes(jint p0, jint p1);
				/*
				 * MethodType erase();
				 */
				::java::lang::invoke::MethodTypeProxy erase();
				/*
				 * MethodType generic();
				 */
				::java::lang::invoke::MethodTypeProxy generic();
				/*
				 * MethodType insertParameterTypes(int, Class[]);
				 */
				::java::lang::invoke::MethodTypeProxy insertParameterTypes(jint p0, ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p1);
				/*
				 * MethodType insertParameterTypes(int, List);
				 */
				::java::lang::invoke::MethodTypeProxy insertParameterTypes(jint p0, ::java::util::ListProxy p1);
				/*
				 * MethodType unwrap();
				 */
				::java::lang::invoke::MethodTypeProxy unwrap();
				/*
				 * MethodType wrap();
				 */
				::java::lang::invoke::MethodTypeProxy wrap();
				/*
				 * List parameterList();
				 */
				::java::util::ListProxy parameterList();
				/*
				 * static MethodType fromMethodDescriptorString(String, ClassLoader);
				 */
				static ::java::lang::invoke::MethodTypeProxy fromMethodDescriptorString(::net::sourceforge::jnipp::JStringHelper p0, ::java::lang::ClassLoaderProxy p1);
				/*
				 * static MethodType genericMethodType(int);
				 */
				static ::java::lang::invoke::MethodTypeProxy genericMethodType(jint p0);
				/*
				 * static MethodType genericMethodType(int, boolean);
				 */
				static ::java::lang::invoke::MethodTypeProxy genericMethodType(jint p0, jboolean p1);
				/*
				 * static MethodType methodType(Class);
				 */
				static ::java::lang::invoke::MethodTypeProxy methodType(::java::lang::ClassProxy p0);
				/*
				 * static MethodType methodType(Class, Class);
				 */
				static ::java::lang::invoke::MethodTypeProxy methodType(::java::lang::ClassProxy p0, ::java::lang::ClassProxy p1);
				/*
				 * static MethodType methodType(Class, Class, Class[]);
				 */
				static ::java::lang::invoke::MethodTypeProxy methodType(::java::lang::ClassProxy p0, ::java::lang::ClassProxy p1, ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p2);
				/*
				 * static MethodType methodType(Class, Class[]);
				 */
				static ::java::lang::invoke::MethodTypeProxy methodType(::java::lang::ClassProxy p0, ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p1);
				/*
				 * static MethodType methodType(Class, MethodType);
				 */
				static ::java::lang::invoke::MethodTypeProxy methodType(::java::lang::ClassProxy p0, ::java::lang::invoke::MethodTypeProxy p1);
				/*
				 * static MethodType methodType(Class, List);
				 */
				static ::java::lang::invoke::MethodTypeProxy methodType(::java::lang::ClassProxy p0, ::java::util::ListProxy p1);

			};
		}
	}
}


#endif
