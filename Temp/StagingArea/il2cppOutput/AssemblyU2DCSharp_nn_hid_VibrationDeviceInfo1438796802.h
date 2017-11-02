#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_nn_hid_VibrationDeviceType275738636.h"
#include "AssemblyU2DCSharp_nn_hid_VibrationDevicePosition3075215633.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// nn.hid.VibrationDeviceInfo
struct  VibrationDeviceInfo_t1438796802 
{
public:
	// nn.hid.VibrationDeviceType nn.hid.VibrationDeviceInfo::deviceType
	int32_t ___deviceType_0;
	// nn.hid.VibrationDevicePosition nn.hid.VibrationDeviceInfo::position
	int32_t ___position_1;

public:
	inline static int32_t get_offset_of_deviceType_0() { return static_cast<int32_t>(offsetof(VibrationDeviceInfo_t1438796802, ___deviceType_0)); }
	inline int32_t get_deviceType_0() const { return ___deviceType_0; }
	inline int32_t* get_address_of_deviceType_0() { return &___deviceType_0; }
	inline void set_deviceType_0(int32_t value)
	{
		___deviceType_0 = value;
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(VibrationDeviceInfo_t1438796802, ___position_1)); }
	inline int32_t get_position_1() const { return ___position_1; }
	inline int32_t* get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(int32_t value)
	{
		___position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
