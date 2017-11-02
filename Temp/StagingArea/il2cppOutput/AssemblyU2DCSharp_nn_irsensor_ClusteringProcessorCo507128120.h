#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_nn_irsensor_IrCameraConfig2333455350.h"
#include "AssemblyU2DCSharp_nn_irsensor_Rect496210494.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// nn.irsensor.ClusteringProcessorConfig
struct  ClusteringProcessorConfig_t507128120 
{
public:
	// nn.irsensor.IrCameraConfig nn.irsensor.ClusteringProcessorConfig::irCameraConfig
	IrCameraConfig_t2333455350  ___irCameraConfig_0;
	// nn.irsensor.Rect nn.irsensor.ClusteringProcessorConfig::windowOfInterest
	Rect_t496210494  ___windowOfInterest_1;
	// System.Int32 nn.irsensor.ClusteringProcessorConfig::objectPixelCountMin
	int32_t ___objectPixelCountMin_2;
	// System.Int32 nn.irsensor.ClusteringProcessorConfig::objectPixelCountMax
	int32_t ___objectPixelCountMax_3;
	// System.Int32 nn.irsensor.ClusteringProcessorConfig::objectIntensityMin
	int32_t ___objectIntensityMin_4;
	// System.Boolean nn.irsensor.ClusteringProcessorConfig::isExternalLightFilterEnabled
	bool ___isExternalLightFilterEnabled_5;

public:
	inline static int32_t get_offset_of_irCameraConfig_0() { return static_cast<int32_t>(offsetof(ClusteringProcessorConfig_t507128120, ___irCameraConfig_0)); }
	inline IrCameraConfig_t2333455350  get_irCameraConfig_0() const { return ___irCameraConfig_0; }
	inline IrCameraConfig_t2333455350 * get_address_of_irCameraConfig_0() { return &___irCameraConfig_0; }
	inline void set_irCameraConfig_0(IrCameraConfig_t2333455350  value)
	{
		___irCameraConfig_0 = value;
	}

	inline static int32_t get_offset_of_windowOfInterest_1() { return static_cast<int32_t>(offsetof(ClusteringProcessorConfig_t507128120, ___windowOfInterest_1)); }
	inline Rect_t496210494  get_windowOfInterest_1() const { return ___windowOfInterest_1; }
	inline Rect_t496210494 * get_address_of_windowOfInterest_1() { return &___windowOfInterest_1; }
	inline void set_windowOfInterest_1(Rect_t496210494  value)
	{
		___windowOfInterest_1 = value;
	}

	inline static int32_t get_offset_of_objectPixelCountMin_2() { return static_cast<int32_t>(offsetof(ClusteringProcessorConfig_t507128120, ___objectPixelCountMin_2)); }
	inline int32_t get_objectPixelCountMin_2() const { return ___objectPixelCountMin_2; }
	inline int32_t* get_address_of_objectPixelCountMin_2() { return &___objectPixelCountMin_2; }
	inline void set_objectPixelCountMin_2(int32_t value)
	{
		___objectPixelCountMin_2 = value;
	}

	inline static int32_t get_offset_of_objectPixelCountMax_3() { return static_cast<int32_t>(offsetof(ClusteringProcessorConfig_t507128120, ___objectPixelCountMax_3)); }
	inline int32_t get_objectPixelCountMax_3() const { return ___objectPixelCountMax_3; }
	inline int32_t* get_address_of_objectPixelCountMax_3() { return &___objectPixelCountMax_3; }
	inline void set_objectPixelCountMax_3(int32_t value)
	{
		___objectPixelCountMax_3 = value;
	}

	inline static int32_t get_offset_of_objectIntensityMin_4() { return static_cast<int32_t>(offsetof(ClusteringProcessorConfig_t507128120, ___objectIntensityMin_4)); }
	inline int32_t get_objectIntensityMin_4() const { return ___objectIntensityMin_4; }
	inline int32_t* get_address_of_objectIntensityMin_4() { return &___objectIntensityMin_4; }
	inline void set_objectIntensityMin_4(int32_t value)
	{
		___objectIntensityMin_4 = value;
	}

	inline static int32_t get_offset_of_isExternalLightFilterEnabled_5() { return static_cast<int32_t>(offsetof(ClusteringProcessorConfig_t507128120, ___isExternalLightFilterEnabled_5)); }
	inline bool get_isExternalLightFilterEnabled_5() const { return ___isExternalLightFilterEnabled_5; }
	inline bool* get_address_of_isExternalLightFilterEnabled_5() { return &___isExternalLightFilterEnabled_5; }
	inline void set_isExternalLightFilterEnabled_5(bool value)
	{
		___isExternalLightFilterEnabled_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
