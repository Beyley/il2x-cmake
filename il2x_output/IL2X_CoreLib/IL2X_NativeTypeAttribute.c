#include "IL2X_NativeTypeAttribute_Methods.h"

t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_IL2X_NativeTypeAttribute__ctor_0(t_IL2X_CoreLib_IL2X_NativeTypeAttribute* self, t_IL2X_CoreLib_IL2X_NativeTarget p_target, t_IL2X_CoreLib_System_String* p_typeName, t_IL2X_CoreLib_System_String** p_dependencyIncludes)
{
	t_IL2X_CoreLib_System_Attribute__ctor_0(self);
	self->f_target = p_target;
	self->f_typeName = p_typeName;
	return;
}
