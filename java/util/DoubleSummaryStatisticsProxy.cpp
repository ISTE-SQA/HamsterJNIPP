#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "DoubleSummaryStatisticsProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string DoubleSummaryStatisticsProxy::className = "java/util/DoubleSummaryStatistics";
jclass DoubleSummaryStatisticsProxy::objectClass = NULL;

jclass DoubleSummaryStatisticsProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

DoubleSummaryStatisticsProxy::DoubleSummaryStatisticsProxy(void* unused)
{
}

jobject DoubleSummaryStatisticsProxy::_getPeerObject() const
{
	return peerObject;
}

jclass DoubleSummaryStatisticsProxy::getObjectClass()
{
	return _getObjectClass();
}

DoubleSummaryStatisticsProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
DoubleSummaryStatisticsProxy::DoubleSummaryStatisticsProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

DoubleSummaryStatisticsProxy::DoubleSummaryStatisticsProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

DoubleSummaryStatisticsProxy::~DoubleSummaryStatisticsProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

DoubleSummaryStatisticsProxy& DoubleSummaryStatisticsProxy::operator=(const DoubleSummaryStatisticsProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jdouble DoubleSummaryStatisticsProxy::getAverage()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAverage", "()D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid );
}

jdouble DoubleSummaryStatisticsProxy::getMax()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMax", "()D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid );
}

jdouble DoubleSummaryStatisticsProxy::getMin()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMin", "()D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid );
}

jdouble DoubleSummaryStatisticsProxy::getSum()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getSum", "()D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid );
}

jlong DoubleSummaryStatisticsProxy::getCount()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getCount", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper DoubleSummaryStatisticsProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void DoubleSummaryStatisticsProxy::accept(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "accept", "(D)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void DoubleSummaryStatisticsProxy::combine(::java::util::DoubleSummaryStatisticsProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "combine", "(Ljava/util/DoubleSummaryStatistics;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

