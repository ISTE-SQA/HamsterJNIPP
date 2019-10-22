#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ParsePositionProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::text;


std::string ParsePositionProxy::className = "java/text/ParsePosition";
jclass ParsePositionProxy::objectClass = NULL;

jclass ParsePositionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ParsePositionProxy::ParsePositionProxy(void* unused)
{
}

jobject ParsePositionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ParsePositionProxy::getObjectClass()
{
	return _getObjectClass();
}

ParsePositionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ParsePositionProxy::ParsePositionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ParsePositionProxy::ParsePositionProxy(jint p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(I)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0 ) );
}

ParsePositionProxy::~ParsePositionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ParsePositionProxy& ParsePositionProxy::operator=(const ParsePositionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ParsePositionProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint ParsePositionProxy::getErrorIndex()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getErrorIndex", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint ParsePositionProxy::getIndex()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getIndex", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint ParsePositionProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper ParsePositionProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void ParsePositionProxy::setErrorIndex(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setErrorIndex", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void ParsePositionProxy::setIndex(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setIndex", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

