#ifndef __java_lang_invoke_MethodHandleImpl_IntrinsicProxy_H
#define __java_lang_invoke_MethodHandleImpl_IntrinsicProxy_H


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
#include "java\lang\invoke\MethodHandleImpl_IntrinsicProxy.h"

namespace java
{
	namespace lang
	{
		namespace invoke
		{
			class MethodHandleImpl_IntrinsicProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				MethodHandleImpl_IntrinsicProxy(void* unused);
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
				MethodHandleImpl_IntrinsicProxy(jobject obj);

				virtual ~MethodHandleImpl_IntrinsicProxy();
				MethodHandleImpl_IntrinsicProxy& operator=(const MethodHandleImpl_IntrinsicProxy& rhs);

				// methods
				/*
				 * static MethodHandleImpl$Intrinsic valueOf(String);
				 */
				static ::java::lang::invoke::MethodHandleImpl_IntrinsicProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * static MethodHandleImpl$Intrinsic[] values();
				 */
				static ::net::sourceforge::jnipp::PA<::java::lang::invoke::MethodHandleImpl_IntrinsicProxy>::ProxyArray<1> values();

			};
		}
	}
}


#endif
