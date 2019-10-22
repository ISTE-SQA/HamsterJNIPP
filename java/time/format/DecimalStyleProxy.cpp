#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "DecimalStyleProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\util\LocaleProxy.h"
#include "java\util\SetProxy.h"
#include "java\util\concurrent\ConcurrentMapProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::format;


std::string DecimalStyleProxy::className = "java/time/format/DecimalStyle";
jclass DecimalStyleProxy::objectClass = NULL;

jclass DecimalStyleProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

DecimalStyleProxy::DecimalStyleProxy(void* unused)
{
}

jobject DecimalStyleProxy::_getPeerObject() const
{
	return peerObject;
}

jclass DecimalStyleProxy::getObjectClass()
{
	return _getObjectClass();
}

DecimalStyleProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
DecimalStyleProxy::DecimalStyleProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

DecimalStyleProxy::~DecimalStyleProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

DecimalStyleProxy& DecimalStyleProxy::operator=(const DecimalStyleProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean DecimalStyleProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jchar DecimalStyleProxy::getDecimalSeparator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDecimalSeparator", "()C" );
	return JNIEnvHelper::CallCharMethod( _getPeerObject(), mid );
}

jchar DecimalStyleProxy::getNegativeSign()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getNegativeSign", "()C" );
	return JNIEnvHelper::CallCharMethod( _getPeerObject(), mid );
}

jchar DecimalStyleProxy::getPositiveSign()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getPositiveSign", "()C" );
	return JNIEnvHelper::CallCharMethod( _getPeerObject(), mid );
}

jchar DecimalStyleProxy::getZeroDigit()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getZeroDigit", "()C" );
	return JNIEnvHelper::CallCharMethod( _getPeerObject(), mid );
}

jint DecimalStyleProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper DecimalStyleProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::format::DecimalStyleProxy DecimalStyleProxy::withDecimalSeparator(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withDecimalSeparator", "(C)Ljava/time/format/DecimalStyle;" );
	return ::java::time::format::DecimalStyleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::format::DecimalStyleProxy DecimalStyleProxy::withNegativeSign(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withNegativeSign", "(C)Ljava/time/format/DecimalStyle;" );
	return ::java::time::format::DecimalStyleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::format::DecimalStyleProxy DecimalStyleProxy::withPositiveSign(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withPositiveSign", "(C)Ljava/time/format/DecimalStyle;" );
	return ::java::time::format::DecimalStyleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::format::DecimalStyleProxy DecimalStyleProxy::withZeroDigit(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withZeroDigit", "(C)Ljava/time/format/DecimalStyle;" );
	return ::java::time::format::DecimalStyleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::format::DecimalStyleProxy DecimalStyleProxy::of(::java::util::LocaleProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(Ljava/util/Locale;)Ljava/time/format/DecimalStyle;" );
	return ::java::time::format::DecimalStyleProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::format::DecimalStyleProxy DecimalStyleProxy::ofDefaultLocale()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "ofDefaultLocale", "()Ljava/time/format/DecimalStyle;" );
	return ::java::time::format::DecimalStyleProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::java::util::SetProxy DecimalStyleProxy::getAvailableLocales()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getAvailableLocales", "()Ljava/util/Set;" );
	return ::java::util::SetProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

