#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "BinaryOperatorProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\ComparatorProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string BinaryOperatorProxy::className = "java/util/function/BinaryOperator";
jclass BinaryOperatorProxy::objectClass = NULL;

jclass BinaryOperatorProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

BinaryOperatorProxy::BinaryOperatorProxy(void* unused)
{
}

jobject BinaryOperatorProxy::_getPeerObject() const
{
	return peerObject;
}

jclass BinaryOperatorProxy::getObjectClass()
{
	return _getObjectClass();
}

BinaryOperatorProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
BinaryOperatorProxy::BinaryOperatorProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

BinaryOperatorProxy::~BinaryOperatorProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

BinaryOperatorProxy& BinaryOperatorProxy::operator=(const BinaryOperatorProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::util::function::BinaryOperatorProxy BinaryOperatorProxy::maxBy(::java::util::ComparatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "maxBy", "(Ljava/util/Comparator;)Ljava/util/function/BinaryOperator;" );
	return ::java::util::function::BinaryOperatorProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::function::BinaryOperatorProxy BinaryOperatorProxy::minBy(::java::util::ComparatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "minBy", "(Ljava/util/Comparator;)Ljava/util/function/BinaryOperator;" );
	return ::java::util::function::BinaryOperatorProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

