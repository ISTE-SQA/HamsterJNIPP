#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "UrlDeserializedStateProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::net;


std::string UrlDeserializedStateProxy::className = "java/net/UrlDeserializedState";
jclass UrlDeserializedStateProxy::objectClass = NULL;

jclass UrlDeserializedStateProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

UrlDeserializedStateProxy::UrlDeserializedStateProxy(void* unused)
{
}

jobject UrlDeserializedStateProxy::_getPeerObject() const
{
	return peerObject;
}

jclass UrlDeserializedStateProxy::getObjectClass()
{
	return _getObjectClass();
}

UrlDeserializedStateProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
UrlDeserializedStateProxy::UrlDeserializedStateProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

UrlDeserializedStateProxy::UrlDeserializedStateProxy(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1, jint p2, ::net::sourceforge::jnipp::JStringHelper p3, ::net::sourceforge::jnipp::JStringHelper p4, ::net::sourceforge::jnipp::JStringHelper p5, jint p6)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jstring>( p1 ), p2, static_cast<jstring>( p3 ), static_cast<jstring>( p4 ), static_cast<jstring>( p5 ), p6 ) );
}

UrlDeserializedStateProxy::~UrlDeserializedStateProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

UrlDeserializedStateProxy& UrlDeserializedStateProxy::operator=(const UrlDeserializedStateProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
