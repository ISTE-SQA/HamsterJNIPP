#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "MatcherProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\StringBufferProxy.h"
#include "java\util\regex\MatchResultProxy.h"
#include "java\lang\CharSequenceProxy.h"
#include "java\util\regex\PatternProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::regex;


std::string MatcherProxy::className = "java/util/regex/Matcher";
jclass MatcherProxy::objectClass = NULL;

jclass MatcherProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

MatcherProxy::MatcherProxy(void* unused)
{
}

jobject MatcherProxy::_getPeerObject() const
{
	return peerObject;
}

jclass MatcherProxy::getObjectClass()
{
	return _getObjectClass();
}

MatcherProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
MatcherProxy::MatcherProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

MatcherProxy::~MatcherProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

MatcherProxy& MatcherProxy::operator=(const MatcherProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean MatcherProxy::find()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "find", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MatcherProxy::find(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "find", "(I)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, p0 );
}

jboolean MatcherProxy::hasAnchoringBounds()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hasAnchoringBounds", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MatcherProxy::hasTransparentBounds()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hasTransparentBounds", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MatcherProxy::hitEnd()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hitEnd", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MatcherProxy::lookingAt()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lookingAt", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MatcherProxy::matches()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "matches", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MatcherProxy::requireEnd()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "requireEnd", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jint MatcherProxy::end()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "end", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint MatcherProxy::end(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "end", "(I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

jint MatcherProxy::end(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "end", "(Ljava/lang/String;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) );
}

jint MatcherProxy::groupCount()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "groupCount", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint MatcherProxy::regionEnd()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "regionEnd", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint MatcherProxy::regionStart()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "regionStart", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint MatcherProxy::start()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "start", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint MatcherProxy::start(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "start", "(I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

jint MatcherProxy::start(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "start", "(Ljava/lang/String;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) );
}

::net::sourceforge::jnipp::JStringHelper MatcherProxy::group()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "group", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper MatcherProxy::group(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "group", "(I)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::net::sourceforge::jnipp::JStringHelper MatcherProxy::group(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "group", "(Ljava/lang/String;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper MatcherProxy::replaceAll(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "replaceAll", "(Ljava/lang/String;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper MatcherProxy::replaceFirst(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "replaceFirst", "(Ljava/lang/String;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper MatcherProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::StringBufferProxy MatcherProxy::appendTail(::java::lang::StringBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "appendTail", "(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::regex::MatchResultProxy MatcherProxy::toMatchResult()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toMatchResult", "()Ljava/util/regex/MatchResult;" );
	return ::java::util::regex::MatchResultProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::regex::MatcherProxy MatcherProxy::appendReplacement(::java::lang::StringBufferProxy p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "appendReplacement", "(Ljava/lang/StringBuffer;Ljava/lang/String;)Ljava/util/regex/Matcher;" );
	return ::java::util::regex::MatcherProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ) )  );
}

::java::util::regex::MatcherProxy MatcherProxy::region(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "region", "(II)Ljava/util/regex/Matcher;" );
	return ::java::util::regex::MatcherProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::util::regex::MatcherProxy MatcherProxy::reset()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reset", "()Ljava/util/regex/Matcher;" );
	return ::java::util::regex::MatcherProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::regex::MatcherProxy MatcherProxy::reset(::java::lang::CharSequenceProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reset", "(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;" );
	return ::java::util::regex::MatcherProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::regex::MatcherProxy MatcherProxy::useAnchoringBounds(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "useAnchoringBounds", "(Z)Ljava/util/regex/Matcher;" );
	return ::java::util::regex::MatcherProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::util::regex::MatcherProxy MatcherProxy::usePattern(::java::util::regex::PatternProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "usePattern", "(Ljava/util/regex/Pattern;)Ljava/util/regex/Matcher;" );
	return ::java::util::regex::MatcherProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::regex::MatcherProxy MatcherProxy::useTransparentBounds(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "useTransparentBounds", "(Z)Ljava/util/regex/Matcher;" );
	return ::java::util::regex::MatcherProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::util::regex::PatternProxy MatcherProxy::pattern()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "pattern", "()Ljava/util/regex/Pattern;" );
	return ::java::util::regex::PatternProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper MatcherProxy::quoteReplacement(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "quoteReplacement", "(Ljava/lang/String;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

