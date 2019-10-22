#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "FileAttributeProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::file::attribute;


std::string FileAttributeProxy::className = "java/nio/file/attribute/FileAttribute";
jclass FileAttributeProxy::objectClass = NULL;

jclass FileAttributeProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

FileAttributeProxy::FileAttributeProxy(void* unused)
{
}

jobject FileAttributeProxy::_getPeerObject() const
{
	return peerObject;
}

jclass FileAttributeProxy::getObjectClass()
{
	return _getObjectClass();
}

FileAttributeProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
FileAttributeProxy::FileAttributeProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

FileAttributeProxy::~FileAttributeProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

FileAttributeProxy& FileAttributeProxy::operator=(const FileAttributeProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy FileAttributeProxy::value()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "value", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper FileAttributeProxy::name()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "name", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

