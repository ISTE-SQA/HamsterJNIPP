#ifndef __javafx_collections_ListChangeListenerProxy_H
#define __javafx_collections_ListChangeListenerProxy_H


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
#include "javafx\collections\ListChangeListener_ChangeProxyForward.h"

namespace javafx
{
	namespace collections
	{
		class ListChangeListenerProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ListChangeListenerProxy(void* unused);
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
			ListChangeListenerProxy(jobject obj);

			virtual ~ListChangeListenerProxy();
			ListChangeListenerProxy& operator=(const ListChangeListenerProxy& rhs);

			// methods
			/*
			 * void onChanged(ListChangeListener$Change);
			 */
			void onChanged(::javafx::collections::ListChangeListener_ChangeProxy p0);

		};
	}
}


#endif
