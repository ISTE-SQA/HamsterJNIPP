#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "PathMatcherProxy.h"

// includes for parameter and return type proxy classes
#include "java\nio\file\PathProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::file;


std::string PathMatcherProxy::className = "java/nio/file/PathMatcher";
jclass PathMatcherProxy::objectClass = NULL;

jclass PathMatcherProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

PathMatcherProxy::PathMatcherProxy(void* unused)
{
}

jobject PathMatcherProxy::_getPeerObject() const
{
	return peerObject;
}

jclass PathMatcherProxy::getObjectClass()
{
	return _getObjectClass();
}

PathMatcherProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
PathMatcherProxy::PathMatcherProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

PathMatcherProxy::~PathMatcherProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

PathMatcherProxy& PathMatcherProxy::operator=(const PathMatcherProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean PathMatcherProxy::matches(::java::nio::file::PathProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "matches", "(Ljava/nio/file/Path;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

