#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "BaseStreamProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\IteratorProxy.h"
#include "java\util\SpliteratorProxy.h"
#include "java\lang\RunnableProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::stream;


std::string BaseStreamProxy::className = "java/util/stream/BaseStream";
jclass BaseStreamProxy::objectClass = NULL;

jclass BaseStreamProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

BaseStreamProxy::BaseStreamProxy(void* unused)
{
}

jobject BaseStreamProxy::_getPeerObject() const
{
	return peerObject;
}

jclass BaseStreamProxy::getObjectClass()
{
	return _getObjectClass();
}

BaseStreamProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
BaseStreamProxy::BaseStreamProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

BaseStreamProxy::~BaseStreamProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

BaseStreamProxy& BaseStreamProxy::operator=(const BaseStreamProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean BaseStreamProxy::isParallel()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isParallel", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::java::util::IteratorProxy BaseStreamProxy::iterator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "iterator", "()Ljava/util/Iterator;" );
	return ::java::util::IteratorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::SpliteratorProxy BaseStreamProxy::spliterator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "spliterator", "()Ljava/util/Spliterator;" );
	return ::java::util::SpliteratorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::BaseStreamProxy BaseStreamProxy::onClose(::java::lang::RunnableProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "onClose", "(Ljava/lang/Runnable;)Ljava/util/stream/BaseStream;" );
	return ::java::util::stream::BaseStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::BaseStreamProxy BaseStreamProxy::parallel()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "parallel", "()Ljava/util/stream/BaseStream;" );
	return ::java::util::stream::BaseStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::BaseStreamProxy BaseStreamProxy::sequential()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "sequential", "()Ljava/util/stream/BaseStream;" );
	return ::java::util::stream::BaseStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::BaseStreamProxy BaseStreamProxy::unordered()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "unordered", "()Ljava/util/stream/BaseStream;" );
	return ::java::util::stream::BaseStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void BaseStreamProxy::close()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "close", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

