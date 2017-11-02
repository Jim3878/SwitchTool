#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_nn_hid_TouchState1641641684.h"

// nn.hid.TouchState[]
struct TouchStateU5BU5D_t2369965917;
struct TouchState_t1641641684 ;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// nn.hid.TouchScreenState15
struct  TouchScreenState15_t2816721904 
{
public:
	// System.Int64 nn.hid.TouchScreenState15::samplingNumber
	int64_t ___samplingNumber_1;
	// System.Int32 nn.hid.TouchScreenState15::count
	int32_t ___count_2;
	// System.Int32 nn.hid.TouchScreenState15::_reserved
	int32_t ____reserved_3;
	// nn.hid.TouchState[] nn.hid.TouchScreenState15::touches
	TouchStateU5BU5D_t2369965917* ___touches_4;

public:
	inline static int32_t get_offset_of_samplingNumber_1() { return static_cast<int32_t>(offsetof(TouchScreenState15_t2816721904, ___samplingNumber_1)); }
	inline int64_t get_samplingNumber_1() const { return ___samplingNumber_1; }
	inline int64_t* get_address_of_samplingNumber_1() { return &___samplingNumber_1; }
	inline void set_samplingNumber_1(int64_t value)
	{
		___samplingNumber_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(TouchScreenState15_t2816721904, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of__reserved_3() { return static_cast<int32_t>(offsetof(TouchScreenState15_t2816721904, ____reserved_3)); }
	inline int32_t get__reserved_3() const { return ____reserved_3; }
	inline int32_t* get_address_of__reserved_3() { return &____reserved_3; }
	inline void set__reserved_3(int32_t value)
	{
		____reserved_3 = value;
	}

	inline static int32_t get_offset_of_touches_4() { return static_cast<int32_t>(offsetof(TouchScreenState15_t2816721904, ___touches_4)); }
	inline TouchStateU5BU5D_t2369965917* get_touches_4() const { return ___touches_4; }
	inline TouchStateU5BU5D_t2369965917** get_address_of_touches_4() { return &___touches_4; }
	inline void set_touches_4(TouchStateU5BU5D_t2369965917* value)
	{
		___touches_4 = value;
		Il2CppCodeGenWriteBarrier(&___touches_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of nn.hid.TouchScreenState15
struct TouchScreenState15_t2816721904_marshaled_pinvoke
{
	int64_t ___samplingNumber_1;
	int32_t ___count_2;
	int32_t ____reserved_3;
	TouchState_t1641641684  ___touches_4[15];
};
// Native definition for COM marshalling of nn.hid.TouchScreenState15
struct TouchScreenState15_t2816721904_marshaled_com
{
	int64_t ___samplingNumber_1;
	int32_t ___count_2;
	int32_t ____reserved_3;
	TouchState_t1641641684  ___touches_4[15];
};
