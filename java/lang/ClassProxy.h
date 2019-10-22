#ifndef __java_lang_ClassProxy_H
#define __java_lang_ClassProxy_H


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
#include "java\io\InputStreamProxyForward.h"
#include "java\lang\ClassLoaderProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\lang\PackageProxyForward.h"
#include "java\lang\annotation\AnnotationProxyForward.h"
#include "java\lang\reflect\AnnotatedTypeProxyForward.h"
#include "java\lang\reflect\ConstructorProxyForward.h"
#include "java\lang\reflect\FieldProxyForward.h"
#include "java\lang\reflect\MethodProxyForward.h"
#include "java\lang\reflect\TypeProxyForward.h"
#include "java\net\URLProxyForward.h"
#include "java\security\ProtectionDomainProxyForward.h"
#include "sun\reflect\ReflectionFactoryProxyForward.h"
#include "java\lang\Class_AnnotationDataProxyForward.h"
#include "java\lang\ref\SoftReferenceProxyForward.h"
#include "java\util\MapProxyForward.h"
#include "sun\reflect\annotation\AnnotationTypeProxyForward.h"
#include "sun\reflect\generics\repository\ClassRepositoryProxyForward.h"
#include "java\lang\ClassValue_ClassValueMapProxyForward.h"
#include "java\lang\ClassProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\lang\annotation\AnnotationProxy.h"
#include "java\lang\reflect\AnnotatedTypeProxy.h"
#include "java\lang\reflect\ConstructorProxy.h"
#include "java\lang\reflect\FieldProxy.h"
#include "java\lang\reflect\MethodProxy.h"
#include "java\lang\reflect\TypeVariableProxy.h"
#include "java\lang\reflect\TypeProxy.h"
#include "java\io\ObjectStreamFieldProxy.h"

namespace java
{
	namespace lang
	{
		class ClassProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ClassProxy(void* unused);
			virtual jobject _getPeerObject() const;

		public:
			static jclass _getObjectClass();
			static inline std::string _getClassName()
			{
				return className;
			}

			jclass getObjectClass();
			operator jobject();
			operator jclass();
			// constructors
			ClassProxy(jobject obj);

			virtual ~ClassProxy();
			ClassProxy& operator=(const ClassProxy& rhs);

