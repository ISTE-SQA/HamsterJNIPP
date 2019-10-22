#ifndef __java_time_ClockProxy_H
#define __java_time_ClockProxy_H


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
#include "java\time\ZoneIdProxyForward.h"
#include "java\time\InstantProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\time\DurationProxyForward.h"

namespace java
{
	namespace time
	{
		class ClockProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ClockProxy(void* unused);
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
			ClockProxy(jobject obj);

			virtual ~ClockProxy();
			ClockProxy& operator=(const ClockProxy& rhs);

			// methods
			/*
			 * Clock withZone(ZoneId);
			 */
			::java::time::ClockProxy withZone(::java::time::ZoneIdProxy p0);
			/*
			 * Instant instant();
			 */
			::java::time::InstantProxy instant();
			/*
			 * ZoneId getZone();
			 */
			::java::time::ZoneIdProxy getZone();
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * long millis();
			 */
			jlong millis();
			/*
			 * static Clock fixed(Instant, ZoneId);
			 */
			static ::java::time::ClockProxy fixed(::java::time::InstantProxy p0, ::java::time::ZoneIdProxy p1);
			/*
			 * static Clock offset(Clock, Duration);
			 */
			static ::java::time::ClockProxy offset(::java::time::ClockProxy p0, ::java::time::DurationProxy p1);
			/*
			 * static Clock system(ZoneId);
			 */
			static ::java::time::ClockProxy system(::java::time::ZoneIdProxy p0);
			/*
			 * static Clock systemDefaultZone();
			 */
			static ::java::time::ClockProxy systemDefaultZone();
			/*
			 * static Clock systemUTC();
			 */
			static ::java::time::ClockProxy systemUTC();
			/*
			 * static Clock tick(Clock, Duration);
			 */
			static ::java::time::ClockProxy tick(::java::time::ClockProxy p0, ::java::time::DurationProxy p1);
			/*
			 * static Clock tickMinutes(ZoneId);
			 */
			static ::java::time::ClockProxy tickMinutes(::java::time::ZoneIdProxy p0);
			/*
			 * static Clock tickSeconds(ZoneId);
			 */
			static ::java::time::ClockProxy tickSeconds(::java::time::ZoneIdProxy p0);

		};
	}
}


#endif
