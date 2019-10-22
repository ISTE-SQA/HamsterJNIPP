#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "MatchResultProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::regex;


std::string MatchResultProxy::className = "java/util/regex/MatchResult";
jclass MatchResultProxy::objectClass = NULL;

jclass MatchResultProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

MatchResultProxy::MatchResultProxy(void* unused)
{
}

jobject MatchResultProxy::_getPeerObject() const
{
	return peerObject;
}

jclass MatchResultProxy::getObjectClass()
{
	return _getObjectClass();
}

MatchResultProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
MatchResultProxy::MatchResultProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

MatchResultProxy::~MatchResultProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

MatchResultProxy& MatchResultProxy::operator=(const MatchResultProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jint MatchResultProxy::end()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "end", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint MatchResultProxy::end(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "end", "(I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

jint MatchResultProxy::groupCount()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "groupCount", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint MatchResultProxy::start()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "start", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint MatchResultProxy::start(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "start", "(I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

::net::sourceforge::jnipp::JStringHelper MatchResultProxy::group()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "group", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper MatchResultProxy::group(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "group", "(I)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

