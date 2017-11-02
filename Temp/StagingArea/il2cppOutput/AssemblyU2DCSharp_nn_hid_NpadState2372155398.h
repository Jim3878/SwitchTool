#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_nn_hid_NpadButton921394755.h"
#include "AssemblyU2DCSharp_nn_hid_AnalogStickState1044351673.h"
#include "AssemblyU2DCSharp_nn_hid_NpadAttribute317705935.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// nn.hid.NpadState
struct  NpadState_t2372155398 
{
public:
	// System.Int64 nn.hid.NpadState::samplingNumber
	int64_t ___samplingNumber_0;
	// nn.hid.NpadButton nn.hid.NpadState::buttons
	int64_t ___buttons_1;
	// nn.hid.AnalogStickState nn.hid.NpadState::analogStickL
	AnalogStickState_t1044351673  ___analogStickL_2;
	// nn.hid.AnalogStickState nn.hid.NpadState::analogStickR
	AnalogStickState_t1044351673  ___analogStickR_3;
	// nn.hid.NpadAttribute nn.hid.NpadState::attributes
	int32_t ___attributes_4;
	// nn.hid.NpadButton nn.hid.NpadState::preButtons
	int64_t ___preButtons_5;

public:
	inline static int32_t get_offset_of_samplingNumber_0() { return static_cast<int32_t>(offsetof(NpadState_t2372155398, ___samplingNumber_0)); }
	inline int64_t get_samplingNumber_0() const { return ___samplingNumber_0; }
	inline int64_t* get_address_of_samplingNumber_0() { return &___samplingNumber_0; }
	inline void set_samplingNumber_0(int64_t value)
	{
		___samplingNumber_0 = value;
	}

	inline static int32_t get_offset_of_buttons_1() { return static_cast<int32_t>(offsetof(NpadState_t2372155398, ___buttons_1)); }
	inline int64_t get_buttons_1() const { return ___buttons_1; }
	inline int64_t* get_address_of_buttons_1() { return &___buttons_1; }
	inline void set_buttons_1(int64_t value)
	{
		___buttons_1 = value;
	}

	inline static int32_t get_offset_of_analogStickL_2() { return static_cast<int32_t>(offsetof(NpadState_t2372155398, ___analogStickL_2)); }
	inline AnalogStickState_t1044351673  get_analogStickL_2() const { return ___analogStickL_2; }
	inline AnalogStickState_t1044351673 * get_address_of_analogStickL_2() { return &___analogStickL_2; }
	inline void set_analogStickL_2(AnalogStickState_t1044351673  value)
	{
		___analogStickL_2 = value;
	}

	inline static int32_t get_offset_of_analogStickR_3() { return static_cast<int32_t>(offsetof(NpadState_t2372155398, ___analogStickR_3)); }
	inline AnalogStickState_t1044351673  get_analogStickR_3() const { return ___analogStickR_3; }
	inline AnalogStickState_t1044351673 * get_address_of_analogStickR_3() { return &___analogStickR_3; }
	inline void set_analogStickR_3(AnalogStickState_t1044351673  value)
	{
		___analogStickR_3 = value;
	}

	inline static int32_t get_offset_of_attributes_4() { return static_cast<int32_t>(offsetof(NpadState_t2372155398, ___attributes_4)); }
	inline int32_t get_attributes_4() const { return ___attributes_4; }
	inline int32_t* get_address_of_attributes_4() { return &___attributes_4; }
	inline void set_attributes_4(int32_t value)
	{
		___attributes_4 = value;
	}

	inline static int32_t get_offset_of_preButtons_5() { return static_cast<int32_t>(offsetof(NpadState_t2372155398, ___preButtons_5)); }
	inline int64_t get_preButtons_5() const { return ___preButtons_5; }
	inline int64_t* get_address_of_preButtons_5() { return &___preButtons_5; }
	inline void set_preButtons_5(int64_t value)
	{
		___preButtons_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
