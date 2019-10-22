#ifndef __com_sun_javafx_binding_BindingHelperObserverProxy_H
#define __com_sun_javafx_binding_BindingHelperObserverProxy_H


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
#include "javafx\beans\binding\BindingProxyForward.h"
#include "javafx\beans\ObservableProxyForward.h"
#include "java\lang\ref\WeakReferenceProxyForward.h"

namespace com
{
	namespace sun
	{
		namespace javafx
		{
			namespace binding
			{
				class BindingHelperObserverProxy
				{
				private:
					static std::string className;
					static jclass objectClass;
					jobject peerObject;

				protected:
					BindingHelperObserverProxy(void* unused);
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
					BindingHelperObserverProxy(jobject obj);
					BindingHelperObserverProxy(::javafx::beans::binding::BindingProxy p0);

					virtual ~BindingHelperObserverProxy();
					BindingHelperObserverProxy& operator=(const BindingHelperObserverProxy& rhs);

					// methods
					/*
					 * void invalidated(Observable);
					 */
					void invalidated(::javafx::beans::ObservableProxy p0);

				};
			}
		}
	}
}


#endif
