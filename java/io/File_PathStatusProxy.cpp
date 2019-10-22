#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "File_PathStatusProxy.h"

// includes for parameter and return type proxy classes
#include "java\io\File_PathStatusProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::io;


std::string File_PathStatusProxy::className = "java/io/File$PathStatus";
jclass File_PathStatusProxy::objectClass = NULL;

jclass File_PathStatusProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

File_PathStatusProxy::File_PathStatusProxy(void* unused)
{
}

jobject File_PathStatusProxy::_getPeerObject() const
{
	return peerObject;
}

jclass File_PathStatusProxy::getObjectClass()
{
	return _getObjectClass();
}

File_PathStatusProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
File_PathStatusProxy::File_PathStatusProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

File_PathStatusProxy::~File_PathStatusProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

File_PathStatusProxy& File_PathStatusProxy::operator=(const File_PathStatusProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::io::File_PathStatusProxy File_PathStatusProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Ljava/io/File$PathStatus;" );
	return ::java::io::File_PathStatusProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::java::io::File_PathStatusProxy>::ProxyArray<1> File_PathStatusProxy::values()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "values", "()[Ljava/io/File$PathStatus;" );
	return ::net::sourceforge::jnipp::PA<::java::io::File_PathStatusProxy>::ProxyArray<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

