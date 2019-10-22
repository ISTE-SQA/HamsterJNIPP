#ifndef __java_lang_invoke_LambdaForm_NamedFunctionProxy_H
#define __java_lang_invoke_LambdaForm_NamedFunctionProxy_H


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
#include "java\lang\invoke\MethodHandleImpl_IntrinsicProxyForward.h"
#include "java\lang\invoke\MemberNameProxyForward.h"
#include "java\lang\invoke\MethodHandleProxyForward.h"
#include "java\lang\invoke\MethodTypeProxyForward.h"

namespace java
{
	namespace lang
	{
		namespace invoke
		{
			class LambdaForm_NamedFunctionProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				LambdaForm_NamedFunctionProxy(void* unused);
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
				LambdaForm_NamedFunctionProxy(jobject obj);

				virtual ~LambdaForm_NamedFunctionProxy();
				LambdaForm_NamedFunctionProxy& operator=(const LambdaForm_NamedFunctionProxy& rhs);

				// methods
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * boolean isConstantZero();
				 */
				jboolean isConstantZero();
				/*
				 * boolean isIdentity();
				 */
				jboolean isIdentity();
				/*
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * MethodHandleImpl$Intrinsic intrinsicName();
				 */
				::java::lang::invoke::MethodHandleImpl_IntrinsicProxy intrinsicName();

			};
		}
	}
}


#endif
