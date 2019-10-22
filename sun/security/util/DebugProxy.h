#ifndef __sun_security_util_DebugProxy_H
#define __sun_security_util_DebugProxy_H


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
#include "java\math\BigIntegerProxyForward.h"

namespace sun
{
	namespace security
	{
		namespace util
		{
			class DebugProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				DebugProxy(void* unused);
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
				DebugProxy(jobject obj);
				DebugProxy();

				virtual ~DebugProxy();
				DebugProxy& operator=(const DebugProxy& rhs);

				// methods
				/*
				 * static boolean isOn(String);
				 */
				static jboolean isOn(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * static String toHexString(BigInteger);
				 */
				static ::net::sourceforge::jnipp::JStringHelper toHexString(::java::math::BigIntegerProxy p0);
				/*
				 * static String toString(byte[]);
				 */
				static ::net::sourceforge::jnipp::JStringHelper toString(::net::sourceforge::jnipp::JByteArrayHelper<1> p0);
				/*
				 * static Debug getInstance(String);
				 */
				static ::sun::security::util::DebugProxy getInstance(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * static Debug getInstance(String, String);
				 */
				static ::sun::security::util::DebugProxy getInstance(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1);
				/*
				 * static void Help();
				 */
				static void Help();
				/*
				 * static void println(String, String);
				 */
				static void println(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1);
				/*
				 * void println();
				 */
				void println();
				/*
				 * void println(String);
				 */
				void println(::net::sourceforge::jnipp::JStringHelper p0);

			};
		}
	}
}


#endif
