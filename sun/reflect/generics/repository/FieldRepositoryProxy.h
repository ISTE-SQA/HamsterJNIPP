#ifndef __sun_reflect_generics_repository_FieldRepositoryProxy_H
#define __sun_reflect_generics_repository_FieldRepositoryProxy_H


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

namespace sun
{
	namespace reflect
	{
		namespace generics
		{
			namespace repository
			{
				class FieldRepositoryProxy
				{
				private:
					static std::string className;
					static jclass objectClass;
					jobject peerObject;

				protected:
					FieldRepositoryProxy(void* unused);
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
					FieldRepositoryProxy(jobject obj);

					virtual ~FieldRepositoryProxy();
					FieldRepositoryProxy& operator=(const FieldRepositoryProxy& rhs);

					// methods
					/*
					 * Type getGenericType();
					 */
					::java::lang::reflect::TypeProxy getGenericType();
					/*
					 * static FieldRepository make(String, GenericsFactory);
					 */
					static ::sun::reflect::generics::repository::FieldRepositoryProxy make(::net::sourceforge::jnipp::JStringHelper p0, ::sun::reflect::generics::factory::GenericsFactoryProxy p1);

				};
			}
		}
	}
}


#endif
