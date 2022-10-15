#include "System_Random_Methods.h"

t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_System_Random__ctor_0(t_IL2X_CoreLib_System_Random* self)
{
	t_IL2X_CoreLib_System_Int32 le_0;
	le_0 = t_IL2X_CoreLib_System_Random_GenerateSeed_0();
	t_IL2X_CoreLib_System_Random__ctor_1(le_0, self);
	return;
}

t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_System_Random__ctor_1(t_IL2X_CoreLib_System_Random* self, t_IL2X_CoreLib_System_Int32 p_seed)
{
	t_IL2X_CoreLib_System_Object__ctor_0(self);
	self->f_seed = p_seed;
	return;
}

t_IL2X_CoreLib_System_Int32 t_IL2X_CoreLib_System_Random_GenerateSeed_0()
{
	t_IL2X_CoreLib_System_Int32 l_0 = {0};
	l_0 = 0;
	JMP_0000:;
	return l_0;
}
