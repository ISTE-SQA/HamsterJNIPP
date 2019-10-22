#ifndef __sun_reflect_generics_repository_ConstructorRepositoryProxy_H
#define __sun_reflect_generics_repository_ConstructorRepositoryProxy_H


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
				class ConstructorRepositoryProxy
				{
				private:
					static std::string className;
					static jclass objectClass;
					jobject peerObject;

				protected:
					ConstructorRepositoryProxy(void* unused);
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
					ConstructorRepositoryProxy(jobject obj);

					virtual ~ConstructorRepositoryProxy();
					ConstructorRepositoryProxy& operator=(const ConstructorRepositoryProxy& rhs);

					// methods
					/*
					 * Type[] getExceptionTypes();
					 */
					::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1> getExceptionTypes();
					/*
					 * Type[] getParameterTypes();
					 */
					::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1> getParameterTypes();
					/*
					 * static ConstructorRepository make(String, GenericsFactory);
					 */
					static ::sun::reflect::generics::repository::ConstructorRepositoryProxy make(::net::sourceforge::jnipp::JStringHelper p0, ::sun::reflect::generics::factory::GenericsFactoryProxy p1);

				};
			}
		}
	}
}


#endif
