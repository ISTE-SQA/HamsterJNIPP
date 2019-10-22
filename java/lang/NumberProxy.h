#ifndef __java_lang_NumberProxy_H
#define __java_lang_NumberProxy_H


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
	namespace lang
	{
		class NumberProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			NumberProxy(void* unused);
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
			NumberProxy(jobject obj);
			NumberProxy();

			virtual ~NumberProxy();
			NumberProxy& operator=(const NumberProxy& rhs);

			// methods
			/*
			 * double doubleValue();
			 */
			jdouble doubleValue();
			/*
			 * float floatValue();
			 */
			jfloat floatValue();
			/*
			 * int intValue();
			 */
			jint intValue();
			/*
			 * long longValue();
			 */
			jlong longValue();
			/*
			 * byte byteValue();
			 */
			jbyte byteValue();
			/*
			 * short shortValue();
			 */
			jshort shortValue();

		};
	}
}


#endif
