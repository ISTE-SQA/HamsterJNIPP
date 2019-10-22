#ifndef __java_lang_invoke_LambdaFormProxy_H
#define __java_lang_invoke_LambdaFormProxy_H


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
#include "java\lang\invoke\MethodTypeProxyForward.h"
#include "java\lang\invoke\MethodHandleProxyForward.h"
#include "java\lang\invoke\MemberNameProxyForward.h"
#include "java\lang\invoke\MemberName_FactoryProxyForward.h"
#include "java\util\HashMapProxyForward.h"
#include "java\lang\invoke\LambdaForm_NameProxy.h"
#include "java\lang\invoke\LambdaForm_NameProxy.h"
#include "java\lang\invoke\LambdaForm_NamedFunctionProxy.h"
#include "java\lang\invoke\LambdaFormProxy.h"

namespace java
{
	namespace lang
	{
		namespace invoke
		{
			class LambdaFormProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				LambdaFormProxy(void* unused);
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
				LambdaFormProxy(jobject obj);

				virtual ~LambdaFormProxy();
				LambdaFormProxy& operator=(const LambdaFormProxy& rhs);

				// methods
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * boolean equals(LambdaForm);
				 */
				jboolean equals(::java::lang::invoke::LambdaFormProxy p0);
				/*
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * static String basicTypeSignature(MethodType);
				 */
				static ::net::sourceforge::jnipp::JStringHelper basicTypeSignature(::java::lang::invoke::MethodTypeProxy p0);
				/*
				 * static String shortenSignature(String);
				 */
				static ::net::sourceforge::jnipp::JStringHelper shortenSignature(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * void prepare();
				 */
				void prepare();

			};
		}
	}
}


#endif
