#include "System_Exception_Methods.h"

t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_System_Exception__ctor_0(t_IL2X_CoreLib_System_Exception* self)
{
	t_IL2X_CoreLib_System_Object__ctor_0(self);
	return;
}

t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_System_Exception__ctor_1(t_IL2X_CoreLib_System_Exception* self, t_IL2X_CoreLib_System_String* p_message)
{
	t_IL2X_CoreLib_System_Object__ctor_0(self);
	t_IL2X_CoreLib_System_Exception_set_Message_0(p_message, self);
	return;
}

t_IL2X_CoreLib_System_Exception* t_IL2X_CoreLib_System_Exception_get_InnerException_0(t_IL2X_CoreLib_System_Exception* self)
{
	t_IL2X_CoreLib_System_Exception* l_0 = {0};
	l_0 = 0;
	JMP_0000:;
	return l_0;
}

t_IL2X_CoreLib_System_String* t_IL2X_CoreLib_System_Exception_get_Message_0(t_IL2X_CoreLib_System_Exception* self)
{
	return self->f__Message_k__BackingField;
}

t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_System_Exception_set_Message_0(t_IL2X_CoreLib_System_Exception* self, t_IL2X_CoreLib_System_String* p_value)
{
	self->f__Message_k__BackingField = p_value;
	return;
}
