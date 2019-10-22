#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "CollectorProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\SetProxy.h"
#include "java\util\function\BiConsumerProxy.h"
#include "java\util\function\BinaryOperatorProxy.h"
#include "java\util\function\FunctionProxy.h"
#include "java\util\function\SupplierProxy.h"
#include "java\util\stream\Collector_CharacteristicsProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::stream;


std::string CollectorProxy::className = "java/util/stream/Collector";
jclass CollectorProxy::objectClass = NULL;

jclass CollectorProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

CollectorProxy::CollectorProxy(void* unused)
{
}

jobject CollectorProxy::_getPeerObject() const
{
	return peerObject;
}

jclass CollectorProxy::getObjectClass()
{
	return _getObjectClass();
}

CollectorProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
CollectorProxy::CollectorProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

CollectorProxy::~CollectorProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

CollectorProxy& CollectorProxy::operator=(const CollectorProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::util::SetProxy CollectorProxy::characteristics()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "characteristics", "()Ljava/util/Set;" );
	return ::java::util::SetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::function::BiConsumerProxy CollectorProxy::accumulator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "accumulator", "()Ljava/util/function/BiConsumer;" );
	return ::java::util::function::BiConsumerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::function::BinaryOperatorProxy CollectorProxy::combiner()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "combiner", "()Ljava/util/function/BinaryOperator;" );
	return ::java::util::function::BinaryOperatorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::function::FunctionProxy CollectorProxy::finisher()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "finisher", "()Ljava/util/function/Function;" );
	return ::java::util::function::FunctionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::function::SupplierProxy CollectorProxy::supplier()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "supplier", "()Ljava/util/function/Supplier;" );
	return ::java::util::function::SupplierProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::CollectorProxy CollectorProxy::of(::java::util::function::SupplierProxy p0, ::java::util::function::BiConsumerProxy p1, ::java::util::function::BinaryOperatorProxy p2, ::java::util::function::FunctionProxy p3, ::net::sourceforge::jnipp::PA<::java::util::stream::Collector_CharacteristicsProxy>::ProxyArray<1> p4)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(Ljava/util/function/Supplier;Ljava/util/function/BiConsumer;Ljava/util/function/BinaryOperator;Ljava/util/function/Function;[Ljava/util/stream/Collector$Characteristics;)Ljava/util/stream/Collector;" );
	return ::java::util::stream::CollectorProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ), static_cast<jobject>( p3 ), static_cast<jobjectArray>( p4 ) )  );
}

::java::util::stream::CollectorProxy CollectorProxy::of(::java::util::function::SupplierProxy p0, ::java::util::function::BiConsumerProxy p1, ::java::util::function::BinaryOperatorProxy p2, ::net::sourceforge::jnipp::PA<::java::util::stream::Collector_CharacteristicsProxy>::ProxyArray<1> p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(Ljava/util/function/Supplier;Ljava/util/function/BiConsumer;Ljava/util/function/BinaryOperator;[Ljava/util/stream/Collector$Characteristics;)Ljava/util/stream/Collector;" );
	return ::java::util::stream::CollectorProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ), static_cast<jobjectArray>( p3 ) )  );
}

