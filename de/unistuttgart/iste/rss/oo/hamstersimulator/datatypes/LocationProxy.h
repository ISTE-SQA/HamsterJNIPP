#ifndef __de_unistuttgart_iste_rss_oo_hamstersimulator_datatypes_LocationProxy_H
#define __de_unistuttgart_iste_rss_oo_hamstersimulator_datatypes_LocationProxy_H


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
#include "java\lang\ObjectProxyForward.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\LocationVectorProxyForward.h"
#include "java\util\stream\StreamProxyForward.h"

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
							class LocationProxy
							{
							private:
								static std::string className;
								static jclass objectClass;
								jobject peerObject;

							protected:
								LocationProxy(void* unused);
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
								LocationProxy(jobject obj);
								LocationProxy(jint p0, jint p1);

								virtual ~LocationProxy();
								LocationProxy& operator=(const LocationProxy& rhs);

								// methods
								/*
								 * boolean equals(Object);
								 */
								jboolean equals(::java::lang::ObjectProxy p0);
								/*
								 * Location translate(LocationVector);
								 */
								::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy translate(::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationVectorProxy p0);
								/*
								 * int getColumn();
								 */
								jint getColumn();
								/*
								 * int getRow();
								 */
								jint getRow();
								/*
								 * int hashCode();
								 */
								jint hashCode();
								/*
								 * String toString();
								 */
								::net::sourceforge::jnipp::JStringHelper toString();
								/*
								 * static Location from(int, int);
								 */
								static ::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy from(jint p0, jint p1);
								/*
								 * static Stream getAllLocationsFromTo(Location, Location);
								 */
								static ::java::util::stream::StreamProxy getAllLocationsFromTo(::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p0, ::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p1);

							};
						}
					}
				}
			}
		}
	}
}


#endif
