#include "System_Reflection_AssemblyCopyrightAttribute_Methods.h"

t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_System_Reflection_AssemblyCopyrightAttribute__ctor_0(t_IL2X_CoreLib_System_Reflection_AssemblyCopyrightAttribute* self, t_IL2X_CoreLib_System_String* p_copyright)
{
	t_IL2X_CoreLib_System_Attribute__ctor_0(self);
	self->f__copyright = p_copyright;
	return;
}

t_IL2X_CoreLib_System_String* t_IL2X_CoreLib_System_Reflection_AssemblyCopyrightAttribute_get_Copyright_0(t_IL2X_CoreLib_System_Reflection_AssemblyCopyrightAttribute* self)
{
	t_IL2X_CoreLib_System_String* l_0 = {0};
	l_0 = self->f__copyright;
	JMP_0000:;
	return l_0;
}
