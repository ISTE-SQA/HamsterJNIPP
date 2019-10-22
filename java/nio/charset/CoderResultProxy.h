#ifndef __java_nio_charset_CoderResultProxy_H
#define __java_nio_charset_CoderResultProxy_H


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
#include "java\nio\charset\CoderResult_CacheProxyForward.h"

namespace java
{
	namespace nio
	{
		namespace charset
		{
			class CoderResultProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				CoderResultProxy(void* unused);
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
				CoderResultProxy(jobject obj);

				virtual ~CoderResultProxy();
				CoderResultProxy& operator=(const CoderResultProxy& rhs);

				// methods
				/*
				 * boolean isError();
				 */
				jboolean isError();
				/*
				 * boolean isMalformed();
				 */
				jboolean isMalformed();
				/*
				 * boolean isOverflow();
				 */
				jboolean isOverflow();
				/*
				 * boolean isUnderflow();
				 */
				jboolean isUnderflow();
				/*
				 * boolean isUnmappable();
				 */
				jboolean isUnmappable();
				/*
				 * int length();
				 */
				jint length();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * static CoderResult malformedForLength(int);
				 */
				static ::java::nio::charset::CoderResultProxy malformedForLength(jint p0);
				/*
				 * static CoderResult unmappableForLength(int);
				 */
				static ::java::nio::charset::CoderResultProxy unmappableForLength(jint p0);
				/*
				 * void throwException();
				 */
				void throwException();

			};
		}
	}
}


#endif
