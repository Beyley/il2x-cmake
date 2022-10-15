#include "System_Reflection_AssemblyTitleAttribute_Methods.h"

t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_System_Reflection_AssemblyTitleAttribute__ctor_0(t_IL2X_CoreLib_System_Reflection_AssemblyTitleAttribute* self, t_IL2X_CoreLib_System_String* p_title)
{
	t_IL2X_CoreLib_System_Attribute__ctor_0(self);
	self->f__title = p_title;
	return;
}

t_IL2X_CoreLib_System_String* t_IL2X_CoreLib_System_Reflection_AssemblyTitleAttribute_get_Title_0(t_IL2X_CoreLib_System_Reflection_AssemblyTitleAttribute* self)
{
	t_IL2X_CoreLib_System_String* l_0 = {0};
	l_0 = self->f__title;
	JMP_0000:;
	return l_0;
}
