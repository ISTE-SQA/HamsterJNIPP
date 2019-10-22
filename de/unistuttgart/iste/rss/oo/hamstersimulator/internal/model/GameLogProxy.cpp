#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "GameLogProxy.h"

// includes for parameter and return type proxy classes
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\commands\CommandSpecificationProxy.h"
#include "java\util\OptionalProxy.h"
#include "javafx\beans\property\ReadOnlyListPropertyProxy.h"
#include "javafx\beans\property\ReadOnlyListWrapperProxy.h"
#include "java\util\function\FunctionProxy.h"

using namespace net::sourceforge::jnipp;
using namespace de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model;


std::string GameLogProxy::className = "de/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/GameLog";
jclass GameLogProxy::objectClass = NULL;

jclass GameLogProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

GameLogProxy::GameLogProxy(void* unused)
{
}

jobject GameLogProxy::_getPeerObject() const
{
	return peerObject;
}

jclass GameLogProxy::getObjectClass()
{
	return _getObjectClass();
}

GameLogProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
GameLogProxy::GameLogProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

GameLogProxy::GameLogProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

GameLogProxy::~GameLogProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

GameLogProxy& GameLogProxy::operator=(const GameLogProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::util::OptionalProxy GameLogProxy::getCommandFromSpecification(::de::unistuttgart::iste::rss::oo::hamstersimulator::commands::CommandSpecificationProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getCommandFromSpecification", "(Lde/unistuttgart/iste/rss/oo/hamstersimulator/commands/CommandSpecification;)Ljava/util/Optional;" );
	return ::java::util::OptionalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::javafx::beans::property::ReadOnlyListPropertyProxy GameLogProxy::logProperty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "logProperty", "()Ljavafx/beans/property/ReadOnlyListProperty;" );
	return ::javafx::beans::property::ReadOnlyListPropertyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

