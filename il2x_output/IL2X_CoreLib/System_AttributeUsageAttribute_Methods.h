#pragma once
#include "System_AttributeUsageAttribute.h"

#include "System_Attribute.h"
#include "System_AttributeTargets.h"
#include "System_Boolean.h"
#include "System_Void.h"

t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_System_AttributeUsageAttribute__ctor_0(t_IL2X_CoreLib_System_AttributeUsageAttribute* self, t_IL2X_CoreLib_System_AttributeTargets p_validOn);
t_IL2X_CoreLib_System_AttributeTargets t_IL2X_CoreLib_System_AttributeUsageAttribute_get_ValidOn_0(t_IL2X_CoreLib_System_AttributeUsageAttribute* self);
t_IL2X_CoreLib_System_Boolean t_IL2X_CoreLib_System_AttributeUsageAttribute_get_AllowMultiple_0(t_IL2X_CoreLib_System_AttributeUsageAttribute* self);
t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_System_AttributeUsageAttribute_set_AllowMultiple_0(t_IL2X_CoreLib_System_AttributeUsageAttribute* self, t_IL2X_CoreLib_System_Boolean p_value);
t_IL2X_CoreLib_System_Boolean t_IL2X_CoreLib_System_AttributeUsageAttribute_get_Inherited_0(t_IL2X_CoreLib_System_AttributeUsageAttribute* self);
t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_System_AttributeUsageAttribute_set_Inherited_0(t_IL2X_CoreLib_System_AttributeUsageAttribute* self, t_IL2X_CoreLib_System_Boolean p_value);

typedef struct rt_IL2X_CoreLib_System_AttributeUsageAttribute rt_IL2X_CoreLib_System_AttributeUsageAttribute;
struct rt_IL2X_CoreLib_System_AttributeUsageAttribute
{
	IL2X_RuntimeTypeBase RuntimeTypeBase;
};