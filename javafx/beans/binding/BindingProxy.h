#ifndef __javafx_beans_binding_BindingProxy_H
#define __javafx_beans_binding_BindingProxy_H


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
#include "javafx\collections\ObservableListProxyForward.h"

namespace javafx
{
	namespace beans
	{
		namespace binding
		{
			class BindingProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				BindingProxy(void* unused);
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
				BindingProxy(jobject obj);

				virtual ~BindingProxy();
				BindingProxy& operator=(const BindingProxy& rhs);

				// methods
				/*
				 * boolean isValid();
				 */
				jboolean isValid();
				/*
				 * ObservableList getDependencies();
				 */
				::javafx::collections::ObservableListProxy getDependencies();
				/*
				 * void dispose();
				 */
				void dispose();
				/*
				 * void invalidate();
				 */
				void invalidate();

			};
		}
	}
}


#endif
