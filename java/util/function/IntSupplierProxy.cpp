#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "IntSupplierProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string IntSupplierProxy::className = "java/util/function/IntSupplier";
jclass IntSupplierProxy::objectClass = NULL;

jclass IntSupplierProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

IntSupplierProxy::IntSupplierProxy(void* unused)
{
}

jobject IntSupplierProxy::_getPeerObject() const
{
	return peerObject;
}

jclass IntSupplierProxy::getObjectClass()
{
	return _getObjectClass();
}

IntSupplierProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
IntSupplierProxy::IntSupplierProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

IntSupplierProxy::~IntSupplierProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

IntSupplierProxy& IntSupplierProxy::operator=(const IntSupplierProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jint IntSupplierProxy::getAsInt()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAsInt", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

