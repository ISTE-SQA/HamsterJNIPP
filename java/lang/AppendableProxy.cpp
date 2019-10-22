#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "AppendableProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\CharSequenceProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string AppendableProxy::className = "java/lang/Appendable";
jclass AppendableProxy::objectClass = NULL;

jclass AppendableProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

AppendableProxy::AppendableProxy(void* unused)
{
}

jobject AppendableProxy::_getPeerObject() const
{
	return peerObject;
}

jclass AppendableProxy::getObjectClass()
{
	return _getObjectClass();
}

AppendableProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
AppendableProxy::AppendableProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

AppendableProxy::~AppendableProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

AppendableProxy& AppendableProxy::operator=(const AppendableProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::AppendableProxy AppendableProxy::append(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(C)Ljava/lang/Appendable;" );
	return ::java::lang::AppendableProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::AppendableProxy AppendableProxy::append(::java::lang::CharSequenceProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;" );
	return ::java::lang::AppendableProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::AppendableProxy AppendableProxy::append(::java::lang::CharSequenceProxy p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;" );
	return ::java::lang::AppendableProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 )  );
}

