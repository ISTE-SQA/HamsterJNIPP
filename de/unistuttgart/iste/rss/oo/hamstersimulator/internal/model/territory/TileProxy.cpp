#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "TileProxy.h"

// includes for parameter and return type proxy classes
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\LocationProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\internal\model\territory\ReadOnlyTerritoryProxy.h"
#include "java\util\ListProxy.h"
#include "javafx\beans\property\ReadOnlyBooleanPropertyProxy.h"
#include "javafx\beans\property\ReadOnlyIntegerPropertyProxy.h"
#include "javafx\beans\property\ReadOnlyListPropertyProxy.h"
#include "javafx\beans\property\ReadOnlyBooleanWrapperProxy.h"
#include "javafx\beans\property\ReadOnlyIntegerWrapperProxy.h"
#include "javafx\beans\property\ReadOnlyListWrapperProxy.h"

using namespace net::sourceforge::jnipp;
using namespace de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory;


std::string TileProxy::className = "de/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/territory/Tile";
jclass TileProxy::objectClass = NULL;

jclass TileProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

TileProxy::TileProxy(void* unused)
{
}

jobject TileProxy::_getPeerObject() const
{
	return peerObject;
}

jclass TileProxy::getObjectClass()
{
	return _getObjectClass();
}

TileProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
TileProxy::TileProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

TileProxy::~TileProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

TileProxy& TileProxy::operator=(const TileProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean TileProxy::isBlocked()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isBlocked", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy TileProxy::getLocation()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getLocation", "()Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Location;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::LocationProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::ReadOnlyTerritoryProxy TileProxy::getTerritory()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getTerritory", "()Lde/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/territory/ReadOnlyTerritory;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::ReadOnlyTerritoryProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jint TileProxy::getGrainCount()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getGrainCount", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper TileProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::ListProxy TileProxy::getContent()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getContent", "()Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::ListProxy TileProxy::getHamsters()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getHamsters", "()Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::beans::property::ReadOnlyBooleanPropertyProxy TileProxy::isBlockedProperty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isBlockedProperty", "()Ljavafx/beans/property/ReadOnlyBooleanProperty;" );
	return ::javafx::beans::property::ReadOnlyBooleanPropertyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::beans::property::ReadOnlyIntegerPropertyProxy TileProxy::grainCountProperty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "grainCountProperty", "()Ljavafx/beans/property/ReadOnlyIntegerProperty;" );
	return ::javafx::beans::property::ReadOnlyIntegerPropertyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::beans::property::ReadOnlyListPropertyProxy TileProxy::contentProperty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "contentProperty", "()Ljavafx/beans/property/ReadOnlyListProperty;" );
	return ::javafx::beans::property::ReadOnlyListPropertyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::beans::property::ReadOnlyListPropertyProxy TileProxy::hamstersProperty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hamstersProperty", "()Ljavafx/beans/property/ReadOnlyListProperty;" );
	return ::javafx::beans::property::ReadOnlyListPropertyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void TileProxy::dispose()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "dispose", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

