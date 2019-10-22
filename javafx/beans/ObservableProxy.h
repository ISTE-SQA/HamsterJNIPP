#ifndef __javafx_beans_ObservableProxy_H
#define __javafx_beans_ObservableProxy_H


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
#include "javafx\beans\InvalidationListenerProxyForward.h"

namespace javafx
{
	namespace beans
	{
		class ObservableProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ObservableProxy(void* unused);
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
			ObservableProxy(jobject obj);

			virtual ~ObservableProxy();
			ObservableProxy& operator=(const ObservableProxy& rhs);

			// methods
			/*
			 * void addListener(InvalidationListener);
			 */
			void addListener(::javafx::beans::InvalidationListenerProxy p0);
			/*
			 * void removeListener(InvalidationListener);
			 */
			void removeListener(::javafx::beans::InvalidationListenerProxy p0);

		};
	}
}


#endif
