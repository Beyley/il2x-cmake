#include "System_Reflection_AssemblyVersionAttribute_Methods.h"

t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_System_Reflection_AssemblyVersionAttribute__ctor_0(t_IL2X_CoreLib_System_Reflection_AssemblyVersionAttribute* self, t_IL2X_CoreLib_System_String* p_version)
{
	t_IL2X_CoreLib_System_Attribute__ctor_0(self);
	self->f__version = p_version;
	return;
}

t_IL2X_CoreLib_System_String* t_IL2X_CoreLib_System_Reflection_AssemblyVersionAttribute_get_Version_0(t_IL2X_CoreLib_System_Reflection_AssemblyVersionAttribute* self)
{
	t_IL2X_CoreLib_System_String* l_0 = {0};
	l_0 = self->f__version;
	JMP_0000:;
	return l_0;
}
