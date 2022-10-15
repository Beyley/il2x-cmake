#include "System_Reflection_AssemblyDelaySignAttribute_Methods.h"

t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_System_Reflection_AssemblyDelaySignAttribute__ctor_0(t_IL2X_CoreLib_System_Reflection_AssemblyDelaySignAttribute* self, t_IL2X_CoreLib_System_Boolean p_delaySign)
{
	t_IL2X_CoreLib_System_Attribute__ctor_0(self);
	self->f__delaySign = p_delaySign;
	return;
}

t_IL2X_CoreLib_System_Boolean t_IL2X_CoreLib_System_Reflection_AssemblyDelaySignAttribute_get_DelaySign_0(t_IL2X_CoreLib_System_Reflection_AssemblyDelaySignAttribute* self)
{
	t_IL2X_CoreLib_System_Boolean l_0 = {0};
	l_0 = self->f__delaySign;
	JMP_0000:;
	return l_0;
}
