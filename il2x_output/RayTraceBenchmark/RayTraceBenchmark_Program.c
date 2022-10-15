#include "RayTraceBenchmark_Program_Methods.h"

t_IL2X_CoreLib_System_Void t_RayTraceBenchmark_RayTraceBenchmark_Program_Main_0()
{
	t_IL2X_CoreLib_System_Object* l_nullObject = {0};
	t_IL2X_CoreLib_System_Int32 l_a = {0};
	t_IL2X_CoreLib_System_Int32 l_j = {0};
	t_IL2X_CoreLib_System_UInt32 l_uj = {0};
	t_IL2X_CoreLib_System_Int64 l_lj = {0};
	t_IL2X_CoreLib_System_UInt64 l_ulj = {0};
	t_IL2X_CoreLib_System_Boolean l_6 = {0};
	t_IL2X_CoreLib_System_Boolean l_7 = {0};
	t_IL2X_CoreLib_System_Int32 l_i = {0};
	t_IL2X_CoreLib_System_Int32 l_i2 = {0};
	t_IL2X_CoreLib_System_Boolean l_10 = {0};
	t_IL2X_CoreLib_System_Boolean l_11 = {0};
	t_IL2X_CoreLib_System_Boolean l_12 = {0};
	t_IL2X_CoreLib_System_Boolean l_13 = {0};
	t_IL2X_CoreLib_System_Int32 le_0;
	t_IL2X_CoreLib_System_Int64 le_1;
	t_IL2X_CoreLib_System_Int64 le_2;
	t_IL2X_CoreLib_System_UInt64 le_3;
	t_IL2X_CoreLib_System_Boolean le_4;
	t_IL2X_CoreLib_System_Int32 le_5;
	l_j = 2147483647;
	le_0 = IL2X_SafeAddInt32(l_j, 1000);
	l_j = le_0;
	l_uj = -1;
	le_1 = IL2X_SafeAddInt32(l_uj, 1000);
	l_uj = le_1;
	l_lj = 9223372036854775807;
	le_2 = IL2X_SafeAddInt64(l_lj, 1000);
	l_lj = le_2;
	l_ulj = -1;
	le_3 = IL2X_SafeAddInt64(l_ulj, 1000);
	l_ulj = le_3;
	l_nullObject = 0;
	le_4 = (l_nullObject > 0) ? 1 : 0;
	l_6 = le_4;
	JMP_0000:;
	if (!l_6) goto JMP_0002;
	JMP_0001:;
	return;
	JMP_0002:;
	le_5 = t_RayTraceBenchmark_RayTraceBenchmark_Program_Foo_0(123);
	l_a = le_5;
	le_4 = (l_a == 124) ? 1 : 0;
	l_7 = le_4;
	JMP_0003:;
	if (!l_7) goto JMP_0012;
	l_a = -200;
	l_i = 0;
	JMP_0004:;
	le_4 = (l_i == 2) ? 1 : 0;
	le_4 = (le_4 == 0) ? 1 : 0;
	l_13 = le_4;
	JMP_0005:;
	if (l_13) goto JMP_0006;
	return;
	JMP_0006:;
	l_i2 = 0;
	JMP_0007:;
	le_4 = (l_i2 == 2) ? 1 : 0;
	le_4 = (le_4 == 0) ? 1 : 0;
	l_12 = le_4;
	JMP_0008:;
	if (l_12) goto JMP_0009;
	le_0 = l_i + 1;
	l_i = le_0;
	le_4 = (l_i == 2) ? 1 : 0;
	le_4 = (le_4 == 0) ? 1 : 0;
	l_13 = le_4;
	goto JMP_0005;
	JMP_0009:;
	JMP_000A:;
	if (l_i2 != 1) goto JMP_0011;
	le_4 = (l_i == 0) ? 1 : 0;
	JMP_000B:;
	l_10 = le_4;
	JMP_000C:;
	if (!l_10) goto JMP_0010;
	le_0 = l_a + 1;
	l_a = le_0;
	le_4 = (l_a < 1) ? 1 : 0;
	le_4 = (le_4 == 0) ? 1 : 0;
	l_11 = le_4;
	JMP_000D:;
	if (!l_11) goto JMP_000F;
	JMP_000E:;
	le_4 = (l_a == 124) ? 1 : 0;
	l_7 = le_4;
	goto JMP_0003;
	JMP_000F:;
	le_0 = l_i2 + 1;
	l_i2 = le_0;
	le_4 = (l_i2 == 2) ? 1 : 0;
	le_4 = (le_4 == 0) ? 1 : 0;
	l_12 = le_4;
	goto JMP_0008;
	JMP_0010:;
	le_4 = (l_a < 1) ? 1 : 0;
	le_4 = (le_4 == 0) ? 1 : 0;
	l_11 = le_4;
	goto JMP_000D;
	JMP_0011:;
	l_10 = 0;
	goto JMP_000C;
	JMP_0012:;
	l_i = 0;
	goto JMP_0004;
}

t_IL2X_CoreLib_System_Int32 t_RayTraceBenchmark_RayTraceBenchmark_Program_Foo_0(t_IL2X_CoreLib_System_Int32 p_value)
{
	t_IL2X_CoreLib_System_Int32 l_0 = {0};
	t_IL2X_CoreLib_System_Int32 le_0;
	le_0 = p_value + 1;
	l_0 = le_0;
	JMP_0000:;
	return l_0;
}

t_IL2X_CoreLib_System_Void t_RayTraceBenchmark_RayTraceBenchmark_Program_Foo_1(t_RayTraceBenchmark_RayTraceBenchmark_Program* p_value)
{
	p_value->f_p->f_i = 123;
	return;
}

t_IL2X_CoreLib_System_Void t_RayTraceBenchmark_RayTraceBenchmark_Program_FooGeneric_0(t_RayTraceBenchmark_g_RayTraceBenchmark_MyGeneric_1_System_Int32_* p_wow)
{
	t_IL2X_CoreLib_System_Int32 l_unusedLocal = {0};
	t_IL2X_CoreLib_System_Int32 le_0;
	le_0 = t_RayTraceBenchmark_RayTraceBenchmark_Program_FooGenericMethod_System_Int32__0(22);
	l_unusedLocal = le_0;
	le_0 = t_RayTraceBenchmark_RayTraceBenchmark_Program_FooGenericMethod_System_Int32__0(44);
	return;
}

t_IL2X_CoreLib_System_Int32 t_RayTraceBenchmark_RayTraceBenchmark_Program_FooGenericMethod_System_Int32__0(t_IL2X_CoreLib_System_Int32 p_t)
{
	t_IL2X_CoreLib_System_Int32 l_0 = {0};
	l_0 = p_t;
	JMP_0000:;
	return l_0;
}

t_IL2X_CoreLib_System_Void t_RayTraceBenchmark_RayTraceBenchmark_Program__ctor_0(t_RayTraceBenchmark_RayTraceBenchmark_Program* self)
{
	t_IL2X_CoreLib_System_Object__ctor_0(self);
	return;
}
