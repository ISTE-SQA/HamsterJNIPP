#ifndef __java_lang_invoke_LambdaForm_NameProxy_H
#define __java_lang_invoke_LambdaForm_NameProxy_H


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
#include "java\lang\invoke\LambdaForm_BasicTypeProxyForward.h"
#include "java\lang\invoke\LambdaForm_NamedFunctionProxyForward.h"
#include "java\lang\ObjectProxy.h"

namespace java
{
	namespace lang
	{
		namespace invoke
		{
			class LambdaForm_NameProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				LambdaForm_NameProxy(void* unused);
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
				LambdaForm_NameProxy(jobject obj);

				virtual ~LambdaForm_NameProxy();
				LambdaForm_NameProxy& operator=(const LambdaForm_NameProxy& rhs);

				// methods
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * boolean equals(LambdaForm$Name);
				 */
				jboolean equals(::java::lang::invoke::LambdaForm_NameProxy p0);
				/*
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * String debugString();
				 */
				::net::sourceforge::jnipp::JStringHelper debugString();
				/*
				 * String exprString();
				 */
				::net::sourceforge::jnipp::JStringHelper exprString();
				/*
				 * String paramString();
				 */
				::net::sourceforge::jnipp::JStringHelper paramString();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();

			};
		}
	}
}


#endif
