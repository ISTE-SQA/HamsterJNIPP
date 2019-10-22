#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ChannelProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::nio::channels;


std::string ChannelProxy::className = "java/nio/channels/Channel";
jclass ChannelProxy::objectClass = NULL;

jclass ChannelProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ChannelProxy::ChannelProxy(void* unused)
{
}

jobject ChannelProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ChannelProxy::getObjectClass()
{
	return _getObjectClass();
}

ChannelProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ChannelProxy::ChannelProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ChannelProxy::~ChannelProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ChannelProxy& ChannelProxy::operator=(const ChannelProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ChannelProxy::isOpen()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isOpen", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

void ChannelProxy::close()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "close", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

