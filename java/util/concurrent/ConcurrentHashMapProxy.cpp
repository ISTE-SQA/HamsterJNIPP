#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ConcurrentHashMapProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\MapProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\util\function\ToDoubleFunctionProxy.h"
#include "java\util\function\DoubleBinaryOperatorProxy.h"
#include "java\util\function\ToDoubleBiFunctionProxy.h"
#include "java\util\function\ToIntFunctionProxy.h"
#include "java\util\function\IntBinaryOperatorProxy.h"
#include "java\util\function\ToIntBiFunctionProxy.h"
#include "java\util\function\BiFunctionProxy.h"
#include "java\util\function\FunctionProxy.h"
#include "java\util\CollectionProxy.h"
#include "java\util\EnumerationProxy.h"
#include "java\util\Map_EntryProxy.h"
#include "java\util\SetProxy.h"
#include "java\util\concurrent\ConcurrentHashMap_KeySetViewProxy.h"
#include "java\util\function\ToLongFunctionProxy.h"
#include "java\util\function\LongBinaryOperatorProxy.h"
#include "java\util\function\ToLongBiFunctionProxy.h"
#include "java\util\function\BiConsumerProxy.h"
#include "java\util\function\ConsumerProxy.h"
#include "java\io\ObjectStreamFieldProxy.h"
#include "sun\misc\UnsafeProxy.h"
#include "java\util\concurrent\ConcurrentHashMap_EntrySetViewProxy.h"
#include "java\util\concurrent\ConcurrentHashMap_ValuesViewProxy.h"
#include "java\util\concurrent\ConcurrentHashMap_CounterCellProxy.h"
#include "java\util\concurrent\ConcurrentHashMap_NodeProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::concurrent;


std::string ConcurrentHashMapProxy::className = "java/util/concurrent/ConcurrentHashMap";
jclass ConcurrentHashMapProxy::objectClass = NULL;

jclass ConcurrentHashMapProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ConcurrentHashMapProxy::ConcurrentHashMapProxy(void* unused)
{
}

jobject ConcurrentHashMapProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ConcurrentHashMapProxy::getObjectClass()
{
	return _getObjectClass();
}

ConcurrentHashMapProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ConcurrentHashMapProxy::ConcurrentHashMapProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ConcurrentHashMapProxy::ConcurrentHashMapProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

ConcurrentHashMapProxy::ConcurrentHashMapProxy(jint p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(I)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0 ) );
}

ConcurrentHashMapProxy::ConcurrentHashMapProxy(jint p0, jfloat p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(IF)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0, p1 ) );
}

ConcurrentHashMapProxy::ConcurrentHashMapProxy(jint p0, jfloat p1, jint p2)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(IFI)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0, p1, p2 ) );
}

ConcurrentHashMapProxy::ConcurrentHashMapProxy(::java::util::MapProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/util/Map;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

ConcurrentHashMapProxy::~ConcurrentHashMapProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ConcurrentHashMapProxy& ConcurrentHashMapProxy::operator=(const ConcurrentHashMapProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ConcurrentHashMapProxy::contains(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "contains", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ConcurrentHashMapProxy::containsKey(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "containsKey", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ConcurrentHashMapProxy::containsValue(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "containsValue", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ConcurrentHashMapProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ConcurrentHashMapProxy::isEmpty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isEmpty", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean ConcurrentHashMapProxy::remove(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

jboolean ConcurrentHashMapProxy::replace(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1, ::java::lang::ObjectProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) );
}

jdouble ConcurrentHashMapProxy::reduceEntriesToDouble(jlong p0, ::java::util::function::ToDoubleFunctionProxy p1, jdouble p2, ::java::util::function::DoubleBinaryOperatorProxy p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduceEntriesToDouble", "(JLjava/util/function/ToDoubleFunction;DLjava/util/function/DoubleBinaryOperator;)D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ), p2, static_cast<jobject>( p3 ) );
}

jdouble ConcurrentHashMapProxy::reduceKeysToDouble(jlong p0, ::java::util::function::ToDoubleFunctionProxy p1, jdouble p2, ::java::util::function::DoubleBinaryOperatorProxy p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduceKeysToDouble", "(JLjava/util/function/ToDoubleFunction;DLjava/util/function/DoubleBinaryOperator;)D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ), p2, static_cast<jobject>( p3 ) );
}

