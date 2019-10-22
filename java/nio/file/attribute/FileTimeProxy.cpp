#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "FileTimeProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\time\InstantProxy.h"
#include "java\util\concurrent\TimeUnitProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::file::attribute;


std::string FileTimeProxy::className = "java/nio/file/attribute/FileTime";
jclass FileTimeProxy::objectClass = NULL;

jclass FileTimeProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

FileTimeProxy::FileTimeProxy(void* unused)
{
}

jobject FileTimeProxy::_getPeerObject() const
{
	return peerObject;
}

jclass FileTimeProxy::getObjectClass()
{
	return _getObjectClass();
}

FileTimeProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
FileTimeProxy::FileTimeProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

FileTimeProxy::~FileTimeProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

FileTimeProxy& FileTimeProxy::operator=(const FileTimeProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean FileTimeProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint FileTimeProxy::compareTo(::java::nio::file::attribute::FileTimeProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareTo", "(Ljava/nio/file/attribute/FileTime;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint FileTimeProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper FileTimeProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::InstantProxy FileTimeProxy::toInstant()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toInstant", "()Ljava/time/Instant;" );
	return ::java::time::InstantProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jlong FileTimeProxy::to(::java::util::concurrent::TimeUnitProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "to", "(Ljava/util/concurrent/TimeUnit;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jlong FileTimeProxy::toMillis()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toMillis", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

::java::nio::file::attribute::FileTimeProxy FileTimeProxy::from(::java::time::InstantProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "from", "(Ljava/time/Instant;)Ljava/nio/file/attribute/FileTime;" );
	return ::java::nio::file::attribute::FileTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::nio::file::attribute::FileTimeProxy FileTimeProxy::from(jlong p0, ::java::util::concurrent::TimeUnitProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "from", "(JLjava/util/concurrent/TimeUnit;)Ljava/nio/file/attribute/FileTime;" );
	return ::java::nio::file::attribute::FileTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::nio::file::attribute::FileTimeProxy FileTimeProxy::fromMillis(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "fromMillis", "(J)Ljava/nio/file/attribute/FileTime;" );
	return ::java::nio::file::attribute::FileTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

