#include "System_Reflection_AssemblyConfigurationAttribute_Methods.h"

t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_System_Reflection_AssemblyConfigurationAttribute__ctor_0(t_IL2X_CoreLib_System_Reflection_AssemblyConfigurationAttribute* self, t_IL2X_CoreLib_System_String* p_configuration)
{
	t_IL2X_CoreLib_System_Attribute__ctor_0(self);
	self->f__configuration = p_configuration;
	return;
}

t_IL2X_CoreLib_System_String* t_IL2X_CoreLib_System_Reflection_AssemblyConfigurationAttribute_get_Configuration_0(t_IL2X_CoreLib_System_Reflection_AssemblyConfigurationAttribute* self)
{
	t_IL2X_CoreLib_System_String* l_0 = {0};
	l_0 = self->f__configuration;
	JMP_0000:;
	return l_0;
}
