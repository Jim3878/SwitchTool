#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_nn_irsensor_IrCameraAmbientNoise2957930356.h"
#include "AssemblyU2DCSharp_nn_irsensor_ClusteringData3073749120.h"

// nn.irsensor.ClusteringData[]
struct ClusteringDataU5BU5D_t295632257;
struct ClusteringData_t3073749120 ;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// nn.irsensor.ClusteringProcessorState
struct  ClusteringProcessorState_t2944682135 
{
public:
	// System.Int64 nn.irsensor.ClusteringProcessorState::samplingNumber
	int64_t ___samplingNumber_0;
	// System.Int64 nn.irsensor.ClusteringProcessorState::timeStampNanoSeconds
	int64_t ___timeStampNanoSeconds_1;
	// System.SByte nn.irsensor.ClusteringProcessorState::objectCount
	int8_t ___objectCount_2;
	// System.Byte nn.irsensor.ClusteringProcessorState::_reserved0
	uint8_t ____reserved0_3;
	// System.Byte nn.irsensor.ClusteringProcessorState::_reserved1
	uint8_t ____reserved1_4;
	// System.Byte nn.irsensor.ClusteringProcessorState::_reserved2
	uint8_t ____reserved2_5;
	// nn.irsensor.IrCameraAmbientNoiseLevel nn.irsensor.ClusteringProcessorState::ambientNoiseLevel
	int32_t ___ambientNoiseLevel_6;
	// nn.irsensor.ClusteringData[] nn.irsensor.ClusteringProcessorState::objects
	ClusteringDataU5BU5D_t295632257* ___objects_7;

public:
	inline static int32_t get_offset_of_samplingNumber_0() { return static_cast<int32_t>(offsetof(ClusteringProcessorState_t2944682135, ___samplingNumber_0)); }
	inline int64_t get_samplingNumber_0() const { return ___samplingNumber_0; }
	inline int64_t* get_address_of_samplingNumber_0() { return &___samplingNumber_0; }
	inline void set_samplingNumber_0(int64_t value)
	{
		___samplingNumber_0 = value;
	}

	inline static int32_t get_offset_of_timeStampNanoSeconds_1() { return static_cast<int32_t>(offsetof(ClusteringProcessorState_t2944682135, ___timeStampNanoSeconds_1)); }
	inline int64_t get_timeStampNanoSeconds_1() const { return ___timeStampNanoSeconds_1; }
	inline int64_t* get_address_of_timeStampNanoSeconds_1() { return &___timeStampNanoSeconds_1; }
	inline void set_timeStampNanoSeconds_1(int64_t value)
	{
		___timeStampNanoSeconds_1 = value;
	}

	inline static int32_t get_offset_of_objectCount_2() { return static_cast<int32_t>(offsetof(ClusteringProcessorState_t2944682135, ___objectCount_2)); }
	inline int8_t get_objectCount_2() const { return ___objectCount_2; }
	inline int8_t* get_address_of_objectCount_2() { return &___objectCount_2; }
	inline void set_objectCount_2(int8_t value)
	{
		___objectCount_2 = value;
	}

	inline static int32_t get_offset_of__reserved0_3() { return static_cast<int32_t>(offsetof(ClusteringProcessorState_t2944682135, ____reserved0_3)); }
	inline uint8_t get__reserved0_3() const { return ____reserved0_3; }
	inline uint8_t* get_address_of__reserved0_3() { return &____reserved0_3; }
	inline void set__reserved0_3(uint8_t value)
	{
		____reserved0_3 = value;
	}

	inline static int32_t get_offset_of__reserved1_4() { return static_cast<int32_t>(offsetof(ClusteringProcessorState_t2944682135, ____reserved1_4)); }
	inline uint8_t get__reserved1_4() const { return ____reserved1_4; }
	inline uint8_t* get_address_of__reserved1_4() { return &____reserved1_4; }
	inline void set__reserved1_4(uint8_t value)
	{
		____reserved1_4 = value;
	}

	inline static int32_t get_offset_of__reserved2_5() { return static_cast<int32_t>(offsetof(ClusteringProcessorState_t2944682135, ____reserved2_5)); }
	inline uint8_t get__reserved2_5() const { return ____reserved2_5; }
	inline uint8_t* get_address_of__reserved2_5() { return &____reserved2_5; }
	inline void set__reserved2_5(uint8_t value)
	{
		____reserved2_5 = value;
	}

	inline static int32_t get_offset_of_ambientNoiseLevel_6() { return static_cast<int32_t>(offsetof(ClusteringProcessorState_t2944682135, ___ambientNoiseLevel_6)); }
	inline int32_t get_ambientNoiseLevel_6() const { return ___ambientNoiseLevel_6; }
	inline int32_t* get_address_of_ambientNoiseLevel_6() { return &___ambientNoiseLevel_6; }
	inline void set_ambientNoiseLevel_6(int32_t value)
	{
		___ambientNoiseLevel_6 = value;
	}

	inline static int32_t get_offset_of_objects_7() { return static_cast<int32_t>(offsetof(ClusteringProcessorState_t2944682135, ___objects_7)); }
	inline ClusteringDataU5BU5D_t295632257* get_objects_7() const { return ___objects_7; }
	inline ClusteringDataU5BU5D_t295632257** get_address_of_objects_7() { return &___objects_7; }
	inline void set_objects_7(ClusteringDataU5BU5D_t295632257* value)
	{
		___objects_7 = value;
		Il2CppCodeGenWriteBarrier(&___objects_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of nn.irsensor.ClusteringProcessorState
struct ClusteringProcessorState_t2944682135_marshaled_pinvoke
{
	int64_t ___samplingNumber_0;
	int64_t ___timeStampNanoSeconds_1;
	int8_t ___objectCount_2;
	uint8_t ____reserved0_3;
	uint8_t ____reserved1_4;
	uint8_t ____reserved2_5;
	int32_t ___ambientNoiseLevel_6;
	ClusteringData_t3073749120  ___objects_7[16];
};
// Native definition for COM marshalling of nn.irsensor.ClusteringProcessorState
struct ClusteringProcessorState_t2944682135_marshaled_com
{
	int64_t ___samplingNumber_0;
	int64_t ___timeStampNanoSeconds_1;
	int8_t ___objectCount_2;
	uint8_t ____reserved0_3;
	uint8_t ____reserved1_4;
	uint8_t ____reserved2_5;
	int32_t ___ambientNoiseLevel_6;
	ClusteringData_t3073749120  ___objects_7[16];
};
