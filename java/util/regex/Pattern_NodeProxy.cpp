#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "Pattern_NodeProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::regex;


std::string Pattern_NodeProxy::className = "java/util/regex/Pattern$Node";
jclass Pattern_NodeProxy::objectClass = NULL;

jclass Pattern_NodeProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

Pattern_NodeProxy::Pattern_NodeProxy(void* unused)
{
}

jobject Pattern_NodeProxy::_getPeerObject() const
{
	return peerObject;
}

jclass Pattern_NodeProxy::getObjectClass()
{
	return _getObjectClass();
}

Pattern_NodeProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
Pattern_NodeProxy::Pattern_NodeProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

Pattern_NodeProxy::~Pattern_NodeProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

Pattern_NodeProxy& Pattern_NodeProxy::operator=(const Pattern_NodeProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
