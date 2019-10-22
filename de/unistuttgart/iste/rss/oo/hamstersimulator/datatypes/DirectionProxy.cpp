#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "DirectionProxy.h"

// includes for parameter and return type proxy classes
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\LocationVectorProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\DirectionProxy.h"

using namespace net::sourceforge::jnipp;
using namespace de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes;


std::string DirectionProxy::className = "de/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Direction";
jclass DirectionProxy::objectClass = NULL;

jclass DirectionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

DirectionProxy::DirectionProxy(void* unused)
{
}

jobject DirectionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass DirectionProxy::getObjectClass()
{
	return _getObjectClass();
}

DirectionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
DirectionProxy::DirectionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

DirectionProxy::~DirectionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

DirectionProxy& DirectionProxy::operator=(const DirectionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::DirectionProxy DirectionProxy::left()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "left", "()Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Direction;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::DirectionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::DirectionProxy DirectionProxy::right()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "right", "()Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Direction;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::DirectionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationVectorProxy DirectionProxy::getMovementVector()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMovementVector", "()Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/LocationVector;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationVectorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::DirectionProxy DirectionProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Direction;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::DirectionProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::DirectionProxy>::ProxyArray<1> DirectionProxy::values()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "values", "()[Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Direction;" );
	return ::net::sourceforge::jnipp::PA<::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::DirectionProxy>::ProxyArray<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

