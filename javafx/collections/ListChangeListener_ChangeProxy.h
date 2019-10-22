#ifndef __javafx_collections_ListChangeListener_ChangeProxy_H
#define __javafx_collections_ListChangeListener_ChangeProxy_H


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
#include "java\util\ListProxyForward.h"

namespace javafx
{
	namespace collections
	{
		class ListChangeListener_ChangeProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ListChangeListener_ChangeProxy(void* unused);
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
			ListChangeListener_ChangeProxy(jobject obj);
			ListChangeListener_ChangeProxy(::javafx::collections::ObservableListProxy p0);

			virtual ~ListChangeListener_ChangeProxy();
			ListChangeListener_ChangeProxy& operator=(const ListChangeListener_ChangeProxy& rhs);

			// methods
			/*
			 * boolean next();
			 */
			jboolean next();
			/*
			 * int getFrom();
			 */
			jint getFrom();
			/*
			 * int getTo();
			 */
			jint getTo();
			/*
			 * List getRemoved();
			 */
			::java::util::ListProxy getRemoved();
			/*
			 * void reset();
			 */
			void reset();
			/*
			 * boolean wasAdded();
			 */
			jboolean wasAdded();
			/*
			 * boolean wasPermutated();
			 */
			jboolean wasPermutated();
			/*
			 * boolean wasRemoved();
			 */
			jboolean wasRemoved();
			/*
			 * boolean wasReplaced();
			 */
			jboolean wasReplaced();
			/*
			 * boolean wasUpdated();
			 */
			jboolean wasUpdated();
			/*
			 * int getAddedSize();
			 */
			jint getAddedSize();
			/*
			 * int getPermutation(int);
			 */
			jint getPermutation(jint p0);
			/*
			 * int getRemovedSize();
			 */
			jint getRemovedSize();
			/*
			 * List getAddedSubList();
			 */
			::java::util::ListProxy getAddedSubList();
			/*
			 * ObservableList getList();
			 */
			::javafx::collections::ObservableListProxy getList();

		};
	}
}


#endif
