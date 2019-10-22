#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "GameTerritoryProxy.h"

// includes for parameter and return type proxy classes
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\internal\model\hamster\GameHamsterProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\commands\CommandSpecificationProxy.h"
#include "java\util\OptionalProxy.h"
#include "java\util\function\FunctionProxy.h"

using namespace net::sourceforge::jnipp;
using namespace de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory;


std::string GameTerritoryProxy::className = "de/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/territory/GameTerritory";
jclass GameTerritoryProxy::objectClass = NULL;

jclass GameTerritoryProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

GameTerritoryProxy::GameTerritoryProxy(void* unused)
{
}

jobject GameTerritoryProxy::_getPeerObject() const
{
	return peerObject;
}

jclass GameTerritoryProxy::getObjectClass()
{
	return _getObjectClass();
}

GameTerritoryProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
GameTerritoryProxy::GameTerritoryProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

GameTerritoryProxy::GameTerritoryProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

GameTerritoryProxy::~GameTerritoryProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

GameTerritoryProxy& GameTerritoryProxy::operator=(const GameTerritoryProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::hamster::GameHamsterProxy GameTerritoryProxy::getDefaultHamster()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDefaultHamster", "()Lde/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/hamster/GameHamster;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::hamster::GameHamsterProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::OptionalProxy GameTerritoryProxy::getCommandFromSpecification(::de::unistuttgart::iste::rss::oo::hamstersimulator::commands::CommandSpecificationProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getCommandFromSpecification", "(Lde/unistuttgart/iste/rss/oo/hamstersimulator/commands/CommandSpecification;)Ljava/util/Optional;" );
	return ::java::util::OptionalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

