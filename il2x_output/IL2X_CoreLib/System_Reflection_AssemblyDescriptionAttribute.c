#include "System_Reflection_AssemblyDescriptionAttribute_Methods.h"

t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_System_Reflection_AssemblyDescriptionAttribute__ctor_0(t_IL2X_CoreLib_System_Reflection_AssemblyDescriptionAttribute* self, t_IL2X_CoreLib_System_String* p_description)
{
	t_IL2X_CoreLib_System_Attribute__ctor_0(self);
	self->f__description = p_description;
	return;
}

t_IL2X_CoreLib_System_String* t_IL2X_CoreLib_System_Reflection_AssemblyDescriptionAttribute_get_Description_0(t_IL2X_CoreLib_System_Reflection_AssemblyDescriptionAttribute* self)
{
	t_IL2X_CoreLib_System_String* l_0 = {0};
	l_0 = self->f__description;
	JMP_0000:;
	return l_0;
}
