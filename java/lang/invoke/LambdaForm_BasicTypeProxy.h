#ifndef __java_lang_invoke_LambdaForm_BasicTypeProxy_H
#define __java_lang_invoke_LambdaForm_BasicTypeProxy_H


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
#include "sun\invoke\util\WrapperProxyForward.h"
#include "java\lang\invoke\LambdaForm_BasicTypeProxy.h"

namespace java
{
	namespace lang
	{
		namespace invoke
		{
			class LambdaForm_BasicTypeProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				LambdaForm_BasicTypeProxy(void* unused);
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
				LambdaForm_BasicTypeProxy(jobject obj);

				virtual ~LambdaForm_BasicTypeProxy();
				LambdaForm_BasicTypeProxy& operator=(const LambdaForm_BasicTypeProxy& rhs);

				// methods
				/*
				 * static LambdaForm$BasicType valueOf(String);
				 */
				static ::java::lang::invoke::LambdaForm_BasicTypeProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * static LambdaForm$BasicType[] values();
				 */
				static ::net::sourceforge::jnipp::PA<::java::lang::invoke::LambdaForm_BasicTypeProxy>::ProxyArray<1> values();

			};
		}
	}
}


#endif
