#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "DoubleProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\lang\ClassProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string DoubleProxy::className = "java/lang/Double";
jclass DoubleProxy::objectClass = NULL;

jclass DoubleProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

DoubleProxy::DoubleProxy(void* unused)
{
}

jobject DoubleProxy::_getPeerObject() const
{
	return peerObject;
}

jclass DoubleProxy::getObjectClass()
{
	return _getObjectClass();
}

DoubleProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
DoubleProxy::DoubleProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

DoubleProxy::DoubleProxy(jdouble p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(D)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0 ) );
}

DoubleProxy::DoubleProxy(::net::sourceforge::jnipp::JStringHelper p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ) ) );
}

DoubleProxy::~DoubleProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

DoubleProxy& DoubleProxy::operator=(const DoubleProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean DoubleProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean DoubleProxy::isInfinite()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isInfinite", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean DoubleProxy::isNaN()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isNaN", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jbyte DoubleProxy::byteValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "byteValue", "()B" );
	return JNIEnvHelper::CallByteMethod( _getPeerObject(), mid );
}

jdouble DoubleProxy::doubleValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "doubleValue", "()D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid );
}

jfloat DoubleProxy::floatValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "floatValue", "()F" );
	return JNIEnvHelper::CallFloatMethod( _getPeerObject(), mid );
}

jint DoubleProxy::compareTo(::java::lang::DoubleProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareTo", "(Ljava/lang/Double;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint DoubleProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint DoubleProxy::intValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "intValue", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper DoubleProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jlong DoubleProxy::longValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "longValue", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jshort DoubleProxy::shortValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "shortValue", "()S" );
	return JNIEnvHelper::CallShortMethod( _getPeerObject(), mid );
}

jboolean DoubleProxy::isFinite(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isFinite", "(D)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean DoubleProxy::isInfinite(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isInfinite", "(D)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean DoubleProxy::isNaN(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isNaN", "(D)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jdouble DoubleProxy::max(jdouble p0, jdouble p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "max", "(DD)D" );
	return JNIEnvHelper::CallStaticDoubleMethod( _getObjectClass(), mid, p0, p1 );
}

jdouble DoubleProxy::min(jdouble p0, jdouble p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "min", "(DD)D" );
	return JNIEnvHelper::CallStaticDoubleMethod( _getObjectClass(), mid, p0, p1 );
}

jdouble DoubleProxy::parseDouble(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "parseDouble", "(Ljava/lang/String;)D" );
	return JNIEnvHelper::CallStaticDoubleMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) );
}

jdouble DoubleProxy::sum(jdouble p0, jdouble p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "sum", "(DD)D" );
	return JNIEnvHelper::CallStaticDoubleMethod( _getObjectClass(), mid, p0, p1 );
}

jint DoubleProxy::compare(jdouble p0, jdouble p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "compare", "(DD)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0, p1 );
}

jint DoubleProxy::hashCode(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "hashCode", "(D)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0 );
}

::java::lang::DoubleProxy DoubleProxy::valueOf(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(D)Ljava/lang/Double;" );
	return ::java::lang::DoubleProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::java::lang::DoubleProxy DoubleProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Ljava/lang/Double;" );
	return ::java::lang::DoubleProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper DoubleProxy::toHexString(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toHexString", "(D)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::net::sourceforge::jnipp::JStringHelper DoubleProxy::toString(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toString", "(D)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

jlong DoubleProxy::doubleToLongBits(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "doubleToLongBits", "(D)J" );
	return JNIEnvHelper::CallStaticLongMethod( _getObjectClass(), mid, p0 );
}

jdouble DoubleProxy::longBitsToDouble(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "longBitsToDouble", "(J)D" );
	return JNIEnvHelper::CallStaticDoubleMethod( _getObjectClass(), mid, p0 );
}

jlong DoubleProxy::doubleToRawLongBits(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "doubleToRawLongBits", "(D)J" );
	return JNIEnvHelper::CallStaticLongMethod( _getObjectClass(), mid, p0 );
}

