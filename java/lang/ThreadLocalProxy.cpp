#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ThreadLocalProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\util\function\SupplierProxy.h"
#include "java\util\concurrent\atomic\AtomicIntegerProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string ThreadLocalProxy::className = "java/lang/ThreadLocal";
jclass ThreadLocalProxy::objectClass = NULL;

jclass ThreadLocalProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ThreadLocalProxy::ThreadLocalProxy(void* unused)
{
}

jobject ThreadLocalProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ThreadLocalProxy::getObjectClass()
{
	return _getObjectClass();
}

ThreadLocalProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ThreadLocalProxy::ThreadLocalProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ThreadLocalProxy::ThreadLocalProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

ThreadLocalProxy::~ThreadLocalProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ThreadLocalProxy& ThreadLocalProxy::operator=(const ThreadLocalProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy ThreadLocalProxy::get()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ThreadLocalProxy ThreadLocalProxy::withInitial(::java::util::function::SupplierProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "withInitial", "(Ljava/util/function/Supplier;)Ljava/lang/ThreadLocal;" );
	return ::java::lang::ThreadLocalProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

void ThreadLocalProxy::remove()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "remove", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void ThreadLocalProxy::set(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "set", "(Ljava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

