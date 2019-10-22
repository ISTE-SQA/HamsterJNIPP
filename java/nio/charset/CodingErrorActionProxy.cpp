#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "CodingErrorActionProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::nio::charset;


std::string CodingErrorActionProxy::className = "java/nio/charset/CodingErrorAction";
jclass CodingErrorActionProxy::objectClass = NULL;

jclass CodingErrorActionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

CodingErrorActionProxy::CodingErrorActionProxy(void* unused)
{
}

jobject CodingErrorActionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass CodingErrorActionProxy::getObjectClass()
{
	return _getObjectClass();
}

CodingErrorActionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
CodingErrorActionProxy::CodingErrorActionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

CodingErrorActionProxy::~CodingErrorActionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

CodingErrorActionProxy& CodingErrorActionProxy::operator=(const CodingErrorActionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::JStringHelper CodingErrorActionProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

