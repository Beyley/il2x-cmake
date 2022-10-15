#include "System_Reflection_DefaultMemberAttribute_Methods.h"

t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_System_Reflection_DefaultMemberAttribute__ctor_0(t_IL2X_CoreLib_System_Reflection_DefaultMemberAttribute* self, t_IL2X_CoreLib_System_String* p_memberName)
{
	t_IL2X_CoreLib_System_Attribute__ctor_0(self);
	self->f__memberName = p_memberName;
	return;
}

t_IL2X_CoreLib_System_String* t_IL2X_CoreLib_System_Reflection_DefaultMemberAttribute_get_MemberName_0(t_IL2X_CoreLib_System_Reflection_DefaultMemberAttribute* self)
{
	t_IL2X_CoreLib_System_String* l_0 = {0};
	l_0 = self->f__memberName;
	JMP_0000:;
	return l_0;
}
