#ifndef __java_lang_reflect_GenericDeclarationProxy_H
#define __java_lang_reflect_GenericDeclarationProxy_H


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
#include "java\lang\reflect\TypeVariableProxy.h"

namespace java
{
	namespace lang
	{
		namespace reflect
		{
			class GenericDeclarationProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				GenericDeclarationProxy(void* unused);
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
				GenericDeclarationProxy(jobject obj);

				virtual ~GenericDeclarationProxy();
				GenericDeclarationProxy& operator=(const GenericDeclarationProxy& rhs);

				// methods
				/*
				 * TypeVariable[] getTypeParameters();
				 */
				::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeVariableProxy>::ProxyArray<1> getTypeParameters();

			};
		}
	}
}


#endif
