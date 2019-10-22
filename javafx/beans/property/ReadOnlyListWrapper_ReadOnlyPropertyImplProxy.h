#ifndef __javafx_beans_property_ReadOnlyListWrapper_ReadOnlyPropertyImplProxy_H
#define __javafx_beans_property_ReadOnlyListWrapper_ReadOnlyPropertyImplProxy_H


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
#include "javafx\beans\property\ReadOnlyBooleanPropertyProxyForward.h"
#include "javafx\beans\property\ReadOnlyIntegerPropertyProxyForward.h"
#include "javafx\collections\ObservableListProxyForward.h"
#include "javafx\beans\property\ReadOnlyListWrapperProxyForward.h"

namespace javafx
{
	namespace beans
	{
		namespace property
		{
			class ReadOnlyListWrapper_ReadOnlyPropertyImplProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ReadOnlyListWrapper_ReadOnlyPropertyImplProxy(void* unused);
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
				ReadOnlyListWrapper_ReadOnlyPropertyImplProxy(jobject obj);

				virtual ~ReadOnlyListWrapper_ReadOnlyPropertyImplProxy();
				ReadOnlyListWrapper_ReadOnlyPropertyImplProxy& operator=(const ReadOnlyListWrapper_ReadOnlyPropertyImplProxy& rhs);

				// methods
				/*
				 * Object getBean();
				 */
				::java::lang::ObjectProxy getBean();
				/*
				 * String getName();
				 */
				::net::sourceforge::jnipp::JStringHelper getName();
				/*
				 * ReadOnlyBooleanProperty emptyProperty();
				 */
				::javafx::beans::property::ReadOnlyBooleanPropertyProxy emptyProperty();
				/*
				 * ReadOnlyIntegerProperty sizeProperty();
				 */
				::javafx::beans::property::ReadOnlyIntegerPropertyProxy sizeProperty();
				/*
				 * ObservableList get();
				 */
				::javafx::collections::ObservableListProxy get();

			};
		}
	}
}


#endif
