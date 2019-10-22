#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "SupplierProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string SupplierProxy::className = "java/util/function/Supplier";
jclass SupplierProxy::objectClass = NULL;

jclass SupplierProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

SupplierProxy::SupplierProxy(void* unused)
{
}

jobject SupplierProxy::_getPeerObject() const
{
	return peerObject;
}

jclass SupplierProxy::getObjectClass()
{
	return _getObjectClass();
}

SupplierProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
SupplierProxy::SupplierProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

SupplierProxy::~SupplierProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

SupplierProxy& SupplierProxy::operator=(const SupplierProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy SupplierProxy::get()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