			// methods
			/*
			 * boolean desiredAssertionStatus();
			 */
			jboolean desiredAssertionStatus();
			/*
			 * boolean isAnnotation();
			 */
			jboolean isAnnotation();
			/*
			 * boolean isAnnotationPresent(Class);
			 */
			jboolean isAnnotationPresent(::java::lang::ClassProxy p0);
			/*
			 * boolean isAnonymousClass();
			 */
			jboolean isAnonymousClass();
			/*
			 * boolean isEnum();
			 */
			jboolean isEnum();
			/*
			 * boolean isLocalClass();
			 */
			jboolean isLocalClass();
			/*
			 * boolean isMemberClass();
			 */
			jboolean isMemberClass();
			/*
			 * boolean isSynthetic();
			 */
			jboolean isSynthetic();
			/*
			 * InputStream getResourceAsStream(String);
			 */
			::java::io::InputStreamProxy getResourceAsStream(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * Class asSubclass(Class);
			 */
			::java::lang::ClassProxy asSubclass(::java::lang::ClassProxy p0);
			/*
			 * Class getDeclaringClass();
			 */
			::java::lang::ClassProxy getDeclaringClass();
			/*
			 * Class getEnclosingClass();
			 */
			::java::lang::ClassProxy getEnclosingClass();
			/*
			 * ClassLoader getClassLoader();
			 */
			::java::lang::ClassLoaderProxy getClassLoader();
			/*
			 * Class[] getClasses();
			 */
			::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> getClasses();
			/*
			 * Class[] getDeclaredClasses();
			 */
			::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> getDeclaredClasses();
			/*
			 * Class[] getInterfaces();
			 */
			::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> getInterfaces();
			/*
			 * Object cast(Object);
			 */
			::java::lang::ObjectProxy cast(::java::lang::ObjectProxy p0);
			/*
			 * Object newInstance();
			 */
			::java::lang::ObjectProxy newInstance();
			/*
			 * Object[] getEnumConstants();
			 */
			::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> getEnumConstants();
			/*
			 * Package getPackage();
			 */
			::java::lang::PackageProxy getPackage();
			/*
			 * String getCanonicalName();
			 */
			::net::sourceforge::jnipp::JStringHelper getCanonicalName();
			/*
			 * String getName();
			 */
			::net::sourceforge::jnipp::JStringHelper getName();
			/*
			 * String getSimpleName();
			 */
			::net::sourceforge::jnipp::JStringHelper getSimpleName();
			/*
			 * String getTypeName();
			 */
			::net::sourceforge::jnipp::JStringHelper getTypeName();
			/*
			 * String toGenericString();
			 */
			::net::sourceforge::jnipp::JStringHelper toGenericString();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * Annotation getAnnotation(Class);
			 */
			::java::lang::annotation::AnnotationProxy getAnnotation(::java::lang::ClassProxy p0);
			/*
			 * Annotation getDeclaredAnnotation(Class);
			 */
			::java::lang::annotation::AnnotationProxy getDeclaredAnnotation(::java::lang::ClassProxy p0);
			/*
			 * Annotation[] getAnnotations();
			 */
			::net::sourceforge::jnipp::PA<::java::lang::annotation::AnnotationProxy>::ProxyArray<1> getAnnotations();
			/*
			 * Annotation[] getAnnotationsByType(Class);
			 */
			::net::sourceforge::jnipp::PA<::java::lang::annotation::AnnotationProxy>::ProxyArray<1> getAnnotationsByType(::java::lang::ClassProxy p0);
			/*
			 * Annotation[] getDeclaredAnnotations();
			 */
			::net::sourceforge::jnipp::PA<::java::lang::annotation::AnnotationProxy>::ProxyArray<1> getDeclaredAnnotations();
			/*
			 * Annotation[] getDeclaredAnnotationsByType(Class);
			 */
			::net::sourceforge::jnipp::PA<::java::lang::annotation::AnnotationProxy>::ProxyArray<1> getDeclaredAnnotationsByType(::java::lang::ClassProxy p0);
			/*
			 * AnnotatedType getAnnotatedSuperclass();
			 */
			::java::lang::reflect::AnnotatedTypeProxy getAnnotatedSuperclass();
			/*
			 * AnnotatedType[] getAnnotatedInterfaces();
			 */
			::net::sourceforge::jnipp::PA<::java::lang::reflect::AnnotatedTypeProxy>::ProxyArray<1> getAnnotatedInterfaces();
			/*
			 * Constructor getConstructor(Class[]);
			 */
			::java::lang::reflect::ConstructorProxy getConstructor(::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p0);
			/*
			 * Constructor getDeclaredConstructor(Class[]);
			 */
			::java::lang::reflect::ConstructorProxy getDeclaredConstructor(::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p0);
			/*
			 * Constructor getEnclosingConstructor();
			 */
			::java::lang::reflect::ConstructorProxy getEnclosingConstructor();
			/*
			 * Constructor[] getConstructors();
			 */
			::net::sourceforge::jnipp::PA<::java::lang::reflect::ConstructorProxy>::ProxyArray<1> getConstructors();
			/*
			 * Constructor[] getDeclaredConstructors();
			 */
			::net::sourceforge::jnipp::PA<::java::lang::reflect::ConstructorProxy>::ProxyArray<1> getDeclaredConstructors();
			/*
			 * Field getDeclaredField(String);
			 */
			::java::lang::reflect::FieldProxy getDeclaredField(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * Field getField(String);
			 */
			::java::lang::reflect::FieldProxy getField(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * Field[] getDeclaredFields();
			 */
			::net::sourceforge::jnipp::PA<::java::lang::reflect::FieldProxy>::ProxyArray<1> getDeclaredFields();
			/*
			 * Field[] getFields();
			 */
			::net::sourceforge::jnipp::PA<::java::lang::reflect::FieldProxy>::ProxyArray<1> getFields();
			/*
			 * Method getDeclaredMethod(String, Class[]);
			 */
			::java::lang::reflect::MethodProxy getDeclaredMethod(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p1);
			/*
			 * Method getEnclosingMethod();
			 */
			::java::lang::reflect::MethodProxy getEnclosingMethod();
			/*
			 * Method getMethod(String, Class[]);
			 */
			::java::lang::reflect::MethodProxy getMethod(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p1);
			/*
			 * Method[] getDeclaredMethods();
			 */
			::net::sourceforge::jnipp::PA<::java::lang::reflect::MethodProxy>::ProxyArray<1> getDeclaredMethods();
			/*
			 * Method[] getMethods();
			 */
			::net::sourceforge::jnipp::PA<::java::lang::reflect::MethodProxy>::ProxyArray<1> getMethods();
			/*
			 * Type getGenericSuperclass();
			 */
			::java::lang::reflect::TypeProxy getGenericSuperclass();
			/*
			 * TypeVariable[] getTypeParameters();
			 */
			::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeVariableProxy>::ProxyArray<1> getTypeParameters();
			/*
			 * Type[] getGenericInterfaces();
			 */
			::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1> getGenericInterfaces();
			/*
			 * URL getResource(String);
			 */
			::java::net::URLProxy getResource(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * ProtectionDomain getProtectionDomain();
			 */
			::java::security::ProtectionDomainProxy getProtectionDomain();
			/*
			 * boolean isArray();
			 */
			jboolean isArray();
			/*
			 * boolean isAssignableFrom(Class);
			 */
			jboolean isAssignableFrom(::java::lang::ClassProxy p0);
			/*
			 * boolean isInstance(Object);
			 */
			jboolean isInstance(::java::lang::ObjectProxy p0);
			/*
			 * boolean isInterface();
			 */
			jboolean isInterface();
			/*
			 * boolean isPrimitive();
			 */
			jboolean isPrimitive();
			/*
			 * int getModifiers();
			 */
			jint getModifiers();
			/*
			 * Class getComponentType();
			 */
			::java::lang::ClassProxy getComponentType();
			/*
			 * Class getSuperclass();
			 */
			::java::lang::ClassProxy getSuperclass();
			/*
			 * Object[] getSigners();
			 */
			::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> getSigners();
			/*
			 * static Class forName(String);
			 */
			static ::java::lang::ClassProxy forName(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static Class forName(String, boolean, ClassLoader);
			 */
			static ::java::lang::ClassProxy forName(::net::sourceforge::jnipp::JStringHelper p0, jboolean p1, ::java::lang::ClassLoaderProxy p2);

		};
	}
}


#endif
