#ifndef __javafx_beans_binding_ObjectExpressionProxy_H
#define __javafx_beans_binding_ObjectExpressionProxy_H


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
#include "java\lang\ObjectProxyForward.h"
#include "javafx\beans\binding\BooleanBindingProxyForward.h"
#include "javafx\beans\value\ObservableObjectValueProxyForward.h"
#include "javafx\beans\binding\StringBindingProxyForward.h"
#include "java\util\LocaleProxyForward.h"

namespace javafx
{
	namespace beans
	{
		namespace binding
		{
			class ObjectExpressionProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ObjectExpressionProxy(void* unused);
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
				ObjectExpressionProxy(jobject obj);
				ObjectExpressionProxy();

				virtual ~ObjectExpressionProxy();
				ObjectExpressionProxy& operator=(const ObjectExpressionProxy& rhs);

				// methods
				/*
				 * Object getValue();
				 */
				::java::lang::ObjectProxy getValue();
				/*
				 * BooleanBinding isEqualTo(Object);
				 */
				::javafx::beans::binding::BooleanBindingProxy isEqualTo(::java::lang::ObjectProxy p0);
				/*
				 * BooleanBinding isEqualTo(ObservableObjectValue);
				 */
				::javafx::beans::binding::BooleanBindingProxy isEqualTo(::javafx::beans::value::ObservableObjectValueProxy p0);
				/*
				 * BooleanBinding isNotEqualTo(Object);
				 */
				::javafx::beans::binding::BooleanBindingProxy isNotEqualTo(::java::lang::ObjectProxy p0);
				/*
				 * BooleanBinding isNotEqualTo(ObservableObjectValue);
				 */
				::javafx::beans::binding::BooleanBindingProxy isNotEqualTo(::javafx::beans::value::ObservableObjectValueProxy p0);
				/*
				 * BooleanBinding isNotNull();
				 */
				::javafx::beans::binding::BooleanBindingProxy isNotNull();
				/*
				 * BooleanBinding isNull();
				 */
				::javafx::beans::binding::BooleanBindingProxy isNull();
				/*
				 * StringBinding asString();
				 */
				::javafx::beans::binding::StringBindingProxy asString();
				/*
				 * StringBinding asString(String);
				 */
				::javafx::beans::binding::StringBindingProxy asString(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * StringBinding asString(Locale, String);
				 */
				::javafx::beans::binding::StringBindingProxy asString(::java::util::LocaleProxy p0, ::net::sourceforge::jnipp::JStringHelper p1);
				/*
				 * static ObjectExpression objectExpression(ObservableObjectValue);
				 */
				static ::javafx::beans::binding::ObjectExpressionProxy objectExpression(::javafx::beans::value::ObservableObjectValueProxy p0);

			};
		}
	}
}


#endif
