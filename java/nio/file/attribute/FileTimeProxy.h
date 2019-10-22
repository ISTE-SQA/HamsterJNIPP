#ifndef __java_nio_file_attribute_FileTimeProxy_H
#define __java_nio_file_attribute_FileTimeProxy_H


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
#include "java\time\InstantProxyForward.h"
#include "java\util\concurrent\TimeUnitProxyForward.h"

namespace java
{
	namespace nio
	{
		namespace file
		{
			namespace attribute
			{
				class FileTimeProxy
				{
				private:
					static std::string className;
					static jclass objectClass;
					jobject peerObject;

				protected:
					FileTimeProxy(void* unused);
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
					FileTimeProxy(jobject obj);

					virtual ~FileTimeProxy();
					FileTimeProxy& operator=(const FileTimeProxy& rhs);

					// methods
					/*
					 * boolean equals(Object);
					 */
					jboolean equals(::java::lang::ObjectProxy p0);
					/*
					 * int compareTo(FileTime);
					 */
					jint compareTo(::java::nio::file::attribute::FileTimeProxy p0);
					/*
					 * int hashCode();
					 */
					jint hashCode();
					/*
					 * String toString();
					 */
					::net::sourceforge::jnipp::JStringHelper toString();
					/*
					 * Instant toInstant();
					 */
					::java::time::InstantProxy toInstant();
					/*
					 * long to(TimeUnit);
					 */
					jlong to(::java::util::concurrent::TimeUnitProxy p0);
					/*
					 * long toMillis();
					 */
					jlong toMillis();
					/*
					 * static FileTime from(Instant);
					 */
					static ::java::nio::file::attribute::FileTimeProxy from(::java::time::InstantProxy p0);
					/*
					 * static FileTime from(long, TimeUnit);
					 */
					static ::java::nio::file::attribute::FileTimeProxy from(jlong p0, ::java::util::concurrent::TimeUnitProxy p1);
					/*
					 * static FileTime fromMillis(long);
					 */
					static ::java::nio::file::attribute::FileTimeProxy fromMillis(jlong p0);

				};
			}
		}
	}
}


#endif
