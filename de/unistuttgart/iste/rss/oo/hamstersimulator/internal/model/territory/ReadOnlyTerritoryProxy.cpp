#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ReadOnlyTerritoryProxy.h"

// includes for parameter and return type proxy classes
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\LocationProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\SizeProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\internal\model\hamster\ReadOnlyHamsterProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\internal\model\territory\TileProxy.h"
#include "java\util\ListProxy.h"
#include "javafx\beans\property\ReadOnlyListPropertyProxy.h"
#include "javafx\beans\property\ReadOnlyObjectPropertyProxy.h"
#include "javafx\beans\property\ReadOnlyListWrapperProxy.h"
#include "javafx\beans\property\ReadOnlyObjectWrapperProxy.h"

using namespace net::sourceforge::jnipp;
using namespace de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory;


std::string ReadOnlyTerritoryProxy::className = "de/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/territory/ReadOnlyTerritory";
jclass ReadOnlyTerritoryProxy::objectClass = NULL;

jclass ReadOnlyTerritoryProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ReadOnlyTerritoryProxy::ReadOnlyTerritoryProxy(void* unused)
{
}

jobject ReadOnlyTerritoryProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ReadOnlyTerritoryProxy::getObjectClass()
{
	return _getObjectClass();
}

ReadOnlyTerritoryProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ReadOnlyTerritoryProxy::ReadOnlyTerritoryProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ReadOnlyTerritoryProxy::ReadOnlyTerritoryProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

ReadOnlyTerritoryProxy::~ReadOnlyTerritoryProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ReadOnlyTerritoryProxy& ReadOnlyTerritoryProxy::operator=(const ReadOnlyTerritoryProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ReadOnlyTerritoryProxy::isLocationInTerritory(::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isLocationInTerritory", "(Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Location;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::SizeProxy ReadOnlyTerritoryProxy::getSize()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getSize", "()Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Size;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::SizeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::hamster::ReadOnlyHamsterProxy ReadOnlyTerritoryProxy::getDefaultHamster()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDefaultHamster", "()Lde/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/hamster/ReadOnlyHamster;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::hamster::ReadOnlyHamsterProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::TileProxy ReadOnlyTerritoryProxy::getTileAt(::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getTileAt", "(Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Location;)Lde/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/territory/Tile;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::TileProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::ListProxy ReadOnlyTerritoryProxy::getHamsters()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getHamsters", "()Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::beans::property::ReadOnlyListPropertyProxy ReadOnlyTerritoryProxy::hamstersProperty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hamstersProperty", "()Ljavafx/beans/property/ReadOnlyListProperty;" );
	return ::javafx::beans::property::ReadOnlyListPropertyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::beans::property::ReadOnlyListPropertyProxy ReadOnlyTerritoryProxy::tilesProperty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "tilesProperty", "()Ljavafx/beans/property/ReadOnlyListProperty;" );
	return ::javafx::beans::property::ReadOnlyListPropertyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::beans::property::ReadOnlyObjectPropertyProxy ReadOnlyTerritoryProxy::defaultHamsterProperty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "defaultHamsterProperty", "()Ljavafx/beans/property/ReadOnlyObjectProperty;" );
	return ::javafx::beans::property::ReadOnlyObjectPropertyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::beans::property::ReadOnlyObjectPropertyProxy ReadOnlyTerritoryProxy::territorySizeProperty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "territorySizeProperty", "()Ljavafx/beans/property/ReadOnlyObjectProperty;" );
	return ::javafx::beans::property::ReadOnlyObjectPropertyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

