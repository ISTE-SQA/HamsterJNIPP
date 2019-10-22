#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "InterruptibleProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ThreadProxy.h"

using namespace net::sourceforge::jnipp;
using namespace sun::nio::ch;


std::string InterruptibleProxy::className = "sun/nio/ch/Interruptible";
jclass InterruptibleProxy::objectClass = NULL;

jclass InterruptibleProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

InterruptibleProxy::InterruptibleProxy(void* unused)
{
}

jobject InterruptibleProxy::_getPeerObject() const
{
	return peerObject;
}

jclass InterruptibleProxy::getObjectClass()
{
	return _getObjectClass();
}

InterruptibleProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
InterruptibleProxy::InterruptibleProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

InterruptibleProxy::~InterruptibleProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

InterruptibleProxy& InterruptibleProxy::operator=(const InterruptibleProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
void InterruptibleProxy::interrupt(::java::lang::ThreadProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "interrupt", "(Ljava/lang/Thread;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

