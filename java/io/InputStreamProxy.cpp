#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "InputStreamProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::io;


std::string InputStreamProxy::className = "java/io/InputStream";
jclass InputStreamProxy::objectClass = NULL;

jclass InputStreamProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

InputStreamProxy::InputStreamProxy(void* unused)
{
}

jobject InputStreamProxy::_getPeerObject() const
{
	return peerObject;
}

jclass InputStreamProxy::getObjectClass()
{
	return _getObjectClass();
}

InputStreamProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
InputStreamProxy::InputStreamProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

InputStreamProxy::InputStreamProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

InputStreamProxy::~InputStreamProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

InputStreamProxy& InputStreamProxy::operator=(const InputStreamProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jint InputStreamProxy::read()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "read", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jboolean InputStreamProxy::markSupported()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "markSupported", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jint InputStreamProxy::available()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "available", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint InputStreamProxy::read(::net::sourceforge::jnipp::JByteArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "read", "([B)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jbyteArray>( p0 ) );
}

jint InputStreamProxy::read(::net::sourceforge::jnipp::JByteArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "read", "([BII)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jbyteArray>( p0 ), p1, p2 );
}

jlong InputStreamProxy::skip(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "skip", "(J)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0 );
}

void InputStreamProxy::mark(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "mark", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void InputStreamProxy::reset()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reset", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void InputStreamProxy::close()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "close", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

