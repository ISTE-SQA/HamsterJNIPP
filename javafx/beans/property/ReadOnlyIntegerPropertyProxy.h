#ifndef __javafx_beans_property_ReadOnlyIntegerPropertyProxy_H
#define __javafx_beans_property_ReadOnlyIntegerPropertyProxy_H


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
#include "javafx\beans\property\ReadOnlyObjectPropertyProxyForward.h"
#include "javafx\beans\property\ReadOnlyPropertyProxyForward.h"

namespace javafx
{
	namespace beans
	{
		namespace property
		{
			class ReadOnlyIntegerPropertyProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ReadOnlyIntegerPropertyProxy(void* unused);
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
				ReadOnlyIntegerPropertyProxy(jobject obj);
				ReadOnlyIntegerPropertyProxy();

				virtual ~ReadOnlyIntegerPropertyProxy();
				ReadOnlyIntegerPropertyProxy& operator=(const ReadOnlyIntegerPropertyProxy& rhs);

				// methods
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * ReadOnlyObjectProperty asObject();
				 */
				::javafx::beans::property::ReadOnlyObjectPropertyProxy asObject();
				/*
				 * static ReadOnlyIntegerProperty readOnlyIntegerProperty(ReadOnlyProperty);
				 */
				static ::javafx::beans::property::ReadOnlyIntegerPropertyProxy readOnlyIntegerProperty(::javafx::beans::property::ReadOnlyPropertyProxy p0);

			};
		}
	}
}


#endif
