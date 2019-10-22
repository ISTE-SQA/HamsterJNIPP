#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ReadOnlyHamsterProxy.h"

// includes for parameter and return type proxy classes
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\datatypes\DirectionProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\internal\model\territory\ReadOnlyTerritoryProxy.h"
#include "java\util\ListProxy.h"
#include "javafx\beans\property\ReadOnlyIntegerPropertyProxy.h"
#include "javafx\beans\property\ReadOnlyListPropertyProxy.h"
#include "javafx\beans\property\ReadOnlyObjectPropertyProxy.h"
#include "javafx\beans\property\ReadOnlyIntegerWrapperProxy.h"
#include "javafx\beans\property\ReadOnlyListWrapperProxy.h"
#include "javafx\beans\property\ReadOnlyObjectWrapperProxy.h"

using namespace net::sourceforge::jnipp;
using namespace de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::hamster;


std::string ReadOnlyHamsterProxy::className = "de/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/hamster/ReadOnlyHamster";
jclass ReadOnlyHamsterProxy::objectClass = NULL;

jclass ReadOnlyHamsterProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ReadOnlyHamsterProxy::ReadOnlyHamsterProxy(void* unused)
{
}

jobject ReadOnlyHamsterProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ReadOnlyHamsterProxy::getObjectClass()
{
	return _getObjectClass();
}

ReadOnlyHamsterProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ReadOnlyHamsterProxy::ReadOnlyHamsterProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ReadOnlyHamsterProxy::ReadOnlyHamsterProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

ReadOnlyHamsterProxy::~ReadOnlyHamsterProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ReadOnlyHamsterProxy& ReadOnlyHamsterProxy::operator=(const ReadOnlyHamsterProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::DirectionProxy ReadOnlyHamsterProxy::getDirection()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDirection", "()Lde/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/Direction;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes::DirectionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::ReadOnlyTerritoryProxy ReadOnlyHamsterProxy::getCurrentTerritory()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getCurrentTerritory", "()Lde/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/territory/ReadOnlyTerritory;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory::ReadOnlyTerritoryProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jint ReadOnlyHamsterProxy::getGrainCount()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getGrainCount", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::util::ListProxy ReadOnlyHamsterProxy::getGrainInMouth()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getGrainInMouth", "()Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::beans::property::ReadOnlyIntegerPropertyProxy ReadOnlyHamsterProxy::grainCountProperty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "grainCountProperty", "()Ljavafx/beans/property/ReadOnlyIntegerProperty;" );
	return ::javafx::beans::property::ReadOnlyIntegerPropertyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::beans::property::ReadOnlyListPropertyProxy ReadOnlyHamsterProxy::grainInMouthProperty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "grainInMouthProperty", "()Ljavafx/beans/property/ReadOnlyListProperty;" );
	return ::javafx::beans::property::ReadOnlyListPropertyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::beans::property::ReadOnlyObjectPropertyProxy ReadOnlyHamsterProxy::directionProperty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "directionProperty", "()Ljavafx/beans/property/ReadOnlyObjectProperty;" );
	return ::javafx::beans::property::ReadOnlyObjectPropertyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

