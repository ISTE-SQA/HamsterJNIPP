#ifndef __sun_invoke_util_WrapperProxy_H
#define __sun_invoke_util_WrapperProxy_H


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
#include "java\lang\ClassProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "sun\invoke\util\WrapperProxy.h"
#include "java\lang\ObjectProxy.h"

namespace sun
{
	namespace invoke
	{
		namespace util
		{
			class WrapperProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				WrapperProxy(void* unused);
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
				WrapperProxy(jobject obj);

				virtual ~WrapperProxy();
				WrapperProxy& operator=(const WrapperProxy& rhs);

				// methods
				/*
				 * boolean isConvertibleFrom(Wrapper);
				 */
				jboolean isConvertibleFrom(::sun::invoke::util::WrapperProxy p0);
				/*
				 * boolean isDoubleWord();
				 */
				jboolean isDoubleWord();
				/*
				 * boolean isFloating();
				 */
				jboolean isFloating();
				/*
				 * boolean isIntegral();
				 */
				jboolean isIntegral();
				/*
				 * boolean isNumeric();
				 */
				jboolean isNumeric();
				/*
				 * boolean isOther();
				 */
				jboolean isOther();
				/*
				 * boolean isSigned();
				 */
				jboolean isSigned();
				/*
				 * boolean isSingleWord();
				 */
				jboolean isSingleWord();
				/*
				 * boolean isSubwordOrInt();
				 */
				jboolean isSubwordOrInt();
				/*
				 * boolean isUnsigned();
				 */
				jboolean isUnsigned();
				/*
				 * char basicTypeChar();
				 */
				jchar basicTypeChar();
				/*
				 * int bitWidth();
				 */
				jint bitWidth();
				/*
				 * int stackSlots();
				 */
				jint stackSlots();
				/*
				 * Class arrayType();
				 */
				::java::lang::ClassProxy arrayType();
				/*
				 * Class primitiveType();
				 */
				::java::lang::ClassProxy primitiveType();
				/*
				 * Class wrapperType();
				 */
				::java::lang::ClassProxy wrapperType();
				/*
				 * Class wrapperType(Class);
				 */
				::java::lang::ClassProxy wrapperType(::java::lang::ClassProxy p0);
				/*
				 * Object cast(Object, Class);
				 */
				::java::lang::ObjectProxy cast(::java::lang::ObjectProxy p0, ::java::lang::ClassProxy p1);
				/*
				 * Object convert(Object, Class);
				 */
				::java::lang::ObjectProxy convert(::java::lang::ObjectProxy p0, ::java::lang::ClassProxy p1);
				/*
				 * Object makeArray(int);
				 */
				::java::lang::ObjectProxy makeArray(jint p0);
				/*
				 * Object wrap(int);
				 */
				::java::lang::ObjectProxy wrap(jint p0);
				/*
				 * Object wrap(Object);
				 */
				::java::lang::ObjectProxy wrap(::java::lang::ObjectProxy p0);
				/*
				 * Object zero();
				 */
				::java::lang::ObjectProxy zero();
				/*
				 * Object zero(Class);
				 */
				::java::lang::ObjectProxy zero(::java::lang::ClassProxy p0);
				/*
				 * String detailString();
				 */
				::net::sourceforge::jnipp::JStringHelper detailString();
				/*
				 * String primitiveSimpleName();
				 */
				::net::sourceforge::jnipp::JStringHelper primitiveSimpleName();
				/*
				 * String wrapperSimpleName();
				 */
				::net::sourceforge::jnipp::JStringHelper wrapperSimpleName();
				/*
				 * static boolean isPrimitiveType(Class);
				 */
				static jboolean isPrimitiveType(::java::lang::ClassProxy p0);
				/*
				 * static boolean isWrapperType(Class);
				 */
				static jboolean isWrapperType(::java::lang::ClassProxy p0);
				/*
				 * static char basicTypeChar(Class);
				 */
				static jchar basicTypeChar(::java::lang::ClassProxy p0);
				/*
				 * static Class asPrimitiveType(Class);
				 */
				static ::java::lang::ClassProxy asPrimitiveType(::java::lang::ClassProxy p0);
				/*
				 * static Class asWrapperType(Class);
				 */
				static ::java::lang::ClassProxy asWrapperType(::java::lang::ClassProxy p0);
				/*
				 * static Wrapper forBasicType(char);
				 */
				static ::sun::invoke::util::WrapperProxy forBasicType(jchar p0);
				/*
				 * static Wrapper forBasicType(Class);
				 */
				static ::sun::invoke::util::WrapperProxy forBasicType(::java::lang::ClassProxy p0);
				/*
				 * static Wrapper forPrimitiveType(Class);
				 */
				static ::sun::invoke::util::WrapperProxy forPrimitiveType(::java::lang::ClassProxy p0);
				/*
				 * static Wrapper forWrapperType(Class);
				 */
				static ::sun::invoke::util::WrapperProxy forWrapperType(::java::lang::ClassProxy p0);
				/*
				 * static Wrapper valueOf(String);
				 */
				static ::sun::invoke::util::WrapperProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * static Wrapper[] values();
				 */
				static ::net::sourceforge::jnipp::PA<::sun::invoke::util::WrapperProxy>::ProxyArray<1> values();
				/*
				 * void copyArrayBoxing(Object, int, Object[], int, int);
				 */
				void copyArrayBoxing(::java::lang::ObjectProxy p0, jint p1, ::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p2, jint p3, jint p4);
				/*
				 * void copyArrayUnboxing(Object[], int, Object, int, int);
				 */
				void copyArrayUnboxing(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0, jint p1, ::java::lang::ObjectProxy p2, jint p3, jint p4);

			};
		}
	}
}


#endif
