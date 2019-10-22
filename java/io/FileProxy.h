#ifndef __java_io_FileProxy_H
#define __java_io_FileProxy_H


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
#include "java\net\URIProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\io\FileFilterProxyForward.h"
#include "java\io\FilenameFilterProxyForward.h"
#include "java\net\URLProxyForward.h"
#include "java\nio\file\PathProxyForward.h"
#include "java\io\FileSystemProxyForward.h"
#include "sun\misc\UnsafeProxyForward.h"
#include "java\io\File_PathStatusProxyForward.h"
#include "java\io\FileProxy.h"

namespace java
{
	namespace io
	{
		class FileProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			FileProxy(void* unused);
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
			FileProxy(jobject obj);
			FileProxy(::java::io::FileProxy p0, ::net::sourceforge::jnipp::JStringHelper p1);
			FileProxy(::net::sourceforge::jnipp::JStringHelper p0);
			FileProxy(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1);
			FileProxy(::java::net::URIProxy p0);

			virtual ~FileProxy();
			FileProxy& operator=(const FileProxy& rhs);

			// methods
			/*
			 * boolean canExecute();
			 */
			jboolean canExecute();
			/*
			 * boolean canRead();
			 */
			jboolean canRead();
			/*
			 * boolean canWrite();
			 */
			jboolean canWrite();
			/*
			 * boolean createNewFile();
			 */
			jboolean createNewFile();
			/*
			 * boolean delete();
			 */
			jboolean _delete();
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean exists();
			 */
			jboolean exists();
			/*
			 * boolean isAbsolute();
			 */
			jboolean isAbsolute();
			/*
			 * boolean isDirectory();
			 */
			jboolean isDirectory();
			/*
			 * boolean isFile();
			 */
			jboolean isFile();
			/*
			 * boolean isHidden();
			 */
			jboolean isHidden();
			/*
			 * boolean mkdir();
			 */
			jboolean mkdir();
			/*
			 * boolean mkdirs();
			 */
			jboolean mkdirs();
			/*
			 * boolean renameTo(File);
			 */
			jboolean renameTo(::java::io::FileProxy p0);
			/*
			 * boolean setExecutable(boolean);
			 */
			jboolean setExecutable(jboolean p0);
			/*
			 * boolean setExecutable(boolean, boolean);
			 */
			jboolean setExecutable(jboolean p0, jboolean p1);
			/*
			 * boolean setLastModified(long);
			 */
			jboolean setLastModified(jlong p0);
			/*
			 * boolean setReadOnly();
			 */
			jboolean setReadOnly();
			/*
			 * boolean setReadable(boolean);
			 */
			jboolean setReadable(jboolean p0);
			/*
			 * boolean setReadable(boolean, boolean);
			 */
			jboolean setReadable(jboolean p0, jboolean p1);
			/*
			 * boolean setWritable(boolean);
			 */
			jboolean setWritable(jboolean p0);
			/*
			 * boolean setWritable(boolean, boolean);
			 */
			jboolean setWritable(jboolean p0, jboolean p1);
			/*
			 * int compareTo(File);
			 */
			jint compareTo(::java::io::FileProxy p0);
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * File getAbsoluteFile();
			 */
			::java::io::FileProxy getAbsoluteFile();
			/*
			 * File getCanonicalFile();
			 */
			::java::io::FileProxy getCanonicalFile();
			/*
			 * File getParentFile();
			 */
			::java::io::FileProxy getParentFile();
			/*
			 * File[] listFiles();
			 */
			::net::sourceforge::jnipp::PA<::java::io::FileProxy>::ProxyArray<1> listFiles();
			/*
			 * File[] listFiles(FileFilter);
			 */
			::net::sourceforge::jnipp::PA<::java::io::FileProxy>::ProxyArray<1> listFiles(::java::io::FileFilterProxy p0);
			/*
			 * File[] listFiles(FilenameFilter);
			 */
			::net::sourceforge::jnipp::PA<::java::io::FileProxy>::ProxyArray<1> listFiles(::java::io::FilenameFilterProxy p0);
			/*
			 * String getAbsolutePath();
			 */
			::net::sourceforge::jnipp::JStringHelper getAbsolutePath();
			/*
			 * String getCanonicalPath();
			 */
			::net::sourceforge::jnipp::JStringHelper getCanonicalPath();
			/*
			 * String getName();
			 */
			::net::sourceforge::jnipp::JStringHelper getName();
			/*
			 * String getParent();
			 */
			::net::sourceforge::jnipp::JStringHelper getParent();
			/*
			 * String getPath();
			 */
			::net::sourceforge::jnipp::JStringHelper getPath();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * String[] list();
			 */
			::net::sourceforge::jnipp::JStringHelperArray<1> list();
			/*
			 * String[] list(FilenameFilter);
			 */
			::net::sourceforge::jnipp::JStringHelperArray<1> list(::java::io::FilenameFilterProxy p0);
			/*
			 * URI toURI();
			 */
			::java::net::URIProxy toURI();
			/*
			 * URL toURL();
			 */
			::java::net::URLProxy toURL();
			/*
			 * Path toPath();
			 */
			::java::nio::file::PathProxy toPath();
			/*
			 * long getFreeSpace();
			 */
			jlong getFreeSpace();
			/*
			 * long getTotalSpace();
			 */
			jlong getTotalSpace();
			/*
			 * long getUsableSpace();
			 */
			jlong getUsableSpace();
			/*
			 * long lastModified();
			 */
			jlong lastModified();
			/*
			 * long length();
			 */
			jlong length();
			/*
			 * static File createTempFile(String, String);
			 */
			static ::java::io::FileProxy createTempFile(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1);
			/*
			 * static File createTempFile(String, String, File);
			 */
			static ::java::io::FileProxy createTempFile(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1, ::java::io::FileProxy p2);
			/*
			 * static File[] listRoots();
			 */
			static ::net::sourceforge::jnipp::PA<::java::io::FileProxy>::ProxyArray<1> listRoots();
			/*
			 * void deleteOnExit();
			 */
			void deleteOnExit();

		};
	}
}


#endif
