#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// nn.err.ErrorCode
struct  ErrorCode_t1520163603 
{
public:
	// System.UInt32 nn.err.ErrorCode::category
	uint32_t ___category_0;
	// System.UInt32 nn.err.ErrorCode::number
	uint32_t ___number_1;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(ErrorCode_t1520163603, ___category_0)); }
	inline uint32_t get_category_0() const { return ___category_0; }
	inline uint32_t* get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(uint32_t value)
	{
		___category_0 = value;
	}

	inline static int32_t get_offset_of_number_1() { return static_cast<int32_t>(offsetof(ErrorCode_t1520163603, ___number_1)); }
	inline uint32_t get_number_1() const { return ___number_1; }
	inline uint32_t* get_address_of_number_1() { return &___number_1; }
	inline void set_number_1(uint32_t value)
	{
		___number_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
