#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "CharacterProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\lang\CharSequenceProxy.h"
#include "java\lang\ClassProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string CharacterProxy::className = "java/lang/Character";
jclass CharacterProxy::objectClass = NULL;

jclass CharacterProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

CharacterProxy::CharacterProxy(void* unused)
{
}

jobject CharacterProxy::_getPeerObject() const
{
	return peerObject;
}

jclass CharacterProxy::getObjectClass()
{
	return _getObjectClass();
}

CharacterProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
CharacterProxy::CharacterProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

CharacterProxy::CharacterProxy(jchar p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(C)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0 ) );
}

CharacterProxy::~CharacterProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

CharacterProxy& CharacterProxy::operator=(const CharacterProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean CharacterProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jchar CharacterProxy::charValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "charValue", "()C" );
	return JNIEnvHelper::CallCharMethod( _getPeerObject(), mid );
}

jint CharacterProxy::compareTo(::java::lang::CharacterProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareTo", "(Ljava/lang/Character;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint CharacterProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper CharacterProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jboolean CharacterProxy::isAlphabetic(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isAlphabetic", "(I)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isBmpCodePoint(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isBmpCodePoint", "(I)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isDefined(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isDefined", "(C)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isDefined(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isDefined", "(I)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isDigit(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isDigit", "(C)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isDigit(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isDigit", "(I)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isHighSurrogate(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isHighSurrogate", "(C)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isISOControl(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isISOControl", "(C)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isISOControl(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isISOControl", "(I)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isIdentifierIgnorable(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isIdentifierIgnorable", "(C)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isIdentifierIgnorable(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isIdentifierIgnorable", "(I)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isIdeographic(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isIdeographic", "(I)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isJavaIdentifierPart(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isJavaIdentifierPart", "(C)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isJavaIdentifierPart(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isJavaIdentifierPart", "(I)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isJavaIdentifierStart(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isJavaIdentifierStart", "(C)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isJavaIdentifierStart(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isJavaIdentifierStart", "(I)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isJavaLetter(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isJavaLetter", "(C)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isJavaLetterOrDigit(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isJavaLetterOrDigit", "(C)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isLetter(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isLetter", "(C)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isLetter(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isLetter", "(I)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isLetterOrDigit(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isLetterOrDigit", "(C)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isLetterOrDigit(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isLetterOrDigit", "(I)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isLowSurrogate(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isLowSurrogate", "(C)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isLowerCase(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isLowerCase", "(C)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isLowerCase(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isLowerCase", "(I)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isMirrored(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isMirrored", "(C)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isMirrored(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isMirrored", "(I)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isSpace(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isSpace", "(C)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isSpaceChar(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isSpaceChar", "(C)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isSpaceChar(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isSpaceChar", "(I)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isSupplementaryCodePoint(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isSupplementaryCodePoint", "(I)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isSurrogate(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isSurrogate", "(C)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isSurrogatePair(jchar p0, jchar p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isSurrogatePair", "(CC)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0, p1 );
}

jboolean CharacterProxy::isTitleCase(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isTitleCase", "(C)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isTitleCase(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isTitleCase", "(I)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isUnicodeIdentifierPart(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isUnicodeIdentifierPart", "(C)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isUnicodeIdentifierPart(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isUnicodeIdentifierPart", "(I)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isUnicodeIdentifierStart(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isUnicodeIdentifierStart", "(C)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isUnicodeIdentifierStart(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isUnicodeIdentifierStart", "(I)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isUpperCase(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isUpperCase", "(C)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isUpperCase(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isUpperCase", "(I)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isValidCodePoint(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isValidCodePoint", "(I)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isWhitespace(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isWhitespace", "(C)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jboolean CharacterProxy::isWhitespace(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isWhitespace", "(I)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0 );
}

jbyte CharacterProxy::getDirectionality(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getDirectionality", "(C)B" );
	return JNIEnvHelper::CallStaticByteMethod( _getObjectClass(), mid, p0 );
}

jbyte CharacterProxy::getDirectionality(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getDirectionality", "(I)B" );
	return JNIEnvHelper::CallStaticByteMethod( _getObjectClass(), mid, p0 );
}

jchar CharacterProxy::forDigit(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "forDigit", "(II)C" );
	return JNIEnvHelper::CallStaticCharMethod( _getObjectClass(), mid, p0, p1 );
}

jchar CharacterProxy::highSurrogate(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "highSurrogate", "(I)C" );
	return JNIEnvHelper::CallStaticCharMethod( _getObjectClass(), mid, p0 );
}

jchar CharacterProxy::lowSurrogate(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "lowSurrogate", "(I)C" );
	return JNIEnvHelper::CallStaticCharMethod( _getObjectClass(), mid, p0 );
}

jchar CharacterProxy::reverseBytes(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "reverseBytes", "(C)C" );
	return JNIEnvHelper::CallStaticCharMethod( _getObjectClass(), mid, p0 );
}

jchar CharacterProxy::toLowerCase(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toLowerCase", "(C)C" );
	return JNIEnvHelper::CallStaticCharMethod( _getObjectClass(), mid, p0 );
}

jchar CharacterProxy::toTitleCase(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toTitleCase", "(C)C" );
	return JNIEnvHelper::CallStaticCharMethod( _getObjectClass(), mid, p0 );
}

jchar CharacterProxy::toUpperCase(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toUpperCase", "(C)C" );
	return JNIEnvHelper::CallStaticCharMethod( _getObjectClass(), mid, p0 );
}

::net::sourceforge::jnipp::JCharArrayHelper<1> CharacterProxy::toChars(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toChars", "(I)[C" );
	return ::net::sourceforge::jnipp::JCharArrayHelper<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

jint CharacterProxy::charCount(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "charCount", "(I)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0 );
}

jint CharacterProxy::codePointAt(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "codePointAt", "([CI)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, static_cast<jcharArray>( p0 ), p1 );
}

jint CharacterProxy::codePointAt(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "codePointAt", "([CII)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, static_cast<jcharArray>( p0 ), p1, p2 );
}

jint CharacterProxy::codePointAt(::java::lang::CharSequenceProxy p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "codePointAt", "(Ljava/lang/CharSequence;I)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), p1 );
}

jint CharacterProxy::codePointBefore(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "codePointBefore", "([CI)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, static_cast<jcharArray>( p0 ), p1 );
}

jint CharacterProxy::codePointBefore(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "codePointBefore", "([CII)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, static_cast<jcharArray>( p0 ), p1, p2 );
}

jint CharacterProxy::codePointBefore(::java::lang::CharSequenceProxy p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "codePointBefore", "(Ljava/lang/CharSequence;I)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), p1 );
}

jint CharacterProxy::codePointCount(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "codePointCount", "([CII)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, static_cast<jcharArray>( p0 ), p1, p2 );
}

jint CharacterProxy::codePointCount(::java::lang::CharSequenceProxy p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "codePointCount", "(Ljava/lang/CharSequence;II)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

jint CharacterProxy::compare(jchar p0, jchar p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "compare", "(CC)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0, p1 );
}

jint CharacterProxy::digit(jchar p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "digit", "(CI)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0, p1 );
}

jint CharacterProxy::digit(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "digit", "(II)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0, p1 );
}

jint CharacterProxy::getNumericValue(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getNumericValue", "(C)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0 );
}

jint CharacterProxy::getNumericValue(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getNumericValue", "(I)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0 );
}

jint CharacterProxy::getType(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getType", "(C)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0 );
}

jint CharacterProxy::getType(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getType", "(I)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0 );
}

jint CharacterProxy::hashCode(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "hashCode", "(C)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0 );
}

jint CharacterProxy::offsetByCodePoints(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1, jint p2, jint p3, jint p4)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "offsetByCodePoints", "([CIIII)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, static_cast<jcharArray>( p0 ), p1, p2, p3, p4 );
}

jint CharacterProxy::offsetByCodePoints(::java::lang::CharSequenceProxy p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "offsetByCodePoints", "(Ljava/lang/CharSequence;II)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

jint CharacterProxy::toChars(jint p0, ::net::sourceforge::jnipp::JCharArrayHelper<1> p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toChars", "(I[CI)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0, static_cast<jcharArray>( p1 ), p2 );
}

jint CharacterProxy::toCodePoint(jchar p0, jchar p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toCodePoint", "(CC)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0, p1 );
}

jint CharacterProxy::toLowerCase(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toLowerCase", "(I)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0 );
}

jint CharacterProxy::toTitleCase(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toTitleCase", "(I)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0 );
}

jint CharacterProxy::toUpperCase(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toUpperCase", "(I)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0 );
}

::java::lang::CharacterProxy CharacterProxy::valueOf(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(C)Ljava/lang/Character;" );
	return ::java::lang::CharacterProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::net::sourceforge::jnipp::JStringHelper CharacterProxy::getName(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getName", "(I)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::net::sourceforge::jnipp::JStringHelper CharacterProxy::toString(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toString", "(C)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

