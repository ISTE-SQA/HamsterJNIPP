#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ObjectExpressionProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "javafx\beans\binding\BooleanBindingProxy.h"
#include "javafx\beans\value\ObservableObjectValueProxy.h"
#include "javafx\beans\binding\StringBindingProxy.h"
#include "java\util\LocaleProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::beans::binding;


std::string ObjectExpressionProxy::className = "javafx/beans/binding/ObjectExpression";
jclass ObjectExpressionProxy::objectClass = NULL;

jclass ObjectExpressionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ObjectExpressionProxy::ObjectExpressionProxy(void* unused)
{
}

jobject ObjectExpressionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ObjectExpressionProxy::getObjectClass()
{
	return _getObjectClass();
}

ObjectExpressionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ObjectExpressionProxy::ObjectExpressionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ObjectExpressionProxy::ObjectExpressionProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

ObjectExpressionProxy::~ObjectExpressionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ObjectExpressionProxy& ObjectExpressionProxy::operator=(const ObjectExpressionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy ObjectExpressionProxy::getValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getValue", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::beans::binding::BooleanBindingProxy ObjectExpressionProxy::isEqualTo(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isEqualTo", "(Ljava/lang/Object;)Ljavafx/beans/binding/BooleanBinding;" );
	return ::javafx::beans::binding::BooleanBindingProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::javafx::beans::binding::BooleanBindingProxy ObjectExpressionProxy::isEqualTo(::javafx::beans::value::ObservableObjectValueProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isEqualTo", "(Ljavafx/beans/value/ObservableObjectValue;)Ljavafx/beans/binding/BooleanBinding;" );
	return ::javafx::beans::binding::BooleanBindingProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::javafx::beans::binding::BooleanBindingProxy ObjectExpressionProxy::isNotEqualTo(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isNotEqualTo", "(Ljava/lang/Object;)Ljavafx/beans/binding/BooleanBinding;" );
	return ::javafx::beans::binding::BooleanBindingProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::javafx::beans::binding::BooleanBindingProxy ObjectExpressionProxy::isNotEqualTo(::javafx::beans::value::ObservableObjectValueProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isNotEqualTo", "(Ljavafx/beans/value/ObservableObjectValue;)Ljavafx/beans/binding/BooleanBinding;" );
	return ::javafx::beans::binding::BooleanBindingProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::javafx::beans::binding::BooleanBindingProxy ObjectExpressionProxy::isNotNull()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isNotNull", "()Ljavafx/beans/binding/BooleanBinding;" );
	return ::javafx::beans::binding::BooleanBindingProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::beans::binding::BooleanBindingProxy ObjectExpressionProxy::isNull()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isNull", "()Ljavafx/beans/binding/BooleanBinding;" );
	return ::javafx::beans::binding::BooleanBindingProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::beans::binding::StringBindingProxy ObjectExpressionProxy::asString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asString", "()Ljavafx/beans/binding/StringBinding;" );
	return ::javafx::beans::binding::StringBindingProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::beans::binding::StringBindingProxy ObjectExpressionProxy::asString(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asString", "(Ljava/lang/String;)Ljavafx/beans/binding/StringBinding;" );
	return ::javafx::beans::binding::StringBindingProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::javafx::beans::binding::StringBindingProxy ObjectExpressionProxy::asString(::java::util::LocaleProxy p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asString", "(Ljava/util/Locale;Ljava/lang/String;)Ljavafx/beans/binding/StringBinding;" );
	return ::javafx::beans::binding::StringBindingProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ) )  );
}

::javafx::beans::binding::ObjectExpressionProxy ObjectExpressionProxy::objectExpression(::javafx::beans::value::ObservableObjectValueProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "objectExpression", "(Ljavafx/beans/value/ObservableObjectValue;)Ljavafx/beans/binding/ObjectExpression;" );
	return ::javafx::beans::binding::ObjectExpressionProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

