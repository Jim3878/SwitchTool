#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// nn.ErrorRange
struct ErrorRange_t305124927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// nn.hid.NpadJoy
struct  NpadJoy_t3616225685  : public Il2CppObject
{
public:

public:
};

struct NpadJoy_t3616225685_StaticFields
{
public:
	// nn.ErrorRange nn.hid.NpadJoy::ResultDualConnected
	ErrorRange_t305124927 * ___ResultDualConnected_0;
	// nn.ErrorRange nn.hid.NpadJoy::ResultSameJoyTypeConnected
	ErrorRange_t305124927 * ___ResultSameJoyTypeConnected_1;

public:
	inline static int32_t get_offset_of_ResultDualConnected_0() { return static_cast<int32_t>(offsetof(NpadJoy_t3616225685_StaticFields, ___ResultDualConnected_0)); }
	inline ErrorRange_t305124927 * get_ResultDualConnected_0() const { return ___ResultDualConnected_0; }
	inline ErrorRange_t305124927 ** get_address_of_ResultDualConnected_0() { return &___ResultDualConnected_0; }
	inline void set_ResultDualConnected_0(ErrorRange_t305124927 * value)
	{
		___ResultDualConnected_0 = value;
		Il2CppCodeGenWriteBarrier(&___ResultDualConnected_0, value);
	}

	inline static int32_t get_offset_of_ResultSameJoyTypeConnected_1() { return static_cast<int32_t>(offsetof(NpadJoy_t3616225685_StaticFields, ___ResultSameJoyTypeConnected_1)); }
	inline ErrorRange_t305124927 * get_ResultSameJoyTypeConnected_1() const { return ___ResultSameJoyTypeConnected_1; }
	inline ErrorRange_t305124927 ** get_address_of_ResultSameJoyTypeConnected_1() { return &___ResultSameJoyTypeConnected_1; }
	inline void set_ResultSameJoyTypeConnected_1(ErrorRange_t305124927 * value)
	{
		___ResultSameJoyTypeConnected_1 = value;
		Il2CppCodeGenWriteBarrier(&___ResultSameJoyTypeConnected_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
