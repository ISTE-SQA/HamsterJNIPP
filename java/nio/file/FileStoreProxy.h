#ifndef __java_nio_file_FileStoreProxy_H
#define __java_nio_file_FileStoreProxy_H


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
#include "java\lang\ObjectProxyForward.h"
#include "java\nio\file\attribute\FileStoreAttributeViewProxyForward.h"

namespace java
{
	namespace nio
	{
		namespace file
		{
			class FileStoreProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				FileStoreProxy(void* unused);
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
				FileStoreProxy(jobject obj);

				virtual ~FileStoreProxy();
				FileStoreProxy& operator=(const FileStoreProxy& rhs);

				// methods
				/*
				 * boolean isReadOnly();
				 */
				jboolean isReadOnly();
				/*
				 * boolean supportsFileAttributeView(Class);
				 */
				jboolean supportsFileAttributeView(::java::lang::ClassProxy p0);
				/*
				 * boolean supportsFileAttributeView(String);
				 */
				jboolean supportsFileAttributeView(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * Object getAttribute(String);
				 */
				::java::lang::ObjectProxy getAttribute(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * String name();
				 */
				::net::sourceforge::jnipp::JStringHelper name();
				/*
				 * String type();
				 */
				::net::sourceforge::jnipp::JStringHelper type();
				/*
				 * FileStoreAttributeView getFileStoreAttributeView(Class);
				 */
				::java::nio::file::attribute::FileStoreAttributeViewProxy getFileStoreAttributeView(::java::lang::ClassProxy p0);
				/*
				 * long getTotalSpace();
				 */
				jlong getTotalSpace();
				/*
				 * long getUnallocatedSpace();
				 */
				jlong getUnallocatedSpace();
				/*
				 * long getUsableSpace();
				 */
				jlong getUsableSpace();

			};
		}
	}
}


#endif
