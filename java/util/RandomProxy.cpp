#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "RandomProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\stream\DoubleStreamProxy.h"
#include "java\util\stream\IntStreamProxy.h"
#include "java\util\stream\LongStreamProxy.h"
#include "java\util\concurrent\atomic\AtomicLongProxy.h"
#include "java\io\ObjectStreamFieldProxy.h"
#include "sun\misc\UnsafeProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string RandomProxy::className = "java/util/Random";
jclass RandomProxy::objectClass = NULL;

jclass RandomProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

RandomProxy::RandomProxy(void* unused)
{
}

jobject RandomProxy::_getPeerObject() const
{
	return peerObject;
}

jclass RandomProxy::getObjectClass()
{
	return _getObjectClass();
}

RandomProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
RandomProxy::RandomProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

RandomProxy::RandomProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

RandomProxy::RandomProxy(jlong p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(J)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0 ) );
}

RandomProxy::~RandomProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

RandomProxy& RandomProxy::operator=(const RandomProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean RandomProxy::nextBoolean()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "nextBoolean", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jdouble RandomProxy::nextDouble()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "nextDouble", "()D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid );
}

jfloat RandomProxy::nextFloat()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "nextFloat", "()F" );
	return JNIEnvHelper::CallFloatMethod( _getPeerObject(), mid );
}

jint RandomProxy::nextInt()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "nextInt", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint RandomProxy::nextInt(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "nextInt", "(I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

::java::util::stream::DoubleStreamProxy RandomProxy::doubles()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "doubles", "()Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::DoubleStreamProxy RandomProxy::doubles(jdouble p0, jdouble p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "doubles", "(DD)Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::util::stream::DoubleStreamProxy RandomProxy::doubles(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "doubles", "(J)Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::util::stream::DoubleStreamProxy RandomProxy::doubles(jlong p0, jdouble p1, jdouble p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "doubles", "(JDD)Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1, p2 )  );
}

::java::util::stream::IntStreamProxy RandomProxy::ints()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "ints", "()Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::IntStreamProxy RandomProxy::ints(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "ints", "(II)Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::util::stream::IntStreamProxy RandomProxy::ints(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "ints", "(J)Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::util::stream::IntStreamProxy RandomProxy::ints(jlong p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "ints", "(JII)Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1, p2 )  );
}

::java::util::stream::LongStreamProxy RandomProxy::longs()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "longs", "()Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::LongStreamProxy RandomProxy::longs(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "longs", "(J)Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::util::stream::LongStreamProxy RandomProxy::longs(jlong p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "longs", "(JJ)Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::util::stream::LongStreamProxy RandomProxy::longs(jlong p0, jlong p1, jlong p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "longs", "(JJJ)Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1, p2 )  );
}

jlong RandomProxy::nextLong()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "nextLong", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jdouble RandomProxy::nextGaussian()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "nextGaussian", "()D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid );
}

void RandomProxy::setSeed(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setSeed", "(J)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void RandomProxy::nextBytes(::net::sourceforge::jnipp::JByteArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "nextBytes", "([B)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jbyteArray>( p0 ) );
}

