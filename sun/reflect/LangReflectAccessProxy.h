#ifndef __sun_reflect_LangReflectAccessProxy_H
#define __sun_reflect_LangReflectAccessProxy_H


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
#include "java\lang\reflect\ConstructorProxyForward.h"
#include "java\lang\reflect\ExecutableProxyForward.h"
#include "java\lang\ClassProxyForward.h"
#include "java\lang\reflect\FieldProxyForward.h"
#include "java\lang\reflect\MethodProxyForward.h"
#include "sun\reflect\ConstructorAccessorProxyForward.h"
#include "sun\reflect\MethodAccessorProxyForward.h"
#include "java\lang\ClassProxy.h"

namespace sun
{
	namespace reflect
	{
		class LangReflectAccessProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			LangReflectAccessProxy(void* unused);
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
			LangReflectAccessProxy(jobject obj);

			virtual ~LangReflectAccessProxy();
			LangReflectAccessProxy& operator=(const LangReflectAccessProxy& rhs);

			// methods
			/*
			 * byte[] getConstructorAnnotations(Constructor);
			 */
			::net::sourceforge::jnipp::JByteArrayHelper<1> getConstructorAnnotations(::java::lang::reflect::ConstructorProxy p0);
			/*
			 * byte[] getConstructorParameterAnnotations(Constructor);
			 */
			::net::sourceforge::jnipp::JByteArrayHelper<1> getConstructorParameterAnnotations(::java::lang::reflect::ConstructorProxy p0);
			/*
			 * byte[] getExecutableTypeAnnotationBytes(Executable);
			 */
			::net::sourceforge::jnipp::JByteArrayHelper<1> getExecutableTypeAnnotationBytes(::java::lang::reflect::ExecutableProxy p0);
			/*
			 * int getConstructorSlot(Constructor);
			 */
			jint getConstructorSlot(::java::lang::reflect::ConstructorProxy p0);
			/*
			 * String getConstructorSignature(Constructor);
			 */
			::net::sourceforge::jnipp::JStringHelper getConstructorSignature(::java::lang::reflect::ConstructorProxy p0);
			/*
			 * Constructor copyConstructor(Constructor);
			 */
			::java::lang::reflect::ConstructorProxy copyConstructor(::java::lang::reflect::ConstructorProxy p0);
			/*
			 * Constructor newConstructor(Class, Class[], Class[], int, int, String, byte[], byte[]);
			 */
			::java::lang::reflect::ConstructorProxy newConstructor(::java::lang::ClassProxy p0, ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p1, ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p2, jint p3, jint p4, ::net::sourceforge::jnipp::JStringHelper p5, ::net::sourceforge::jnipp::JByteArrayHelper<1> p6, ::net::sourceforge::jnipp::JByteArrayHelper<1> p7);
			/*
			 * Field copyField(Field);
			 */
			::java::lang::reflect::FieldProxy copyField(::java::lang::reflect::FieldProxy p0);
			/*
			 * Field newField(Class, String, Class, int, int, String, byte[]);
			 */
			::java::lang::reflect::FieldProxy newField(::java::lang::ClassProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::java::lang::ClassProxy p2, jint p3, jint p4, ::net::sourceforge::jnipp::JStringHelper p5, ::net::sourceforge::jnipp::JByteArrayHelper<1> p6);
			/*
			 * Method copyMethod(Method);
			 */
			::java::lang::reflect::MethodProxy copyMethod(::java::lang::reflect::MethodProxy p0);
			/*
			 * Method newMethod(Class, String, Class[], Class, Class[], int, int, String, byte[], byte[], byte[]);
			 */
			::java::lang::reflect::MethodProxy newMethod(::java::lang::ClassProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p2, ::java::lang::ClassProxy p3, ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p4, jint p5, jint p6, ::net::sourceforge::jnipp::JStringHelper p7, ::net::sourceforge::jnipp::JByteArrayHelper<1> p8, ::net::sourceforge::jnipp::JByteArrayHelper<1> p9, ::net::sourceforge::jnipp::JByteArrayHelper<1> p10);
			/*
			 * ConstructorAccessor getConstructorAccessor(Constructor);
			 */
			::sun::reflect::ConstructorAccessorProxy getConstructorAccessor(::java::lang::reflect::ConstructorProxy p0);
			/*
			 * MethodAccessor getMethodAccessor(Method);
			 */
			::sun::reflect::MethodAccessorProxy getMethodAccessor(::java::lang::reflect::MethodProxy p0);
			/*
			 * void setConstructorAccessor(Constructor, ConstructorAccessor);
			 */
			void setConstructorAccessor(::java::lang::reflect::ConstructorProxy p0, ::sun::reflect::ConstructorAccessorProxy p1);
			/*
			 * void setMethodAccessor(Method, MethodAccessor);
			 */
			void setMethodAccessor(::java::lang::reflect::MethodProxy p0, ::sun::reflect::MethodAccessorProxy p1);

		};
	}
}


#endif
