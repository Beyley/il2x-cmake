#pragma once
#include "IL2X_NativeTypeAttribute.h"

#include "System_Attribute.h"
#include "IL2X_NativeTarget.h"
#include "System_String.h"
#include "System_Void.h"

t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_IL2X_NativeTypeAttribute__ctor_0(t_IL2X_CoreLib_IL2X_NativeTypeAttribute* self, t_IL2X_CoreLib_IL2X_NativeTarget p_target, t_IL2X_CoreLib_System_String* p_typeName, t_IL2X_CoreLib_System_String** p_dependencyIncludes);

typedef struct rt_IL2X_CoreLib_IL2X_NativeTypeAttribute rt_IL2X_CoreLib_IL2X_NativeTypeAttribute;
struct rt_IL2X_CoreLib_IL2X_NativeTypeAttribute
{
	IL2X_RuntimeTypeBase RuntimeTypeBase;
};
