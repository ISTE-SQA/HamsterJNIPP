#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "LongSummaryStatisticsProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string LongSummaryStatisticsProxy::className = "java/util/LongSummaryStatistics";
jclass LongSummaryStatisticsProxy::objectClass = NULL;

jclass LongSummaryStatisticsProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

LongSummaryStatisticsProxy::LongSummaryStatisticsProxy(void* unused)
{
}

jobject LongSummaryStatisticsProxy::_getPeerObject() const
{
	return peerObject;
}

jclass LongSummaryStatisticsProxy::getObjectClass()
{
	return _getObjectClass();
}

LongSummaryStatisticsProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
LongSummaryStatisticsProxy::LongSummaryStatisticsProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

LongSummaryStatisticsProxy::LongSummaryStatisticsProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

LongSummaryStatisticsProxy::~LongSummaryStatisticsProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

LongSummaryStatisticsProxy& LongSummaryStatisticsProxy::operator=(const LongSummaryStatisticsProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jdouble LongSummaryStatisticsProxy::getAverage()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAverage", "()D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid );
}

jlong LongSummaryStatisticsProxy::getCount()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getCount", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong LongSummaryStatisticsProxy::getMax()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMax", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong LongSummaryStatisticsProxy::getMin()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMin", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong LongSummaryStatisticsProxy::getSum()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getSum", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper LongSummaryStatisticsProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void LongSummaryStatisticsProxy::accept(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "accept", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void LongSummaryStatisticsProxy::accept(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "accept", "(J)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void LongSummaryStatisticsProxy::combine(::java::util::LongSummaryStatisticsProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "combine", "(Ljava/util/LongSummaryStatistics;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

