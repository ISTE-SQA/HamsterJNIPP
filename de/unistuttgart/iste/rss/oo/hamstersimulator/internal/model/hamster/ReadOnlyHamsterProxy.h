#ifndef __de_unistuttgart_iste_rss_oo_hamstersimulator_internal_model_hamster_ReadOnlyHamsterProxy_H
#define __de_unistuttgart_iste_rss_oo_hamstersimulator_internal_model_hamster_ReadOnlyHamsterProxy_H


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
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\DirectionProxyForward.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\internal\model\territory\ReadOnlyTerritoryProxyForward.h"
#include "java\util\ListProxyForward.h"
#include "javafx\beans\property\ReadOnlyIntegerPropertyProxyForward.h"
#include "javafx\beans\property\ReadOnlyListPropertyProxyForward.h"
#include "javafx\beans\property\ReadOnlyObjectPropertyProxyForward.h"
#include "javafx\beans\property\ReadOnlyIntegerWrapperProxyForward.h"
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
								namespace hamster
								{
									class ReadOnlyHamsterProxy
									{
									private:
										static std::string className;
										static jclass objectClass;
										jobject peerObject;

									protected:
										ReadOnlyHamsterProxy(void* unused);
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
										ReadOnlyHamsterProxy(jobject obj);
										ReadOnlyHamsterProxy();

										virtual ~ReadOnlyHamsterProxy();
										ReadOnlyHamsterProxy& operator=(const ReadOnlyHamsterProxy& rhs);

										// methods
										/*
										 * Direction getDirection();
										 */
										::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::DirectionProxy getDirection();
										/*
										 * ReadOnlyTerritory getCurrentTerritory();
										 */
										::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::ReadOnlyTerritoryProxy getCurrentTerritory();
										/*
										 * int getGrainCount();
										 */
										jint getGrainCount();
										/*
										 * List getGrainInMouth();
										 */
										::java::util::ListProxy getGrainInMouth();
										/*
										 * ReadOnlyIntegerProperty grainCountProperty();
										 */
										::javafx::beans::property::ReadOnlyIntegerPropertyProxy grainCountProperty();
										/*
										 * ReadOnlyListProperty grainInMouthProperty();
										 */
										::javafx::beans::property::ReadOnlyListPropertyProxy grainInMouthProperty();
										/*
										 * ReadOnlyObjectProperty directionProperty();
										 */
										::javafx::beans::property::ReadOnlyObjectPropertyProxy directionProperty();

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
