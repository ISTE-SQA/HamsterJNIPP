#ifndef __java_lang_CharacterProxy_H
#define __java_lang_CharacterProxy_H


#include <jni.h>
#include <string>

#include "net/sourceforge/jnipp/JBooleanArrayHelper.h"
#include "net/sourceforge/jnipp/JByteArrayHelper.h"
#include "net/sourceforge/jnipp/JCharArrayHelper.h"
#include "net/sourceforge/jnipp/JDoubleArrayHelper.h"
#include "net/sourceforge/jnipp/JFloatArrayHelper.h"
#include "net/sourceforge/jnipp/JIntArrayHelper.h"
#include "net/sourceforge/jnipp/JLongArrayHelper.h"
#include "net/sourceforge/jnipp/JShortArrayHelper.h"
#include "net/sourceforge/jnipp/JStringHelper.h"
#include "net/sourceforge/jnipp/JStringHelperArray.h"
#include "net/sourceforge/jnipp/ProxyArray.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxyForward.h"
#include "java\lang\CharSequenceProxyForward.h"
#include "java\lang\ClassProxyForward.h"

namespace java
{
	namespace lang
	{
		class CharacterProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			CharacterProxy(void* unused);
			virtual jobject _getPeerObject() const;

		public:
			static jclass _getObjectClass();
			static inline std::string _getClassName()
			{
				return className;
			}

			jclass getObjectClass();
			operator jobject();
			// constructors
			CharacterProxy(jobject obj);
			CharacterProxy(jchar p0);

