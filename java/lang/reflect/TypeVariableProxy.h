#ifndef __java_lang_reflect_TypeVariableProxy_H
#define __java_lang_reflect_TypeVariableProxy_H


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
#include "java\lang\reflect\GenericDeclarationProxyForward.h"
#include "java\lang\reflect\AnnotatedTypeProxy.h"
#include "java\lang\reflect\TypeProxy.h"

namespace java
{
	namespace lang
	{
		namespace reflect
		{
			class TypeVariableProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				TypeVariableProxy(void* unused);
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
				TypeVariableProxy(jobject obj);

				virtual ~TypeVariableProxy();
				TypeVariableProxy& operator=(const TypeVariableProxy& rhs);

				// methods
				/*
				 * String getName();
				 */
				::net::sourceforge::jnipp::JStringHelper getName();
				/*
				 * AnnotatedType[] getAnnotatedBounds();
				 */
				::net::sourceforge::jnipp::PA<::java::lang::reflect::AnnotatedTypeProxy>::ProxyArray<1> getAnnotatedBounds();
				/*
				 * GenericDeclaration getGenericDeclaration();
				 */
				::java::lang::reflect::GenericDeclarationProxy getGenericDeclaration();
				/*
				 * Type[] getBounds();
				 */
				::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1> getBounds();

			};
		}
	}
}


#endif
