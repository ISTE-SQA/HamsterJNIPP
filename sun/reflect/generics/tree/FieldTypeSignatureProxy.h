#ifndef __sun_reflect_generics_tree_FieldTypeSignatureProxy_H
#define __sun_reflect_generics_tree_FieldTypeSignatureProxy_H


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

namespace sun
{
	namespace reflect
	{
		namespace generics
		{
			namespace tree
			{
				class FieldTypeSignatureProxy
				{
				private:
					static std::string className;
					static jclass objectClass;
					jobject peerObject;

				protected:
					FieldTypeSignatureProxy(void* unused);
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
					FieldTypeSignatureProxy(jobject obj);

					virtual ~FieldTypeSignatureProxy();
					FieldTypeSignatureProxy& operator=(const FieldTypeSignatureProxy& rhs);

					// methods

				};
			}
		}
	}
}


#endif
