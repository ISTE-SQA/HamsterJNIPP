#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "MemberName_FactoryProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\invoke\MemberNameProxy.h"
#include "java\lang\ClassProxy.h"
#include "java\util\ListProxy.h"
#include "java\lang\invoke\MethodTypeProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang::invoke;


std::string MemberName_FactoryProxy::className = "java/lang/invoke/MemberName$Factory";
jclass MemberName_FactoryProxy::objectClass = NULL;

jclass MemberName_FactoryProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

MemberName_FactoryProxy::MemberName_FactoryProxy(void* unused)
{
}

jobject MemberName_FactoryProxy::_getPeerObject() const
{
	return peerObject;
}

jclass MemberName_FactoryProxy::getObjectClass()
{
	return _getObjectClass();
}

MemberName_FactoryProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
MemberName_FactoryProxy::MemberName_FactoryProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

MemberName_FactoryProxy::~MemberName_FactoryProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

MemberName_FactoryProxy& MemberName_FactoryProxy::operator=(const MemberName_FactoryProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::invoke::MemberNameProxy MemberName_FactoryProxy::resolveOrFail(jbyte p0, ::java::lang::invoke::MemberNameProxy p1, ::java::lang::ClassProxy p2, ::java::lang::ClassProxy p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "resolveOrFail", "(BLjava/lang/invoke/MemberName;Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/invoke/MemberName;" );
	return ::java::lang::invoke::MemberNameProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ), static_cast<jclass>( p2 ), static_cast<jclass>( p3 ) )  );
}

::java::lang::invoke::MemberNameProxy MemberName_FactoryProxy::resolveOrNull(jbyte p0, ::java::lang::invoke::MemberNameProxy p1, ::java::lang::ClassProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "resolveOrNull", "(BLjava/lang/invoke/MemberName;Ljava/lang/Class;)Ljava/lang/invoke/MemberName;" );
	return ::java::lang::invoke::MemberNameProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ), static_cast<jclass>( p2 ) )  );
}

::java::util::ListProxy MemberName_FactoryProxy::getConstructors(::java::lang::ClassProxy p0, ::java::lang::ClassProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getConstructors", "(Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ), static_cast<jclass>( p1 ) )  );
}

::java::util::ListProxy MemberName_FactoryProxy::getFields(::java::lang::ClassProxy p0, jboolean p1, ::java::lang::ClassProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getFields", "(Ljava/lang/Class;ZLjava/lang/Class;)Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ), p1, static_cast<jclass>( p2 ) )  );
}

::java::util::ListProxy MemberName_FactoryProxy::getFields(::java::lang::ClassProxy p0, jboolean p1, ::net::sourceforge::jnipp::JStringHelper p2, ::java::lang::ClassProxy p3, ::java::lang::ClassProxy p4)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getFields", "(Ljava/lang/Class;ZLjava/lang/String;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ), p1, static_cast<jstring>( p2 ), static_cast<jclass>( p3 ), static_cast<jclass>( p4 ) )  );
}

::java::util::ListProxy MemberName_FactoryProxy::getMethods(::java::lang::ClassProxy p0, jboolean p1, ::java::lang::ClassProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMethods", "(Ljava/lang/Class;ZLjava/lang/Class;)Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ), p1, static_cast<jclass>( p2 ) )  );
}

::java::util::ListProxy MemberName_FactoryProxy::getMethods(::java::lang::ClassProxy p0, jboolean p1, ::net::sourceforge::jnipp::JStringHelper p2, ::java::lang::invoke::MethodTypeProxy p3, ::java::lang::ClassProxy p4)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMethods", "(Ljava/lang/Class;ZLjava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/Class;)Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ), p1, static_cast<jstring>( p2 ), static_cast<jobject>( p3 ), static_cast<jclass>( p4 ) )  );
}

::java::util::ListProxy MemberName_FactoryProxy::getNestedTypes(::java::lang::ClassProxy p0, jboolean p1, ::java::lang::ClassProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getNestedTypes", "(Ljava/lang/Class;ZLjava/lang/Class;)Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ), p1, static_cast<jclass>( p2 ) )  );
}

