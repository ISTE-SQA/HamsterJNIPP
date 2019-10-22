#ifndef __java_lang_BooleanProxy_H
#define __java_lang_BooleanProxy_H


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
#include "java\lang\ClassProxyForward.h"

namespace java
{
	namespace lang
	{
		class BooleanProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			BooleanProxy(void* unused);
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
			BooleanProxy(jobject obj);
			BooleanProxy(jboolean p0);
			BooleanProxy(::net::sourceforge::jnipp::JStringHelper p0);

			virtual ~BooleanProxy();
			BooleanProxy& operator=(const BooleanProxy& rhs);

			// methods
			/*
			 * boolean booleanValue();
			 */
			jboolean booleanValue();
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * int compareTo(Boolean);
			 */
			jint compareTo(::java::lang::BooleanProxy p0);
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * static boolean getBoolean(String);
			 */
			static jboolean getBoolean(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static boolean logicalAnd(boolean, boolean);
			 */
			static jboolean logicalAnd(jboolean p0, jboolean p1);
			/*
			 * static boolean logicalOr(boolean, boolean);
			 */
			static jboolean logicalOr(jboolean p0, jboolean p1);
			/*
			 * static boolean logicalXor(boolean, boolean);
			 */
			static jboolean logicalXor(jboolean p0, jboolean p1);
			/*
			 * static boolean parseBoolean(String);
			 */
			static jboolean parseBoolean(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static int compare(boolean, boolean);
			 */
			static jint compare(jboolean p0, jboolean p1);
			/*
			 * static int hashCode(boolean);
			 */
			static jint hashCode(jboolean p0);
			/*
			 * static Boolean valueOf(boolean);
			 */
			static ::java::lang::BooleanProxy valueOf(jboolean p0);
			/*
			 * static Boolean valueOf(String);
			 */
			static ::java::lang::BooleanProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static String toString(boolean);
			 */
			static ::net::sourceforge::jnipp::JStringHelper toString(jboolean p0);

		};
	}
}


#endif
