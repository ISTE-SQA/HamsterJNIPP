#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "Class_AnnotationDataProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\MapProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string Class_AnnotationDataProxy::className = "java/lang/Class$AnnotationData";
jclass Class_AnnotationDataProxy::objectClass = NULL;

jclass Class_AnnotationDataProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

Class_AnnotationDataProxy::Class_AnnotationDataProxy(void* unused)
{
}

jobject Class_AnnotationDataProxy::_getPeerObject() const
{
	return peerObject;
}

jclass Class_AnnotationDataProxy::getObjectClass()
{
	return _getObjectClass();
}

Class_AnnotationDataProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
Class_AnnotationDataProxy::Class_AnnotationDataProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

Class_AnnotationDataProxy::~Class_AnnotationDataProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

Class_AnnotationDataProxy& Class_AnnotationDataProxy::operator=(const Class_AnnotationDataProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
