#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "NumberProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string NumberProxy::className = "java/lang/Number";
jclass NumberProxy::objectClass = NULL;

jclass NumberProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

NumberProxy::NumberProxy(void* unused)
{
}

jobject NumberProxy::_getPeerObject() const
{
	return peerObject;
}

jclass NumberProxy::getObjectClass()
{
	return _getObjectClass();
}

NumberProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
NumberProxy::NumberProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

NumberProxy::NumberProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

NumberProxy::~NumberProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

NumberProxy& NumberProxy::operator=(const NumberProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jdouble NumberProxy::doubleValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "doubleValue", "()D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid );
}

jfloat NumberProxy::floatValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "floatValue", "()F" );
	return JNIEnvHelper::CallFloatMethod( _getPeerObject(), mid );
}

jint NumberProxy::intValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "intValue", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jlong NumberProxy::longValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "longValue", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jbyte NumberProxy::byteValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "byteValue", "()B" );
	return JNIEnvHelper::CallByteMethod( _getPeerObject(), mid );
}

jshort NumberProxy::shortValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "shortValue", "()S" );
	return JNIEnvHelper::CallShortMethod( _getPeerObject(), mid );
}

