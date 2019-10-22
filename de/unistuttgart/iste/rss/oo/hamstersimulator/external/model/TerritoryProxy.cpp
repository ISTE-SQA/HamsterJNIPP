#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "TerritoryProxy.h"

// includes for parameter and return type proxy classes
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\external\model\HamsterGameProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\LocationProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\SizeProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\external\model\HamsterProxy.h"
#include "java\util\ListProxy.h"
#include "java\io\InputStreamProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\internal\model\territory\GameTerritoryProxy.h"
#include "java\util\MapProxy.h"

using namespace net::sourceforge::jnipp;
using namespace de::unistuttgart::iste::rss::oo::hamstersimulator::external::model;


std::string TerritoryProxy::className = "de/unistuttgart/iste/rss/oo/hamstersimulator/external/model/Territory";
jclass TerritoryProxy::objectClass = NULL;

jclass TerritoryProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

TerritoryProxy::TerritoryProxy(void* unused)
{
}

jobject TerritoryProxy::_getPeerObject() const
{
	return peerObject;
}

jclass TerritoryProxy::getObjectClass()
{
	return _getObjectClass();
}

TerritoryProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
TerritoryProxy::TerritoryProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

TerritoryProxy::TerritoryProxy(::de::unistuttgart::iste::rss::oo::hamstersimulator::external::model::HamsterGameProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Lde/unistuttgart/iste/rss/oo/hamstersimulator/external/model/HamsterGame;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

TerritoryProxy::~TerritoryProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

TerritoryProxy& TerritoryProxy::operator=(const TerritoryProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean TerritoryProxy::isBlockedByWall(::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isBlockedByWall", "(Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Location;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean TerritoryProxy::isLocationInTerritory(::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isLocationInTerritory", "(Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Location;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::SizeProxy TerritoryProxy::getTerritorySize()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getTerritorySize", "()Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Size;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::SizeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::de::unistuttgart::iste::rss::oo::hamstersimulator::external::model::HamsterProxy TerritoryProxy::getDefaultHamster()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDefaultHamster", "()Lde/unistuttgart/iste/rss/oo/hamstersimulator/external/model/Hamster;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::external::model::HamsterProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::de::unistuttgart::iste::rss::oo::hamstersimulator::external::model::HamsterGameProxy TerritoryProxy::getGame()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getGame", "()Lde/unistuttgart/iste/rss/oo/hamstersimulator/external/model/HamsterGame;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::external::model::HamsterGameProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jint TerritoryProxy::getNumberOfGrainsAt(::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getNumberOfGrainsAt", "(Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Location;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint TerritoryProxy::getTotalGrainCount()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getTotalGrainCount", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint TerritoryProxy::getTotalHamsterCount()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getTotalHamsterCount", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::util::ListProxy TerritoryProxy::getHamsters()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getHamsters", "()Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::ListProxy TerritoryProxy::getHamstersAt(::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getHamstersAt", "(Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Location;)Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

void TerritoryProxy::loadFromFile(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "loadFromFile", "(Ljava/lang/String;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) );
}

void TerritoryProxy::loadFromInputStream(::java::io::InputStreamProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "loadFromInputStream", "(Ljava/io/InputStream;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

