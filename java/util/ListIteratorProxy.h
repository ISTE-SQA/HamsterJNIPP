#ifndef __java_util_ListIteratorProxy_H
#define __java_util_ListIteratorProxy_H


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

namespace java
{
	namespace util
	{
		class ListIteratorProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ListIteratorProxy(void* unused);
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
			ListIteratorProxy(jobject obj);

			virtual ~ListIteratorProxy();
			ListIteratorProxy& operator=(const ListIteratorProxy& rhs);

			// methods
			/*
			 * boolean hasNext();
			 */
			jboolean hasNext();
			/*
			 * boolean hasPrevious();
			 */
			jboolean hasPrevious();
			/*
			 * int nextIndex();
			 */
			jint nextIndex();
			/*
			 * int previousIndex();
			 */
			jint previousIndex();
			/*
			 * Object next();
			 */
			::java::lang::ObjectProxy next();
			/*
			 * Object previous();
			 */
			::java::lang::ObjectProxy previous();
			/*
			 * void add(Object);
			 */
			void add(::java::lang::ObjectProxy p0);
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
