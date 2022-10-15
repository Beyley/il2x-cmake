#include "System_Reflection_AssemblyKeyFileAttribute_Methods.h"

t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_System_Reflection_AssemblyKeyFileAttribute__ctor_0(t_IL2X_CoreLib_System_Reflection_AssemblyKeyFileAttribute* self, t_IL2X_CoreLib_System_String* p_keyFile)
{
	t_IL2X_CoreLib_System_Attribute__ctor_0(self);
	self->f__keyFile = p_keyFile;
	return;
}

t_IL2X_CoreLib_System_String* t_IL2X_CoreLib_System_Reflection_AssemblyKeyFileAttribute_get_KeyFile_0(t_IL2X_CoreLib_System_Reflection_AssemblyKeyFileAttribute* self)
{
	t_IL2X_CoreLib_System_String* l_0 = {0};
	l_0 = self->f__keyFile;
	JMP_0000:;
	return l_0;
}
