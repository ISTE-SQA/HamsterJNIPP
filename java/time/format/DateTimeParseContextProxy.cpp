#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "DateTimeParseContextProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\ArrayListProxy.h"
#include "java\time\format\DateTimeFormatterProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::format;


std::string DateTimeParseContextProxy::className = "java/time/format/DateTimeParseContext";
jclass DateTimeParseContextProxy::objectClass = NULL;

jclass DateTimeParseContextProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

DateTimeParseContextProxy::DateTimeParseContextProxy(void* unused)
{
}

jobject DateTimeParseContextProxy::_getPeerObject() const
{
	return peerObject;
}

jclass DateTimeParseContextProxy::getObjectClass()
{
	return _getObjectClass();
}

DateTimeParseContextProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
DateTimeParseContextProxy::DateTimeParseContextProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

DateTimeParseContextProxy::~DateTimeParseContextProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

DateTimeParseContextProxy& DateTimeParseContextProxy::operator=(const DateTimeParseContextProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::JStringHelper DateTimeParseContextProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

