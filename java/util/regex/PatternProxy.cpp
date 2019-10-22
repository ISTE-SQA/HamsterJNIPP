#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "PatternProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\CharSequenceProxy.h"
#include "java\util\function\PredicateProxy.h"
#include "java\util\regex\MatcherProxy.h"
#include "java\util\stream\StreamProxy.h"
#include "java\util\regex\Pattern_NodeProxy.h"
#include "java\util\regex\Pattern_GroupHeadProxy.h"
#include "java\util\MapProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::regex;


std::string PatternProxy::className = "java/util/regex/Pattern";
jclass PatternProxy::objectClass = NULL;

jclass PatternProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

PatternProxy::PatternProxy(void* unused)
{
}

jobject PatternProxy::_getPeerObject() const
{
	return peerObject;
}

jclass PatternProxy::getObjectClass()
{
	return _getObjectClass();
}

PatternProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
PatternProxy::PatternProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

PatternProxy::~PatternProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

PatternProxy& PatternProxy::operator=(const PatternProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jint PatternProxy::flags()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "flags", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper PatternProxy::pattern()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "pattern", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper PatternProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelperArray<1> PatternProxy::split(::java::lang::CharSequenceProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "split", "(Ljava/lang/CharSequence;)[Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelperArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelperArray<1> PatternProxy::split(::java::lang::CharSequenceProxy p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "split", "(Ljava/lang/CharSequence;I)[Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelperArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 )  );
}

::java::util::function::PredicateProxy PatternProxy::asPredicate()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asPredicate", "()Ljava/util/function/Predicate;" );
	return ::java::util::function::PredicateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::regex::MatcherProxy PatternProxy::matcher(::java::lang::CharSequenceProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "matcher", "(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;" );
	return ::java::util::regex::MatcherProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::StreamProxy PatternProxy::splitAsStream(::java::lang::CharSequenceProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "splitAsStream", "(Ljava/lang/CharSequence;)Ljava/util/stream/Stream;" );
	return ::java::util::stream::StreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

jboolean PatternProxy::matches(::net::sourceforge::jnipp::JStringHelper p0, ::java::lang::CharSequenceProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "matches", "(Ljava/lang/String;Ljava/lang/CharSequence;)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jobject>( p1 ) );
}

::net::sourceforge::jnipp::JStringHelper PatternProxy::quote(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "quote", "(Ljava/lang/String;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::java::util::regex::PatternProxy PatternProxy::compile(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "compile", "(Ljava/lang/String;)Ljava/util/regex/Pattern;" );
	return ::java::util::regex::PatternProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::java::util::regex::PatternProxy PatternProxy::compile(::net::sourceforge::jnipp::JStringHelper p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "compile", "(Ljava/lang/String;I)Ljava/util/regex/Pattern;" );
	return ::java::util::regex::PatternProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ), p1 )  );
}

