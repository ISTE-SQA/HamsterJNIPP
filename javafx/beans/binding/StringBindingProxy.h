#ifndef __javafx_beans_binding_StringBindingProxy_H
#define __javafx_beans_binding_StringBindingProxy_H


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
#include "javafx\beans\InvalidationListenerProxyForward.h"
#include "javafx\beans\value\ChangeListenerProxyForward.h"
#include "com\sun\javafx\binding\BindingHelperObserverProxyForward.h"
#include "com\sun\javafx\binding\ExpressionHelperProxyForward.h"

namespace javafx
{
	namespace beans
	{
		namespace binding
		{
			class StringBindingProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				StringBindingProxy(void* unused);
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
				StringBindingProxy(jobject obj);
				StringBindingProxy();

				virtual ~StringBindingProxy();
				StringBindingProxy& operator=(const StringBindingProxy& rhs);

				// methods
				/*
				 * boolean isValid();
				 */
				jboolean isValid();
				/*
				 * String get();
				 */
				::net::sourceforge::jnipp::JStringHelper get();
				/*
				 * void invalidate();
				 */
				void invalidate();
				/*
				 * Object get();
				 */
				::java::lang::ObjectProxy get();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * ObservableList getDependencies();
				 */
				::javafx::collections::ObservableListProxy getDependencies();
				/*
				 * void addListener(InvalidationListener);
				 */
				void addListener(::javafx::beans::InvalidationListenerProxy p0);
				/*
				 * void addListener(ChangeListener);
				 */
				void addListener(::javafx::beans::value::ChangeListenerProxy p0);
				/*
				 * void dispose();
				 */
				void dispose();
				/*
				 * void removeListener(InvalidationListener);
				 */
				void removeListener(::javafx::beans::InvalidationListenerProxy p0);
				/*
				 * void removeListener(ChangeListener);
				 */
				void removeListener(::javafx::beans::value::ChangeListenerProxy p0);

			};
		}
	}
}


#endif
