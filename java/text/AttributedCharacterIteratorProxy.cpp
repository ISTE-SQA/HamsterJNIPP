#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "AttributedCharacterIteratorProxy.h"

// includes for parameter and return type proxy classes
#include "java\text\AttributedCharacterIterator_AttributeProxy.h"
#include "java\util\SetProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\util\MapProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::text;


std::string AttributedCharacterIteratorProxy::className = "java/text/AttributedCharacterIterator";
jclass AttributedCharacterIteratorProxy::objectClass = NULL;

jclass AttributedCharacterIteratorProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

AttributedCharacterIteratorProxy::AttributedCharacterIteratorProxy(void* unused)
{
}

jobject AttributedCharacterIteratorProxy::_getPeerObject() const
{
	return peerObject;
}

jclass AttributedCharacterIteratorProxy::getObjectClass()
{
	return _getObjectClass();
}

AttributedCharacterIteratorProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
AttributedCharacterIteratorProxy::AttributedCharacterIteratorProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

AttributedCharacterIteratorProxy::~AttributedCharacterIteratorProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

AttributedCharacterIteratorProxy& AttributedCharacterIteratorProxy::operator=(const AttributedCharacterIteratorProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jint AttributedCharacterIteratorProxy::getRunLimit()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getRunLimit", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint AttributedCharacterIteratorProxy::getRunLimit(::java::text::AttributedCharacterIterator_AttributeProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getRunLimit", "(Ljava/text/AttributedCharacterIterator$Attribute;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint AttributedCharacterIteratorProxy::getRunLimit(::java::util::SetProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getRunLimit", "(Ljava/util/Set;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint AttributedCharacterIteratorProxy::getRunStart()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getRunStart", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint AttributedCharacterIteratorProxy::getRunStart(::java::text::AttributedCharacterIterator_AttributeProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getRunStart", "(Ljava/text/AttributedCharacterIterator$Attribute;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint AttributedCharacterIteratorProxy::getRunStart(::java::util::SetProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getRunStart", "(Ljava/util/Set;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::lang::ObjectProxy AttributedCharacterIteratorProxy::getAttribute(::java::text::AttributedCharacterIterator_AttributeProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAttribute", "(Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::MapProxy AttributedCharacterIteratorProxy::getAttributes()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAttributes", "()Ljava/util/Map;" );
	return ::java::util::MapProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::SetProxy AttributedCharacterIteratorProxy::getAllAttributeKeys()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAllAttributeKeys", "()Ljava/util/Set;" );
	return ::java::util::SetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

