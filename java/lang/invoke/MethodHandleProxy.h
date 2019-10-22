#ifndef __java_lang_invoke_MethodHandleProxy_H
#define __java_lang_invoke_MethodHandleProxy_H


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
#include "java\util\ListProxyForward.h"
#include "java\lang\ClassProxyForward.h"
#include "java\lang\invoke\MethodTypeProxyForward.h"
#include "java\lang\invoke\LambdaFormProxyForward.h"
#include "java\lang\ObjectProxy.h"

namespace java
{
	namespace lang
	{
		namespace invoke
		{
			class MethodHandleProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				MethodHandleProxy(void* unused);
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
				MethodHandleProxy(jobject obj);

				virtual ~MethodHandleProxy();
				MethodHandleProxy& operator=(const MethodHandleProxy& rhs);

				// methods
				/*
				 * boolean isVarargsCollector();
				 */
				jboolean isVarargsCollector();
				/*
				 * Object invoke(Object[]);
				 */
				::java::lang::ObjectProxy invoke(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0);
				/*
				 * Object invokeExact(Object[]);
				 */
				::java::lang::ObjectProxy invokeExact(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0);
				/*
				 * Object invokeWithArguments(Object[]);
				 */
				::java::lang::ObjectProxy invokeWithArguments(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0);
				/*
				 * Object invokeWithArguments(List);
				 */
				::java::lang::ObjectProxy invokeWithArguments(::java::util::ListProxy p0);
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * MethodHandle asCollector(Class, int);
				 */
				::java::lang::invoke::MethodHandleProxy asCollector(::java::lang::ClassProxy p0, jint p1);
				/*
				 * MethodHandle asFixedArity();
				 */
				::java::lang::invoke::MethodHandleProxy asFixedArity();
				/*
				 * MethodHandle asSpreader(Class, int);
				 */
				::java::lang::invoke::MethodHandleProxy asSpreader(::java::lang::ClassProxy p0, jint p1);
				/*
				 * MethodHandle asType(MethodType);
				 */
				::java::lang::invoke::MethodHandleProxy asType(::java::lang::invoke::MethodTypeProxy p0);
				/*
				 * MethodHandle asVarargsCollector(Class);
				 */
				::java::lang::invoke::MethodHandleProxy asVarargsCollector(::java::lang::ClassProxy p0);
				/*
				 * MethodHandle bindTo(Object);
				 */
				::java::lang::invoke::MethodHandleProxy bindTo(::java::lang::ObjectProxy p0);
				/*
				 * MethodType type();
				 */
				::java::lang::invoke::MethodTypeProxy type();

			};
		}
	}
}


#endif
