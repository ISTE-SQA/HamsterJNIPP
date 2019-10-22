#ifndef __javafx_beans_value_ChangeListenerProxy_H
#define __javafx_beans_value_ChangeListenerProxy_H


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
#include "javafx\beans\value\ObservableValueProxyForward.h"
#include "java\lang\ObjectProxyForward.h"

namespace javafx
{
	namespace beans
	{
		namespace value
		{
			class ChangeListenerProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ChangeListenerProxy(void* unused);
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
				ChangeListenerProxy(jobject obj);

				virtual ~ChangeListenerProxy();
				ChangeListenerProxy& operator=(const ChangeListenerProxy& rhs);

				// methods
				/*
				 * void changed(ObservableValue, Object, Object);
				 */
				void changed(::javafx::beans::value::ObservableValueProxy p0, ::java::lang::ObjectProxy p1, ::java::lang::ObjectProxy p2);

			};
		}
	}
}


#endif
