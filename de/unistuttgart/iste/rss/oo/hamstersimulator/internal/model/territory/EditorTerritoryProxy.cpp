#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "EditorTerritoryProxy.h"

// includes for parameter and return type proxy classes
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\internal\model\hamster\EditorHamsterProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\commands\CommandSpecificationProxy.h"
#include "java\util\OptionalProxy.h"
#include "java\util\function\FunctionProxy.h"

using namespace net::sourceforge::jnipp;
using namespace de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::territory;


std::string EditorTerritoryProxy::className = "de/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/territory/EditorTerritory";
jclass EditorTerritoryProxy::objectClass = NULL;

jclass EditorTerritoryProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

EditorTerritoryProxy::EditorTerritoryProxy(void* unused)
{
}

jobject EditorTerritoryProxy::_getPeerObject() const
{
	return peerObject;
}

jclass EditorTerritoryProxy::getObjectClass()
{
	return _getObjectClass();
}

EditorTerritoryProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
EditorTerritoryProxy::EditorTerritoryProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

EditorTerritoryProxy::EditorTerritoryProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

EditorTerritoryProxy::~EditorTerritoryProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

EditorTerritoryProxy& EditorTerritoryProxy::operator=(const EditorTerritoryProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::hamster::EditorHamsterProxy EditorTerritoryProxy::getDefaultHamster()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDefaultHamster", "()Lde/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/hamster/EditorHamster;" );
	return ::de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::hamster::EditorHamsterProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::OptionalProxy EditorTerritoryProxy::getCommandFromSpecification(::de::unistuttgart::iste::rss::oo::hamstersimulator::commands::CommandSpecificationProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getCommandFromSpecification", "(Lde/unistuttgart/iste/rss/oo/hamstersimulator/commands/CommandSpecification;)Ljava/util/Optional;" );
	return ::java::util::OptionalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

