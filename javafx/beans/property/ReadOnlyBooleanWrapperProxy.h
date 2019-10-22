#ifndef __javafx_beans_property_ReadOnlyBooleanWrapperProxy_H
#define __javafx_beans_property_ReadOnlyBooleanWrapperProxy_H


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
#include "javafx\beans\property\ReadOnlyBooleanPropertyProxyForward.h"
#include "javafx\beans\property\ReadOnlyBooleanWrapper_ReadOnlyPropertyImplProxyForward.h"

namespace javafx
{
	namespace beans
	{
		namespace property
		{
			class ReadOnlyBooleanWrapperProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ReadOnlyBooleanWrapperProxy(void* unused);
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
				ReadOnlyBooleanWrapperProxy(jobject obj);
				ReadOnlyBooleanWrapperProxy();
				ReadOnlyBooleanWrapperProxy(jboolean p0);
				ReadOnlyBooleanWrapperProxy(::java::lang::ObjectProxy p0, ::net::sourceforge::jnipp::JStringHelper p1);
				ReadOnlyBooleanWrapperProxy(::java::lang::ObjectProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, jboolean p2);

				virtual ~ReadOnlyBooleanWrapperProxy();
				ReadOnlyBooleanWrapperProxy& operator=(const ReadOnlyBooleanWrapperProxy& rhs);

				// methods
				/*
				 * ReadOnlyBooleanProperty getReadOnlyProperty();
				 */
				::javafx::beans::property::ReadOnlyBooleanPropertyProxy getReadOnlyProperty();

			};
		}
	}
}


#endif
