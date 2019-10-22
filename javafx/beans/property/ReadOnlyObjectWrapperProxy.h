#ifndef __javafx_beans_property_ReadOnlyObjectWrapperProxy_H
#define __javafx_beans_property_ReadOnlyObjectWrapperProxy_H


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
#include "javafx\beans\property\ReadOnlyObjectPropertyProxyForward.h"
#include "javafx\beans\property\ReadOnlyObjectWrapper_ReadOnlyPropertyImplProxyForward.h"

namespace javafx
{
	namespace beans
	{
		namespace property
		{
			class ReadOnlyObjectWrapperProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ReadOnlyObjectWrapperProxy(void* unused);
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
				ReadOnlyObjectWrapperProxy(jobject obj);
				ReadOnlyObjectWrapperProxy();
				ReadOnlyObjectWrapperProxy(::java::lang::ObjectProxy p0);
				ReadOnlyObjectWrapperProxy(::java::lang::ObjectProxy p0, ::net::sourceforge::jnipp::JStringHelper p1);
				ReadOnlyObjectWrapperProxy(::java::lang::ObjectProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::java::lang::ObjectProxy p2);

				virtual ~ReadOnlyObjectWrapperProxy();
				ReadOnlyObjectWrapperProxy& operator=(const ReadOnlyObjectWrapperProxy& rhs);

				// methods
				/*
				 * ReadOnlyObjectProperty getReadOnlyProperty();
				 */
				::javafx::beans::property::ReadOnlyObjectPropertyProxy getReadOnlyProperty();

			};
		}
	}
}


#endif
