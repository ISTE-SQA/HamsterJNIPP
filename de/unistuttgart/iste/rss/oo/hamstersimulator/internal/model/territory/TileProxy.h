#ifndef __de_unistuttgart_iste_rss_oo_hamstersimulator_internal_model_territory_TileProxy_H
#define __de_unistuttgart_iste_rss_oo_hamstersimulator_internal_model_territory_TileProxy_H


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
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\internal\model\territory\ReadOnlyTerritoryProxyForward.h"
#include "java\util\ListProxyForward.h"
#include "javafx\beans\property\ReadOnlyBooleanPropertyProxyForward.h"
#include "javafx\beans\property\ReadOnlyIntegerPropertyProxyForward.h"
#include "javafx\beans\property\ReadOnlyListPropertyProxyForward.h"
#include "javafx\beans\property\ReadOnlyBooleanWrapperProxyForward.h"
#include "javafx\beans\property\ReadOnlyIntegerWrapperProxyForward.h"
#include "javafx\beans\property\ReadOnlyListWrapperProxyForward.h"

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
									class TileProxy
									{
									private:
										static std::string className;
										static jclass objectClass;
										jobject peerObject;

									protected:
										TileProxy(void* unused);
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
										TileProxy(jobject obj);

										virtual ~TileProxy();
										TileProxy& operator=(const TileProxy& rhs);

										// methods
										/*
										 * boolean isBlocked();
										 */
										jboolean isBlocked();
										/*
										 * Location getLocation();
										 */
										::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy getLocation();
										/*
										 * ReadOnlyTerritory getTerritory();
										 */
										::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::ReadOnlyTerritoryProxy getTerritory();
										/*
										 * int getGrainCount();
										 */
										jint getGrainCount();
										/*
										 * String toString();
										 */
										::net::sourceforge::jnipp::JStringHelper toString();
										/*
										 * List getContent();
										 */
										::java::util::ListProxy getContent();
										/*
										 * List getHamsters();
										 */
										::java::util::ListProxy getHamsters();
										/*
										 * ReadOnlyBooleanProperty isBlockedProperty();
										 */
										::javafx::beans::property::ReadOnlyBooleanPropertyProxy isBlockedProperty();
										/*
										 * ReadOnlyIntegerProperty grainCountProperty();
										 */
										::javafx::beans::property::ReadOnlyIntegerPropertyProxy grainCountProperty();
										/*
										 * ReadOnlyListProperty contentProperty();
										 */
										::javafx::beans::property::ReadOnlyListPropertyProxy contentProperty();
										/*
										 * ReadOnlyListProperty hamstersProperty();
										 */
										::javafx::beans::property::ReadOnlyListPropertyProxy hamstersProperty();
										/*
										 * void dispose();
										 */
										void dispose();

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
