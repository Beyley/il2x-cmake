#include "IL2X_NativeExternAttribute_Methods.h"

t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_IL2X_NativeExternAttribute__ctor_0(t_IL2X_CoreLib_IL2X_NativeExternAttribute* self, t_IL2X_CoreLib_IL2X_NativeTarget p_target, t_IL2X_CoreLib_System_String* p_methodName)
{
	t_IL2X_CoreLib_System_Attribute__ctor_0(self);
	self->f_target = p_target;
	self->f_methodName = p_methodName;
	return;
}
