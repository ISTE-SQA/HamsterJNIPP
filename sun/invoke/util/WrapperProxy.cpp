#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "WrapperProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ClassProxy.h"
#include "java\lang\ObjectProxy.h"
#include "sun\invoke\util\WrapperProxy.h"

using namespace net::sourceforge::jnipp;
using namespace sun::invoke::util;


std::string WrapperProxy::className = "sun/invoke/util/Wrapper";
jclass WrapperProxy::objectClass = NULL;

jclass WrapperProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

WrapperProxy::WrapperProxy(void* unused)
{
}

jobject WrapperProxy::_getPeerObject() const
{
	return peerObject;
}

jclass WrapperProxy::getObjectClass()
{
	return _getObjectClass();
}

WrapperProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
WrapperProxy::WrapperProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

WrapperProxy::~WrapperProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

WrapperProxy& WrapperProxy::operator=(const WrapperProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean WrapperProxy::isConvertibleFrom(::sun::invoke::util::WrapperProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isConvertibleFrom", "(Lsun/invoke/util/Wrapper;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean WrapperProxy::isDoubleWord()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isDoubleWord", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean WrapperProxy::isFloating()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isFloating", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean WrapperProxy::isIntegral()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isIntegral", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean WrapperProxy::isNumeric()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isNumeric", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean WrapperProxy::isOther()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isOther", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean WrapperProxy::isSigned()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSigned", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean WrapperProxy::isSingleWord()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSingleWord", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean WrapperProxy::isSubwordOrInt()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSubwordOrInt", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean WrapperProxy::isUnsigned()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isUnsigned", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jchar WrapperProxy::basicTypeChar()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "basicTypeChar", "()C" );
	return JNIEnvHelper::CallCharMethod( _getPeerObject(), mid );
}

jint WrapperProxy::bitWidth()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "bitWidth", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint WrapperProxy::stackSlots()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "stackSlots", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::lang::ClassProxy WrapperProxy::arrayType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "arrayType", "()Ljava/lang/Class;" );
	return ::java::lang::ClassProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ClassProxy WrapperProxy::primitiveType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "primitiveType", "()Ljava/lang/Class;" );
	return ::java::lang::ClassProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ClassProxy WrapperProxy::wrapperType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "wrapperType", "()Ljava/lang/Class;" );
	return ::java::lang::ClassProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ClassProxy WrapperProxy::wrapperType(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "wrapperType", "(Ljava/lang/Class;)Ljava/lang/Class;" );
	return ::java::lang::ClassProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) )  );
}

::java::lang::ObjectProxy WrapperProxy::cast(::java::lang::ObjectProxy p0, ::java::lang::ClassProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "cast", "(Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jclass>( p1 ) )  );
}

::java::lang::ObjectProxy WrapperProxy::convert(::java::lang::ObjectProxy p0, ::java::lang::ClassProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "convert", "(Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jclass>( p1 ) )  );
}

::java::lang::ObjectProxy WrapperProxy::makeArray(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "makeArray", "(I)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::ObjectProxy WrapperProxy::wrap(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "wrap", "(I)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::ObjectProxy WrapperProxy::wrap(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "wrap", "(Ljava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::ObjectProxy WrapperProxy::zero()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "zero", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ObjectProxy WrapperProxy::zero(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "zero", "(Ljava/lang/Class;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper WrapperProxy::detailString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "detailString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper WrapperProxy::primitiveSimpleName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "primitiveSimpleName", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper WrapperProxy::wrapperSimpleName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "wrapperSimpleName", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jboolean WrapperProxy::isPrimitiveType(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isPrimitiveType", "(Ljava/lang/Class;)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, static_cast<jclass>( p0 ) );
}

jboolean WrapperProxy::isWrapperType(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isWrapperType", "(Ljava/lang/Class;)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, static_cast<jclass>( p0 ) );
}

jchar WrapperProxy::basicTypeChar(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "basicTypeChar", "(Ljava/lang/Class;)C" );
	return JNIEnvHelper::CallStaticCharMethod( _getObjectClass(), mid, static_cast<jclass>( p0 ) );
}

::java::lang::ClassProxy WrapperProxy::asPrimitiveType(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "asPrimitiveType", "(Ljava/lang/Class;)Ljava/lang/Class;" );
	return ::java::lang::ClassProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jclass>( p0 ) )  );
}

::java::lang::ClassProxy WrapperProxy::asWrapperType(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "asWrapperType", "(Ljava/lang/Class;)Ljava/lang/Class;" );
	return ::java::lang::ClassProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jclass>( p0 ) )  );
}

::sun::invoke::util::WrapperProxy WrapperProxy::forBasicType(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "forBasicType", "(C)Lsun/invoke/util/Wrapper;" );
	return ::sun::invoke::util::WrapperProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::sun::invoke::util::WrapperProxy WrapperProxy::forBasicType(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "forBasicType", "(Ljava/lang/Class;)Lsun/invoke/util/Wrapper;" );
	return ::sun::invoke::util::WrapperProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jclass>( p0 ) )  );
}

::sun::invoke::util::WrapperProxy WrapperProxy::forPrimitiveType(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "forPrimitiveType", "(Ljava/lang/Class;)Lsun/invoke/util/Wrapper;" );
	return ::sun::invoke::util::WrapperProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jclass>( p0 ) )  );
}

::sun::invoke::util::WrapperProxy WrapperProxy::forWrapperType(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "forWrapperType", "(Ljava/lang/Class;)Lsun/invoke/util/Wrapper;" );
	return ::sun::invoke::util::WrapperProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jclass>( p0 ) )  );
}

::sun::invoke::util::WrapperProxy WrapperProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Lsun/invoke/util/Wrapper;" );
	return ::sun::invoke::util::WrapperProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::sun::invoke::util::WrapperProxy>::ProxyArray<1> WrapperProxy::values()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "values", "()[Lsun/invoke/util/Wrapper;" );
	return ::net::sourceforge::jnipp::PA<::sun::invoke::util::WrapperProxy>::ProxyArray<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

void WrapperProxy::copyArrayBoxing(::java::lang::ObjectProxy p0, jint p1, ::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p2, jint p3, jint p4)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "copyArrayBoxing", "(Ljava/lang/Object;I[Ljava/lang/Object;II)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, static_cast<jobjectArray>( p2 ), p3, p4 );
}

void WrapperProxy::copyArrayUnboxing(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0, jint p1, ::java::lang::ObjectProxy p2, jint p3, jint p4)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "copyArrayUnboxing", "([Ljava/lang/Object;ILjava/lang/Object;II)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ), p1, static_cast<jobject>( p2 ), p3, p4 );
}

