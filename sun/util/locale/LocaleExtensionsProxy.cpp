#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "LocaleExtensionsProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\lang\CharacterProxy.h"
#include "java\util\SetProxy.h"
#include "sun\util\locale\ExtensionProxy.h"
#include "java\util\MapProxy.h"

using namespace net::sourceforge::jnipp;
using namespace sun::util::locale;


std::string LocaleExtensionsProxy::className = "sun/util/locale/LocaleExtensions";
jclass LocaleExtensionsProxy::objectClass = NULL;

jclass LocaleExtensionsProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

LocaleExtensionsProxy::LocaleExtensionsProxy(void* unused)
{
}

jobject LocaleExtensionsProxy::_getPeerObject() const
{
	return peerObject;
}

jclass LocaleExtensionsProxy::getObjectClass()
{
	return _getObjectClass();
}

LocaleExtensionsProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
LocaleExtensionsProxy::LocaleExtensionsProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

LocaleExtensionsProxy::~LocaleExtensionsProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

LocaleExtensionsProxy& LocaleExtensionsProxy::operator=(const LocaleExtensionsProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean LocaleExtensionsProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean LocaleExtensionsProxy::isEmpty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isEmpty", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jint LocaleExtensionsProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper LocaleExtensionsProxy::getExtensionValue(::java::lang::CharacterProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getExtensionValue", "(Ljava/lang/Character;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper LocaleExtensionsProxy::getID()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getID", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper LocaleExtensionsProxy::getUnicodeLocaleType(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getUnicodeLocaleType", "(Ljava/lang/String;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper LocaleExtensionsProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::SetProxy LocaleExtensionsProxy::getKeys()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getKeys", "()Ljava/util/Set;" );
	return ::java::util::SetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::SetProxy LocaleExtensionsProxy::getUnicodeLocaleAttributes()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getUnicodeLocaleAttributes", "()Ljava/util/Set;" );
	return ::java::util::SetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::SetProxy LocaleExtensionsProxy::getUnicodeLocaleKeys()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getUnicodeLocaleKeys", "()Ljava/util/Set;" );
	return ::java::util::SetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jboolean LocaleExtensionsProxy::isValidKey(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isValidKey", "(C)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean LocaleExtensionsProxy::isValidUnicodeLocaleKey(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isValidUnicodeLocaleKey", "(Ljava/lang/String;)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) );
}

::sun::util::locale::ExtensionProxy LocaleExtensionsProxy::getExtension(::java::lang::CharacterProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getExtension", "(Ljava/lang/Character;)Lsun/util/locale/Extension;" );
	return ::sun::util::locale::ExtensionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

