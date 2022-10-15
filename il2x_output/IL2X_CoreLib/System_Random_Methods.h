#pragma once
#include "System_Random.h"

#include "System_Object.h"
#include "System_UInt32.h"
#include "System_Void.h"
#include "System_Int32.h"

t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_System_Random__ctor_0(t_IL2X_CoreLib_System_Random* self);
t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_System_Random__ctor_1(t_IL2X_CoreLib_System_Random* self, t_IL2X_CoreLib_System_Int32 p_seed);
t_IL2X_CoreLib_System_Int32 t_IL2X_CoreLib_System_Random_GenerateSeed_0();

typedef struct rt_IL2X_CoreLib_System_Random rt_IL2X_CoreLib_System_Random;
struct rt_IL2X_CoreLib_System_Random
{
	IL2X_RuntimeTypeBase RuntimeTypeBase;
};
