#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_nn_util_Float23073508110.h"
#include "AssemblyU2DCSharp_nn_irsensor_Rect496210494.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// nn.irsensor.ClusteringData
struct  ClusteringData_t3073749120 
{
public:
	// System.Single nn.irsensor.ClusteringData::averageIntensity
	float ___averageIntensity_0;
	// nn.util.Float2 nn.irsensor.ClusteringData::centroid
	Float2_t3073508110  ___centroid_1;
	// System.Int32 nn.irsensor.ClusteringData::pixelCount
	int32_t ___pixelCount_2;
	// nn.irsensor.Rect nn.irsensor.ClusteringData::bound
	Rect_t496210494  ___bound_3;

public:
	inline static int32_t get_offset_of_averageIntensity_0() { return static_cast<int32_t>(offsetof(ClusteringData_t3073749120, ___averageIntensity_0)); }
	inline float get_averageIntensity_0() const { return ___averageIntensity_0; }
	inline float* get_address_of_averageIntensity_0() { return &___averageIntensity_0; }
	inline void set_averageIntensity_0(float value)
	{
		___averageIntensity_0 = value;
	}

	inline static int32_t get_offset_of_centroid_1() { return static_cast<int32_t>(offsetof(ClusteringData_t3073749120, ___centroid_1)); }
	inline Float2_t3073508110  get_centroid_1() const { return ___centroid_1; }
	inline Float2_t3073508110 * get_address_of_centroid_1() { return &___centroid_1; }
	inline void set_centroid_1(Float2_t3073508110  value)
	{
		___centroid_1 = value;
	}

	inline static int32_t get_offset_of_pixelCount_2() { return static_cast<int32_t>(offsetof(ClusteringData_t3073749120, ___pixelCount_2)); }
	inline int32_t get_pixelCount_2() const { return ___pixelCount_2; }
	inline int32_t* get_address_of_pixelCount_2() { return &___pixelCount_2; }
	inline void set_pixelCount_2(int32_t value)
	{
		___pixelCount_2 = value;
	}

	inline static int32_t get_offset_of_bound_3() { return static_cast<int32_t>(offsetof(ClusteringData_t3073749120, ___bound_3)); }
	inline Rect_t496210494  get_bound_3() const { return ___bound_3; }
	inline Rect_t496210494 * get_address_of_bound_3() { return &___bound_3; }
	inline void set_bound_3(Rect_t496210494  value)
	{
		___bound_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
