#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "CommandSpecificationProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace de::unistuttgart::iste::rss::oo::hamstersimulator::commands;


std::string CommandSpecificationProxy::className = "de/unistuttgart/iste/rss/oo/hamstersimulator/commands/CommandSpecification";
jclass CommandSpecificationProxy::objectClass = NULL;

jclass CommandSpecificationProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

CommandSpecificationProxy::CommandSpecificationProxy(void* unused)
{
}

jobject CommandSpecificationProxy::_getPeerObject() const
{
	return peerObject;
}

jclass CommandSpecificationProxy::getObjectClass()
{
	return _getObjectClass();
}

CommandSpecificationProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
CommandSpecificationProxy::CommandSpecificationProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

CommandSpecificationProxy::~CommandSpecificationProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

CommandSpecificationProxy& CommandSpecificationProxy::operator=(const CommandSpecificationProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
