#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ZoneIdProxy.h"

// includes for parameter and return type proxy classes
#include "java\time\zone\ZoneRulesProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\time\format\TextStyleProxy.h"
#include "java\util\LocaleProxy.h"
#include "java\time\temporal\TemporalAccessorProxy.h"
#include "java\util\MapProxy.h"
#include "java\time\ZoneOffsetProxy.h"
#include "java\util\SetProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time;


std::string ZoneIdProxy::className = "java/time/ZoneId";
jclass ZoneIdProxy::objectClass = NULL;

jclass ZoneIdProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ZoneIdProxy::ZoneIdProxy(void* unused)
{
}

jobject ZoneIdProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ZoneIdProxy::getObjectClass()
{
	return _getObjectClass();
}

ZoneIdProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ZoneIdProxy::ZoneIdProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ZoneIdProxy::~ZoneIdProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ZoneIdProxy& ZoneIdProxy::operator=(const ZoneIdProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::JStringHelper ZoneIdProxy::getId()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getId", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::zone::ZoneRulesProxy ZoneIdProxy::getRules()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getRules", "()Ljava/time/zone/ZoneRules;" );
	return ::java::time::zone::ZoneRulesProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jboolean ZoneIdProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint ZoneIdProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper ZoneIdProxy::getDisplayName(::java::time::format::TextStyleProxy p0, ::java::util::LocaleProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDisplayName", "(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::net::sourceforge::jnipp::JStringHelper ZoneIdProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::ZoneIdProxy ZoneIdProxy::normalized()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "normalized", "()Ljava/time/ZoneId;" );
	return ::java::time::ZoneIdProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::ZoneIdProxy ZoneIdProxy::from(::java::time::temporal::TemporalAccessorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "from", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/ZoneId;" );
	return ::java::time::ZoneIdProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::ZoneIdProxy ZoneIdProxy::of(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(Ljava/lang/String;)Ljava/time/ZoneId;" );
	return ::java::time::ZoneIdProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::java::time::ZoneIdProxy ZoneIdProxy::of(::net::sourceforge::jnipp::JStringHelper p0, ::java::util::MapProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(Ljava/lang/String;Ljava/util/Map;)Ljava/time/ZoneId;" );
	return ::java::time::ZoneIdProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::time::ZoneIdProxy ZoneIdProxy::ofOffset(::net::sourceforge::jnipp::JStringHelper p0, ::java::time::ZoneOffsetProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "ofOffset", "(Ljava/lang/String;Ljava/time/ZoneOffset;)Ljava/time/ZoneId;" );
	return ::java::time::ZoneIdProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::time::ZoneIdProxy ZoneIdProxy::systemDefault()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "systemDefault", "()Ljava/time/ZoneId;" );
	return ::java::time::ZoneIdProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::java::util::SetProxy ZoneIdProxy::getAvailableZoneIds()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getAvailableZoneIds", "()Ljava/util/Set;" );
	return ::java::util::SetProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