jdouble ConcurrentHashMapProxy::reduceToDouble(jlong p0, ::java::util::function::ToDoubleBiFunctionProxy p1, jdouble p2, ::java::util::function::DoubleBinaryOperatorProxy p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduceToDouble", "(JLjava/util/function/ToDoubleBiFunction;DLjava/util/function/DoubleBinaryOperator;)D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ), p2, static_cast<jobject>( p3 ) );
}

jdouble ConcurrentHashMapProxy::reduceValuesToDouble(jlong p0, ::java::util::function::ToDoubleFunctionProxy p1, jdouble p2, ::java::util::function::DoubleBinaryOperatorProxy p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduceValuesToDouble", "(JLjava/util/function/ToDoubleFunction;DLjava/util/function/DoubleBinaryOperator;)D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ), p2, static_cast<jobject>( p3 ) );
}

jint ConcurrentHashMapProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint ConcurrentHashMapProxy::reduceEntriesToInt(jlong p0, ::java::util::function::ToIntFunctionProxy p1, jint p2, ::java::util::function::IntBinaryOperatorProxy p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduceEntriesToInt", "(JLjava/util/function/ToIntFunction;ILjava/util/function/IntBinaryOperator;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ), p2, static_cast<jobject>( p3 ) );
}

jint ConcurrentHashMapProxy::reduceKeysToInt(jlong p0, ::java::util::function::ToIntFunctionProxy p1, jint p2, ::java::util::function::IntBinaryOperatorProxy p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduceKeysToInt", "(JLjava/util/function/ToIntFunction;ILjava/util/function/IntBinaryOperator;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ), p2, static_cast<jobject>( p3 ) );
}

jint ConcurrentHashMapProxy::reduceToInt(jlong p0, ::java::util::function::ToIntBiFunctionProxy p1, jint p2, ::java::util::function::IntBinaryOperatorProxy p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduceToInt", "(JLjava/util/function/ToIntBiFunction;ILjava/util/function/IntBinaryOperator;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ), p2, static_cast<jobject>( p3 ) );
}

jint ConcurrentHashMapProxy::reduceValuesToInt(jlong p0, ::java::util::function::ToIntFunctionProxy p1, jint p2, ::java::util::function::IntBinaryOperatorProxy p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduceValuesToInt", "(JLjava/util/function/ToIntFunction;ILjava/util/function/IntBinaryOperator;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ), p2, static_cast<jobject>( p3 ) );
}

jint ConcurrentHashMapProxy::size()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "size", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::lang::ObjectProxy ConcurrentHashMapProxy::compute(::java::lang::ObjectProxy p0, ::java::util::function::BiFunctionProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compute", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::lang::ObjectProxy ConcurrentHashMapProxy::computeIfAbsent(::java::lang::ObjectProxy p0, ::java::util::function::FunctionProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "computeIfAbsent", "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::lang::ObjectProxy ConcurrentHashMapProxy::computeIfPresent(::java::lang::ObjectProxy p0, ::java::util::function::BiFunctionProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "computeIfPresent", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::lang::ObjectProxy ConcurrentHashMapProxy::get(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "(Ljava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::ObjectProxy ConcurrentHashMapProxy::getOrDefault(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::lang::ObjectProxy ConcurrentHashMapProxy::merge(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1, ::java::util::function::BiFunctionProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "merge", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) )  );
}

::java::lang::ObjectProxy ConcurrentHashMapProxy::put(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::lang::ObjectProxy ConcurrentHashMapProxy::putIfAbsent(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::lang::ObjectProxy ConcurrentHashMapProxy::reduce(jlong p0, ::java::util::function::BiFunctionProxy p1, ::java::util::function::BiFunctionProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduce", "(JLjava/util/function/BiFunction;Ljava/util/function/BiFunction;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) )  );
}

::java::lang::ObjectProxy ConcurrentHashMapProxy::reduceEntries(jlong p0, ::java::util::function::FunctionProxy p1, ::java::util::function::BiFunctionProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduceEntries", "(JLjava/util/function/Function;Ljava/util/function/BiFunction;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) )  );
}

