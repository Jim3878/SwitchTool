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
#include "AssemblyU2DCSharp_nn_hid_GestureAttribute3257311809.h"
#include "AssemblyU2DCSharp_nn_hid_GesturePoint2673817003.h"

// nn.hid.GesturePoint[]
struct GesturePointU5BU5D_t3009879882;
struct GesturePoint_t2673817003 ;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// nn.hid.GestureState
struct  GestureState_t2895790074 
{
public:
	// System.Int64 nn.hid.GestureState::eventNumber
	int64_t ___eventNumber_0;
	// System.Int64 nn.hid.GestureState::contextNumber
	int64_t ___contextNumber_1;
	// System.Int32 nn.hid.GestureState::_type
	int32_t ____type_2;
	// System.Int32 nn.hid.GestureState::_direction
	int32_t ____direction_3;
	// System.Int32 nn.hid.GestureState::x
	int32_t ___x_4;
	// System.Int32 nn.hid.GestureState::y
	int32_t ___y_5;
	// System.Int32 nn.hid.GestureState::deltaX
	int32_t ___deltaX_6;
	// System.Int32 nn.hid.GestureState::deltaY
	int32_t ___deltaY_7;
	// nn.util.Float2 nn.hid.GestureState::velocity
	Float2_t3073508110  ___velocity_8;
	// nn.hid.GestureAttribute nn.hid.GestureState::attributes
	int32_t ___attributes_9;
	// System.Single nn.hid.GestureState::scale
	float ___scale_10;
	// System.Single nn.hid.GestureState::rotationAngle
	float ___rotationAngle_11;
	// System.Int32 nn.hid.GestureState::pointCount
	int32_t ___pointCount_12;
	// nn.hid.GesturePoint[] nn.hid.GestureState::points
	GesturePointU5BU5D_t3009879882* ___points_13;

public:
	inline static int32_t get_offset_of_eventNumber_0() { return static_cast<int32_t>(offsetof(GestureState_t2895790074, ___eventNumber_0)); }
	inline int64_t get_eventNumber_0() const { return ___eventNumber_0; }
	inline int64_t* get_address_of_eventNumber_0() { return &___eventNumber_0; }
	inline void set_eventNumber_0(int64_t value)
	{
		___eventNumber_0 = value;
	}

	inline static int32_t get_offset_of_contextNumber_1() { return static_cast<int32_t>(offsetof(GestureState_t2895790074, ___contextNumber_1)); }
	inline int64_t get_contextNumber_1() const { return ___contextNumber_1; }
	inline int64_t* get_address_of_contextNumber_1() { return &___contextNumber_1; }
	inline void set_contextNumber_1(int64_t value)
	{
		___contextNumber_1 = value;
	}

	inline static int32_t get_offset_of__type_2() { return static_cast<int32_t>(offsetof(GestureState_t2895790074, ____type_2)); }
	inline int32_t get__type_2() const { return ____type_2; }
	inline int32_t* get_address_of__type_2() { return &____type_2; }
	inline void set__type_2(int32_t value)
	{
		____type_2 = value;
	}

	inline static int32_t get_offset_of__direction_3() { return static_cast<int32_t>(offsetof(GestureState_t2895790074, ____direction_3)); }
	inline int32_t get__direction_3() const { return ____direction_3; }
	inline int32_t* get_address_of__direction_3() { return &____direction_3; }
	inline void set__direction_3(int32_t value)
	{
		____direction_3 = value;
	}

	inline static int32_t get_offset_of_x_4() { return static_cast<int32_t>(offsetof(GestureState_t2895790074, ___x_4)); }
	inline int32_t get_x_4() const { return ___x_4; }
	inline int32_t* get_address_of_x_4() { return &___x_4; }
	inline void set_x_4(int32_t value)
	{
		___x_4 = value;
	}

	inline static int32_t get_offset_of_y_5() { return static_cast<int32_t>(offsetof(GestureState_t2895790074, ___y_5)); }
	inline int32_t get_y_5() const { return ___y_5; }
	inline int32_t* get_address_of_y_5() { return &___y_5; }
	inline void set_y_5(int32_t value)
	{
		___y_5 = value;
	}

	inline static int32_t get_offset_of_deltaX_6() { return static_cast<int32_t>(offsetof(GestureState_t2895790074, ___deltaX_6)); }
	inline int32_t get_deltaX_6() const { return ___deltaX_6; }
	inline int32_t* get_address_of_deltaX_6() { return &___deltaX_6; }
	inline void set_deltaX_6(int32_t value)
	{
		___deltaX_6 = value;
	}

