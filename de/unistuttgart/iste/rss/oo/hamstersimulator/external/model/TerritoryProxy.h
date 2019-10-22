#ifndef __de_unistuttgart_iste_rss_oo_hamstersimulator_external_model_TerritoryProxy_H
#define __de_unistuttgart_iste_rss_oo_hamstersimulator_external_model_TerritoryProxy_H


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
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\external\model\HamsterGameProxyForward.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\LocationProxyForward.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\SizeProxyForward.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\external\model\HamsterProxyForward.h"
#include "java\util\ListProxyForward.h"
#include "java\io\InputStreamProxyForward.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\internal\model\territory\GameTerritoryProxyForward.h"
#include "java\util\MapProxyForward.h"

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
								class TerritoryProxy
								{
								private:
									static std::string className;
									static jclass objectClass;
									jobject peerObject;

								protected:
									TerritoryProxy(void* unused);
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
									TerritoryProxy(jobject obj);
									TerritoryProxy(::de::unistuttgart::iste::rss::oo::hamstersimulator::external::model::HamsterGameProxy p0);

									virtual ~TerritoryProxy();
									TerritoryProxy& operator=(const TerritoryProxy& rhs);

									// methods
									/*
									 * boolean isBlockedByWall(Location);
									 */
									jboolean isBlockedByWall(::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p0);
									/*
									 * boolean isLocationInTerritory(Location);
									 */
									jboolean isLocationInTerritory(::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p0);
									/*
									 * Size getTerritorySize();
									 */
									::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::SizeProxy getTerritorySize();
									/*
									 * Hamster getDefaultHamster();
									 */
									::de::unistuttgart::iste::rss::oo::hamstersimulator::external::model::HamsterProxy getDefaultHamster();
									/*
									 * HamsterGame getGame();
									 */
									::de::unistuttgart::iste::rss::oo::hamstersimulator::external::model::HamsterGameProxy getGame();
									/*
									 * int getNumberOfGrainsAt(Location);
									 */
									jint getNumberOfGrainsAt(::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p0);
									/*
									 * int getTotalGrainCount();
									 */
									jint getTotalGrainCount();
									/*
									 * int getTotalHamsterCount();
									 */
									jint getTotalHamsterCount();
									/*
									 * List getHamsters();
									 */
									::java::util::ListProxy getHamsters();
									/*
									 * List getHamstersAt(Location);
									 */
									::java::util::ListProxy getHamstersAt(::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p0);
									/*
									 * void loadFromFile(String);
									 */
									void loadFromFile(::net::sourceforge::jnipp::JStringHelper p0);
									/*
									 * void loadFromInputStream(InputStream);
									 */
									void loadFromInputStream(::java::io::InputStreamProxy p0);

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
