#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "HamsterProxy.h"

// includes for parameter and return type proxy classes
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\external\model\TerritoryProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\LocationProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\DirectionProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\external\model\HamsterGameProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\internal\model\hamster\GameHamsterProxy.h"

using namespace net::sourceforge::jnipp;
using namespace de::unistuttgart::iste::rss::oo::hamstersimulator::external::model;


std::string HamsterProxy::className = "de/unistuttgart/iste/rss/oo/hamstersimulator/external/model/Hamster";
jclass HamsterProxy::objectClass = NULL;

jclass HamsterProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

HamsterProxy::HamsterProxy(void* unused)
{
}

jobject HamsterProxy::_getPeerObject() const
{
	return peerObject;
}

jclass HamsterProxy::getObjectClass()
{
	return _getObjectClass();
}

HamsterProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
HamsterProxy::HamsterProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

HamsterProxy::HamsterProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

HamsterProxy::HamsterProxy(::de::unistuttgart::iste::rss::oo::hamstersimulator::external::model::TerritoryProxy p0, ::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p1, ::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::DirectionProxy p2, jint p3)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Lde/unistuttgart/iste/rss/oo/hamstersimulator/external/model/Territory;Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Location;Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Direction;I)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ), p3 ) );
}

HamsterProxy::~HamsterProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

HamsterProxy& HamsterProxy::operator=(const HamsterProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean HamsterProxy::frontIsClear()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "frontIsClear", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean HamsterProxy::grainAvailable()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "grainAvailable", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean HamsterProxy::mouthEmpty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "mouthEmpty", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::DirectionProxy HamsterProxy::getDirection()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDirection", "()Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Direction;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::DirectionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy HamsterProxy::getLocation()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getLocation", "()Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Location;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jint HamsterProxy::readNumber(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "readNumber", "(Ljava/lang/String;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) );
}

::net::sourceforge::jnipp::JStringHelper HamsterProxy::readString(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "readString", "(Ljava/lang/String;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

void HamsterProxy::init(::de::unistuttgart::iste::rss::oo::hamstersimulator::external::model::TerritoryProxy p0, ::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p1, ::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::DirectionProxy p2, jint p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "init", "(Lde/unistuttgart/iste/rss/oo/hamstersimulator/external/model/Territory;Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Location;Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Direction;I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ), p3 );
}

void HamsterProxy::move()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "move", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void HamsterProxy::pickGrain()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "pickGrain", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void HamsterProxy::putGrain()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putGrain", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void HamsterProxy::turnLeft()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "turnLeft", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void HamsterProxy::write(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "(Ljava/lang/String;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) );
}

