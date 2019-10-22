#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "LocationVectorProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes;


std::string LocationVectorProxy::className = "de/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/LocationVector";
jclass LocationVectorProxy::objectClass = NULL;

jclass LocationVectorProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

LocationVectorProxy::LocationVectorProxy(void* unused)
{
}

jobject LocationVectorProxy::_getPeerObject() const
{
	return peerObject;
}

jclass LocationVectorProxy::getObjectClass()
{
	return _getObjectClass();
}

LocationVectorProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
LocationVectorProxy::LocationVectorProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

LocationVectorProxy::LocationVectorProxy(jint p0, jint p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(II)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0, p1 ) );
}

LocationVectorProxy::~LocationVectorProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

LocationVectorProxy& LocationVectorProxy::operator=(const LocationVectorProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean LocationVectorProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint LocationVectorProxy::getDeltaColumn()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDeltaColumn", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint LocationVectorProxy::getDeltaRow()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDeltaRow", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint LocationVectorProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

