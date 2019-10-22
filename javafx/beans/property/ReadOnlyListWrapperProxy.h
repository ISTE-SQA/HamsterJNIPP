#ifndef __javafx_beans_property_ReadOnlyListWrapperProxy_H
#define __javafx_beans_property_ReadOnlyListWrapperProxy_H


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
#include "javafx\collections\ObservableListProxyForward.h"
#include "javafx\beans\property\ReadOnlyListPropertyProxyForward.h"
#include "javafx\beans\property\ReadOnlyListWrapper_ReadOnlyPropertyImplProxyForward.h"

namespace javafx
{
	namespace beans
	{
		namespace property
		{
			class ReadOnlyListWrapperProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ReadOnlyListWrapperProxy(void* unused);
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
				ReadOnlyListWrapperProxy(jobject obj);
				ReadOnlyListWrapperProxy();
				ReadOnlyListWrapperProxy(::java::lang::ObjectProxy p0, ::net::sourceforge::jnipp::JStringHelper p1);
				ReadOnlyListWrapperProxy(::java::lang::ObjectProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::javafx::collections::ObservableListProxy p2);
				ReadOnlyListWrapperProxy(::javafx::collections::ObservableListProxy p0);

				virtual ~ReadOnlyListWrapperProxy();
				ReadOnlyListWrapperProxy& operator=(const ReadOnlyListWrapperProxy& rhs);

				// methods
				/*
				 * ReadOnlyListProperty getReadOnlyProperty();
				 */
				::javafx::beans::property::ReadOnlyListPropertyProxy getReadOnlyProperty();

			};
		}
	}
}


#endif
