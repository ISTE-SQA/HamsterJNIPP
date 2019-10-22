#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "LongToIntFunctionProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string LongToIntFunctionProxy::className = "java/util/function/LongToIntFunction";
jclass LongToIntFunctionProxy::objectClass = NULL;

jclass LongToIntFunctionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

LongToIntFunctionProxy::LongToIntFunctionProxy(void* unused)
{
}

jobject LongToIntFunctionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass LongToIntFunctionProxy::getObjectClass()
{
	return _getObjectClass();
}

LongToIntFunctionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
LongToIntFunctionProxy::LongToIntFunctionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

LongToIntFunctionProxy::~LongToIntFunctionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

LongToIntFunctionProxy& LongToIntFunctionProxy::operator=(const LongToIntFunctionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jint LongToIntFunctionProxy::applyAsInt(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "applyAsInt", "(J)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

