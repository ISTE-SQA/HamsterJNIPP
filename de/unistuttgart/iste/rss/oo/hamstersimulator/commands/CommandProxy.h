#ifndef __de_unistuttgart_iste_rss_oo_hamstersimulator_commands_CommandProxy_H
#define __de_unistuttgart_iste_rss_oo_hamstersimulator_commands_CommandProxy_H


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
#include "java\util\ListProxyForward.h"

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
						namespace commands
						{
							class CommandProxy
							{
							private:
								static std::string className;
								static jclass objectClass;
								jobject peerObject;

							protected:
								CommandProxy(void* unused);
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
								CommandProxy(jobject obj);
								CommandProxy();

								virtual ~CommandProxy();
								CommandProxy& operator=(const CommandProxy& rhs);

								// methods
								/*
								 * boolean canExecute();
								 */
								jboolean canExecute();
								/*
								 * List getExceptionsFromPreconditions();
								 */
								::java::util::ListProxy getExceptionsFromPreconditions();

							};
						}
					}
				}
			}
		}
	}
}


#endif
