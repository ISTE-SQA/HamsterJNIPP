#ifndef __java_text_AttributedCharacterIteratorProxy_H
#define __java_text_AttributedCharacterIteratorProxy_H


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
#include "java\text\AttributedCharacterIterator_AttributeProxyForward.h"
#include "java\util\SetProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\util\MapProxyForward.h"

namespace java
{
	namespace text
	{
		class AttributedCharacterIteratorProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			AttributedCharacterIteratorProxy(void* unused);
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
			AttributedCharacterIteratorProxy(jobject obj);

			virtual ~AttributedCharacterIteratorProxy();
			AttributedCharacterIteratorProxy& operator=(const AttributedCharacterIteratorProxy& rhs);

			// methods
			/*
			 * int getRunLimit();
			 */
			jint getRunLimit();
			/*
			 * int getRunLimit(AttributedCharacterIterator$Attribute);
			 */
			jint getRunLimit(::java::text::AttributedCharacterIterator_AttributeProxy p0);
			/*
			 * int getRunLimit(Set);
			 */
			jint getRunLimit(::java::util::SetProxy p0);
			/*
			 * int getRunStart();
			 */
			jint getRunStart();
			/*
			 * int getRunStart(AttributedCharacterIterator$Attribute);
			 */
			jint getRunStart(::java::text::AttributedCharacterIterator_AttributeProxy p0);
			/*
			 * int getRunStart(Set);
			 */
			jint getRunStart(::java::util::SetProxy p0);
			/*
			 * Object getAttribute(AttributedCharacterIterator$Attribute);
			 */
			::java::lang::ObjectProxy getAttribute(::java::text::AttributedCharacterIterator_AttributeProxy p0);
			/*
			 * Map getAttributes();
			 */
			::java::util::MapProxy getAttributes();
			/*
			 * Set getAllAttributeKeys();
			 */
			::java::util::SetProxy getAllAttributeKeys();

		};
	}
}


#endif
