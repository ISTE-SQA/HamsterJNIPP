#ifndef __com_sun_javafx_binding_ExpressionHelperProxy_H
#define __com_sun_javafx_binding_ExpressionHelperProxy_H


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
#include "javafx\beans\InvalidationListenerProxyForward.h"
#include "javafx\beans\value\ChangeListenerProxyForward.h"

namespace com
{
	namespace sun
	{
		namespace javafx
		{
			namespace binding
			{
				class ExpressionHelperProxy
				{
				private:
					static std::string className;
					static jclass objectClass;
					jobject peerObject;

				protected:
					ExpressionHelperProxy(void* unused);
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
					ExpressionHelperProxy(jobject obj);

					virtual ~ExpressionHelperProxy();
					ExpressionHelperProxy& operator=(const ExpressionHelperProxy& rhs);

					// methods
					/*
					 * static ExpressionHelper addListener(ExpressionHelper, ObservableValue, InvalidationListener);
					 */
					static ::com::sun::javafx::binding::ExpressionHelperProxy addListener(::com::sun::javafx::binding::ExpressionHelperProxy p0, ::javafx::beans::value::ObservableValueProxy p1, ::javafx::beans::InvalidationListenerProxy p2);
					/*
					 * static ExpressionHelper addListener(ExpressionHelper, ObservableValue, ChangeListener);
					 */
					static ::com::sun::javafx::binding::ExpressionHelperProxy addListener(::com::sun::javafx::binding::ExpressionHelperProxy p0, ::javafx::beans::value::ObservableValueProxy p1, ::javafx::beans::value::ChangeListenerProxy p2);
					/*
					 * static ExpressionHelper removeListener(ExpressionHelper, InvalidationListener);
					 */
					static ::com::sun::javafx::binding::ExpressionHelperProxy removeListener(::com::sun::javafx::binding::ExpressionHelperProxy p0, ::javafx::beans::InvalidationListenerProxy p1);
					/*
					 * static ExpressionHelper removeListener(ExpressionHelper, ChangeListener);
					 */
					static ::com::sun::javafx::binding::ExpressionHelperProxy removeListener(::com::sun::javafx::binding::ExpressionHelperProxy p0, ::javafx::beans::value::ChangeListenerProxy p1);
					/*
					 * static void fireValueChangedEvent(ExpressionHelper);
					 */
					static void fireValueChangedEvent(::com::sun::javafx::binding::ExpressionHelperProxy p0);

				};
			}
		}
	}
}


#endif
