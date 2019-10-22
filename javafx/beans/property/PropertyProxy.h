#ifndef __javafx_beans_property_PropertyProxy_H
#define __javafx_beans_property_PropertyProxy_H


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

namespace javafx
{
	namespace beans
	{
		namespace property
		{
			class PropertyProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				PropertyProxy(void* unused);
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
				PropertyProxy(jobject obj);

				virtual ~PropertyProxy();
				PropertyProxy& operator=(const PropertyProxy& rhs);

				// methods
				/*
				 * boolean isBound();
				 */
				jboolean isBound();
				/*
				 * void bind(ObservableValue);
				 */
				void bind(::javafx::beans::value::ObservableValueProxy p0);
				/*
				 * void bindBidirectional(Property);
				 */
				void bindBidirectional(::javafx::beans::property::PropertyProxy p0);
				/*
				 * void unbind();
				 */
				void unbind();
				/*
				 * void unbindBidirectional(Property);
				 */
				void unbindBidirectional(::javafx::beans::property::PropertyProxy p0);

			};
		}
	}
}


#endif
