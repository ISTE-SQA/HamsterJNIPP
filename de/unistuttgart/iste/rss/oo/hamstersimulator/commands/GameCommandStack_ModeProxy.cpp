#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "GameCommandStack_ModeProxy.h"

// includes for parameter and return type proxy classes
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\commands\GameCommandStack_ModeProxy.h"

using namespace net::sourceforge::jnipp;
using namespace de::unistuttgart::iste::rss::oo::hamstersimulator::commands;


std::string GameCommandStack_ModeProxy::className = "de/unistuttgart/iste/rss/oo/hamstersimulator/commands/GameCommandStack$Mode";
jclass GameCommandStack_ModeProxy::objectClass = NULL;

jclass GameCommandStack_ModeProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

GameCommandStack_ModeProxy::GameCommandStack_ModeProxy(void* unused)
{
}

jobject GameCommandStack_ModeProxy::_getPeerObject() const
{
	return peerObject;
}

jclass GameCommandStack_ModeProxy::getObjectClass()
{
	return _getObjectClass();
}

GameCommandStack_ModeProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
GameCommandStack_ModeProxy::GameCommandStack_ModeProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

GameCommandStack_ModeProxy::~GameCommandStack_ModeProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

GameCommandStack_ModeProxy& GameCommandStack_ModeProxy::operator=(const GameCommandStack_ModeProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::de::unistuttgart::iste::rss::oo::hamstersimulator::commands::GameCommandStack_ModeProxy GameCommandStack_ModeProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Lde/unistuttgart/iste/rss/oo/hamstersimulator/commands/GameCommandStack$Mode;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::commands::GameCommandStack_ModeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::de::unistuttgart::iste::rss::oo::hamstersimulator::commands::GameCommandStack_ModeProxy>::ProxyArray<1> GameCommandStack_ModeProxy::values()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "values", "()[Lde/unistuttgart/iste/rss/oo/hamstersimulator/commands/GameCommandStack$Mode;" );
	return ::net::sourceforge::jnipp::PA<::de::unistuttgart::iste::rss::oo::hamstersimulator::commands::GameCommandStack_ModeProxy>::ProxyArray<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

