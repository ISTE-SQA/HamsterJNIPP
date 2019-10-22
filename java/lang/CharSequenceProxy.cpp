#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "CharSequenceProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\stream\IntStreamProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string CharSequenceProxy::className = "java/lang/CharSequence";
jclass CharSequenceProxy::objectClass = NULL;

jclass CharSequenceProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

CharSequenceProxy::CharSequenceProxy(void* unused)
{
}

jobject CharSequenceProxy::_getPeerObject() const
{
	return peerObject;
}

jclass CharSequenceProxy::getObjectClass()
{
	return _getObjectClass();
}

CharSequenceProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
CharSequenceProxy::CharSequenceProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

CharSequenceProxy::~CharSequenceProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

CharSequenceProxy& CharSequenceProxy::operator=(const CharSequenceProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jchar CharSequenceProxy::charAt(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "charAt", "(I)C" );
	return JNIEnvHelper::CallCharMethod( _getPeerObject(), mid, p0 );
}

jint CharSequenceProxy::length()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "length", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::lang::CharSequenceProxy CharSequenceProxy::subSequence(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "subSequence", "(II)Ljava/lang/CharSequence;" );
	return ::java::lang::CharSequenceProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::net::sourceforge::jnipp::JStringHelper CharSequenceProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::IntStreamProxy CharSequenceProxy::chars()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "chars", "()Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::IntStreamProxy CharSequenceProxy::codePoints()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "codePoints", "()Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

