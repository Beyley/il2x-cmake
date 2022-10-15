#include "System_Reflection_AssemblyCultureAttribute_Methods.h"

t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_System_Reflection_AssemblyCultureAttribute__ctor_0(t_IL2X_CoreLib_System_Reflection_AssemblyCultureAttribute* self, t_IL2X_CoreLib_System_String* p_culture)
{
	t_IL2X_CoreLib_System_Attribute__ctor_0(self);
	self->f__culture = p_culture;
	return;
}

t_IL2X_CoreLib_System_String* t_IL2X_CoreLib_System_Reflection_AssemblyCultureAttribute_get_Culture_0(t_IL2X_CoreLib_System_Reflection_AssemblyCultureAttribute* self)
{
	t_IL2X_CoreLib_System_String* l_0 = {0};
	l_0 = self->f__culture;
	JMP_0000:;
	return l_0;
}
