#ifndef __de_unistuttgart_iste_rss_oo_hamstersimulator_datatypes_DirectionProxy_H
#define __de_unistuttgart_iste_rss_oo_hamstersimulator_datatypes_DirectionProxy_H


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
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\LocationVectorProxyForward.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\DirectionProxy.h"

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
						namespace datatypes
						{
							class DirectionProxy
							{
							private:
								static std::string className;
								static jclass objectClass;
								jobject peerObject;

							protected:
								DirectionProxy(void* unused);
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
								DirectionProxy(jobject obj);

								virtual ~DirectionProxy();
								DirectionProxy& operator=(const DirectionProxy& rhs);

								// methods
								/*
								 * Direction left();
								 */
								::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::DirectionProxy left();
								/*
								 * Direction right();
								 */
								::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::DirectionProxy right();
								/*
								 * LocationVector getMovementVector();
								 */
								::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationVectorProxy getMovementVector();
								/*
								 * static Direction valueOf(String);
								 */
								static ::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::DirectionProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
								/*
								 * static Direction[] values();
								 */
								static ::net::sourceforge::jnipp::PA<::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::DirectionProxy>::ProxyArray<1> values();

							};
						}
					}
				}
			}
		}
	}
}


#endif
