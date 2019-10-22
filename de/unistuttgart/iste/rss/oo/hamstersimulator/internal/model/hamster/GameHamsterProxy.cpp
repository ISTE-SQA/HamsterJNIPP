#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "GameHamsterProxy.h"

// includes for parameter and return type proxy classes
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\commands\CommandSpecificationProxy.h"
#include "java\util\OptionalProxy.h"
#include "java\util\function\FunctionProxy.h"

using namespace net::sourceforge::jnipp;
using namespace de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::hamster;


std::string GameHamsterProxy::className = "de/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/hamster/GameHamster";
jclass GameHamsterProxy::objectClass = NULL;

jclass GameHamsterProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

GameHamsterProxy::GameHamsterProxy(void* unused)
{
}

jobject GameHamsterProxy::_getPeerObject() const
{
	return peerObject;
}

jclass GameHamsterProxy::getObjectClass()
{
	return _getObjectClass();
}

GameHamsterProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
GameHamsterProxy::GameHamsterProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

GameHamsterProxy::GameHamsterProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

GameHamsterProxy::~GameHamsterProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

GameHamsterProxy& GameHamsterProxy::operator=(const GameHamsterProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::util::OptionalProxy GameHamsterProxy::getCommandFromSpecification(::de::unistuttgart::iste::rss::oo::hamstersimulator::commands::CommandSpecificationProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getCommandFromSpecification", "(Lde/unistuttgart/iste/rss/oo/hamstersimulator/commands/CommandSpecification;)Ljava/util/Optional;" );
	return ::java::util::OptionalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

