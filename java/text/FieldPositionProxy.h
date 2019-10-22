#ifndef __java_text_FieldPositionProxy_H
#define __java_text_FieldPositionProxy_H


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
#include "java\text\Format_FieldProxyForward.h"
#include "java\lang\ObjectProxyForward.h"

namespace java
{
	namespace text
	{
		class FieldPositionProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			FieldPositionProxy(void* unused);
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
			FieldPositionProxy(jobject obj);
			FieldPositionProxy(jint p0);
			FieldPositionProxy(::java::text::Format_FieldProxy p0);
			FieldPositionProxy(::java::text::Format_FieldProxy p0, jint p1);

			virtual ~FieldPositionProxy();
			FieldPositionProxy& operator=(const FieldPositionProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * int getBeginIndex();
			 */
			jint getBeginIndex();
			/*
			 * int getEndIndex();
			 */
			jint getEndIndex();
			/*
			 * int getField();
			 */
			jint getField();
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * Format$Field getFieldAttribute();
			 */
			::java::text::Format_FieldProxy getFieldAttribute();
			/*
			 * void setBeginIndex(int);
			 */
			void setBeginIndex(jint p0);
			/*
			 * void setEndIndex(int);
			 */
			void setEndIndex(jint p0);

		};
	}
}


#endif
