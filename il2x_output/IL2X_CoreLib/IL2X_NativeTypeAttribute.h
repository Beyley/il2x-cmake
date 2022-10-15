#pragma once
#include "__ForwardDeclares.h"
#include "IL2X_NativeTarget.h"
#include "System_Void.h"

typedef struct t_IL2X_CoreLib_IL2X_NativeTypeAttribute t_IL2X_CoreLib_IL2X_NativeTypeAttribute;
struct t_IL2X_CoreLib_IL2X_NativeTypeAttribute
{
	void* RuntimeType;
	t_IL2X_CoreLib_IL2X_NativeTarget f_target;
	t_IL2X_CoreLib_System_String* f_typeName;
};
