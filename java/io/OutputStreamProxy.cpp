#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "OutputStreamProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::io;


std::string OutputStreamProxy::className = "java/io/OutputStream";
jclass OutputStreamProxy::objectClass = NULL;

jclass OutputStreamProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

OutputStreamProxy::OutputStreamProxy(void* unused)
{
}

jobject OutputStreamProxy::_getPeerObject() const
{
	return peerObject;
}

jclass OutputStreamProxy::getObjectClass()
{
	return _getObjectClass();
}

OutputStreamProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
OutputStreamProxy::OutputStreamProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

OutputStreamProxy::OutputStreamProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

OutputStreamProxy::~OutputStreamProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

OutputStreamProxy& OutputStreamProxy::operator=(const OutputStreamProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
void OutputStreamProxy::write(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void OutputStreamProxy::close()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "close", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void OutputStreamProxy::flush()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "flush", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void OutputStreamProxy::write(::net::sourceforge::jnipp::JByteArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "([B)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jbyteArray>( p0 ) );
}

void OutputStreamProxy::write(::net::sourceforge::jnipp::JByteArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "([BII)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jbyteArray>( p0 ), p1, p2 );
}

