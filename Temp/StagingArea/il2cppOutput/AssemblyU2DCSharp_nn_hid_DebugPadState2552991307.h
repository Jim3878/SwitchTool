#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_nn_hid_DebugPadAttribute2355093858.h"
#include "AssemblyU2DCSharp_nn_hid_DebugPadButton3023729364.h"
#include "AssemblyU2DCSharp_nn_hid_AnalogStickState1044351673.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// nn.hid.DebugPadState
struct  DebugPadState_t2552991307 
{
public:
	// System.Int64 nn.hid.DebugPadState::samplingNumber
	int64_t ___samplingNumber_0;
	// nn.hid.DebugPadAttribute nn.hid.DebugPadState::attributes
	int32_t ___attributes_1;
	// nn.hid.DebugPadButton nn.hid.DebugPadState::buttons
	int32_t ___buttons_2;
	// nn.hid.AnalogStickState nn.hid.DebugPadState::analogStickR
	AnalogStickState_t1044351673  ___analogStickR_3;
	// nn.hid.AnalogStickState nn.hid.DebugPadState::analogStickL
	AnalogStickState_t1044351673  ___analogStickL_4;

public:
	inline static int32_t get_offset_of_samplingNumber_0() { return static_cast<int32_t>(offsetof(DebugPadState_t2552991307, ___samplingNumber_0)); }
	inline int64_t get_samplingNumber_0() const { return ___samplingNumber_0; }
	inline int64_t* get_address_of_samplingNumber_0() { return &___samplingNumber_0; }
	inline void set_samplingNumber_0(int64_t value)
	{
		___samplingNumber_0 = value;
	}

	inline static int32_t get_offset_of_attributes_1() { return static_cast<int32_t>(offsetof(DebugPadState_t2552991307, ___attributes_1)); }
	inline int32_t get_attributes_1() const { return ___attributes_1; }
	inline int32_t* get_address_of_attributes_1() { return &___attributes_1; }
	inline void set_attributes_1(int32_t value)
	{
		___attributes_1 = value;
	}

	inline static int32_t get_offset_of_buttons_2() { return static_cast<int32_t>(offsetof(DebugPadState_t2552991307, ___buttons_2)); }
	inline int32_t get_buttons_2() const { return ___buttons_2; }
	inline int32_t* get_address_of_buttons_2() { return &___buttons_2; }
	inline void set_buttons_2(int32_t value)
	{
		___buttons_2 = value;
	}

	inline static int32_t get_offset_of_analogStickR_3() { return static_cast<int32_t>(offsetof(DebugPadState_t2552991307, ___analogStickR_3)); }
	inline AnalogStickState_t1044351673  get_analogStickR_3() const { return ___analogStickR_3; }
	inline AnalogStickState_t1044351673 * get_address_of_analogStickR_3() { return &___analogStickR_3; }
	inline void set_analogStickR_3(AnalogStickState_t1044351673  value)
	{
		___analogStickR_3 = value;
	}

	inline static int32_t get_offset_of_analogStickL_4() { return static_cast<int32_t>(offsetof(DebugPadState_t2552991307, ___analogStickL_4)); }
	inline AnalogStickState_t1044351673  get_analogStickL_4() const { return ___analogStickL_4; }
	inline AnalogStickState_t1044351673 * get_address_of_analogStickL_4() { return &___analogStickL_4; }
	inline void set_analogStickL_4(AnalogStickState_t1044351673  value)
	{
		___analogStickL_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
