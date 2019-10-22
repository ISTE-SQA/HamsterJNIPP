#ifndef __de_unistuttgart_iste_rss_oo_hamstersimulator_internal_model_GameLogProxy_H
#define __de_unistuttgart_iste_rss_oo_hamstersimulator_internal_model_GameLogProxy_H


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
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\commands\CommandSpecificationProxyForward.h"
#include "java\util\OptionalProxyForward.h"
#include "javafx\beans\property\ReadOnlyListPropertyProxyForward.h"
#include "javafx\beans\property\ReadOnlyListWrapperProxyForward.h"
#include "java\util\function\FunctionProxyForward.h"

namespace de
{
	namespace unistuttgart
	{
		namespace iste
		{
			namespace rss
			{
				namespace oo
				{
					namespace hamstersimulator
					{
						namespace internal
						{
							namespace model
							{
								class GameLogProxy
								{
								private:
									static std::string className;
									static jclass objectClass;
									jobject peerObject;

								protected:
									GameLogProxy(void* unused);
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
									GameLogProxy(jobject obj);
									GameLogProxy();

									virtual ~GameLogProxy();
									GameLogProxy& operator=(const GameLogProxy& rhs);

									// methods
									/*
									 * Optional getCommandFromSpecification(CommandSpecification);
									 */
									::java::util::OptionalProxy getCommandFromSpecification(::de::unistuttgart::iste::rss::oo::hamstersimulator::commands::CommandSpecificationProxy p0);
									/*
									 * ReadOnlyListProperty logProperty();
									 */
									::javafx::beans::property::ReadOnlyListPropertyProxy logProperty();

								};
							}
						}
					}
				}
			}
		}
	}
}


#endif