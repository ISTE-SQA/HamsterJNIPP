#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "URLConnectionProxy.h"

// includes for parameter and return type proxy classes
#include "java\io\InputStreamProxy.h"
#include "java\io\OutputStreamProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\lang\ClassProxy.h"
#include "java\net\URLProxy.h"
#include "java\security\PermissionProxy.h"
#include "java\util\MapProxy.h"
#include "java\net\FileNameMapProxy.h"
#include "java\net\ContentHandlerFactoryProxy.h"
#include "java\util\HashtableProxy.h"
#include "sun\net\www\MessageHeaderProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::net;


std::string URLConnectionProxy::className = "java/net/URLConnection";
jclass URLConnectionProxy::objectClass = NULL;

jclass URLConnectionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

URLConnectionProxy::URLConnectionProxy(void* unused)
{
}

jobject URLConnectionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass URLConnectionProxy::getObjectClass()
{
	return _getObjectClass();
}

URLConnectionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
URLConnectionProxy::URLConnectionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

URLConnectionProxy::~URLConnectionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

URLConnectionProxy& URLConnectionProxy::operator=(const URLConnectionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
void URLConnectionProxy::connect()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "connect", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

jboolean URLConnectionProxy::getAllowUserInteraction()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAllowUserInteraction", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean URLConnectionProxy::getDefaultUseCaches()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDefaultUseCaches", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean URLConnectionProxy::getDoInput()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDoInput", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean URLConnectionProxy::getDoOutput()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDoOutput", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean URLConnectionProxy::getUseCaches()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getUseCaches", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jint URLConnectionProxy::getConnectTimeout()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getConnectTimeout", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint URLConnectionProxy::getContentLength()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getContentLength", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint URLConnectionProxy::getHeaderFieldInt(::net::sourceforge::jnipp::JStringHelper p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getHeaderFieldInt", "(Ljava/lang/String;I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), p1 );
}

jint URLConnectionProxy::getReadTimeout()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getReadTimeout", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::io::InputStreamProxy URLConnectionProxy::getInputStream()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getInputStream", "()Ljava/io/InputStream;" );
	return ::java::io::InputStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::io::OutputStreamProxy URLConnectionProxy::getOutputStream()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getOutputStream", "()Ljava/io/OutputStream;" );
	return ::java::io::OutputStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ObjectProxy URLConnectionProxy::getContent()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getContent", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ObjectProxy URLConnectionProxy::getContent(::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getContent", "([Ljava/lang/Class;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper URLConnectionProxy::getContentEncoding()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getContentEncoding", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper URLConnectionProxy::getContentType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getContentType", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper URLConnectionProxy::getHeaderField(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getHeaderField", "(I)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::net::sourceforge::jnipp::JStringHelper URLConnectionProxy::getHeaderField(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getHeaderField", "(Ljava/lang/String;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper URLConnectionProxy::getHeaderFieldKey(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getHeaderFieldKey", "(I)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::net::sourceforge::jnipp::JStringHelper URLConnectionProxy::getRequestProperty(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getRequestProperty", "(Ljava/lang/String;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper URLConnectionProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::net::URLProxy URLConnectionProxy::getURL()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getURL", "()Ljava/net/URL;" );
	return ::java::net::URLProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::security::PermissionProxy URLConnectionProxy::getPermission()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getPermission", "()Ljava/security/Permission;" );
	return ::java::security::PermissionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::MapProxy URLConnectionProxy::getHeaderFields()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getHeaderFields", "()Ljava/util/Map;" );
	return ::java::util::MapProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::MapProxy URLConnectionProxy::getRequestProperties()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getRequestProperties", "()Ljava/util/Map;" );
	return ::java::util::MapProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jlong URLConnectionProxy::getContentLengthLong()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getContentLengthLong", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong URLConnectionProxy::getDate()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDate", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong URLConnectionProxy::getExpiration()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getExpiration", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong URLConnectionProxy::getHeaderFieldDate(::net::sourceforge::jnipp::JStringHelper p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getHeaderFieldDate", "(Ljava/lang/String;J)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), p1 );
}

jlong URLConnectionProxy::getHeaderFieldLong(::net::sourceforge::jnipp::JStringHelper p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getHeaderFieldLong", "(Ljava/lang/String;J)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), p1 );
}

jlong URLConnectionProxy::getIfModifiedSince()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getIfModifiedSince", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong URLConnectionProxy::getLastModified()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getLastModified", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jboolean URLConnectionProxy::getDefaultAllowUserInteraction()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getDefaultAllowUserInteraction", "()Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid );
}

::net::sourceforge::jnipp::JStringHelper URLConnectionProxy::getDefaultRequestProperty(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getDefaultRequestProperty", "(Ljava/lang/String;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper URLConnectionProxy::guessContentTypeFromName(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "guessContentTypeFromName", "(Ljava/lang/String;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper URLConnectionProxy::guessContentTypeFromStream(::java::io::InputStreamProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "guessContentTypeFromStream", "(Ljava/io/InputStream;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::net::FileNameMapProxy URLConnectionProxy::getFileNameMap()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getFileNameMap", "()Ljava/net/FileNameMap;" );
	return ::java::net::FileNameMapProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

void URLConnectionProxy::setContentHandlerFactory(::java::net::ContentHandlerFactoryProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "setContentHandlerFactory", "(Ljava/net/ContentHandlerFactory;)V" );
	JNIEnvHelper::CallStaticVoidMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) );
}

void URLConnectionProxy::setDefaultAllowUserInteraction(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "setDefaultAllowUserInteraction", "(Z)V" );
	JNIEnvHelper::CallStaticVoidMethod( _getObjectClass(), mid, p0 );
}

void URLConnectionProxy::setDefaultRequestProperty(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "setDefaultRequestProperty", "(Ljava/lang/String;Ljava/lang/String;)V" );
	JNIEnvHelper::CallStaticVoidMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jstring>( p1 ) );
}

void URLConnectionProxy::setFileNameMap(::java::net::FileNameMapProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "setFileNameMap", "(Ljava/net/FileNameMap;)V" );
	JNIEnvHelper::CallStaticVoidMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) );
}

void URLConnectionProxy::addRequestProperty(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addRequestProperty", "(Ljava/lang/String;Ljava/lang/String;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), static_cast<jstring>( p1 ) );
}

void URLConnectionProxy::setAllowUserInteraction(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setAllowUserInteraction", "(Z)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void URLConnectionProxy::setConnectTimeout(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setConnectTimeout", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void URLConnectionProxy::setDefaultUseCaches(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setDefaultUseCaches", "(Z)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void URLConnectionProxy::setDoInput(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setDoInput", "(Z)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void URLConnectionProxy::setDoOutput(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setDoOutput", "(Z)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void URLConnectionProxy::setIfModifiedSince(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setIfModifiedSince", "(J)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void URLConnectionProxy::setReadTimeout(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setReadTimeout", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void URLConnectionProxy::setRequestProperty(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setRequestProperty", "(Ljava/lang/String;Ljava/lang/String;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), static_cast<jstring>( p1 ) );
}

void URLConnectionProxy::setUseCaches(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setUseCaches", "(Z)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

