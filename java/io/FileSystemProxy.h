#ifndef __java_io_FileSystemProxy_H
#define __java_io_FileSystemProxy_H


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
#include "java\io\FileProxyForward.h"
#include "java\io\FileProxy.h"

namespace java
{
	namespace io
	{
		class FileSystemProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			FileSystemProxy(void* unused);
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
			FileSystemProxy(jobject obj);

			virtual ~FileSystemProxy();
			FileSystemProxy& operator=(const FileSystemProxy& rhs);

			// methods
			/*
			 * boolean checkAccess(File, int);
			 */
			jboolean checkAccess(::java::io::FileProxy p0, jint p1);
			/*
			 * boolean createDirectory(File);
			 */
			jboolean createDirectory(::java::io::FileProxy p0);
			/*
			 * boolean createFileExclusively(String);
			 */
			jboolean createFileExclusively(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * boolean delete(File);
			 */
			jboolean _delete(::java::io::FileProxy p0);
			/*
			 * boolean isAbsolute(File);
			 */
			jboolean isAbsolute(::java::io::FileProxy p0);
			/*
			 * boolean rename(File, File);
			 */
			jboolean rename(::java::io::FileProxy p0, ::java::io::FileProxy p1);
			/*
			 * boolean setLastModifiedTime(File, long);
			 */
			jboolean setLastModifiedTime(::java::io::FileProxy p0, jlong p1);
			/*
			 * boolean setPermission(File, int, boolean, boolean);
			 */
			jboolean setPermission(::java::io::FileProxy p0, jint p1, jboolean p2, jboolean p3);
			/*
			 * boolean setReadOnly(File);
			 */
			jboolean setReadOnly(::java::io::FileProxy p0);
			/*
			 * char getPathSeparator();
			 */
			jchar getPathSeparator();
			/*
			 * char getSeparator();
			 */
			jchar getSeparator();
			/*
			 * int compare(File, File);
			 */
			jint compare(::java::io::FileProxy p0, ::java::io::FileProxy p1);
			/*
			 * int getBooleanAttributes(File);
			 */
			jint getBooleanAttributes(::java::io::FileProxy p0);
			/*
			 * int hashCode(File);
			 */
			jint hashCode(::java::io::FileProxy p0);
			/*
			 * int prefixLength(String);
			 */
			jint prefixLength(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * File[] listRoots();
			 */
			::net::sourceforge::jnipp::PA<::java::io::FileProxy>::ProxyArray<1> listRoots();
			/*
			 * String canonicalize(String);
			 */
			::net::sourceforge::jnipp::JStringHelper canonicalize(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * String fromURIPath(String);
			 */
			::net::sourceforge::jnipp::JStringHelper fromURIPath(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * String getDefaultParent();
			 */
			::net::sourceforge::jnipp::JStringHelper getDefaultParent();
			/*
			 * String normalize(String);
			 */
			::net::sourceforge::jnipp::JStringHelper normalize(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * String resolve(File);
			 */
			::net::sourceforge::jnipp::JStringHelper resolve(::java::io::FileProxy p0);
			/*
			 * String resolve(String, String);
			 */
			::net::sourceforge::jnipp::JStringHelper resolve(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1);
			/*
			 * String[] list(File);
			 */
			::net::sourceforge::jnipp::JStringHelperArray<1> list(::java::io::FileProxy p0);
			/*
			 * long getLastModifiedTime(File);
			 */
			jlong getLastModifiedTime(::java::io::FileProxy p0);
			/*
			 * long getLength(File);
			 */
			jlong getLength(::java::io::FileProxy p0);
			/*
			 * long getSpace(File, int);
			 */
			jlong getSpace(::java::io::FileProxy p0, jint p1);

		};
	}
}


#endif
