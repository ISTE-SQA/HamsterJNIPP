#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "IntSummaryStatisticsProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string IntSummaryStatisticsProxy::className = "java/util/IntSummaryStatistics";
jclass IntSummaryStatisticsProxy::objectClass = NULL;

jclass IntSummaryStatisticsProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

IntSummaryStatisticsProxy::IntSummaryStatisticsProxy(void* unused)
{
}

jobject IntSummaryStatisticsProxy::_getPeerObject() const
{
	return peerObject;
}

jclass IntSummaryStatisticsProxy::getObjectClass()
{
	return _getObjectClass();
}

IntSummaryStatisticsProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
IntSummaryStatisticsProxy::IntSummaryStatisticsProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

IntSummaryStatisticsProxy::IntSummaryStatisticsProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

IntSummaryStatisticsProxy::~IntSummaryStatisticsProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

IntSummaryStatisticsProxy& IntSummaryStatisticsProxy::operator=(const IntSummaryStatisticsProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jdouble IntSummaryStatisticsProxy::getAverage()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAverage", "()D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid );
}

jint IntSummaryStatisticsProxy::getMax()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMax", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint IntSummaryStatisticsProxy::getMin()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMin", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jlong IntSummaryStatisticsProxy::getCount()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getCount", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong IntSummaryStatisticsProxy::getSum()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getSum", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper IntSummaryStatisticsProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void IntSummaryStatisticsProxy::accept(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "accept", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void IntSummaryStatisticsProxy::combine(::java::util::IntSummaryStatisticsProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "combine", "(Ljava/util/IntSummaryStatistics;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

