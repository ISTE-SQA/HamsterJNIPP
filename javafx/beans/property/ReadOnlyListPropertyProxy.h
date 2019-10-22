#ifndef __javafx_beans_property_ReadOnlyListPropertyProxy_H
#define __javafx_beans_property_ReadOnlyListPropertyProxy_H


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

namespace javafx
{
	namespace beans
	{
		namespace property
		{
			class ReadOnlyListPropertyProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ReadOnlyListPropertyProxy(void* unused);
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
				ReadOnlyListPropertyProxy(jobject obj);
				ReadOnlyListPropertyProxy();

				virtual ~ReadOnlyListPropertyProxy();
				ReadOnlyListPropertyProxy& operator=(const ReadOnlyListPropertyProxy& rhs);

				// methods
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * void bindContent(ObservableList);
				 */
				void bindContent(::javafx::collections::ObservableListProxy p0);
				/*
				 * void bindContentBidirectional(ObservableList);
				 */
				void bindContentBidirectional(::javafx::collections::ObservableListProxy p0);
				/*
				 * void unbindContent(Object);
				 */
				void unbindContent(::java::lang::ObjectProxy p0);
				/*
				 * void unbindContentBidirectional(Object);
				 */
				void unbindContentBidirectional(::java::lang::ObjectProxy p0);

			};
		}
	}
}


#endif
