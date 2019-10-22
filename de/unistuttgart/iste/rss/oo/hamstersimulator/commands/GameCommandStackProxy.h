#ifndef __de_unistuttgart_iste_rss_oo_hamstersimulator_commands_GameCommandStackProxy_H
#define __de_unistuttgart_iste_rss_oo_hamstersimulator_commands_GameCommandStackProxy_H


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
#include "javafx\beans\property\DoublePropertyProxyForward.h"
#include "javafx\beans\property\ReadOnlyObjectPropertyProxyForward.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\commands\CommandProxyForward.h"
#include "java\util\concurrent\SemaphoreProxyForward.h"
#include "javafx\beans\property\ReadOnlyObjectWrapperProxyForward.h"
#include "java\lang\ThreadProxyForward.h"
#include "javafx\beans\property\SimpleDoublePropertyProxyForward.h"

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
							class GameCommandStackProxy
							{
							private:
								static std::string className;
								static jclass objectClass;
								jobject peerObject;

							protected:
								GameCommandStackProxy(void* unused);
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
								GameCommandStackProxy(jobject obj);
								GameCommandStackProxy();

								virtual ~GameCommandStackProxy();
								GameCommandStackProxy& operator=(const GameCommandStackProxy& rhs);

								// methods
								/*
								 * DoubleProperty speedProperty();
								 */
								::javafx::beans::property::DoublePropertyProxy speedProperty();
								/*
								 * ReadOnlyObjectProperty stateProperty();
								 */
								::javafx::beans::property::ReadOnlyObjectPropertyProxy stateProperty();
								/*
								 * void delay();
								 */
								void delay();
								/*
								 * void execute(Command);
								 */
								void execute(::de::unistuttgart::iste::rss::oo::hamstersimulator::commands::CommandProxy p0);
								/*
								 * void pause();
								 */
								void pause();
								/*
								 * void reset();
								 */
								void reset();
								/*
								 * void resume();
								 */
								void resume();
								/*
								 * void setSpeed(double);
								 */
								void setSpeed(jdouble p0);
								/*
								 * void startGame(boolean);
								 */
								void startGame(jboolean p0);
								/*
								 * void stopGame();
								 */
								void stopGame();

							};
						}
					}
				}
			}
		}
	}
}


#endif
