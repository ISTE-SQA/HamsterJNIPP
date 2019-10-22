#ifndef __sun_reflect_ReflectionFactoryProxy_H
#define __sun_reflect_ReflectionFactoryProxy_H


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
#include "java\lang\reflect\ExecutableProxyForward.h"
#include "java\lang\ClassProxyForward.h"
#include "java\io\OptionalDataExceptionProxyForward.h"
#include "java\lang\invoke\MethodHandleProxyForward.h"
#include "java\lang\reflect\ConstructorProxyForward.h"
#include "java\lang\reflect\FieldProxyForward.h"
#include "java\lang\reflect\MethodProxyForward.h"
#include "sun\reflect\ConstructorAccessorProxyForward.h"
#include "sun\reflect\FieldAccessorProxyForward.h"
#include "sun\reflect\MethodAccessorProxyForward.h"
#include "sun\reflect\LangReflectAccessProxyForward.h"
#include "java\security\PermissionProxyForward.h"
#include "java\lang\ClassProxy.h"

namespace sun
{
	namespace reflect
	{
		class ReflectionFactoryProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ReflectionFactoryProxy(void* unused);
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
			ReflectionFactoryProxy(jobject obj);

			virtual ~ReflectionFactoryProxy();
			ReflectionFactoryProxy& operator=(const ReflectionFactoryProxy& rhs);

			// methods
			/*
			 * byte[] getExecutableTypeAnnotationBytes(Executable);
			 */
			::net::sourceforge::jnipp::JByteArrayHelper<1> getExecutableTypeAnnotationBytes(::java::lang::reflect::ExecutableProxy p0);
			/*
			 * boolean hasStaticInitializerForSerialization(Class);
			 */
			jboolean hasStaticInitializerForSerialization(::java::lang::ClassProxy p0);
			/*
			 * OptionalDataException newOptionalDataExceptionForSerialization(boolean);
			 */
			::java::io::OptionalDataExceptionProxy newOptionalDataExceptionForSerialization(jboolean p0);
			/*
			 * MethodHandle readObjectForSerialization(Class);
			 */
			::java::lang::invoke::MethodHandleProxy readObjectForSerialization(::java::lang::ClassProxy p0);
			/*
			 * MethodHandle readObjectNoDataForSerialization(Class);
			 */
			::java::lang::invoke::MethodHandleProxy readObjectNoDataForSerialization(::java::lang::ClassProxy p0);
			/*
			 * MethodHandle readResolveForSerialization(Class);
			 */
			::java::lang::invoke::MethodHandleProxy readResolveForSerialization(::java::lang::ClassProxy p0);
			/*
			 * MethodHandle writeObjectForSerialization(Class);
			 */
			::java::lang::invoke::MethodHandleProxy writeObjectForSerialization(::java::lang::ClassProxy p0);
			/*
			 * MethodHandle writeReplaceForSerialization(Class);
			 */
			::java::lang::invoke::MethodHandleProxy writeReplaceForSerialization(::java::lang::ClassProxy p0);
			/*
			 * Constructor newConstructorForExternalization(Class);
			 */
			::java::lang::reflect::ConstructorProxy newConstructorForExternalization(::java::lang::ClassProxy p0);
			/*
			 * Constructor newConstructorForSerialization(Class);
			 */
			::java::lang::reflect::ConstructorProxy newConstructorForSerialization(::java::lang::ClassProxy p0);
			/*
			 * Constructor copyConstructor(Constructor);
			 */
			::java::lang::reflect::ConstructorProxy copyConstructor(::java::lang::reflect::ConstructorProxy p0);
			/*
			 * Constructor newConstructor(Class, Class[], Class[], int, int, String, byte[], byte[]);
			 */
			::java::lang::reflect::ConstructorProxy newConstructor(::java::lang::ClassProxy p0, ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p1, ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p2, jint p3, jint p4, ::net::sourceforge::jnipp::JStringHelper p5, ::net::sourceforge::jnipp::JByteArrayHelper<1> p6, ::net::sourceforge::jnipp::JByteArrayHelper<1> p7);
			/*
			 * Constructor newConstructorForSerialization(Class, Constructor);
			 */
			::java::lang::reflect::ConstructorProxy newConstructorForSerialization(::java::lang::ClassProxy p0, ::java::lang::reflect::ConstructorProxy p1);
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
			 * static ReflectionFactory getReflectionFactory();
			 */
			static ::sun::reflect::ReflectionFactoryProxy getReflectionFactory();
			/*
			 * ConstructorAccessor getConstructorAccessor(Constructor);
			 */
			::sun::reflect::ConstructorAccessorProxy getConstructorAccessor(::java::lang::reflect::ConstructorProxy p0);
			/*
			 * ConstructorAccessor newConstructorAccessor(Constructor);
			 */
			::sun::reflect::ConstructorAccessorProxy newConstructorAccessor(::java::lang::reflect::ConstructorProxy p0);
			/*
			 * FieldAccessor newFieldAccessor(Field, boolean);
			 */
			::sun::reflect::FieldAccessorProxy newFieldAccessor(::java::lang::reflect::FieldProxy p0, jboolean p1);
			/*
			 * MethodAccessor getMethodAccessor(Method);
			 */
			::sun::reflect::MethodAccessorProxy getMethodAccessor(::java::lang::reflect::MethodProxy p0);
			/*
			 * MethodAccessor newMethodAccessor(Method);
			 */
			::sun::reflect::MethodAccessorProxy newMethodAccessor(::java::lang::reflect::MethodProxy p0);
			/*
			 * void setConstructorAccessor(Constructor, ConstructorAccessor);
			 */
			void setConstructorAccessor(::java::lang::reflect::ConstructorProxy p0, ::sun::reflect::ConstructorAccessorProxy p1);
			/*
			 * void setLangReflectAccess(LangReflectAccess);
			 */
			void setLangReflectAccess(::sun::reflect::LangReflectAccessProxy p0);
			/*
			 * void setMethodAccessor(Method, MethodAccessor);
			 */
			void setMethodAccessor(::java::lang::reflect::MethodProxy p0, ::sun::reflect::MethodAccessorProxy p1);

		};
	}
}


#endif
