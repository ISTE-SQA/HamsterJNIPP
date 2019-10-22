#ifndef __de_unistuttgart_iste_rss_oo_hamstersimulator_external_model_HamsterProxy_H
#define __de_unistuttgart_iste_rss_oo_hamstersimulator_external_model_HamsterProxy_H


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
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\external\model\TerritoryProxyForward.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\LocationProxyForward.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\DirectionProxyForward.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\external\model\HamsterGameProxyForward.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\internal\model\hamster\GameHamsterProxyForward.h"

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
								class HamsterProxy
								{
								private:
									static std::string className;
									static jclass objectClass;
									jobject peerObject;

								protected:
									HamsterProxy(void* unused);
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
									HamsterProxy(jobject obj);
									HamsterProxy();
									HamsterProxy(::de::unistuttgart::iste::rss::oo::hamstersimulator::external::model::TerritoryProxy p0, ::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p1, ::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::DirectionProxy p2, jint p3);

									virtual ~HamsterProxy();
									HamsterProxy& operator=(const HamsterProxy& rhs);

									// methods
									/*
									 * boolean frontIsClear();
									 */
									jboolean frontIsClear();
									/*
									 * boolean grainAvailable();
									 */
									jboolean grainAvailable();
									/*
									 * boolean mouthEmpty();
									 */
									jboolean mouthEmpty();
									/*
									 * Direction getDirection();
									 */
									::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::DirectionProxy getDirection();
									/*
									 * Location getLocation();
									 */
									::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy getLocation();
									/*
									 * int readNumber(String);
									 */
									jint readNumber(::net::sourceforge::jnipp::JStringHelper p0);
									/*
									 * String readString(String);
									 */
									::net::sourceforge::jnipp::JStringHelper readString(::net::sourceforge::jnipp::JStringHelper p0);
									/*
									 * void init(Territory, Location, Direction, int);
									 */
									void init(::de::unistuttgart::iste::rss::oo::hamstersimulator::external::model::TerritoryProxy p0, ::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p1, ::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::DirectionProxy p2, jint p3);
									/*
									 * void move();
									 */
									void move();
									/*
									 * void pickGrain();
									 */
									void pickGrain();
									/*
									 * void putGrain();
									 */
									void putGrain();
									/*
									 * void turnLeft();
									 */
									void turnLeft();
									/*
									 * void write(String);
									 */
									void write(::net::sourceforge::jnipp::JStringHelper p0);

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
