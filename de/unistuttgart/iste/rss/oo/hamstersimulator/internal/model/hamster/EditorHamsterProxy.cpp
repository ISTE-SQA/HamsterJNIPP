#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "EditorHamsterProxy.h"

// includes for parameter and return type proxy classes
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\commands\CommandSpecificationProxy.h"
#include "java\util\OptionalProxy.h"
#include "java\util\function\FunctionProxy.h"

using namespace net::sourceforge::jnipp;
using namespace de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model::hamster;


std::string EditorHamsterProxy::className = "de/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/hamster/EditorHamster";
jclass EditorHamsterProxy::objectClass = NULL;

jclass EditorHamsterProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

EditorHamsterProxy::EditorHamsterProxy(void* unused)
{
}

jobject EditorHamsterProxy::_getPeerObject() const
{
	return peerObject;
}

jclass EditorHamsterProxy::getObjectClass()
{
	return _getObjectClass();
}

EditorHamsterProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
EditorHamsterProxy::EditorHamsterProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

EditorHamsterProxy::EditorHamsterProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

EditorHamsterProxy::~EditorHamsterProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

EditorHamsterProxy& EditorHamsterProxy::operator=(const EditorHamsterProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::util::OptionalProxy EditorHamsterProxy::getCommandFromSpecification(::de::unistuttgart::iste::rss::oo::hamstersimulator::commands::CommandSpecificationProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getCommandFromSpecification", "(Lde/unistuttgart/iste/rss/oo/hamstersimulator/commands/CommandSpecification;)Ljava/util/Optional;" );
	return ::java::util::OptionalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

