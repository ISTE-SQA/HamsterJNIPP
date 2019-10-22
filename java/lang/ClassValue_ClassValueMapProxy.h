#ifndef __java_lang_ClassValue_ClassValueMapProxy_H
#define __java_lang_ClassValue_ClassValueMapProxy_H


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
#include "java\lang\ClassValue_EntryProxy.h"

namespace java
{
	namespace lang
	{
		class ClassValue_ClassValueMapProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ClassValue_ClassValueMapProxy(void* unused);
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
			ClassValue_ClassValueMapProxy(jobject obj);

			virtual ~ClassValue_ClassValueMapProxy();
			ClassValue_ClassValueMapProxy& operator=(const ClassValue_ClassValueMapProxy& rhs);

			// methods

		};
	}
}


#endif
