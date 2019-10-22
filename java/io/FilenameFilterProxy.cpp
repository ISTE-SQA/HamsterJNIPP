#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "FilenameFilterProxy.h"

// includes for parameter and return type proxy classes
#include "java\io\FileProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::io;


std::string FilenameFilterProxy::className = "java/io/FilenameFilter";
jclass FilenameFilterProxy::objectClass = NULL;

jclass FilenameFilterProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

FilenameFilterProxy::FilenameFilterProxy(void* unused)
{
}

jobject FilenameFilterProxy::_getPeerObject() const
{
	return peerObject;
}

jclass FilenameFilterProxy::getObjectClass()
{
	return _getObjectClass();
}

FilenameFilterProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
FilenameFilterProxy::FilenameFilterProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

FilenameFilterProxy::~FilenameFilterProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

FilenameFilterProxy& FilenameFilterProxy::operator=(const FilenameFilterProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean FilenameFilterProxy::accept(::java::io::FileProxy p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "accept", "(Ljava/io/File;Ljava/lang/String;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ) );
}

