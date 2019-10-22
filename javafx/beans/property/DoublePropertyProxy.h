#ifndef __javafx_beans_property_DoublePropertyProxy_H
#define __javafx_beans_property_DoublePropertyProxy_H


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
#include "javafx\beans\property\ObjectPropertyProxyForward.h"
#include "javafx\beans\property\PropertyProxyForward.h"
#include "java\lang\NumberProxyForward.h"

namespace javafx
{
	namespace beans
	{
		namespace property
		{
			class DoublePropertyProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				DoublePropertyProxy(void* unused);
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
				DoublePropertyProxy(jobject obj);
				DoublePropertyProxy();

				virtual ~DoublePropertyProxy();
				DoublePropertyProxy& operator=(const DoublePropertyProxy& rhs);

				// methods
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * ObjectProperty asObject();
				 */
				::javafx::beans::property::ObjectPropertyProxy asObject();
				/*
				 * static DoubleProperty doubleProperty(Property);
				 */
				static ::javafx::beans::property::DoublePropertyProxy doubleProperty(::javafx::beans::property::PropertyProxy p0);
				/*
				 * void bindBidirectional(Property);
				 */
				void bindBidirectional(::javafx::beans::property::PropertyProxy p0);
				/*
				 * void setValue(Number);
				 */
				void setValue(::java::lang::NumberProxy p0);
				/*
				 * void unbindBidirectional(Property);
				 */
				void unbindBidirectional(::javafx::beans::property::PropertyProxy p0);

			};
		}
	}
}


#endif
