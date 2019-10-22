#ifndef __java_lang_ThreadLocalProxy_H
#define __java_lang_ThreadLocalProxy_H


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
#include "java\util\function\SupplierProxyForward.h"
#include "java\util\concurrent\atomic\AtomicIntegerProxyForward.h"

namespace java
{
	namespace lang
	{
		class ThreadLocalProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ThreadLocalProxy(void* unused);
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
			ThreadLocalProxy(jobject obj);
			ThreadLocalProxy();

			virtual ~ThreadLocalProxy();
			ThreadLocalProxy& operator=(const ThreadLocalProxy& rhs);

			// methods
			/*
			 * Object get();
			 */
			::java::lang::ObjectProxy get();
			/*
			 * static ThreadLocal withInitial(Supplier);
			 */
			static ::java::lang::ThreadLocalProxy withInitial(::java::util::function::SupplierProxy p0);
			/*
			 * void remove();
			 */
			void remove();
			/*
			 * void set(Object);
			 */
			void set(::java::lang::ObjectProxy p0);

		};
	}
}


#endif
