#ifndef __java_nio_file_PathProxy_H
#define __java_nio_file_PathProxy_H


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
#include "java\io\FileProxyForward.h"
#include "java\net\URIProxyForward.h"
#include "java\nio\file\FileSystemProxyForward.h"
#include "java\nio\file\WatchServiceProxyForward.h"
#include "java\nio\file\WatchKeyProxyForward.h"
#include "java\util\IteratorProxyForward.h"
#include "java\nio\file\LinkOptionProxy.h"
#include "java\nio\file\WatchEvent_KindProxy.h"
#include "java\nio\file\WatchEvent_ModifierProxy.h"

namespace java
{
	namespace nio
	{
		namespace file
		{
			class PathProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				PathProxy(void* unused);
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
				PathProxy(jobject obj);

				virtual ~PathProxy();
				PathProxy& operator=(const PathProxy& rhs);

				// methods
				/*
				 * boolean endsWith(String);
				 */
				jboolean endsWith(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * boolean endsWith(Path);
				 */
				jboolean endsWith(::java::nio::file::PathProxy p0);
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * boolean isAbsolute();
				 */
				jboolean isAbsolute();
				/*
				 * boolean startsWith(String);
				 */
				jboolean startsWith(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * boolean startsWith(Path);
				 */
				jboolean startsWith(::java::nio::file::PathProxy p0);
				/*
				 * int compareTo(Path);
				 */
				jint compareTo(::java::nio::file::PathProxy p0);
				/*
				 * int getNameCount();
				 */
				jint getNameCount();
				/*
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * File toFile();
				 */
				::java::io::FileProxy toFile();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * URI toUri();
				 */
				::java::net::URIProxy toUri();
				/*
				 * FileSystem getFileSystem();
				 */
				::java::nio::file::FileSystemProxy getFileSystem();
				/*
				 * Path getFileName();
				 */
				::java::nio::file::PathProxy getFileName();
				/*
				 * Path getName(int);
				 */
				::java::nio::file::PathProxy getName(jint p0);
				/*
				 * Path getParent();
				 */
				::java::nio::file::PathProxy getParent();
				/*
				 * Path getRoot();
				 */
				::java::nio::file::PathProxy getRoot();
				/*
				 * Path normalize();
				 */
				::java::nio::file::PathProxy normalize();
				/*
				 * Path relativize(Path);
				 */
				::java::nio::file::PathProxy relativize(::java::nio::file::PathProxy p0);
				/*
				 * Path resolve(String);
				 */
				::java::nio::file::PathProxy resolve(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * Path resolve(Path);
				 */
				::java::nio::file::PathProxy resolve(::java::nio::file::PathProxy p0);
				/*
				 * Path resolveSibling(String);
				 */
				::java::nio::file::PathProxy resolveSibling(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * Path resolveSibling(Path);
				 */
				::java::nio::file::PathProxy resolveSibling(::java::nio::file::PathProxy p0);
				/*
				 * Path subpath(int, int);
				 */
				::java::nio::file::PathProxy subpath(jint p0, jint p1);
				/*
				 * Path toAbsolutePath();
				 */
				::java::nio::file::PathProxy toAbsolutePath();
				/*
				 * Path toRealPath(LinkOption[]);
				 */
				::java::nio::file::PathProxy toRealPath(::net::sourceforge::jnipp::PA<::java::nio::file::LinkOptionProxy>::ProxyArray<1> p0);
				/*
				 * WatchKey register(WatchService, WatchEvent$Kind[]);
				 */
				::java::nio::file::WatchKeyProxy _register(::java::nio::file::WatchServiceProxy p0, ::net::sourceforge::jnipp::PA<::java::nio::file::WatchEvent_KindProxy>::ProxyArray<1> p1);
				/*
				 * WatchKey register(WatchService, WatchEvent$Kind[], WatchEvent$Modifier[]);
				 */
				::java::nio::file::WatchKeyProxy _register(::java::nio::file::WatchServiceProxy p0, ::net::sourceforge::jnipp::PA<::java::nio::file::WatchEvent_KindProxy>::ProxyArray<1> p1, ::net::sourceforge::jnipp::PA<::java::nio::file::WatchEvent_ModifierProxy>::ProxyArray<1> p2);
				/*
				 * Iterator iterator();
				 */
				::java::util::IteratorProxy iterator();

			};
		}
	}
}


#endif
