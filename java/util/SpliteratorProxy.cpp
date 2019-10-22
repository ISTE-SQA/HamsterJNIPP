#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "SpliteratorProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\function\ConsumerProxy.h"
#include "java\util\ComparatorProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string SpliteratorProxy::className = "java/util/Spliterator";
jclass SpliteratorProxy::objectClass = NULL;

jclass SpliteratorProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

SpliteratorProxy::SpliteratorProxy(void* unused)
{
}

jobject SpliteratorProxy::_getPeerObject() const
{
	return peerObject;
}

jclass SpliteratorProxy::getObjectClass()
{
	return _getObjectClass();
}

SpliteratorProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
SpliteratorProxy::SpliteratorProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

SpliteratorProxy::~SpliteratorProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

SpliteratorProxy& SpliteratorProxy::operator=(const SpliteratorProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean SpliteratorProxy::tryAdvance(::java::util::function::ConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "tryAdvance", "(Ljava/util/function/Consumer;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint SpliteratorProxy::characteristics()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "characteristics", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::util::SpliteratorProxy SpliteratorProxy::trySplit()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "trySplit", "()Ljava/util/Spliterator;" );
	return ::java::util::SpliteratorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jlong SpliteratorProxy::estimateSize()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "estimateSize", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jboolean SpliteratorProxy::hasCharacteristics(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hasCharacteristics", "(I)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, p0 );
}

::java::util::ComparatorProxy SpliteratorProxy::getComparator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getComparator", "()Ljava/util/Comparator;" );
	return ::java::util::ComparatorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jlong SpliteratorProxy::getExactSizeIfKnown()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getExactSizeIfKnown", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

void SpliteratorProxy::forEachRemaining(::java::util::function::ConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEachRemaining", "(Ljava/util/function/Consumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