::java::lang::ObjectProxy ConcurrentHashMapProxy::reduceKeys(jlong p0, ::java::util::function::BiFunctionProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduceKeys", "(JLjava/util/function/BiFunction;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::lang::ObjectProxy ConcurrentHashMapProxy::reduceKeys(jlong p0, ::java::util::function::FunctionProxy p1, ::java::util::function::BiFunctionProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduceKeys", "(JLjava/util/function/Function;Ljava/util/function/BiFunction;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) )  );
}

::java::lang::ObjectProxy ConcurrentHashMapProxy::reduceValues(jlong p0, ::java::util::function::BiFunctionProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduceValues", "(JLjava/util/function/BiFunction;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::lang::ObjectProxy ConcurrentHashMapProxy::reduceValues(jlong p0, ::java::util::function::FunctionProxy p1, ::java::util::function::BiFunctionProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduceValues", "(JLjava/util/function/Function;Ljava/util/function/BiFunction;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) )  );
}

::java::lang::ObjectProxy ConcurrentHashMapProxy::remove(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "remove", "(Ljava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::ObjectProxy ConcurrentHashMapProxy::replace(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::lang::ObjectProxy ConcurrentHashMapProxy::search(jlong p0, ::java::util::function::BiFunctionProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "search", "(JLjava/util/function/BiFunction;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::lang::ObjectProxy ConcurrentHashMapProxy::searchEntries(jlong p0, ::java::util::function::FunctionProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "searchEntries", "(JLjava/util/function/Function;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::lang::ObjectProxy ConcurrentHashMapProxy::searchKeys(jlong p0, ::java::util::function::FunctionProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "searchKeys", "(JLjava/util/function/Function;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::lang::ObjectProxy ConcurrentHashMapProxy::searchValues(jlong p0, ::java::util::function::FunctionProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "searchValues", "(JLjava/util/function/Function;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::net::sourceforge::jnipp::JStringHelper ConcurrentHashMapProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::CollectionProxy ConcurrentHashMapProxy::values()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "values", "()Ljava/util/Collection;" );
	return ::java::util::CollectionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::EnumerationProxy ConcurrentHashMapProxy::elements()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "elements", "()Ljava/util/Enumeration;" );
	return ::java::util::EnumerationProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::EnumerationProxy ConcurrentHashMapProxy::keys()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "keys", "()Ljava/util/Enumeration;" );
	return ::java::util::EnumerationProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::Map_EntryProxy ConcurrentHashMapProxy::reduceEntries(jlong p0, ::java::util::function::BiFunctionProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduceEntries", "(JLjava/util/function/BiFunction;)Ljava/util/Map$Entry;" );
	return ::java::util::Map_EntryProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::util::SetProxy ConcurrentHashMapProxy::entrySet()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "entrySet", "()Ljava/util/Set;" );
	return ::java::util::SetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::concurrent::ConcurrentHashMap_KeySetViewProxy ConcurrentHashMapProxy::keySet()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "keySet", "()Ljava/util/concurrent/ConcurrentHashMap$KeySetView;" );
	return ::java::util::concurrent::ConcurrentHashMap_KeySetViewProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::concurrent::ConcurrentHashMap_KeySetViewProxy ConcurrentHashMapProxy::keySet(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "keySet", "(Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentHashMap$KeySetView;" );
	return ::java::util::concurrent::ConcurrentHashMap_KeySetViewProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

jlong ConcurrentHashMapProxy::mappingCount()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "mappingCount", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong ConcurrentHashMapProxy::reduceEntriesToLong(jlong p0, ::java::util::function::ToLongFunctionProxy p1, jlong p2, ::java::util::function::LongBinaryOperatorProxy p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduceEntriesToLong", "(JLjava/util/function/ToLongFunction;JLjava/util/function/LongBinaryOperator;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ), p2, static_cast<jobject>( p3 ) );
}

jlong ConcurrentHashMapProxy::reduceKeysToLong(jlong p0, ::java::util::function::ToLongFunctionProxy p1, jlong p2, ::java::util::function::LongBinaryOperatorProxy p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduceKeysToLong", "(JLjava/util/function/ToLongFunction;JLjava/util/function/LongBinaryOperator;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ), p2, static_cast<jobject>( p3 ) );
}

