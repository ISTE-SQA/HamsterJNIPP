#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "LocationProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\LocationVectorProxy.h"
#include "java\util\stream\StreamProxy.h"

using namespace net::sourceforge::jnipp;
using namespace de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes;


std::string LocationProxy::className = "de/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Location";
jclass LocationProxy::objectClass = NULL;

jclass LocationProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

LocationProxy::LocationProxy(void* unused)
{
}

jobject LocationProxy::_getPeerObject() const
{
	return peerObject;
}

jclass LocationProxy::getObjectClass()
{
	return _getObjectClass();
}

LocationProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
LocationProxy::LocationProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

LocationProxy::LocationProxy(jint p0, jint p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(II)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0, p1 ) );
}

LocationProxy::~LocationProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

LocationProxy& LocationProxy::operator=(const LocationProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean LocationProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy LocationProxy::translate(::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationVectorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "translate", "(Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/LocationVector;)Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Location;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

jint LocationProxy::getColumn()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getColumn", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint LocationProxy::getRow()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getRow", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint LocationProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper LocationProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy LocationProxy::from(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "from", "(II)Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Location;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0, p1 )  );
}

::java::util::stream::StreamProxy LocationProxy::getAllLocationsFromTo(::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p0, ::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getAllLocationsFromTo", "(Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Location;Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Location;)Ljava/util/stream/Stream;" );
	return ::java::util::stream::StreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

