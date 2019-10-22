#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "CommandProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\ListProxy.h"

using namespace net::sourceforge::jnipp;
using namespace de::unistuttgart::iste::rss::oo::hamstersimulator::commands;


std::string CommandProxy::className = "de/unistuttgart/iste/rss/oo/hamstersimulator/commands/Command";
jclass CommandProxy::objectClass = NULL;

jclass CommandProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

CommandProxy::CommandProxy(void* unused)
{
}

jobject CommandProxy::_getPeerObject() const
{
	return peerObject;
}

jclass CommandProxy::getObjectClass()
{
	return _getObjectClass();
}

CommandProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
CommandProxy::CommandProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

CommandProxy::CommandProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

CommandProxy::~CommandProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

CommandProxy& CommandProxy::operator=(const CommandProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean CommandProxy::canExecute()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "canExecute", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::java::util::ListProxy CommandProxy::getExceptionsFromPreconditions()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getExceptionsFromPreconditions", "()Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

