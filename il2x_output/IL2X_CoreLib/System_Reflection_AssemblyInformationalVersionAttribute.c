#include "System_Reflection_AssemblyInformationalVersionAttribute_Methods.h"

t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_System_Reflection_AssemblyInformationalVersionAttribute__ctor_0(t_IL2X_CoreLib_System_Reflection_AssemblyInformationalVersionAttribute* self, t_IL2X_CoreLib_System_String* p_informationalVersion)
{
	t_IL2X_CoreLib_System_Attribute__ctor_0(self);
	self->f__informationalVersion = p_informationalVersion;
	return;
}

t_IL2X_CoreLib_System_String* t_IL2X_CoreLib_System_Reflection_AssemblyInformationalVersionAttribute_get_InformationalVersion_0(t_IL2X_CoreLib_System_Reflection_AssemblyInformationalVersionAttribute* self)
{
	t_IL2X_CoreLib_System_String* l_0 = {0};
	l_0 = self->f__informationalVersion;
	JMP_0000:;
	return l_0;
}