#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "DateTimePrintContextProxy.h"

// includes for parameter and return type proxy classes
#include "java\time\format\DateTimeFormatterProxy.h"
#include "java\time\temporal\TemporalAccessorProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::format;


std::string DateTimePrintContextProxy::className = "java/time/format/DateTimePrintContext";
jclass DateTimePrintContextProxy::objectClass = NULL;

jclass DateTimePrintContextProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

DateTimePrintContextProxy::DateTimePrintContextProxy(void* unused)
{
}

jobject DateTimePrintContextProxy::_getPeerObject() const
{
	return peerObject;
}

jclass DateTimePrintContextProxy::getObjectClass()
{
	return _getObjectClass();
}

DateTimePrintContextProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
DateTimePrintContextProxy::DateTimePrintContextProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

DateTimePrintContextProxy::~DateTimePrintContextProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

DateTimePrintContextProxy& DateTimePrintContextProxy::operator=(const DateTimePrintContextProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::JStringHelper DateTimePrintContextProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

