#ifndef __de_unistuttgart_iste_rss_oo_hamstersimulator_datatypes_LocationVectorProxy_H
#define __de_unistuttgart_iste_rss_oo_hamstersimulator_datatypes_LocationVectorProxy_H


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
							class LocationVectorProxy
							{
							private:
								static std::string className;
								static jclass objectClass;
								jobject peerObject;

							protected:
								LocationVectorProxy(void* unused);
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
								LocationVectorProxy(jobject obj);
								LocationVectorProxy(jint p0, jint p1);

								virtual ~LocationVectorProxy();
								LocationVectorProxy& operator=(const LocationVectorProxy& rhs);

								// methods
								/*
								 * boolean equals(Object);
								 */
								jboolean equals(::java::lang::ObjectProxy p0);
								/*
								 * int getDeltaColumn();
								 */
								jint getDeltaColumn();
								/*
								 * int getDeltaRow();
								 */
								jint getDeltaRow();
								/*
								 * int hashCode();
								 */
								jint hashCode();

							};
						}
					}
				}
			}
		}
	}
}


#endif
