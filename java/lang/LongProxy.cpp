#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "LongProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\lang\ClassProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string LongProxy::className = "java/lang/Long";
jclass LongProxy::objectClass = NULL;

jclass LongProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

LongProxy::LongProxy(void* unused)
{
}

jobject LongProxy::_getPeerObject() const
{
	return peerObject;
}

jclass LongProxy::getObjectClass()
{
	return _getObjectClass();
}

LongProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
LongProxy::LongProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

LongProxy::LongProxy(::net::sourceforge::jnipp::JStringHelper p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ) ) );
}

LongProxy::LongProxy(jlong p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(J)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0 ) );
}

LongProxy::~LongProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

LongProxy& LongProxy::operator=(const LongProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean LongProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jbyte LongProxy::byteValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "byteValue", "()B" );
	return JNIEnvHelper::CallByteMethod( _getPeerObject(), mid );
}

jdouble LongProxy::doubleValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "doubleValue", "()D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid );
}

jfloat LongProxy::floatValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "floatValue", "()F" );
	return JNIEnvHelper::CallFloatMethod( _getPeerObject(), mid );
}

jint LongProxy::compareTo(::java::lang::LongProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareTo", "(Ljava/lang/Long;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint LongProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint LongProxy::intValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "intValue", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper LongProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jlong LongProxy::longValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "longValue", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jshort LongProxy::shortValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "shortValue", "()S" );
	return JNIEnvHelper::CallShortMethod( _getPeerObject(), mid );
}

jint LongProxy::bitCount(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "bitCount", "(J)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0 );
}

jint LongProxy::compare(jlong p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "compare", "(JJ)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0, p1 );
}

jint LongProxy::compareUnsigned(jlong p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "compareUnsigned", "(JJ)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0, p1 );
}

jint LongProxy::hashCode(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "hashCode", "(J)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0 );
}

jint LongProxy::numberOfLeadingZeros(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "numberOfLeadingZeros", "(J)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0 );
}

jint LongProxy::numberOfTrailingZeros(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "numberOfTrailingZeros", "(J)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0 );
}

jint LongProxy::signum(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "signum", "(J)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0 );
}

::java::lang::LongProxy LongProxy::decode(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "decode", "(Ljava/lang/String;)Ljava/lang/Long;" );
	return ::java::lang::LongProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::java::lang::LongProxy LongProxy::getLong(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getLong", "(Ljava/lang/String;)Ljava/lang/Long;" );
	return ::java::lang::LongProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::java::lang::LongProxy LongProxy::getLong(::net::sourceforge::jnipp::JStringHelper p0, ::java::lang::LongProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getLong", "(Ljava/lang/String;Ljava/lang/Long;)Ljava/lang/Long;" );
	return ::java::lang::LongProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::lang::LongProxy LongProxy::getLong(::net::sourceforge::jnipp::JStringHelper p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getLong", "(Ljava/lang/String;J)Ljava/lang/Long;" );
	return ::java::lang::LongProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ), p1 )  );
}

::java::lang::LongProxy LongProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Ljava/lang/Long;" );
	return ::java::lang::LongProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::java::lang::LongProxy LongProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;I)Ljava/lang/Long;" );
	return ::java::lang::LongProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ), p1 )  );
}

::java::lang::LongProxy LongProxy::valueOf(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(J)Ljava/lang/Long;" );
	return ::java::lang::LongProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::net::sourceforge::jnipp::JStringHelper LongProxy::toBinaryString(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toBinaryString", "(J)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::net::sourceforge::jnipp::JStringHelper LongProxy::toHexString(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toHexString", "(J)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::net::sourceforge::jnipp::JStringHelper LongProxy::toOctalString(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toOctalString", "(J)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::net::sourceforge::jnipp::JStringHelper LongProxy::toString(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toString", "(J)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::net::sourceforge::jnipp::JStringHelper LongProxy::toString(jlong p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toString", "(JI)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0, p1 )  );
}

::net::sourceforge::jnipp::JStringHelper LongProxy::toUnsignedString(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toUnsignedString", "(J)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::net::sourceforge::jnipp::JStringHelper LongProxy::toUnsignedString(jlong p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toUnsignedString", "(JI)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0, p1 )  );
}

jlong LongProxy::divideUnsigned(jlong p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "divideUnsigned", "(JJ)J" );
	return JNIEnvHelper::CallStaticLongMethod( _getObjectClass(), mid, p0, p1 );
}

jlong LongProxy::highestOneBit(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "highestOneBit", "(J)J" );
	return JNIEnvHelper::CallStaticLongMethod( _getObjectClass(), mid, p0 );
}

jlong LongProxy::lowestOneBit(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "lowestOneBit", "(J)J" );
	return JNIEnvHelper::CallStaticLongMethod( _getObjectClass(), mid, p0 );
}

jlong LongProxy::max(jlong p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "max", "(JJ)J" );
	return JNIEnvHelper::CallStaticLongMethod( _getObjectClass(), mid, p0, p1 );
}

jlong LongProxy::min(jlong p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "min", "(JJ)J" );
	return JNIEnvHelper::CallStaticLongMethod( _getObjectClass(), mid, p0, p1 );
}

jlong LongProxy::parseLong(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "parseLong", "(Ljava/lang/String;)J" );
	return JNIEnvHelper::CallStaticLongMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) );
}

jlong LongProxy::parseLong(::net::sourceforge::jnipp::JStringHelper p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "parseLong", "(Ljava/lang/String;I)J" );
	return JNIEnvHelper::CallStaticLongMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ), p1 );
}

jlong LongProxy::parseUnsignedLong(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "parseUnsignedLong", "(Ljava/lang/String;)J" );
	return JNIEnvHelper::CallStaticLongMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) );
}

jlong LongProxy::parseUnsignedLong(::net::sourceforge::jnipp::JStringHelper p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "parseUnsignedLong", "(Ljava/lang/String;I)J" );
	return JNIEnvHelper::CallStaticLongMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ), p1 );
}

jlong LongProxy::remainderUnsigned(jlong p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "remainderUnsigned", "(JJ)J" );
	return JNIEnvHelper::CallStaticLongMethod( _getObjectClass(), mid, p0, p1 );
}

jlong LongProxy::reverse(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "reverse", "(J)J" );
	return JNIEnvHelper::CallStaticLongMethod( _getObjectClass(), mid, p0 );
}

jlong LongProxy::reverseBytes(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "reverseBytes", "(J)J" );
	return JNIEnvHelper::CallStaticLongMethod( _getObjectClass(), mid, p0 );
}

jlong LongProxy::rotateLeft(jlong p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "rotateLeft", "(JI)J" );
	return JNIEnvHelper::CallStaticLongMethod( _getObjectClass(), mid, p0, p1 );
}

jlong LongProxy::rotateRight(jlong p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "rotateRight", "(JI)J" );
	return JNIEnvHelper::CallStaticLongMethod( _getObjectClass(), mid, p0, p1 );
}

jlong LongProxy::sum(jlong p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "sum", "(JJ)J" );
	return JNIEnvHelper::CallStaticLongMethod( _getObjectClass(), mid, p0, p1 );
}

