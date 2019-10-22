#ifndef __java_lang_invoke_MemberName_FactoryProxy_H
#define __java_lang_invoke_MemberName_FactoryProxy_H


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
#include "java\lang\invoke\MemberNameProxyForward.h"
#include "java\lang\ClassProxyForward.h"
#include "java\util\ListProxyForward.h"
#include "java\lang\invoke\MethodTypeProxyForward.h"

namespace java
{
	namespace lang
	{
		namespace invoke
		{
			class MemberName_FactoryProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				MemberName_FactoryProxy(void* unused);
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
				MemberName_FactoryProxy(jobject obj);

				virtual ~MemberName_FactoryProxy();
				MemberName_FactoryProxy& operator=(const MemberName_FactoryProxy& rhs);

				// methods
				/*
				 * MemberName resolveOrFail(byte, MemberName, Class, Class);
				 */
				::java::lang::invoke::MemberNameProxy resolveOrFail(jbyte p0, ::java::lang::invoke::MemberNameProxy p1, ::java::lang::ClassProxy p2, ::java::lang::ClassProxy p3);
				/*
				 * MemberName resolveOrNull(byte, MemberName, Class);
				 */
				::java::lang::invoke::MemberNameProxy resolveOrNull(jbyte p0, ::java::lang::invoke::MemberNameProxy p1, ::java::lang::ClassProxy p2);
				/*
				 * List getConstructors(Class, Class);
				 */
				::java::util::ListProxy getConstructors(::java::lang::ClassProxy p0, ::java::lang::ClassProxy p1);
				/*
				 * List getFields(Class, boolean, Class);
				 */
				::java::util::ListProxy getFields(::java::lang::ClassProxy p0, jboolean p1, ::java::lang::ClassProxy p2);
				/*
				 * List getFields(Class, boolean, String, Class, Class);
				 */
				::java::util::ListProxy getFields(::java::lang::ClassProxy p0, jboolean p1, ::net::sourceforge::jnipp::JStringHelper p2, ::java::lang::ClassProxy p3, ::java::lang::ClassProxy p4);
				/*
				 * List getMethods(Class, boolean, Class);
				 */
				::java::util::ListProxy getMethods(::java::lang::ClassProxy p0, jboolean p1, ::java::lang::ClassProxy p2);
				/*
				 * List getMethods(Class, boolean, String, MethodType, Class);
				 */
				::java::util::ListProxy getMethods(::java::lang::ClassProxy p0, jboolean p1, ::net::sourceforge::jnipp::JStringHelper p2, ::java::lang::invoke::MethodTypeProxy p3, ::java::lang::ClassProxy p4);
				/*
				 * List getNestedTypes(Class, boolean, Class);
				 */
				::java::util::ListProxy getNestedTypes(::java::lang::ClassProxy p0, jboolean p1, ::java::lang::ClassProxy p2);

			};
		}
	}
}


#endif