			virtual ~CharacterProxy();
			CharacterProxy& operator=(const CharacterProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * char charValue();
			 */
			jchar charValue();
			/*
			 * int compareTo(Character);
			 */
			jint compareTo(::java::lang::CharacterProxy p0);
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * static boolean isAlphabetic(int);
			 */
			static jboolean isAlphabetic(jint p0);
			/*
			 * static boolean isBmpCodePoint(int);
			 */
			static jboolean isBmpCodePoint(jint p0);
			/*
			 * static boolean isDefined(char);
			 */
			static jboolean isDefined(jchar p0);
			/*
			 * static boolean isDefined(int);
			 */
			static jboolean isDefined(jint p0);
			/*
			 * static boolean isDigit(char);
			 */
			static jboolean isDigit(jchar p0);
			/*
			 * static boolean isDigit(int);
			 */
			static jboolean isDigit(jint p0);
			/*
			 * static boolean isHighSurrogate(char);
			 */
			static jboolean isHighSurrogate(jchar p0);
			/*
			 * static boolean isISOControl(char);
			 */
			static jboolean isISOControl(jchar p0);
			/*
			 * static boolean isISOControl(int);
			 */
			static jboolean isISOControl(jint p0);
			/*
			 * static boolean isIdentifierIgnorable(char);
			 */
			static jboolean isIdentifierIgnorable(jchar p0);
			/*
			 * static boolean isIdentifierIgnorable(int);
			 */
			static jboolean isIdentifierIgnorable(jint p0);
			/*
			 * static boolean isIdeographic(int);
			 */
			static jboolean isIdeographic(jint p0);
			/*
			 * static boolean isJavaIdentifierPart(char);
			 */
			static jboolean isJavaIdentifierPart(jchar p0);
			/*
			 * static boolean isJavaIdentifierPart(int);
			 */
			static jboolean isJavaIdentifierPart(jint p0);
			/*
			 * static boolean isJavaIdentifierStart(char);
			 */
			static jboolean isJavaIdentifierStart(jchar p0);
			/*
			 * static boolean isJavaIdentifierStart(int);
			 */
			static jboolean isJavaIdentifierStart(jint p0);
			/*
			 * static boolean isJavaLetter(char);
			 */
			static jboolean isJavaLetter(jchar p0);
			/*
			 * static boolean isJavaLetterOrDigit(char);
			 */
			static jboolean isJavaLetterOrDigit(jchar p0);
			/*
			 * static boolean isLetter(char);
			 */
			static jboolean isLetter(jchar p0);
			/*
			 * static boolean isLetter(int);
			 */
			static jboolean isLetter(jint p0);
			/*
			 * static boolean isLetterOrDigit(char);
			 */
			static jboolean isLetterOrDigit(jchar p0);
			/*
			 * static boolean isLetterOrDigit(int);
			 */
			static jboolean isLetterOrDigit(jint p0);
			/*
			 * static boolean isLowSurrogate(char);
			 */
			static jboolean isLowSurrogate(jchar p0);
			/*
			 * static boolean isLowerCase(char);
			 */
			static jboolean isLowerCase(jchar p0);
			/*
			 * static boolean isLowerCase(int);
			 */
			static jboolean isLowerCase(jint p0);
			/*
			 * static boolean isMirrored(char);
			 */
			static jboolean isMirrored(jchar p0);
			/*
			 * static boolean isMirrored(int);
			 */
			static jboolean isMirrored(jint p0);
			/*
			 * static boolean isSpace(char);
			 */
			static jboolean isSpace(jchar p0);
			/*
			 * static boolean isSpaceChar(char);
			 */
			static jboolean isSpaceChar(jchar p0);
			/*
			 * static boolean isSpaceChar(int);
			 */
			static jboolean isSpaceChar(jint p0);
			/*
			 * static boolean isSupplementaryCodePoint(int);
			 */
			static jboolean isSupplementaryCodePoint(jint p0);
			/*
			 * static boolean isSurrogate(char);
			 */
			static jboolean isSurrogate(jchar p0);
			/*
			 * static boolean isSurrogatePair(char, char);
			 */
			static jboolean isSurrogatePair(jchar p0, jchar p1);
			/*
			 * static boolean isTitleCase(char);
			 */
			static jboolean isTitleCase(jchar p0);
			/*
			 * static boolean isTitleCase(int);
			 */
			static jboolean isTitleCase(jint p0);
			/*
			 * static boolean isUnicodeIdentifierPart(char);
			 */
			static jboolean isUnicodeIdentifierPart(jchar p0);
			/*
			 * static boolean isUnicodeIdentifierPart(int);
			 */
			static jboolean isUnicodeIdentifierPart(jint p0);
			/*
			 * static boolean isUnicodeIdentifierStart(char);
			 */
			static jboolean isUnicodeIdentifierStart(jchar p0);
			/*
			 * static boolean isUnicodeIdentifierStart(int);
			 */
			static jboolean isUnicodeIdentifierStart(jint p0);
			/*
			 * static boolean isUpperCase(char);
			 */
			static jboolean isUpperCase(jchar p0);
			/*
			 * static boolean isUpperCase(int);
			 */
			static jboolean isUpperCase(jint p0);
			/*
			 * static boolean isValidCodePoint(int);
			 */
			static jboolean isValidCodePoint(jint p0);
			/*
			 * static boolean isWhitespace(char);
			 */
			static jboolean isWhitespace(jchar p0);
			/*
			 * static boolean isWhitespace(int);
			 */
			static jboolean isWhitespace(jint p0);
			/*
			 * static byte getDirectionality(char);
			 */
			static jbyte getDirectionality(jchar p0);
			/*
			 * static byte getDirectionality(int);
			 */
			static jbyte getDirectionality(jint p0);
			/*
			 * static char forDigit(int, int);
			 */
			static jchar forDigit(jint p0, jint p1);
			/*
			 * static char highSurrogate(int);
			 */
			static jchar highSurrogate(jint p0);
			/*
			 * static char lowSurrogate(int);
			 */
			static jchar lowSurrogate(jint p0);
			/*
			 * static char reverseBytes(char);
			 */
			static jchar reverseBytes(jchar p0);
			/*
			 * static char toLowerCase(char);
			 */
			static jchar toLowerCase(jchar p0);
			/*
			 * static char toTitleCase(char);
			 */
			static jchar toTitleCase(jchar p0);
			/*
			 * static char toUpperCase(char);
			 */
			static jchar toUpperCase(jchar p0);
			/*
			 * static char[] toChars(int);
			 */
			static ::net::sourceforge::jnipp::JCharArrayHelper<1> toChars(jint p0);
			/*
			 * static int charCount(int);
			 */
			static jint charCount(jint p0);
			/*
			 * static int codePointAt(char[], int);
			 */
			static jint codePointAt(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1);
			/*
			 * static int codePointAt(char[], int, int);
			 */
			static jint codePointAt(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1, jint p2);
			/*
			 * static int codePointAt(CharSequence, int);
			 */
			static jint codePointAt(::java::lang::CharSequenceProxy p0, jint p1);
			/*
			 * static int codePointBefore(char[], int);
			 */
			static jint codePointBefore(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1);
			/*
			 * static int codePointBefore(char[], int, int);
			 */
			static jint codePointBefore(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1, jint p2);
			/*
			 * static int codePointBefore(CharSequence, int);
			 */
			static jint codePointBefore(::java::lang::CharSequenceProxy p0, jint p1);
			/*
			 * static int codePointCount(char[], int, int);
			 */
			static jint codePointCount(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1, jint p2);
			/*
			 * static int codePointCount(CharSequence, int, int);
			 */
			static jint codePointCount(::java::lang::CharSequenceProxy p0, jint p1, jint p2);
			/*
			 * static int compare(char, char);
			 */
			static jint compare(jchar p0, jchar p1);
			/*
			 * static int digit(char, int);
			 */
			static jint digit(jchar p0, jint p1);
			/*
			 * static int digit(int, int);
			 */
			static jint digit(jint p0, jint p1);
			/*
			 * static int getNumericValue(char);
			 */
			static jint getNumericValue(jchar p0);
			/*
			 * static int getNumericValue(int);
			 */
			static jint getNumericValue(jint p0);
			/*
			 * static int getType(char);
			 */
			static jint getType(jchar p0);
			/*
			 * static int getType(int);
			 */
			static jint getType(jint p0);
			/*
			 * static int hashCode(char);
			 */
			static jint hashCode(jchar p0);
			/*
			 * static int offsetByCodePoints(char[], int, int, int, int);
			 */
			static jint offsetByCodePoints(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1, jint p2, jint p3, jint p4);
			/*
			 * static int offsetByCodePoints(CharSequence, int, int);
			 */
			static jint offsetByCodePoints(::java::lang::CharSequenceProxy p0, jint p1, jint p2);
			/*
			 * static int toChars(int, char[], int);
			 */
			static jint toChars(jint p0, ::net::sourceforge::jnipp::JCharArrayHelper<1> p1, jint p2);
			/*
			 * static int toCodePoint(char, char);
			 */
			static jint toCodePoint(jchar p0, jchar p1);
			/*
			 * static int toLowerCase(int);
			 */
			static jint toLowerCase(jint p0);
			/*
			 * static int toTitleCase(int);
			 */
			static jint toTitleCase(jint p0);
			/*
			 * static int toUpperCase(int);
			 */
			static jint toUpperCase(jint p0);
			/*
			 * static Character valueOf(char);
			 */
			static ::java::lang::CharacterProxy valueOf(jchar p0);
			/*
			 * static String getName(int);
			 */
			static ::net::sourceforge::jnipp::JStringHelper getName(jint p0);
			/*
			 * static String toString(char);
			 */
			static ::net::sourceforge::jnipp::JStringHelper toString(jchar p0);

		};
	}
}


#endif
