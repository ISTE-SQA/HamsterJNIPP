#ifndef __de_unistuttgart_iste_rss_oo_hamstersimulator_commands_GameCommandStack_ModeProxy_H
#define __de_unistuttgart_iste_rss_oo_hamstersimulator_commands_GameCommandStack_ModeProxy_H


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
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\commands\GameCommandStack_ModeProxy.h"

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
							class GameCommandStack_ModeProxy
							{
							private:
								static std::string className;
								static jclass objectClass;
								jobject peerObject;

							protected:
								GameCommandStack_ModeProxy(void* unused);
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
								GameCommandStack_ModeProxy(jobject obj);

								virtual ~GameCommandStack_ModeProxy();
								GameCommandStack_ModeProxy& operator=(const GameCommandStack_ModeProxy& rhs);

								// methods
								/*
								 * static GameCommandStack$Mode valueOf(String);
								 */
								static ::de::unistuttgart::iste::rss::oo::hamstersimulator::commands::GameCommandStack_ModeProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
								/*
								 * static GameCommandStack$Mode[] values();
								 */
								static ::net::sourceforge::jnipp::PA<::de::unistuttgart::iste::rss::oo::hamstersimulator::commands::GameCommandStack_ModeProxy>::ProxyArray<1> values();

							};
						}
					}
				}
			}
		}
	}
}


#endif
