#ifndef __java_lang_annotation_RetentionPolicyProxy_H
#define __java_lang_annotation_RetentionPolicyProxy_H


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
#include "java\lang\annotation\RetentionPolicyProxy.h"

namespace java
{
	namespace lang
	{
		namespace annotation
		{
			class RetentionPolicyProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				RetentionPolicyProxy(void* unused);
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
				RetentionPolicyProxy(jobject obj);

				virtual ~RetentionPolicyProxy();
				RetentionPolicyProxy& operator=(const RetentionPolicyProxy& rhs);

				// methods
				/*
				 * static RetentionPolicy valueOf(String);
				 */
				static ::java::lang::annotation::RetentionPolicyProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * static RetentionPolicy[] values();
				 */
				static ::net::sourceforge::jnipp::PA<::java::lang::annotation::RetentionPolicyProxy>::ProxyArray<1> values();

			};
		}
	}
}


#endif
