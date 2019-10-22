#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "Collector_CharacteristicsProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::stream;


std::string Collector_CharacteristicsProxy::className = "java/util/stream/Collector$Characteristics";
jclass Collector_CharacteristicsProxy::objectClass = NULL;

jclass Collector_CharacteristicsProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

Collector_CharacteristicsProxy::Collector_CharacteristicsProxy(void* unused)
{
}

jobject Collector_CharacteristicsProxy::_getPeerObject() const
{
	return peerObject;
}

jclass Collector_CharacteristicsProxy::getObjectClass()
{
	return _getObjectClass();
}

Collector_CharacteristicsProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
Collector_CharacteristicsProxy::Collector_CharacteristicsProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

Collector_CharacteristicsProxy::~Collector_CharacteristicsProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

Collector_CharacteristicsProxy& Collector_CharacteristicsProxy::operator=(const Collector_CharacteristicsProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::util::stream::Collector_CharacteristicsProxy Collector_CharacteristicsProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Ljava/util/stream/Collector$Characteristics;" );
	return ::java::util::stream::Collector_CharacteristicsProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::java::util::stream::Collector_CharacteristicsProxy>::ProxyArray<1> Collector_CharacteristicsProxy::values()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "values", "()[Ljava/util/stream/Collector$Characteristics;" );
	return ::net::sourceforge::jnipp::PA<::java::util::stream::Collector_CharacteristicsProxy>::ProxyArray<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

