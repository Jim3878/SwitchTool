#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_nn_irsensor_IrCameraLightTarget2970463283.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// nn.irsensor.IrCameraConfig
struct  IrCameraConfig_t2333455350 
{
public:
	// System.Int64 nn.irsensor.IrCameraConfig::exposureTimeNanoSeconds
	int64_t ___exposureTimeNanoSeconds_0;
	// nn.irsensor.IrCameraLightTarget nn.irsensor.IrCameraConfig::lightTarget
	int32_t ___lightTarget_1;
	// System.Int32 nn.irsensor.IrCameraConfig::gain
	int32_t ___gain_2;
	// System.Boolean nn.irsensor.IrCameraConfig::isNegativeImageUsed
	bool ___isNegativeImageUsed_3;

public:
	inline static int32_t get_offset_of_exposureTimeNanoSeconds_0() { return static_cast<int32_t>(offsetof(IrCameraConfig_t2333455350, ___exposureTimeNanoSeconds_0)); }
	inline int64_t get_exposureTimeNanoSeconds_0() const { return ___exposureTimeNanoSeconds_0; }
	inline int64_t* get_address_of_exposureTimeNanoSeconds_0() { return &___exposureTimeNanoSeconds_0; }
	inline void set_exposureTimeNanoSeconds_0(int64_t value)
	{
		___exposureTimeNanoSeconds_0 = value;
	}

	inline static int32_t get_offset_of_lightTarget_1() { return static_cast<int32_t>(offsetof(IrCameraConfig_t2333455350, ___lightTarget_1)); }
	inline int32_t get_lightTarget_1() const { return ___lightTarget_1; }
	inline int32_t* get_address_of_lightTarget_1() { return &___lightTarget_1; }
	inline void set_lightTarget_1(int32_t value)
	{
		___lightTarget_1 = value;
	}

	inline static int32_t get_offset_of_gain_2() { return static_cast<int32_t>(offsetof(IrCameraConfig_t2333455350, ___gain_2)); }
	inline int32_t get_gain_2() const { return ___gain_2; }
	inline int32_t* get_address_of_gain_2() { return &___gain_2; }
	inline void set_gain_2(int32_t value)
	{
		___gain_2 = value;
	}

	inline static int32_t get_offset_of_isNegativeImageUsed_3() { return static_cast<int32_t>(offsetof(IrCameraConfig_t2333455350, ___isNegativeImageUsed_3)); }
	inline bool get_isNegativeImageUsed_3() const { return ___isNegativeImageUsed_3; }
	inline bool* get_address_of_isNegativeImageUsed_3() { return &___isNegativeImageUsed_3; }
	inline void set_isNegativeImageUsed_3(bool value)
	{
		___isNegativeImageUsed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
