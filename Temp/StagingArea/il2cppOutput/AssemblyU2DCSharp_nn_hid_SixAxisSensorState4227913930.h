#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_nn_util_Float3344624755.h"
#include "AssemblyU2DCSharp_nn_hid_DirectionState2842915680.h"
#include "AssemblyU2DCSharp_nn_hid_SixAxisSensorAttribute2277768753.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// nn.hid.SixAxisSensorState
struct  SixAxisSensorState_t4227913930 
{
public:
	// System.Int64 nn.hid.SixAxisSensorState::deltaTimeNanoSeconds
	int64_t ___deltaTimeNanoSeconds_2;
	// System.Int64 nn.hid.SixAxisSensorState::samplingNumber
	int64_t ___samplingNumber_3;
	// nn.util.Float3 nn.hid.SixAxisSensorState::acceleration
	Float3_t344624755  ___acceleration_4;
	// nn.util.Float3 nn.hid.SixAxisSensorState::angularVelocity
	Float3_t344624755  ___angularVelocity_5;
	// nn.util.Float3 nn.hid.SixAxisSensorState::angle
	Float3_t344624755  ___angle_6;
	// nn.hid.DirectionState nn.hid.SixAxisSensorState::direction
	DirectionState_t2842915680  ___direction_7;
	// nn.hid.SixAxisSensorAttribute nn.hid.SixAxisSensorState::attributes
	int32_t ___attributes_8;

public:
	inline static int32_t get_offset_of_deltaTimeNanoSeconds_2() { return static_cast<int32_t>(offsetof(SixAxisSensorState_t4227913930, ___deltaTimeNanoSeconds_2)); }
	inline int64_t get_deltaTimeNanoSeconds_2() const { return ___deltaTimeNanoSeconds_2; }
	inline int64_t* get_address_of_deltaTimeNanoSeconds_2() { return &___deltaTimeNanoSeconds_2; }
	inline void set_deltaTimeNanoSeconds_2(int64_t value)
	{
		___deltaTimeNanoSeconds_2 = value;
	}

	inline static int32_t get_offset_of_samplingNumber_3() { return static_cast<int32_t>(offsetof(SixAxisSensorState_t4227913930, ___samplingNumber_3)); }
	inline int64_t get_samplingNumber_3() const { return ___samplingNumber_3; }
	inline int64_t* get_address_of_samplingNumber_3() { return &___samplingNumber_3; }
	inline void set_samplingNumber_3(int64_t value)
	{
		___samplingNumber_3 = value;
	}

	inline static int32_t get_offset_of_acceleration_4() { return static_cast<int32_t>(offsetof(SixAxisSensorState_t4227913930, ___acceleration_4)); }
	inline Float3_t344624755  get_acceleration_4() const { return ___acceleration_4; }
	inline Float3_t344624755 * get_address_of_acceleration_4() { return &___acceleration_4; }
	inline void set_acceleration_4(Float3_t344624755  value)
	{
		___acceleration_4 = value;
	}

	inline static int32_t get_offset_of_angularVelocity_5() { return static_cast<int32_t>(offsetof(SixAxisSensorState_t4227913930, ___angularVelocity_5)); }
	inline Float3_t344624755  get_angularVelocity_5() const { return ___angularVelocity_5; }
	inline Float3_t344624755 * get_address_of_angularVelocity_5() { return &___angularVelocity_5; }
	inline void set_angularVelocity_5(Float3_t344624755  value)
	{
		___angularVelocity_5 = value;
	}

	inline static int32_t get_offset_of_angle_6() { return static_cast<int32_t>(offsetof(SixAxisSensorState_t4227913930, ___angle_6)); }
	inline Float3_t344624755  get_angle_6() const { return ___angle_6; }
	inline Float3_t344624755 * get_address_of_angle_6() { return &___angle_6; }
	inline void set_angle_6(Float3_t344624755  value)
	{
		___angle_6 = value;
	}

	inline static int32_t get_offset_of_direction_7() { return static_cast<int32_t>(offsetof(SixAxisSensorState_t4227913930, ___direction_7)); }
	inline DirectionState_t2842915680  get_direction_7() const { return ___direction_7; }
	inline DirectionState_t2842915680 * get_address_of_direction_7() { return &___direction_7; }
	inline void set_direction_7(DirectionState_t2842915680  value)
	{
		___direction_7 = value;
	}

	inline static int32_t get_offset_of_attributes_8() { return static_cast<int32_t>(offsetof(SixAxisSensorState_t4227913930, ___attributes_8)); }
	inline int32_t get_attributes_8() const { return ___attributes_8; }
	inline int32_t* get_address_of_attributes_8() { return &___attributes_8; }
	inline void set_attributes_8(int32_t value)
	{
		___attributes_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
