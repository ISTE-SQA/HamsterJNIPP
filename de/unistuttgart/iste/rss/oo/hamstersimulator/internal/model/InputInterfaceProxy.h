#ifndef __de_unistuttgart_iste_rss_oo_hamstersimulator_internal_model_InputInterfaceProxy_H
#define __de_unistuttgart_iste_rss_oo_hamstersimulator_internal_model_InputInterfaceProxy_H


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
#include "java\lang\ThrowableProxyForward.h"

namespace de
{
	namespace unistuttgart
	{
		namespace iste
		{
			namespace rss
			{
				namespace oo
				{
					namespace hamstersimulator
					{
						namespace internal
						{
							namespace model
							{
								class InputInterfaceProxy
								{
								private:
									static std::string className;
									static jclass objectClass;
									jobject peerObject;

								protected:
									InputInterfaceProxy(void* unused);
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
									InputInterfaceProxy(jobject obj);

									virtual ~InputInterfaceProxy();
									InputInterfaceProxy& operator=(const InputInterfaceProxy& rhs);

									// methods
									/*
									 * int readInteger(String);
									 */
									jint readInteger(::net::sourceforge::jnipp::JStringHelper p0);
									/*
									 * String readString(String);
									 */
									::net::sourceforge::jnipp::JStringHelper readString(::net::sourceforge::jnipp::JStringHelper p0);
									/*
									 * void showAlert(Throwable);
									 */
									void showAlert(::java::lang::ThrowableProxy p0);

								};
							}
						}
					}
				}
			}
		}
	}
}


#endif
