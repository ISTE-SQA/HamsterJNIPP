#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "FieldTypeSignatureProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace sun::reflect::generics::tree;


std::string FieldTypeSignatureProxy::className = "sun/reflect/generics/tree/FieldTypeSignature";
jclass FieldTypeSignatureProxy::objectClass = NULL;

jclass FieldTypeSignatureProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

FieldTypeSignatureProxy::FieldTypeSignatureProxy(void* unused)
{
}

jobject FieldTypeSignatureProxy::_getPeerObject() const
{
	return peerObject;
}

jclass FieldTypeSignatureProxy::getObjectClass()
{
	return _getObjectClass();
}

FieldTypeSignatureProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
FieldTypeSignatureProxy::FieldTypeSignatureProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

FieldTypeSignatureProxy::~FieldTypeSignatureProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

FieldTypeSignatureProxy& FieldTypeSignatureProxy::operator=(const FieldTypeSignatureProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
