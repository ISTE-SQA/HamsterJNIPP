#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "Format_FieldProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::text;


std::string Format_FieldProxy::className = "java/text/Format$Field";
jclass Format_FieldProxy::objectClass = NULL;

jclass Format_FieldProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

Format_FieldProxy::Format_FieldProxy(void* unused)
{
}

jobject Format_FieldProxy::_getPeerObject() const
{
	return peerObject;
}

jclass Format_FieldProxy::getObjectClass()
{
	return _getObjectClass();
}

Format_FieldProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
Format_FieldProxy::Format_FieldProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

Format_FieldProxy::~Format_FieldProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

Format_FieldProxy& Format_FieldProxy::operator=(const Format_FieldProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
