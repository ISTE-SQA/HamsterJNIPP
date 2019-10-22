#ifndef __java_lang_PackageProxy_H
#define __java_lang_PackageProxy_H


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
#include "java\net\URLProxyForward.h"
#include "java\lang\annotation\AnnotationProxyForward.h"
#include "java\lang\ClassLoaderProxyForward.h"
#include "java\util\MapProxyForward.h"
#include "java\lang\annotation\AnnotationProxy.h"
#include "java\lang\PackageProxy.h"

namespace java
{
	namespace lang
	{
		class PackageProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			PackageProxy(void* unused);
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
			PackageProxy(jobject obj);

			virtual ~PackageProxy();
			PackageProxy& operator=(const PackageProxy& rhs);

			// methods
			/*
			 * boolean isAnnotationPresent(Class);
			 */
			jboolean isAnnotationPresent(::java::lang::ClassProxy p0);
			/*
			 * boolean isCompatibleWith(String);
			 */
			jboolean isCompatibleWith(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * boolean isSealed();
			 */
			jboolean isSealed();
			/*
			 * boolean isSealed(URL);
			 */
			jboolean isSealed(::java::net::URLProxy p0);
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * String getImplementationTitle();
			 */
			::net::sourceforge::jnipp::JStringHelper getImplementationTitle();
			/*
			 * String getImplementationVendor();
			 */
			::net::sourceforge::jnipp::JStringHelper getImplementationVendor();
			/*
			 * String getImplementationVersion();
			 */
			::net::sourceforge::jnipp::JStringHelper getImplementationVersion();
			/*
			 * String getName();
			 */
			::net::sourceforge::jnipp::JStringHelper getName();
			/*
			 * String getSpecificationTitle();
			 */
			::net::sourceforge::jnipp::JStringHelper getSpecificationTitle();
			/*
			 * String getSpecificationVendor();
			 */
			::net::sourceforge::jnipp::JStringHelper getSpecificationVendor();
			/*
			 * String getSpecificationVersion();
			 */
			::net::sourceforge::jnipp::JStringHelper getSpecificationVersion();
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
			 * static Package getPackage(String);
			 */
			static ::java::lang::PackageProxy getPackage(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static Package[] getPackages();
			 */
			static ::net::sourceforge::jnipp::PA<::java::lang::PackageProxy>::ProxyArray<1> getPackages();

		};
	}
}


#endif
