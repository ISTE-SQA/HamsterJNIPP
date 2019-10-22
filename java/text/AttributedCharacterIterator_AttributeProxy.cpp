#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "AttributedCharacterIterator_AttributeProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\util\MapProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::text;


std::string AttributedCharacterIterator_AttributeProxy::className = "java/text/AttributedCharacterIterator$Attribute";
jclass AttributedCharacterIterator_AttributeProxy::objectClass = NULL;

jclass AttributedCharacterIterator_AttributeProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

AttributedCharacterIterator_AttributeProxy::AttributedCharacterIterator_AttributeProxy(void* unused)
{
}

jobject AttributedCharacterIterator_AttributeProxy::_getPeerObject() const
{
	return peerObject;
}

jclass AttributedCharacterIterator_AttributeProxy::getObjectClass()
{
	return _getObjectClass();
}

AttributedCharacterIterator_AttributeProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
AttributedCharacterIterator_AttributeProxy::AttributedCharacterIterator_AttributeProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

AttributedCharacterIterator_AttributeProxy::~AttributedCharacterIterator_AttributeProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

AttributedCharacterIterator_AttributeProxy& AttributedCharacterIterator_AttributeProxy::operator=(const AttributedCharacterIterator_AttributeProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean AttributedCharacterIterator_AttributeProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint AttributedCharacterIterator_AttributeProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper AttributedCharacterIterator_AttributeProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

