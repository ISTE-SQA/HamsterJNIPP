#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "CoderResultProxy.h"

// includes for parameter and return type proxy classes
#include "java\nio\charset\CoderResult_CacheProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::charset;


std::string CoderResultProxy::className = "java/nio/charset/CoderResult";
jclass CoderResultProxy::objectClass = NULL;

jclass CoderResultProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

CoderResultProxy::CoderResultProxy(void* unused)
{
}

jobject CoderResultProxy::_getPeerObject() const
{
	return peerObject;
}

jclass CoderResultProxy::getObjectClass()
{
	return _getObjectClass();
}

CoderResultProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
CoderResultProxy::CoderResultProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

CoderResultProxy::~CoderResultProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

CoderResultProxy& CoderResultProxy::operator=(const CoderResultProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean CoderResultProxy::isError()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isError", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean CoderResultProxy::isMalformed()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isMalformed", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean CoderResultProxy::isOverflow()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isOverflow", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean CoderResultProxy::isUnderflow()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isUnderflow", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean CoderResultProxy::isUnmappable()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isUnmappable", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jint CoderResultProxy::length()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "length", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper CoderResultProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::charset::CoderResultProxy CoderResultProxy::malformedForLength(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "malformedForLength", "(I)Ljava/nio/charset/CoderResult;" );
	return ::java::nio::charset::CoderResultProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::java::nio::charset::CoderResultProxy CoderResultProxy::unmappableForLength(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "unmappableForLength", "(I)Ljava/nio/charset/CoderResult;" );
	return ::java::nio::charset::CoderResultProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

void CoderResultProxy::throwException()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "throwException", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

