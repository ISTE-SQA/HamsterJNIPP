#ifndef __de_unistuttgart_iste_rss_oo_hamstersimulator_external_model_HamsterGameProxy_H
#define __de_unistuttgart_iste_rss_oo_hamstersimulator_external_model_HamsterGameProxy_H


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
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\internal\model\InputInterfaceProxyForward.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\commands\GameCommandStack_ModeProxyForward.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\external\model\TerritoryProxyForward.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\internal\model\GameLogProxyForward.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\internal\model\territory\TerritoryBuilderProxyForward.h"
#include "java\io\InputStreamProxyForward.h"
#include "java\util\function\ConsumerProxyForward.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\commands\GameCommandStackProxyForward.h"

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
						namespace external
						{
							namespace model
							{
								class HamsterGameProxy
								{
								private:
									static std::string className;
									static jclass objectClass;
									jobject peerObject;

								protected:
									HamsterGameProxy(void* unused);
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
									HamsterGameProxy(jobject obj);
									HamsterGameProxy();
									HamsterGameProxy(::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::InputInterfaceProxy p0);

									virtual ~HamsterGameProxy();
									HamsterGameProxy& operator=(const HamsterGameProxy& rhs);

									// methods
									/*
									 * GameCommandStack$Mode getCurrentGameMode();
									 */
									::de::unistuttgart::iste::rss::oo::hamstersimulator::commands::GameCommandStack_ModeProxy getCurrentGameMode();
									/*
									 * Territory getTerritory();
									 */
									::de::unistuttgart::iste::rss::oo::hamstersimulator::external::model::TerritoryProxy getTerritory();
									/*
									 * GameLog getGameLog();
									 */
									::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::GameLogProxy getGameLog();
									/*
									 * InputInterface getInputInterface();
									 */
									::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::InputInterfaceProxy getInputInterface();
									/*
									 * TerritoryBuilder getNewTerritoryBuilder();
									 */
									::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::TerritoryBuilderProxy getNewTerritoryBuilder();
									/*
									 * void displayInNewGameWindow();
									 */
									void displayInNewGameWindow();
									/*
									 * void initialize();
									 */
									void initialize();
									/*
									 * void initialize(TerritoryBuilder);
									 */
									void initialize(::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::TerritoryBuilderProxy p0);
									/*
									 * void initialize(InputStream);
									 */
									void initialize(::java::io::InputStreamProxy p0);
									/*
									 * void initialize(String);
									 */
									void initialize(::net::sourceforge::jnipp::JStringHelper p0);
									/*
									 * void reset();
									 */
									void reset();
									/*
									 * void runGame(Consumer);
									 */
									void runGame(::java::util::function::ConsumerProxy p0);
									/*
									 * void setInputInterface(InputInterface);
									 */
									void setInputInterface(::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::InputInterfaceProxy p0);
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
}


#endif