jlong ConcurrentHashMapProxy::reduceToLong(jlong p0, ::java::util::function::ToLongBiFunctionProxy p1, jlong p2, ::java::util::function::LongBinaryOperatorProxy p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduceToLong", "(JLjava/util/function/ToLongBiFunction;JLjava/util/function/LongBinaryOperator;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ), p2, static_cast<jobject>( p3 ) );
}

jlong ConcurrentHashMapProxy::reduceValuesToLong(jlong p0, ::java::util::function::ToLongFunctionProxy p1, jlong p2, ::java::util::function::LongBinaryOperatorProxy p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduceValuesToLong", "(JLjava/util/function/ToLongFunction;JLjava/util/function/LongBinaryOperator;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ), p2, static_cast<jobject>( p3 ) );
}

::java::util::concurrent::ConcurrentHashMap_KeySetViewProxy ConcurrentHashMapProxy::newKeySet()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "newKeySet", "()Ljava/util/concurrent/ConcurrentHashMap$KeySetView;" );
	return ::java::util::concurrent::ConcurrentHashMap_KeySetViewProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::java::util::concurrent::ConcurrentHashMap_KeySetViewProxy ConcurrentHashMapProxy::newKeySet(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "newKeySet", "(I)Ljava/util/concurrent/ConcurrentHashMap$KeySetView;" );
	return ::java::util::concurrent::ConcurrentHashMap_KeySetViewProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

void ConcurrentHashMapProxy::clear()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "clear", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void ConcurrentHashMapProxy::forEach(::java::util::function::BiConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEach", "(Ljava/util/function/BiConsumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void ConcurrentHashMapProxy::forEach(jlong p0, ::java::util::function::BiConsumerProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEach", "(JLjava/util/function/BiConsumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) );
}

void ConcurrentHashMapProxy::forEach(jlong p0, ::java::util::function::BiFunctionProxy p1, ::java::util::function::ConsumerProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEach", "(JLjava/util/function/BiFunction;Ljava/util/function/Consumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) );
}

void ConcurrentHashMapProxy::forEachEntry(jlong p0, ::java::util::function::ConsumerProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEachEntry", "(JLjava/util/function/Consumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) );
}

void ConcurrentHashMapProxy::forEachEntry(jlong p0, ::java::util::function::FunctionProxy p1, ::java::util::function::ConsumerProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEachEntry", "(JLjava/util/function/Function;Ljava/util/function/Consumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) );
}

void ConcurrentHashMapProxy::forEachKey(jlong p0, ::java::util::function::ConsumerProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEachKey", "(JLjava/util/function/Consumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) );
}

void ConcurrentHashMapProxy::forEachKey(jlong p0, ::java::util::function::FunctionProxy p1, ::java::util::function::ConsumerProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEachKey", "(JLjava/util/function/Function;Ljava/util/function/Consumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) );
}

void ConcurrentHashMapProxy::forEachValue(jlong p0, ::java::util::function::ConsumerProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEachValue", "(JLjava/util/function/Consumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) );
}

void ConcurrentHashMapProxy::forEachValue(jlong p0, ::java::util::function::FunctionProxy p1, ::java::util::function::ConsumerProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEachValue", "(JLjava/util/function/Function;Ljava/util/function/Consumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) );
}

void ConcurrentHashMapProxy::putAll(::java::util::MapProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putAll", "(Ljava/util/Map;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void ConcurrentHashMapProxy::replaceAll(::java::util::function::BiFunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "replaceAll", "(Ljava/util/function/BiFunction;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

