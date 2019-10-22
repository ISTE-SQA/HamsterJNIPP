#ifndef __sun_reflect_generics_factory_GenericsFactoryProxy_H
#define __sun_reflect_generics_factory_GenericsFactoryProxy_H


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
#include "java\lang\reflect\ParameterizedTypeProxyForward.h"
#include "java\lang\reflect\TypeVariableProxyForward.h"
#include "java\lang\reflect\WildcardTypeProxyForward.h"
#include "java\lang\reflect\TypeProxy.h"
#include "sun\reflect\generics\tree\FieldTypeSignatureProxy.h"

namespace sun
{
	namespace reflect
	{
		namespace generics
		{
			namespace factory
			{
				class GenericsFactoryProxy
				{
				private:
					static std::string className;
					static jclass objectClass;
					jobject peerObject;

				protected:
					GenericsFactoryProxy(void* unused);
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
					GenericsFactoryProxy(jobject obj);

					virtual ~GenericsFactoryProxy();
					GenericsFactoryProxy& operator=(const GenericsFactoryProxy& rhs);

					// methods
					/*
					 * ParameterizedType makeParameterizedType(Type, Type[], Type);
					 */
					::java::lang::reflect::ParameterizedTypeProxy makeParameterizedType(::java::lang::reflect::TypeProxy p0, ::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1> p1, ::java::lang::reflect::TypeProxy p2);
					/*
					 * Type makeArrayType(Type);
					 */
					::java::lang::reflect::TypeProxy makeArrayType(::java::lang::reflect::TypeProxy p0);
					/*
					 * Type makeBool();
					 */
					::java::lang::reflect::TypeProxy makeBool();
					/*
					 * Type makeByte();
					 */
					::java::lang::reflect::TypeProxy makeByte();
					/*
					 * Type makeChar();
					 */
					::java::lang::reflect::TypeProxy makeChar();
					/*
					 * Type makeDouble();
					 */
					::java::lang::reflect::TypeProxy makeDouble();
					/*
					 * Type makeFloat();
					 */
					::java::lang::reflect::TypeProxy makeFloat();
					/*
					 * Type makeInt();
					 */
					::java::lang::reflect::TypeProxy makeInt();
					/*
					 * Type makeLong();
					 */
					::java::lang::reflect::TypeProxy makeLong();
					/*
					 * Type makeNamedType(String);
					 */
					::java::lang::reflect::TypeProxy makeNamedType(::net::sourceforge::jnipp::JStringHelper p0);
					/*
					 * Type makeShort();
					 */
					::java::lang::reflect::TypeProxy makeShort();
					/*
					 * Type makeVoid();
					 */
					::java::lang::reflect::TypeProxy makeVoid();
					/*
					 * TypeVariable findTypeVariable(String);
					 */
					::java::lang::reflect::TypeVariableProxy findTypeVariable(::net::sourceforge::jnipp::JStringHelper p0);
					/*
					 * TypeVariable makeTypeVariable(String, FieldTypeSignature[]);
					 */
					::java::lang::reflect::TypeVariableProxy makeTypeVariable(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::PA<::sun::reflect::generics::tree::FieldTypeSignatureProxy>::ProxyArray<1> p1);
					/*
					 * WildcardType makeWildcard(FieldTypeSignature[], FieldTypeSignature[]);
					 */
					::java::lang::reflect::WildcardTypeProxy makeWildcard(::net::sourceforge::jnipp::PA<::sun::reflect::generics::tree::FieldTypeSignatureProxy>::ProxyArray<1> p0, ::net::sourceforge::jnipp::PA<::sun::reflect::generics::tree::FieldTypeSignatureProxy>::ProxyArray<1> p1);

				};
			}
		}
	}
}


#endif
