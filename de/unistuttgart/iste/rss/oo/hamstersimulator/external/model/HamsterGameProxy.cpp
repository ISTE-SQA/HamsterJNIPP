#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "HamsterGameProxy.h"

// includes for parameter and return type proxy classes
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\internal\model\InputInterfaceProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\commands\GameCommandStack_ModeProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\external\model\TerritoryProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\internal\model\GameLogProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\internal\model\territory\TerritoryBuilderProxy.h"
#include "java\io\InputStreamProxy.h"
#include "java\util\function\ConsumerProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\commands\GameCommandStackProxy.h"

using namespace net::sourceforge::jnipp;
using namespace de::unistuttgart::iste::rss::oo::hamstersimulator::external::model;


std::string HamsterGameProxy::className = "de/unistuttgart/iste/rss/oo/hamstersimulator/external/model/HamsterGame";
jclass HamsterGameProxy::objectClass = NULL;

jclass HamsterGameProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

HamsterGameProxy::HamsterGameProxy(void* unused)
{
}

jobject HamsterGameProxy::_getPeerObject() const
{
	return peerObject;
}

jclass HamsterGameProxy::getObjectClass()
{
	return _getObjectClass();
}

HamsterGameProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
HamsterGameProxy::HamsterGameProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

HamsterGameProxy::HamsterGameProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

HamsterGameProxy::HamsterGameProxy(::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::InputInterfaceProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Lde/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/InputInterface;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

HamsterGameProxy::~HamsterGameProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

HamsterGameProxy& HamsterGameProxy::operator=(const HamsterGameProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::de::unistuttgart::iste::rss::oo::hamstersimulator::commands::GameCommandStack_ModeProxy HamsterGameProxy::getCurrentGameMode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getCurrentGameMode", "()Lde/unistuttgart/iste/rss/oo/hamstersimulator/commands/GameCommandStack$Mode;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::commands::GameCommandStack_ModeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::de::unistuttgart::iste::rss::oo::hamstersimulator::external::model::TerritoryProxy HamsterGameProxy::getTerritory()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getTerritory", "()Lde/unistuttgart/iste/rss/oo/hamstersimulator/external/model/Territory;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::external::model::TerritoryProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::GameLogProxy HamsterGameProxy::getGameLog()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getGameLog", "()Lde/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/GameLog;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::GameLogProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::InputInterfaceProxy HamsterGameProxy::getInputInterface()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getInputInterface", "()Lde/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/InputInterface;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::InputInterfaceProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::TerritoryBuilderProxy HamsterGameProxy::getNewTerritoryBuilder()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getNewTerritoryBuilder", "()Lde/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/territory/TerritoryBuilder;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::TerritoryBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void HamsterGameProxy::displayInNewGameWindow()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "displayInNewGameWindow", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void HamsterGameProxy::initialize()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "initialize", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void HamsterGameProxy::initialize(::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::TerritoryBuilderProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "initialize", "(Lde/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/territory/TerritoryBuilder;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void HamsterGameProxy::initialize(::java::io::InputStreamProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "initialize", "(Ljava/io/InputStream;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void HamsterGameProxy::initialize(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "initialize", "(Ljava/lang/String;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) );
}

void HamsterGameProxy::reset()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reset", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void HamsterGameProxy::runGame(::java::util::function::ConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "runGame", "(Ljava/util/function/Consumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void HamsterGameProxy::setInputInterface(::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::InputInterfaceProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setInputInterface", "(Lde/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/InputInterface;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void HamsterGameProxy::setSpeed(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setSpeed", "(D)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void HamsterGameProxy::startGame(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "startGame", "(Z)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void HamsterGameProxy::stopGame()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "stopGame", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

