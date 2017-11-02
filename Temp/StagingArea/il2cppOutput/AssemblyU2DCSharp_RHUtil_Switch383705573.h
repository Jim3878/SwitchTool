#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_nn_hid_NpadState2372155398.h"

// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// nn.hid.NpadId[]
struct NpadIdU5BU5D_t2986333413;
// Yeh.SwitchTools.ISwitch_SaveData
struct ISwitch_SaveData_t362163189;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RHUtil_Switch
struct  RHUtil_Switch_t383705573  : public MonoBehaviour_t1158329972
{
public:
	// System.Text.StringBuilder RHUtil_Switch::stringBuilder
	StringBuilder_t1221177846 * ___stringBuilder_2;
	// nn.hid.NpadState RHUtil_Switch::npadState
	NpadState_t2372155398  ___npadState_3;
	// nn.hid.NpadId[] RHUtil_Switch::npadIds
	NpadIdU5BU5D_t2986333413* ___npadIds_4;

public:
	inline static int32_t get_offset_of_stringBuilder_2() { return static_cast<int32_t>(offsetof(RHUtil_Switch_t383705573, ___stringBuilder_2)); }
	inline StringBuilder_t1221177846 * get_stringBuilder_2() const { return ___stringBuilder_2; }
	inline StringBuilder_t1221177846 ** get_address_of_stringBuilder_2() { return &___stringBuilder_2; }
	inline void set_stringBuilder_2(StringBuilder_t1221177846 * value)
	{
		___stringBuilder_2 = value;
		Il2CppCodeGenWriteBarrier(&___stringBuilder_2, value);
	}

	inline static int32_t get_offset_of_npadState_3() { return static_cast<int32_t>(offsetof(RHUtil_Switch_t383705573, ___npadState_3)); }
	inline NpadState_t2372155398  get_npadState_3() const { return ___npadState_3; }
	inline NpadState_t2372155398 * get_address_of_npadState_3() { return &___npadState_3; }
	inline void set_npadState_3(NpadState_t2372155398  value)
	{
		___npadState_3 = value;
	}

	inline static int32_t get_offset_of_npadIds_4() { return static_cast<int32_t>(offsetof(RHUtil_Switch_t383705573, ___npadIds_4)); }
	inline NpadIdU5BU5D_t2986333413* get_npadIds_4() const { return ___npadIds_4; }
	inline NpadIdU5BU5D_t2986333413** get_address_of_npadIds_4() { return &___npadIds_4; }
	inline void set_npadIds_4(NpadIdU5BU5D_t2986333413* value)
	{
		___npadIds_4 = value;
		Il2CppCodeGenWriteBarrier(&___npadIds_4, value);
	}
};

struct RHUtil_Switch_t383705573_StaticFields
{
public:
	// Yeh.SwitchTools.ISwitch_SaveData RHUtil_Switch::mSaveData
	Il2CppObject * ___mSaveData_7;
	// System.String RHUtil_Switch::muntName
	String_t* ___muntName_8;
	// System.String RHUtil_Switch::fileName
	String_t* ___fileName_9;

public:
	inline static int32_t get_offset_of_mSaveData_7() { return static_cast<int32_t>(offsetof(RHUtil_Switch_t383705573_StaticFields, ___mSaveData_7)); }
	inline Il2CppObject * get_mSaveData_7() const { return ___mSaveData_7; }
	inline Il2CppObject ** get_address_of_mSaveData_7() { return &___mSaveData_7; }
	inline void set_mSaveData_7(Il2CppObject * value)
	{
		___mSaveData_7 = value;
		Il2CppCodeGenWriteBarrier(&___mSaveData_7, value);
	}

	inline static int32_t get_offset_of_muntName_8() { return static_cast<int32_t>(offsetof(RHUtil_Switch_t383705573_StaticFields, ___muntName_8)); }
	inline String_t* get_muntName_8() const { return ___muntName_8; }
	inline String_t** get_address_of_muntName_8() { return &___muntName_8; }
	inline void set_muntName_8(String_t* value)
	{
		___muntName_8 = value;
		Il2CppCodeGenWriteBarrier(&___muntName_8, value);
	}

	inline static int32_t get_offset_of_fileName_9() { return static_cast<int32_t>(offsetof(RHUtil_Switch_t383705573_StaticFields, ___fileName_9)); }
	inline String_t* get_fileName_9() const { return ___fileName_9; }
	inline String_t** get_address_of_fileName_9() { return &___fileName_9; }
	inline void set_fileName_9(String_t* value)
	{
		___fileName_9 = value;
		Il2CppCodeGenWriteBarrier(&___fileName_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
