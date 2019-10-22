#ifndef __java_nio_file_attribute_UserPrincipalLookupServiceProxy_H
#define __java_nio_file_attribute_UserPrincipalLookupServiceProxy_H


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
#include "java\nio\file\attribute\GroupPrincipalProxyForward.h"
#include "java\nio\file\attribute\UserPrincipalProxyForward.h"

namespace java
{
	namespace nio
	{
		namespace file
		{
			namespace attribute
			{
				class UserPrincipalLookupServiceProxy
				{
				private:
					static std::string className;
					static jclass objectClass;
					jobject peerObject;

				protected:
					UserPrincipalLookupServiceProxy(void* unused);
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
					UserPrincipalLookupServiceProxy(jobject obj);

					virtual ~UserPrincipalLookupServiceProxy();
					UserPrincipalLookupServiceProxy& operator=(const UserPrincipalLookupServiceProxy& rhs);

					// methods
					/*
					 * GroupPrincipal lookupPrincipalByGroupName(String);
					 */
					::java::nio::file::attribute::GroupPrincipalProxy lookupPrincipalByGroupName(::net::sourceforge::jnipp::JStringHelper p0);
					/*
					 * UserPrincipal lookupPrincipalByName(String);
					 */
					::java::nio::file::attribute::UserPrincipalProxy lookupPrincipalByName(::net::sourceforge::jnipp::JStringHelper p0);

				};
			}
		}
	}
}


#endif
