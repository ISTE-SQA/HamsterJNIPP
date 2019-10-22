#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ZoneOffsetTransitionRule_TimeDefinitionProxy.h"

// includes for parameter and return type proxy classes
#include "java\time\LocalDateTimeProxy.h"
#include "java\time\ZoneOffsetProxy.h"
#include "java\time\zone\ZoneOffsetTransitionRule_TimeDefinitionProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::zone;


std::string ZoneOffsetTransitionRule_TimeDefinitionProxy::className = "java/time/zone/ZoneOffsetTransitionRule$TimeDefinition";
jclass ZoneOffsetTransitionRule_TimeDefinitionProxy::objectClass = NULL;

jclass ZoneOffsetTransitionRule_TimeDefinitionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ZoneOffsetTransitionRule_TimeDefinitionProxy::ZoneOffsetTransitionRule_TimeDefinitionProxy(void* unused)
{
}

jobject ZoneOffsetTransitionRule_TimeDefinitionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ZoneOffsetTransitionRule_TimeDefinitionProxy::getObjectClass()
{
	return _getObjectClass();
}

ZoneOffsetTransitionRule_TimeDefinitionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ZoneOffsetTransitionRule_TimeDefinitionProxy::ZoneOffsetTransitionRule_TimeDefinitionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ZoneOffsetTransitionRule_TimeDefinitionProxy::~ZoneOffsetTransitionRule_TimeDefinitionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ZoneOffsetTransitionRule_TimeDefinitionProxy& ZoneOffsetTransitionRule_TimeDefinitionProxy::operator=(const ZoneOffsetTransitionRule_TimeDefinitionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::time::LocalDateTimeProxy ZoneOffsetTransitionRule_TimeDefinitionProxy::createDateTime(::java::time::LocalDateTimeProxy p0, ::java::time::ZoneOffsetProxy p1, ::java::time::ZoneOffsetProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "createDateTime", "(Ljava/time/LocalDateTime;Ljava/time/ZoneOffset;Ljava/time/ZoneOffset;)Ljava/time/LocalDateTime;" );
	return ::java::time::LocalDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) )  );
}

::java::time::zone::ZoneOffsetTransitionRule_TimeDefinitionProxy ZoneOffsetTransitionRule_TimeDefinitionProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;" );
	return ::java::time::zone::ZoneOffsetTransitionRule_TimeDefinitionProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::java::time::zone::ZoneOffsetTransitionRule_TimeDefinitionProxy>::ProxyArray<1> ZoneOffsetTransitionRule_TimeDefinitionProxy::values()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "values", "()[Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;" );
	return ::net::sourceforge::jnipp::PA<::java::time::zone::ZoneOffsetTransitionRule_TimeDefinitionProxy>::ProxyArray<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

