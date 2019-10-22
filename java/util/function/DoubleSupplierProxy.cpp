#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "DoubleSupplierProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string DoubleSupplierProxy::className = "java/util/function/DoubleSupplier";
jclass DoubleSupplierProxy::objectClass = NULL;

jclass DoubleSupplierProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

DoubleSupplierProxy::DoubleSupplierProxy(void* unused)
{
}

jobject DoubleSupplierProxy::_getPeerObject() const
{
	return peerObject;
}

jclass DoubleSupplierProxy::getObjectClass()
{
	return _getObjectClass();
}

DoubleSupplierProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
DoubleSupplierProxy::DoubleSupplierProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

DoubleSupplierProxy::~DoubleSupplierProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

DoubleSupplierProxy& DoubleSupplierProxy::operator=(const DoubleSupplierProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jdouble DoubleSupplierProxy::getAsDouble()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAsDouble", "()D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid );
}

