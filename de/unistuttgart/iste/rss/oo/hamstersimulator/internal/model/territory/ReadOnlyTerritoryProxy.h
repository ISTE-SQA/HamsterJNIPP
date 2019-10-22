#ifndef __de_unistuttgart_iste_rss_oo_hamstersimulator_internal_model_territory_ReadOnlyTerritoryProxy_H
#define __de_unistuttgart_iste_rss_oo_hamstersimulator_internal_model_territory_ReadOnlyTerritoryProxy_H


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
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\LocationProxyForward.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\SizeProxyForward.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\internal\model\hamster\ReadOnlyHamsterProxyForward.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\internal\model\territory\TileProxyForward.h"
#include "java\util\ListProxyForward.h"
#include "javafx\beans\property\ReadOnlyListPropertyProxyForward.h"
#include "javafx\beans\property\ReadOnlyObjectPropertyProxyForward.h"
#include "javafx\beans\property\ReadOnlyListWrapperProxyForward.h"
#include "javafx\beans\property\ReadOnlyObjectWrapperProxyForward.h"

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
								namespace territory
								{
									class ReadOnlyTerritoryProxy
									{
									private:
										static std::string className;
										static jclass objectClass;
										jobject peerObject;

									protected:
										ReadOnlyTerritoryProxy(void* unused);
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
										ReadOnlyTerritoryProxy(jobject obj);
										ReadOnlyTerritoryProxy();

										virtual ~ReadOnlyTerritoryProxy();
										ReadOnlyTerritoryProxy& operator=(const ReadOnlyTerritoryProxy& rhs);

										// methods
										/*
										 * boolean isLocationInTerritory(Location);
										 */
										jboolean isLocationInTerritory(::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p0);
										/*
										 * Size getSize();
										 */
										::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::SizeProxy getSize();
										/*
										 * ReadOnlyHamster getDefaultHamster();
										 */
										::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::hamster::ReadOnlyHamsterProxy getDefaultHamster();
										/*
										 * Tile getTileAt(Location);
										 */
										::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::TileProxy getTileAt(::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p0);
										/*
										 * List getHamsters();
										 */
										::java::util::ListProxy getHamsters();
										/*
										 * ReadOnlyListProperty hamstersProperty();
										 */
										::javafx::beans::property::ReadOnlyListPropertyProxy hamstersProperty();
										/*
										 * ReadOnlyListProperty tilesProperty();
										 */
										::javafx::beans::property::ReadOnlyListPropertyProxy tilesProperty();
										/*
										 * ReadOnlyObjectProperty defaultHamsterProperty();
										 */
										::javafx::beans::property::ReadOnlyObjectPropertyProxy defaultHamsterProperty();
										/*
										 * ReadOnlyObjectProperty territorySizeProperty();
										 */
										::javafx::beans::property::ReadOnlyObjectPropertyProxy territorySizeProperty();

									};
								}
							}
						}
					}
				}
			}
		}
	}
}


#endif
