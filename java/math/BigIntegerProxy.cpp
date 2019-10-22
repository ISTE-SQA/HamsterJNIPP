#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "BigIntegerProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\RandomProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\math\BigIntegerProxy.h"
#include "java\io\ObjectStreamFieldProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::math;


std::string BigIntegerProxy::className = "java/math/BigInteger";
jclass BigIntegerProxy::objectClass = NULL;

jclass BigIntegerProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

BigIntegerProxy::BigIntegerProxy(void* unused)
{
}

jobject BigIntegerProxy::_getPeerObject() const
{
	return peerObject;
}

jclass BigIntegerProxy::getObjectClass()
{
	return _getObjectClass();
}

BigIntegerProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
BigIntegerProxy::BigIntegerProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

BigIntegerProxy::BigIntegerProxy(::net::sourceforge::jnipp::JByteArrayHelper<1> p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "([B)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jbyteArray>( p0 ) ) );
}

BigIntegerProxy::BigIntegerProxy(jint p0, ::net::sourceforge::jnipp::JByteArrayHelper<1> p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(I[B)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0, static_cast<jbyteArray>( p1 ) ) );
}

BigIntegerProxy::BigIntegerProxy(jint p0, jint p1, ::java::util::RandomProxy p2)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(IILjava/util/Random;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0, p1, static_cast<jobject>( p2 ) ) );
}

BigIntegerProxy::BigIntegerProxy(jint p0, ::java::util::RandomProxy p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(ILjava/util/Random;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0, static_cast<jobject>( p1 ) ) );
}

BigIntegerProxy::BigIntegerProxy(::net::sourceforge::jnipp::JStringHelper p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ) ) );
}

BigIntegerProxy::BigIntegerProxy(::net::sourceforge::jnipp::JStringHelper p0, jint p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;I)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ), p1 ) );
}

BigIntegerProxy::~BigIntegerProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

BigIntegerProxy& BigIntegerProxy::operator=(const BigIntegerProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean BigIntegerProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean BigIntegerProxy::isProbablePrime(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isProbablePrime", "(I)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, p0 );
}

jboolean BigIntegerProxy::testBit(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "testBit", "(I)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, p0 );
}

jbyte BigIntegerProxy::byteValueExact()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "byteValueExact", "()B" );
	return JNIEnvHelper::CallByteMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JByteArrayHelper<1> BigIntegerProxy::toByteArray()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toByteArray", "()[B" );
	return ::net::sourceforge::jnipp::JByteArrayHelper<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jdouble BigIntegerProxy::doubleValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "doubleValue", "()D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid );
}

jfloat BigIntegerProxy::floatValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "floatValue", "()F" );
	return JNIEnvHelper::CallFloatMethod( _getPeerObject(), mid );
}

jint BigIntegerProxy::bitCount()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "bitCount", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint BigIntegerProxy::bitLength()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "bitLength", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint BigIntegerProxy::compareTo(::java::math::BigIntegerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareTo", "(Ljava/math/BigInteger;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint BigIntegerProxy::getLowestSetBit()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getLowestSetBit", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint BigIntegerProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint BigIntegerProxy::intValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "intValue", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint BigIntegerProxy::intValueExact()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "intValueExact", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint BigIntegerProxy::signum()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "signum", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper BigIntegerProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper BigIntegerProxy::toString(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "(I)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::math::BigIntegerProxy BigIntegerProxy::abs()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "abs", "()Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::math::BigIntegerProxy BigIntegerProxy::add(::java::math::BigIntegerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "add", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::math::BigIntegerProxy BigIntegerProxy::_and(::java::math::BigIntegerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "and", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::math::BigIntegerProxy BigIntegerProxy::andNot(::java::math::BigIntegerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "andNot", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::math::BigIntegerProxy BigIntegerProxy::clearBit(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "clearBit", "(I)Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::math::BigIntegerProxy BigIntegerProxy::divide(::java::math::BigIntegerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "divide", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::math::BigIntegerProxy BigIntegerProxy::flipBit(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "flipBit", "(I)Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::math::BigIntegerProxy BigIntegerProxy::gcd(::java::math::BigIntegerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "gcd", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::math::BigIntegerProxy BigIntegerProxy::max(::java::math::BigIntegerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "max", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::math::BigIntegerProxy BigIntegerProxy::min(::java::math::BigIntegerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "min", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::math::BigIntegerProxy BigIntegerProxy::mod(::java::math::BigIntegerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "mod", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::math::BigIntegerProxy BigIntegerProxy::modInverse(::java::math::BigIntegerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "modInverse", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::math::BigIntegerProxy BigIntegerProxy::modPow(::java::math::BigIntegerProxy p0, ::java::math::BigIntegerProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "modPow", "(Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::math::BigIntegerProxy BigIntegerProxy::multiply(::java::math::BigIntegerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "multiply", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::math::BigIntegerProxy BigIntegerProxy::negate()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "negate", "()Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::math::BigIntegerProxy BigIntegerProxy::nextProbablePrime()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "nextProbablePrime", "()Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::math::BigIntegerProxy BigIntegerProxy::_not()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "not", "()Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::math::BigIntegerProxy BigIntegerProxy::_or(::java::math::BigIntegerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "or", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::math::BigIntegerProxy BigIntegerProxy::pow(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "pow", "(I)Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::math::BigIntegerProxy BigIntegerProxy::remainder(::java::math::BigIntegerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "remainder", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::math::BigIntegerProxy BigIntegerProxy::setBit(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setBit", "(I)Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::math::BigIntegerProxy BigIntegerProxy::shiftLeft(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "shiftLeft", "(I)Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::math::BigIntegerProxy BigIntegerProxy::shiftRight(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "shiftRight", "(I)Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::math::BigIntegerProxy BigIntegerProxy::subtract(::java::math::BigIntegerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "subtract", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::math::BigIntegerProxy BigIntegerProxy::_xor(::java::math::BigIntegerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "xor", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::java::math::BigIntegerProxy>::ProxyArray<1> BigIntegerProxy::divideAndRemainder(::java::math::BigIntegerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "divideAndRemainder", "(Ljava/math/BigInteger;)[Ljava/math/BigInteger;" );
	return ::net::sourceforge::jnipp::PA<::java::math::BigIntegerProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

jlong BigIntegerProxy::longValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "longValue", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong BigIntegerProxy::longValueExact()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "longValueExact", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jshort BigIntegerProxy::shortValueExact()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "shortValueExact", "()S" );
	return JNIEnvHelper::CallShortMethod( _getPeerObject(), mid );
}

::java::math::BigIntegerProxy BigIntegerProxy::probablePrime(jint p0, ::java::util::RandomProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "probablePrime", "(ILjava/util/Random;)Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::math::BigIntegerProxy BigIntegerProxy::valueOf(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(J)Ljava/math/BigInteger;" );
	return ::java::math::BigIntegerProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

