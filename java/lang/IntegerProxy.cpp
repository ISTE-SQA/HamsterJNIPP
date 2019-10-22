#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "IntegerProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\lang\ClassProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string IntegerProxy::className = "java/lang/Integer";
jclass IntegerProxy::objectClass = NULL;

jclass IntegerProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

IntegerProxy::IntegerProxy(void* unused)
{
}

jobject IntegerProxy::_getPeerObject() const
{
	return peerObject;
}

jclass IntegerProxy::getObjectClass()
{
	return _getObjectClass();
}

IntegerProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
IntegerProxy::IntegerProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

IntegerProxy::IntegerProxy(jint p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(I)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0 ) );
}

IntegerProxy::IntegerProxy(::net::sourceforge::jnipp::JStringHelper p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ) ) );
}

IntegerProxy::~IntegerProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

IntegerProxy& IntegerProxy::operator=(const IntegerProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean IntegerProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jbyte IntegerProxy::byteValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "byteValue", "()B" );
	return JNIEnvHelper::CallByteMethod( _getPeerObject(), mid );
}

jdouble IntegerProxy::doubleValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "doubleValue", "()D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid );
}

jfloat IntegerProxy::floatValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "floatValue", "()F" );
	return JNIEnvHelper::CallFloatMethod( _getPeerObject(), mid );
}

jint IntegerProxy::compareTo(::java::lang::IntegerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareTo", "(Ljava/lang/Integer;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint IntegerProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint IntegerProxy::intValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "intValue", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper IntegerProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jlong IntegerProxy::longValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "longValue", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jshort IntegerProxy::shortValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "shortValue", "()S" );
	return JNIEnvHelper::CallShortMethod( _getPeerObject(), mid );
}

jint IntegerProxy::bitCount(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "bitCount", "(I)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0 );
}

jint IntegerProxy::compare(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "compare", "(II)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0, p1 );
}

jint IntegerProxy::compareUnsigned(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "compareUnsigned", "(II)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0, p1 );
}

jint IntegerProxy::divideUnsigned(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "divideUnsigned", "(II)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0, p1 );
}

jint IntegerProxy::hashCode(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "hashCode", "(I)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0 );
}

jint IntegerProxy::highestOneBit(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "highestOneBit", "(I)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0 );
}

jint IntegerProxy::lowestOneBit(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "lowestOneBit", "(I)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0 );
}

jint IntegerProxy::max(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "max", "(II)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0, p1 );
}

jint IntegerProxy::min(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "min", "(II)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0, p1 );
}

jint IntegerProxy::numberOfLeadingZeros(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "numberOfLeadingZeros", "(I)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0 );
}

jint IntegerProxy::numberOfTrailingZeros(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "numberOfTrailingZeros", "(I)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0 );
}

jint IntegerProxy::parseInt(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "parseInt", "(Ljava/lang/String;)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) );
}

jint IntegerProxy::parseInt(::net::sourceforge::jnipp::JStringHelper p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "parseInt", "(Ljava/lang/String;I)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ), p1 );
}

jint IntegerProxy::parseUnsignedInt(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "parseUnsignedInt", "(Ljava/lang/String;)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) );
}

jint IntegerProxy::parseUnsignedInt(::net::sourceforge::jnipp::JStringHelper p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "parseUnsignedInt", "(Ljava/lang/String;I)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ), p1 );
}

jint IntegerProxy::remainderUnsigned(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "remainderUnsigned", "(II)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0, p1 );
}

jint IntegerProxy::reverse(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "reverse", "(I)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0 );
}

jint IntegerProxy::reverseBytes(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "reverseBytes", "(I)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0 );
}

jint IntegerProxy::rotateLeft(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "rotateLeft", "(II)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0, p1 );
}

jint IntegerProxy::rotateRight(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "rotateRight", "(II)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0, p1 );
}

jint IntegerProxy::signum(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "signum", "(I)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0 );
}

jint IntegerProxy::sum(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "sum", "(II)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0, p1 );
}

::java::lang::IntegerProxy IntegerProxy::decode(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "decode", "(Ljava/lang/String;)Ljava/lang/Integer;" );
	return ::java::lang::IntegerProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::java::lang::IntegerProxy IntegerProxy::getInteger(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getInteger", "(Ljava/lang/String;)Ljava/lang/Integer;" );
	return ::java::lang::IntegerProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::java::lang::IntegerProxy IntegerProxy::getInteger(::net::sourceforge::jnipp::JStringHelper p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getInteger", "(Ljava/lang/String;I)Ljava/lang/Integer;" );
	return ::java::lang::IntegerProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ), p1 )  );
}

::java::lang::IntegerProxy IntegerProxy::getInteger(::net::sourceforge::jnipp::JStringHelper p0, ::java::lang::IntegerProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getInteger", "(Ljava/lang/String;Ljava/lang/Integer;)Ljava/lang/Integer;" );
	return ::java::lang::IntegerProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::lang::IntegerProxy IntegerProxy::valueOf(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(I)Ljava/lang/Integer;" );
	return ::java::lang::IntegerProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::java::lang::IntegerProxy IntegerProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Ljava/lang/Integer;" );
	return ::java::lang::IntegerProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::java::lang::IntegerProxy IntegerProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;I)Ljava/lang/Integer;" );
	return ::java::lang::IntegerProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ), p1 )  );
}

::net::sourceforge::jnipp::JStringHelper IntegerProxy::toBinaryString(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toBinaryString", "(I)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::net::sourceforge::jnipp::JStringHelper IntegerProxy::toHexString(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toHexString", "(I)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::net::sourceforge::jnipp::JStringHelper IntegerProxy::toOctalString(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toOctalString", "(I)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::net::sourceforge::jnipp::JStringHelper IntegerProxy::toString(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toString", "(I)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::net::sourceforge::jnipp::JStringHelper IntegerProxy::toString(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toString", "(II)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0, p1 )  );
}

::net::sourceforge::jnipp::JStringHelper IntegerProxy::toUnsignedString(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toUnsignedString", "(I)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::net::sourceforge::jnipp::JStringHelper IntegerProxy::toUnsignedString(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toUnsignedString", "(II)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0, p1 )  );
}

jlong IntegerProxy::toUnsignedLong(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toUnsignedLong", "(I)J" );
	return JNIEnvHelper::CallStaticLongMethod( _getObjectClass(), mid, p0 );
}

