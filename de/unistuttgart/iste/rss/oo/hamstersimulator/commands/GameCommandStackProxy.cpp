#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "GameCommandStackProxy.h"

// includes for parameter and return type proxy classes
#include "javafx\beans\property\DoublePropertyProxy.h"
#include "javafx\beans\property\ReadOnlyObjectPropertyProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\commands\CommandProxy.h"
#include "java\util\concurrent\SemaphoreProxy.h"
#include "javafx\beans\property\ReadOnlyObjectWrapperProxy.h"
#include "java\lang\ThreadProxy.h"
#include "javafx\beans\property\SimpleDoublePropertyProxy.h"

using namespace net::sourceforge::jnipp;
using namespace de::unistuttgart::iste::rss::oo::hamstersimulator::commands;


std::string GameCommandStackProxy::className = "de/unistuttgart/iste/rss/oo/hamstersimulator/commands/GameCommandStack";
jclass GameCommandStackProxy::objectClass = NULL;

jclass GameCommandStackProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

GameCommandStackProxy::GameCommandStackProxy(void* unused)
{
}

jobject GameCommandStackProxy::_getPeerObject() const
{
	return peerObject;
}

jclass GameCommandStackProxy::getObjectClass()
{
	return _getObjectClass();
}

GameCommandStackProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
GameCommandStackProxy::GameCommandStackProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

GameCommandStackProxy::GameCommandStackProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

GameCommandStackProxy::~GameCommandStackProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

GameCommandStackProxy& GameCommandStackProxy::operator=(const GameCommandStackProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::javafx::beans::property::DoublePropertyProxy GameCommandStackProxy::speedProperty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "speedProperty", "()Ljavafx/beans/property/DoubleProperty;" );
	return ::javafx::beans::property::DoublePropertyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::beans::property::ReadOnlyObjectPropertyProxy GameCommandStackProxy::stateProperty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "stateProperty", "()Ljavafx/beans/property/ReadOnlyObjectProperty;" );
	return ::javafx::beans::property::ReadOnlyObjectPropertyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void GameCommandStackProxy::delay()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "delay", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void GameCommandStackProxy::execute(::de::unistuttgart::iste::rss::oo::hamstersimulator::commands::CommandProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "execute", "(Lde/unistuttgart/iste/rss/oo/hamstersimulator/commands/Command;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void GameCommandStackProxy::pause()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "pause", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void GameCommandStackProxy::reset()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reset", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void GameCommandStackProxy::resume()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "resume", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void GameCommandStackProxy::setSpeed(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setSpeed", "(D)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void GameCommandStackProxy::startGame(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "startGame", "(Z)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void GameCommandStackProxy::stopGame()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "stopGame", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

