#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "LongSupplierProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string LongSupplierProxy::className = "java/util/function/LongSupplier";
jclass LongSupplierProxy::objectClass = NULL;

jclass LongSupplierProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

LongSupplierProxy::LongSupplierProxy(void* unused)
{
}

jobject LongSupplierProxy::_getPeerObject() const
{
	return peerObject;
}

jclass LongSupplierProxy::getObjectClass()
{
	return _getObjectClass();
}

LongSupplierProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
LongSupplierProxy::LongSupplierProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

LongSupplierProxy::~LongSupplierProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

LongSupplierProxy& LongSupplierProxy::operator=(const LongSupplierProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jlong LongSupplierProxy::getAsLong()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAsLong", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

