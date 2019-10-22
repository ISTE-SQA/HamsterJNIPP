#ifndef __sun_reflect_annotation_AnnotationTypeProxy_H
#define __sun_reflect_annotation_AnnotationTypeProxy_H


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
#include "java\lang\annotation\RetentionPolicyProxyForward.h"
#include "java\util\MapProxyForward.h"
#include "java\lang\ClassProxyForward.h"

namespace sun
{
	namespace reflect
	{
		namespace annotation
		{
			class AnnotationTypeProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				AnnotationTypeProxy(void* unused);
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
				AnnotationTypeProxy(jobject obj);

				virtual ~AnnotationTypeProxy();
				AnnotationTypeProxy& operator=(const AnnotationTypeProxy& rhs);

				// methods
				/*
				 * boolean isInherited();
				 */
				jboolean isInherited();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * RetentionPolicy retention();
				 */
				::java::lang::annotation::RetentionPolicyProxy retention();
				/*
				 * Map memberDefaults();
				 */
				::java::util::MapProxy memberDefaults();
				/*
				 * Map memberTypes();
				 */
				::java::util::MapProxy memberTypes();
				/*
				 * Map members();
				 */
				::java::util::MapProxy members();
				/*
				 * static Class invocationHandlerReturnType(Class);
				 */
				static ::java::lang::ClassProxy invocationHandlerReturnType(::java::lang::ClassProxy p0);
				/*
				 * static AnnotationType getInstance(Class);
				 */
				static ::sun::reflect::annotation::AnnotationTypeProxy getInstance(::java::lang::ClassProxy p0);

			};
		}
	}
}


#endif
