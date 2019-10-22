#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "CharsetProviderProxy.h"

// includes for parameter and return type proxy classes
#include "java\nio\charset\CharsetProxy.h"
#include "java\util\IteratorProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::charset::spi;


std::string CharsetProviderProxy::className = "java/nio/charset/spi/CharsetProvider";
jclass CharsetProviderProxy::objectClass = NULL;

jclass CharsetProviderProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

CharsetProviderProxy::CharsetProviderProxy(void* unused)
{
}

jobject CharsetProviderProxy::_getPeerObject() const
{
	return peerObject;
}

jclass CharsetProviderProxy::getObjectClass()
{
	return _getObjectClass();
}

CharsetProviderProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
CharsetProviderProxy::CharsetProviderProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

CharsetProviderProxy::~CharsetProviderProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

CharsetProviderProxy& CharsetProviderProxy::operator=(const CharsetProviderProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::nio::charset::CharsetProxy CharsetProviderProxy::charsetForName(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "charsetForName", "(Ljava/lang/String;)Ljava/nio/charset/Charset;" );
	return ::java::nio::charset::CharsetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::java::util::IteratorProxy CharsetProviderProxy::charsets()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "charsets", "()Ljava/util/Iterator;" );
	return ::java::util::IteratorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

