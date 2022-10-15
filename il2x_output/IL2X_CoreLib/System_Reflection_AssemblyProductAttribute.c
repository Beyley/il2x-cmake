#include "System_Reflection_AssemblyProductAttribute_Methods.h"

t_IL2X_CoreLib_System_Void t_IL2X_CoreLib_System_Reflection_AssemblyProductAttribute__ctor_0(t_IL2X_CoreLib_System_Reflection_AssemblyProductAttribute* self, t_IL2X_CoreLib_System_String* p_product)
{
	t_IL2X_CoreLib_System_Attribute__ctor_0(self);
	self->f__product = p_product;
	return;
}

t_IL2X_CoreLib_System_String* t_IL2X_CoreLib_System_Reflection_AssemblyProductAttribute_get_Product_0(t_IL2X_CoreLib_System_Reflection_AssemblyProductAttribute* self)
{
	t_IL2X_CoreLib_System_String* l_0 = {0};
	l_0 = self->f__product;
	JMP_0000:;
	return l_0;
}
