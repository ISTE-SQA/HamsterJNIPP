#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "Pattern_GroupHeadProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::regex;


std::string Pattern_GroupHeadProxy::className = "java/util/regex/Pattern$GroupHead";
jclass Pattern_GroupHeadProxy::objectClass = NULL;

jclass Pattern_GroupHeadProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

Pattern_GroupHeadProxy::Pattern_GroupHeadProxy(void* unused)
{
}

jobject Pattern_GroupHeadProxy::_getPeerObject() const
{
	return peerObject;
}

jclass Pattern_GroupHeadProxy::getObjectClass()
{
	return _getObjectClass();
}

Pattern_GroupHeadProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
Pattern_GroupHeadProxy::Pattern_GroupHeadProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

Pattern_GroupHeadProxy::~Pattern_GroupHeadProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

Pattern_GroupHeadProxy& Pattern_GroupHeadProxy::operator=(const Pattern_GroupHeadProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
