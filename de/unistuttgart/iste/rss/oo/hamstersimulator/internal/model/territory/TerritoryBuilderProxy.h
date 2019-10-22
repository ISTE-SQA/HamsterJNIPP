#ifndef __de_unistuttgart_iste_rss_oo_hamstersimulator_internal_model_territory_TerritoryBuilderProxy_H
#define __de_unistuttgart_iste_rss_oo_hamstersimulator_internal_model_territory_TerritoryBuilderProxy_H


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
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\commands\CommandProxyForward.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\LocationProxyForward.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\DirectionProxyForward.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\SizeProxyForward.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\internal\model\territory\EditorTerritoryProxyForward.h"
#include "java\util\LinkedListProxyForward.h"

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
									class TerritoryBuilderProxy
									{
									private:
										static std::string className;
										static jclass objectClass;
										jobject peerObject;

									protected:
										TerritoryBuilderProxy(void* unused);
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
										TerritoryBuilderProxy(jobject obj);

										virtual ~TerritoryBuilderProxy();
										TerritoryBuilderProxy& operator=(const TerritoryBuilderProxy& rhs);

										// methods
										/*
										 * Command build();
										 */
										::de::unistuttgart::iste::rss::oo::hamstersimulator::commands::CommandProxy build();
										/*
										 * TerritoryBuilder defaultHamsterAt(Location, Direction, int);
										 */
										::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::TerritoryBuilderProxy defaultHamsterAt(::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p0, ::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::DirectionProxy p1, jint p2);
										/*
										 * TerritoryBuilder grainAt(Location);
										 */
										::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::TerritoryBuilderProxy grainAt(::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p0);
										/*
										 * TerritoryBuilder grainAt(Location, int);
										 */
										::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::TerritoryBuilderProxy grainAt(::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p0, jint p1);
										/*
										 * TerritoryBuilder initializeTerritory(Size);
										 */
										::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::TerritoryBuilderProxy initializeTerritory(::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::SizeProxy p0);
										/*
										 * TerritoryBuilder wallAt(Location);
										 */
										::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::TerritoryBuilderProxy wallAt(::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p0);
										/*
										 * static TerritoryBuilder getTerritoryBuilderForTerritory(EditorTerritory);
										 */
										static ::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::TerritoryBuilderProxy getTerritoryBuilderForTerritory(::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::EditorTerritoryProxy p0);

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
