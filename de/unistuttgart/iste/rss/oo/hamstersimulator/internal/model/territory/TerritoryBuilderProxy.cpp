#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "TerritoryBuilderProxy.h"

// includes for parameter and return type proxy classes
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\commands\CommandProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\LocationProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\DirectionProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\SizeProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\internal\model\territory\EditorTerritoryProxy.h"
#include "java\util\LinkedListProxy.h"

using namespace net::sourceforge::jnipp;
using namespace de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory;


std::string TerritoryBuilderProxy::className = "de/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/territory/TerritoryBuilder";
jclass TerritoryBuilderProxy::objectClass = NULL;

jclass TerritoryBuilderProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

TerritoryBuilderProxy::TerritoryBuilderProxy(void* unused)
{
}

jobject TerritoryBuilderProxy::_getPeerObject() const
{
	return peerObject;
}

jclass TerritoryBuilderProxy::getObjectClass()
{
	return _getObjectClass();
}

TerritoryBuilderProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
TerritoryBuilderProxy::TerritoryBuilderProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

TerritoryBuilderProxy::~TerritoryBuilderProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

TerritoryBuilderProxy& TerritoryBuilderProxy::operator=(const TerritoryBuilderProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::de::unistuttgart::iste::rss::oo::hamstersimulator::commands::CommandProxy TerritoryBuilderProxy::build()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "build", "()Lde/unistuttgart/iste/rss/oo/hamstersimulator/commands/Command;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::commands::CommandProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::TerritoryBuilderProxy TerritoryBuilderProxy::defaultHamsterAt(::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p0, ::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::DirectionProxy p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "defaultHamsterAt", "(Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Location;Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Direction;I)Lde/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/territory/TerritoryBuilder;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::TerritoryBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), p2 )  );
}

::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::TerritoryBuilderProxy TerritoryBuilderProxy::grainAt(::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "grainAt", "(Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Location;)Lde/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/territory/TerritoryBuilder;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::TerritoryBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::TerritoryBuilderProxy TerritoryBuilderProxy::grainAt(::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "grainAt", "(Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Location;I)Lde/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/territory/TerritoryBuilder;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::TerritoryBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 )  );
}

::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::TerritoryBuilderProxy TerritoryBuilderProxy::initializeTerritory(::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::SizeProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "initializeTerritory", "(Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Size;)Lde/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/territory/TerritoryBuilder;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::TerritoryBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::TerritoryBuilderProxy TerritoryBuilderProxy::wallAt(::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "wallAt", "(Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Location;)Lde/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/territory/TerritoryBuilder;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::TerritoryBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::TerritoryBuilderProxy TerritoryBuilderProxy::getTerritoryBuilderForTerritory(::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::EditorTerritoryProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getTerritoryBuilderForTerritory", "(Lde/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/territory/EditorTerritory;)Lde/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/territory/TerritoryBuilder;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::TerritoryBuilderProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

