#include "System_Reflection_AssemblyCompanyAttribute_Methods.h"

t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_System_Reflection_AssemblyCompanyAttribute__ctor_0(t_IL2X_CoreLib_System_Reflection_AssemblyCompanyAttribute* self, t_IL2X_CoreLib_System_String* p_company)
{
	t_IL2X_CoreLib_System_Attribute__ctor_0(self);
	self->f__company = p_company;
	return;
}

t_IL2X_CoreLib_System_String* t_IL2X_CoreLib_System_Reflection_AssemblyCompanyAttribute_get_Company_0(t_IL2X_CoreLib_System_Reflection_AssemblyCompanyAttribute* self)
{
	t_IL2X_CoreLib_System_String* l_0 = {0};
	l_0 = self->f__company;
	JMP_0000:;
	return l_0;
}
