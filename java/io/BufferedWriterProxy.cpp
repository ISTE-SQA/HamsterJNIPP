#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "BufferedWriterProxy.h"

// includes for parameter and return type proxy classes
#include "java\io\WriterProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::io;


std::string BufferedWriterProxy::className = "java/io/BufferedWriter";
jclass BufferedWriterProxy::objectClass = NULL;

jclass BufferedWriterProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

BufferedWriterProxy::BufferedWriterProxy(void* unused)
{
}

jobject BufferedWriterProxy::_getPeerObject() const
{
	return peerObject;
}

jclass BufferedWriterProxy::getObjectClass()
{
	return _getObjectClass();
}

BufferedWriterProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
BufferedWriterProxy::BufferedWriterProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

BufferedWriterProxy::BufferedWriterProxy(::java::io::WriterProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/io/Writer;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

BufferedWriterProxy::BufferedWriterProxy(::java::io::WriterProxy p0, jint p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/io/Writer;I)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), p1 ) );
}

BufferedWriterProxy::~BufferedWriterProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

BufferedWriterProxy& BufferedWriterProxy::operator=(const BufferedWriterProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
void BufferedWriterProxy::close()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "close", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void BufferedWriterProxy::flush()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "flush", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void BufferedWriterProxy::newLine()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newLine", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void BufferedWriterProxy::write(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "([CII)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jcharArray>( p0 ), p1, p2 );
}

void BufferedWriterProxy::write(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void BufferedWriterProxy::write(::net::sourceforge::jnipp::JStringHelper p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "(Ljava/lang/String;II)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), p1, p2 );
}

