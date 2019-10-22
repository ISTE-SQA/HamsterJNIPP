#ifndef __java_net_UrlDeserializedStateProxy_H
#define __java_net_UrlDeserializedStateProxy_H


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

namespace java
{
	namespace net
	{
		class UrlDeserializedStateProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			UrlDeserializedStateProxy(void* unused);
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
			UrlDeserializedStateProxy(jobject obj);
			UrlDeserializedStateProxy(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1, jint p2, ::net::sourceforge::jnipp::JStringHelper p3, ::net::sourceforge::jnipp::JStringHelper p4, ::net::sourceforge::jnipp::JStringHelper p5, jint p6);

			virtual ~UrlDeserializedStateProxy();
			UrlDeserializedStateProxy& operator=(const UrlDeserializedStateProxy& rhs);

			// methods

		};
	}
}


#endif