	inline static int32_t get_offset_of_deltaY_7() { return static_cast<int32_t>(offsetof(GestureState_t2895790074, ___deltaY_7)); }
	inline int32_t get_deltaY_7() const { return ___deltaY_7; }
	inline int32_t* get_address_of_deltaY_7() { return &___deltaY_7; }
	inline void set_deltaY_7(int32_t value)
	{
		___deltaY_7 = value;
	}

	inline static int32_t get_offset_of_velocity_8() { return static_cast<int32_t>(offsetof(GestureState_t2895790074, ___velocity_8)); }
	inline Float2_t3073508110  get_velocity_8() const { return ___velocity_8; }
	inline Float2_t3073508110 * get_address_of_velocity_8() { return &___velocity_8; }
	inline void set_velocity_8(Float2_t3073508110  value)
	{
		___velocity_8 = value;
	}

	inline static int32_t get_offset_of_attributes_9() { return static_cast<int32_t>(offsetof(GestureState_t2895790074, ___attributes_9)); }
	inline int32_t get_attributes_9() const { return ___attributes_9; }
	inline int32_t* get_address_of_attributes_9() { return &___attributes_9; }
	inline void set_attributes_9(int32_t value)
	{
		___attributes_9 = value;
	}

	inline static int32_t get_offset_of_scale_10() { return static_cast<int32_t>(offsetof(GestureState_t2895790074, ___scale_10)); }
	inline float get_scale_10() const { return ___scale_10; }
	inline float* get_address_of_scale_10() { return &___scale_10; }
	inline void set_scale_10(float value)
	{
		___scale_10 = value;
	}

	inline static int32_t get_offset_of_rotationAngle_11() { return static_cast<int32_t>(offsetof(GestureState_t2895790074, ___rotationAngle_11)); }
	inline float get_rotationAngle_11() const { return ___rotationAngle_11; }
	inline float* get_address_of_rotationAngle_11() { return &___rotationAngle_11; }
	inline void set_rotationAngle_11(float value)
	{
		___rotationAngle_11 = value;
	}

	inline static int32_t get_offset_of_pointCount_12() { return static_cast<int32_t>(offsetof(GestureState_t2895790074, ___pointCount_12)); }
	inline int32_t get_pointCount_12() const { return ___pointCount_12; }
	inline int32_t* get_address_of_pointCount_12() { return &___pointCount_12; }
	inline void set_pointCount_12(int32_t value)
	{
		___pointCount_12 = value;
	}

	inline static int32_t get_offset_of_points_13() { return static_cast<int32_t>(offsetof(GestureState_t2895790074, ___points_13)); }
	inline GesturePointU5BU5D_t3009879882* get_points_13() const { return ___points_13; }
	inline GesturePointU5BU5D_t3009879882** get_address_of_points_13() { return &___points_13; }
	inline void set_points_13(GesturePointU5BU5D_t3009879882* value)
	{
		___points_13 = value;
		Il2CppCodeGenWriteBarrier(&___points_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of nn.hid.GestureState
struct GestureState_t2895790074_marshaled_pinvoke
{
	int64_t ___eventNumber_0;
	int64_t ___contextNumber_1;
	int32_t ____type_2;
	int32_t ____direction_3;
	int32_t ___x_4;
	int32_t ___y_5;
	int32_t ___deltaX_6;
	int32_t ___deltaY_7;
	Float2_t3073508110  ___velocity_8;
	int32_t ___attributes_9;
	float ___scale_10;
	float ___rotationAngle_11;
	int32_t ___pointCount_12;
	GesturePoint_t2673817003  ___points_13[4];
};
// Native definition for COM marshalling of nn.hid.GestureState
struct GestureState_t2895790074_marshaled_com
{
	int64_t ___eventNumber_0;
	int64_t ___contextNumber_1;
	int32_t ____type_2;
	int32_t ____direction_3;
	int32_t ___x_4;
	int32_t ___y_5;
	int32_t ___deltaX_6;
	int32_t ___deltaY_7;
	Float2_t3073508110  ___velocity_8;
	int32_t ___attributes_9;
	float ___scale_10;
	float ___rotationAngle_11;
	int32_t ___pointCount_12;
	GesturePoint_t2673817003  ___points_13[4];
};
