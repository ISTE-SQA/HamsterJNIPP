#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "IterableProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\IteratorProxy.h"
#include "java\util\SpliteratorProxy.h"
#include "java\util\function\ConsumerProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string IterableProxy::className = "java/lang/Iterable";
jclass IterableProxy::objectClass = NULL;

jclass IterableProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

IterableProxy::IterableProxy(void* unused)
{
}

jobject IterableProxy::_getPeerObject() const
{
	return peerObject;
}

jclass IterableProxy::getObjectClass()
{
	return _getObjectClass();
}

IterableProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
IterableProxy::IterableProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

IterableProxy::~IterableProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

IterableProxy& IterableProxy::operator=(const IterableProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::util::IteratorProxy IterableProxy::iterator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "iterator", "()Ljava/util/Iterator;" );
	return ::java::util::IteratorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::SpliteratorProxy IterableProxy::spliterator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "spliterator", "()Ljava/util/Spliterator;" );
	return ::java::util::SpliteratorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void IterableProxy::forEach(::java::util::function::ConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEach", "(Ljava/util/function/Consumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

