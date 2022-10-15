#include <stdint.h>

#ifndef IL2X_BUILTINS_H
/* === Safe Add/Subtract === */
static inline int32_t IL2X_SafeAddInt32(int32_t a, int32_t b)
{
	if (b > 0)
	{
		if (a > INT32_MAX - b) return INT32_MAX; //TODO: make these proper exceptions, once they exist
	}
	else
	{
		if (a < INT32_MIN - b) return INT32_MIN;
	}
	return a + b;
}
static inline int32_t IL2X_SafeSubtractInt32(int32_t a, int32_t b)
{
	if (b > 0)
	{
		if (a < INT32_MIN + b) return INT32_MIN;
	}
	else
	{
		if (a > INT32_MAX + b) return INT32_MAX;
	}
	return a - b;
}
static inline int64_t IL2X_SafeAddInt64(int64_t a, int64_t b)
{
	if (b > 0)
	{
		if (a > INT64_MAX - b) return INT64_MAX; //TODO: make these proper exceptions, once they exist
	}
	else
	{
		if (a < INT64_MIN - b) return INT64_MIN;
	}
	return a + b;
}
static inline int64_t IL2X_SafeSubtractInt64(int64_t a, int64_t b)
{
	if (b > 0)
	{
		if (a < INT64_MIN + b) return INT64_MIN;
	}
	else
	{
		if (a > INT64_MAX + b) return INT64_MAX;
	}
	return a - b;
}
static inline uint32_t IL2X_SafeAddUInt32(uint32_t a, uint32_t b)
{
	if (UINT32_MAX - a < b) return UINT32_MAX; //TODO: make these proper exceptions, once they exist
	return a + b;
}
static inline uint32_t IL2X_SafeSubtractUInt32(uint32_t a, uint32_t b)
{
	if (a < b) return 0;
	return a - b;
}
static inline uint64_t IL2X_SafeAddUInt64(uint64_t a, uint64_t b)
{
	if (UINT64_MAX - a < b) return UINT64_MAX; //TODO: make these proper exceptions, once they exist
	return a + b;
}
static inline uint64_t IL2X_SafeSubtractUInt64(uint64_t a, uint64_t b)
{
	if (a < b) return 0;
	return a - b;
}
#endif
#define IL2X_BUILTINS_H 1
