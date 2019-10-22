#ifndef __javafx_beans_value_ObservableValueProxy_H
#define __javafx_beans_value_ObservableValueProxy_H


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
#include "javafx\beans\value\ChangeListenerProxyForward.h"

namespace javafx
{
	namespace beans
	{
		namespace value
		{
			class ObservableValueProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ObservableValueProxy(void* unused);
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
				ObservableValueProxy(jobject obj);

				virtual ~ObservableValueProxy();
				ObservableValueProxy& operator=(const ObservableValueProxy& rhs);

				// methods
				/*
				 * Object getValue();
				 */
				::java::lang::ObjectProxy getValue();
				/*
				 * void addListener(ChangeListener);
				 */
				void addListener(::javafx::beans::value::ChangeListenerProxy p0);
				/*
				 * void removeListener(ChangeListener);
				 */
				void removeListener(::javafx::beans::value::ChangeListenerProxy p0);

			};
		}
	}
}


#endif
