#ifndef __java_util_regex_MatchResultProxy_H
#define __java_util_regex_MatchResultProxy_H


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
	namespace util
	{
		namespace regex
		{
			class MatchResultProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				MatchResultProxy(void* unused);
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
				MatchResultProxy(jobject obj);

				virtual ~MatchResultProxy();
				MatchResultProxy& operator=(const MatchResultProxy& rhs);

				// methods
				/*
				 * int end();
				 */
				jint end();
				/*
				 * int end(int);
				 */
				jint end(jint p0);
				/*
				 * int groupCount();
				 */
				jint groupCount();
				/*
				 * int start();
				 */
				jint start();
				/*
				 * int start(int);
				 */
				jint start(jint p0);
				/*
				 * String group();
				 */
				::net::sourceforge::jnipp::JStringHelper group();
				/*
				 * String group(int);
				 */
				::net::sourceforge::jnipp::JStringHelper group(jint p0);

			};
		}
	}
}


#endif
