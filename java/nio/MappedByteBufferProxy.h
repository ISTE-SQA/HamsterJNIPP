#ifndef __java_nio_MappedByteBufferProxy_H
#define __java_nio_MappedByteBufferProxy_H


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
#include "java\io\FileDescriptorProxyForward.h"

namespace java
{
	namespace nio
	{
		class MappedByteBufferProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			MappedByteBufferProxy(void* unused);
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
			MappedByteBufferProxy(jobject obj);

			virtual ~MappedByteBufferProxy();
			MappedByteBufferProxy& operator=(const MappedByteBufferProxy& rhs);

			// methods
			/*
			 * boolean isLoaded();
			 */
			jboolean isLoaded();
			/*
			 * MappedByteBuffer force();
			 */
			::java::nio::MappedByteBufferProxy force();
			/*
			 * MappedByteBuffer load();
			 */
			::java::nio::MappedByteBufferProxy load();

		};
	}
}


#endif
