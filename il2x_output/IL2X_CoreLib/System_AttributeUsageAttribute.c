#include "System_AttributeUsageAttribute_Methods.h"

t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_System_AttributeUsageAttribute__ctor_0(t_IL2X_CoreLib_System_AttributeUsageAttribute* self, t_IL2X_CoreLib_System_AttributeTargets p_validOn)
{
	self->f__attributeTarget = 32767;
	t_IL2X_CoreLib_System_Attribute__ctor_0(self);
	self->f__attributeTarget = p_validOn;
	return;
}

t_IL2X_CoreLib_System_AttributeTargets t_IL2X_CoreLib_System_AttributeUsageAttribute_get_ValidOn_0(t_IL2X_CoreLib_System_AttributeUsageAttribute* self)
{
	t_IL2X_CoreLib_System_AttributeTargets l_0 = {0};
	l_0 = self->f__attributeTarget;
	JMP_0000:;
	return l_0;
}

t_IL2X_CoreLib_System_Boolean t_IL2X_CoreLib_System_AttributeUsageAttribute_get_AllowMultiple_0(t_IL2X_CoreLib_System_AttributeUsageAttribute* self)
{
	return self->f__AllowMultiple_k__BackingField;
}

t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_System_AttributeUsageAttribute_set_AllowMultiple_0(t_IL2X_CoreLib_System_AttributeUsageAttribute* self, t_IL2X_CoreLib_System_Boolean p_value)
{
	self->f__AllowMultiple_k__BackingField = p_value;
	return;
}

t_IL2X_CoreLib_System_Boolean t_IL2X_CoreLib_System_AttributeUsageAttribute_get_Inherited_0(t_IL2X_CoreLib_System_AttributeUsageAttribute* self)
{
	return self->f__Inherited_k__BackingField;
}

t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_System_AttributeUsageAttribute_set_Inherited_0(t_IL2X_CoreLib_System_AttributeUsageAttribute* self, t_IL2X_CoreLib_System_Boolean p_value)
{
	self->f__Inherited_k__BackingField = p_value;
	return;
}
