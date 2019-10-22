#ifndef __java_lang_invoke_MethodTypeFormProxy_H
#define __java_lang_invoke_MethodTypeFormProxy_H


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
#include "java\lang\invoke\LambdaFormProxyForward.h"
#include "java\lang\invoke\MethodHandleProxyForward.h"
#include "java\lang\invoke\MethodTypeProxyForward.h"
#include "java\lang\ref\SoftReferenceProxy.h"

namespace java
{
	namespace lang
	{
		namespace invoke
		{
			class MethodTypeFormProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				MethodTypeFormProxy(void* unused);
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
				MethodTypeFormProxy(jobject obj);

				virtual ~MethodTypeFormProxy();
				MethodTypeFormProxy& operator=(const MethodTypeFormProxy& rhs);

				// methods
				/*
				 * boolean hasLongPrimitives();
				 */
				jboolean hasLongPrimitives();
				/*
				 * boolean hasNonVoidPrimitives();
				 */
				jboolean hasNonVoidPrimitives();
				/*
				 * boolean hasPrimitives();
				 */
				jboolean hasPrimitives();
				/*
				 * int argSlotToParameter(int);
				 */
				jint argSlotToParameter(jint p0);
				/*
				 * int longPrimitiveParameterCount();
				 */
				jint longPrimitiveParameterCount();
				/*
				 * int longPrimitiveReturnCount();
				 */
				jint longPrimitiveReturnCount();
				/*
				 * int parameterCount();
				 */
				jint parameterCount();
				/*
				 * int parameterSlotCount();
				 */
				jint parameterSlotCount();
				/*
				 * int parameterToArgSlot(int);
				 */
				jint parameterToArgSlot(jint p0);
				/*
				 * int primitiveParameterCount();
				 */
				jint primitiveParameterCount();
				/*
				 * int primitiveReturnCount();
				 */
				jint primitiveReturnCount();
				/*
				 * int returnCount();
				 */
				jint returnCount();
				/*
				 * int returnSlotCount();
				 */
				jint returnSlotCount();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * LambdaForm cachedLambdaForm(int);
				 */
				::java::lang::invoke::LambdaFormProxy cachedLambdaForm(jint p0);
				/*
				 * MethodHandle cachedMethodHandle(int);
				 */
				::java::lang::invoke::MethodHandleProxy cachedMethodHandle(jint p0);
				/*
				 * MethodType basicType();
				 */
				::java::lang::invoke::MethodTypeProxy basicType();
				/*
				 * MethodType erasedType();
				 */
				::java::lang::invoke::MethodTypeProxy erasedType();
				/*
				 * static MethodType canonicalize(MethodType, int, int);
				 */
				static ::java::lang::invoke::MethodTypeProxy canonicalize(::java::lang::invoke::MethodTypeProxy p0, jint p1, jint p2);
				/*
				 * LambdaForm setCachedLambdaForm(int, LambdaForm);
				 */
				::java::lang::invoke::LambdaFormProxy setCachedLambdaForm(jint p0, ::java::lang::invoke::LambdaFormProxy p1);
				/*
				 * MethodHandle setCachedMethodHandle(int, MethodHandle);
				 */
				::java::lang::invoke::MethodHandleProxy setCachedMethodHandle(jint p0, ::java::lang::invoke::MethodHandleProxy p1);

			};
		}
	}
}


#endif
