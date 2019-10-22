#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "FieldPositionProxy.h"

// includes for parameter and return type proxy classes
#include "java\text\Format_FieldProxy.h"
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::text;


std::string FieldPositionProxy::className = "java/text/FieldPosition";
jclass FieldPositionProxy::objectClass = NULL;

jclass FieldPositionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

FieldPositionProxy::FieldPositionProxy(void* unused)
{
}

jobject FieldPositionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass FieldPositionProxy::getObjectClass()
{
	return _getObjectClass();
}

FieldPositionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
FieldPositionProxy::FieldPositionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

FieldPositionProxy::FieldPositionProxy(jint p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(I)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0 ) );
}

FieldPositionProxy::FieldPositionProxy(::java::text::Format_FieldProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/text/Format$Field;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

FieldPositionProxy::FieldPositionProxy(::java::text::Format_FieldProxy p0, jint p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/text/Format$Field;I)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), p1 ) );
}

FieldPositionProxy::~FieldPositionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

FieldPositionProxy& FieldPositionProxy::operator=(const FieldPositionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean FieldPositionProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint FieldPositionProxy::getBeginIndex()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getBeginIndex", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint FieldPositionProxy::getEndIndex()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getEndIndex", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint FieldPositionProxy::getField()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getField", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint FieldPositionProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper FieldPositionProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::text::Format_FieldProxy FieldPositionProxy::getFieldAttribute()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getFieldAttribute", "()Ljava/text/Format$Field;" );
	return ::java::text::Format_FieldProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void FieldPositionProxy::setBeginIndex(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setBeginIndex", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void FieldPositionProxy::setEndIndex(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setEndIndex", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

