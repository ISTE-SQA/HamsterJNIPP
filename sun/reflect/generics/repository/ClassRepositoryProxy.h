#ifndef __sun_reflect_generics_repository_ClassRepositoryProxy_H
#define __sun_reflect_generics_repository_ClassRepositoryProxy_H


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
#include "java\lang\reflect\TypeProxyForward.h"
#include "sun\reflect\generics\factory\GenericsFactoryProxyForward.h"
#include "java\lang\reflect\TypeProxy.h"

namespace sun
{
	namespace reflect
	{
		namespace generics
		{
			namespace repository
			{
				class ClassRepositoryProxy
				{
				private:
					static std::string className;
					static jclass objectClass;
					jobject peerObject;

				protected:
					ClassRepositoryProxy(void* unused);
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
					ClassRepositoryProxy(jobject obj);

					virtual ~ClassRepositoryProxy();
					ClassRepositoryProxy& operator=(const ClassRepositoryProxy& rhs);

					// methods
					/*
					 * Type getSuperclass();
					 */
					::java::lang::reflect::TypeProxy getSuperclass();
					/*
					 * Type[] getSuperInterfaces();
					 */
					::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1> getSuperInterfaces();
					/*
					 * static ClassRepository make(String, GenericsFactory);
					 */
					static ::sun::reflect::generics::repository::ClassRepositoryProxy make(::net::sourceforge::jnipp::JStringHelper p0, ::sun::reflect::generics::factory::GenericsFactoryProxy p1);

				};
			}
		}
	}
}


#endif
