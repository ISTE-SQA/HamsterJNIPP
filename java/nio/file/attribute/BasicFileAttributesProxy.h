#ifndef __java_nio_file_attribute_BasicFileAttributesProxy_H
#define __java_nio_file_attribute_BasicFileAttributesProxy_H


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
#include "java\nio\file\attribute\FileTimeProxyForward.h"

namespace java
{
	namespace nio
	{
		namespace file
		{
			namespace attribute
			{
				class BasicFileAttributesProxy
				{
				private:
					static std::string className;
					static jclass objectClass;
					jobject peerObject;

				protected:
					BasicFileAttributesProxy(void* unused);
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
					BasicFileAttributesProxy(jobject obj);

					virtual ~BasicFileAttributesProxy();
					BasicFileAttributesProxy& operator=(const BasicFileAttributesProxy& rhs);

					// methods
					/*
					 * boolean isDirectory();
					 */
					jboolean isDirectory();
					/*
					 * boolean isOther();
					 */
					jboolean isOther();
					/*
					 * boolean isRegularFile();
					 */
					jboolean isRegularFile();
					/*
					 * boolean isSymbolicLink();
					 */
					jboolean isSymbolicLink();
					/*
					 * Object fileKey();
					 */
					::java::lang::ObjectProxy fileKey();
					/*
					 * FileTime creationTime();
					 */
					::java::nio::file::attribute::FileTimeProxy creationTime();
					/*
					 * FileTime lastAccessTime();
					 */
					::java::nio::file::attribute::FileTimeProxy lastAccessTime();
					/*
					 * FileTime lastModifiedTime();
					 */
					::java::nio::file::attribute::FileTimeProxy lastModifiedTime();
					/*
					 * long size();
					 */
					jlong size();

				};
			}
		}
	}
}


#endif
