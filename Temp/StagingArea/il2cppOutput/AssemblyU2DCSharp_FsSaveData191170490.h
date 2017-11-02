#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_nn_account_Uid2972361106.h"
#include "AssemblyU2DCSharp_nn_fs_FileHandle1965634894.h"
#include "AssemblyU2DCSharp_nn_hid_NpadState2372155398.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.String
struct String_t;
// nn.hid.NpadId[]
struct NpadIdU5BU5D_t2986333413;
// Sample
struct Sample_t3942631702;
// Yeh.SwitchTools.Switch_SaveData`1<Sample>
struct Switch_SaveData_1_t2251045000;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FsSaveData
struct  FsSaveData_t191170490  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text FsSaveData::textComponent
	Text_t356221433 * ___textComponent_2;
	// System.Text.StringBuilder FsSaveData::stringBuilder
	StringBuilder_t1221177846 * ___stringBuilder_3;
	// nn.account.Uid FsSaveData::userId
	Uid_t2972361106  ___userId_4;
	// nn.fs.FileHandle FsSaveData::fileHandle
	FileHandle_t1965634894  ___fileHandle_10;
	// nn.hid.NpadState FsSaveData::npadState
	NpadState_t2372155398  ___npadState_11;
	// nn.hid.NpadId[] FsSaveData::npadIds
	NpadIdU5BU5D_t2986333413* ___npadIds_12;
	// Sample FsSaveData::counter
	Sample_t3942631702 * ___counter_15;
	// System.Int32 FsSaveData::cc
	int32_t ___cc_16;
	// System.Int32 FsSaveData::saveData
	int32_t ___saveData_17;
	// System.Int32 FsSaveData::loadData
	int32_t ___loadData_18;
	// Yeh.SwitchTools.Switch_SaveData`1<Sample> FsSaveData::pref
	Switch_SaveData_1_t2251045000 * ___pref_19;
	// System.String FsSaveData::key
	String_t* ___key_20;

public:
	inline static int32_t get_offset_of_textComponent_2() { return static_cast<int32_t>(offsetof(FsSaveData_t191170490, ___textComponent_2)); }
	inline Text_t356221433 * get_textComponent_2() const { return ___textComponent_2; }
	inline Text_t356221433 ** get_address_of_textComponent_2() { return &___textComponent_2; }
	inline void set_textComponent_2(Text_t356221433 * value)
	{
		___textComponent_2 = value;
		Il2CppCodeGenWriteBarrier(&___textComponent_2, value);
	}

	inline static int32_t get_offset_of_stringBuilder_3() { return static_cast<int32_t>(offsetof(FsSaveData_t191170490, ___stringBuilder_3)); }
	inline StringBuilder_t1221177846 * get_stringBuilder_3() const { return ___stringBuilder_3; }
	inline StringBuilder_t1221177846 ** get_address_of_stringBuilder_3() { return &___stringBuilder_3; }
	inline void set_stringBuilder_3(StringBuilder_t1221177846 * value)
	{
		___stringBuilder_3 = value;
		Il2CppCodeGenWriteBarrier(&___stringBuilder_3, value);
	}

	inline static int32_t get_offset_of_userId_4() { return static_cast<int32_t>(offsetof(FsSaveData_t191170490, ___userId_4)); }
	inline Uid_t2972361106  get_userId_4() const { return ___userId_4; }
	inline Uid_t2972361106 * get_address_of_userId_4() { return &___userId_4; }
	inline void set_userId_4(Uid_t2972361106  value)
	{
		___userId_4 = value;
	}

	inline static int32_t get_offset_of_fileHandle_10() { return static_cast<int32_t>(offsetof(FsSaveData_t191170490, ___fileHandle_10)); }
	inline FileHandle_t1965634894  get_fileHandle_10() const { return ___fileHandle_10; }
	inline FileHandle_t1965634894 * get_address_of_fileHandle_10() { return &___fileHandle_10; }
	inline void set_fileHandle_10(FileHandle_t1965634894  value)
	{
		___fileHandle_10 = value;
	}

	inline static int32_t get_offset_of_npadState_11() { return static_cast<int32_t>(offsetof(FsSaveData_t191170490, ___npadState_11)); }
	inline NpadState_t2372155398  get_npadState_11() const { return ___npadState_11; }
	inline NpadState_t2372155398 * get_address_of_npadState_11() { return &___npadState_11; }
	inline void set_npadState_11(NpadState_t2372155398  value)
	{
		___npadState_11 = value;
	}

	inline static int32_t get_offset_of_npadIds_12() { return static_cast<int32_t>(offsetof(FsSaveData_t191170490, ___npadIds_12)); }
	inline NpadIdU5BU5D_t2986333413* get_npadIds_12() const { return ___npadIds_12; }
	inline NpadIdU5BU5D_t2986333413** get_address_of_npadIds_12() { return &___npadIds_12; }
	inline void set_npadIds_12(NpadIdU5BU5D_t2986333413* value)
	{
		___npadIds_12 = value;
		Il2CppCodeGenWriteBarrier(&___npadIds_12, value);
	}

	inline static int32_t get_offset_of_counter_15() { return static_cast<int32_t>(offsetof(FsSaveData_t191170490, ___counter_15)); }
	inline Sample_t3942631702 * get_counter_15() const { return ___counter_15; }
	inline Sample_t3942631702 ** get_address_of_counter_15() { return &___counter_15; }
	inline void set_counter_15(Sample_t3942631702 * value)
	{
		___counter_15 = value;
		Il2CppCodeGenWriteBarrier(&___counter_15, value);
	}

	inline static int32_t get_offset_of_cc_16() { return static_cast<int32_t>(offsetof(FsSaveData_t191170490, ___cc_16)); }
	inline int32_t get_cc_16() const { return ___cc_16; }
	inline int32_t* get_address_of_cc_16() { return &___cc_16; }
	inline void set_cc_16(int32_t value)
	{
		___cc_16 = value;
	}

	inline static int32_t get_offset_of_saveData_17() { return static_cast<int32_t>(offsetof(FsSaveData_t191170490, ___saveData_17)); }
	inline int32_t get_saveData_17() const { return ___saveData_17; }
	inline int32_t* get_address_of_saveData_17() { return &___saveData_17; }
	inline void set_saveData_17(int32_t value)
	{
		___saveData_17 = value;
	}

	inline static int32_t get_offset_of_loadData_18() { return static_cast<int32_t>(offsetof(FsSaveData_t191170490, ___loadData_18)); }
	inline int32_t get_loadData_18() const { return ___loadData_18; }
	inline int32_t* get_address_of_loadData_18() { return &___loadData_18; }
	inline void set_loadData_18(int32_t value)
	{
		___loadData_18 = value;
	}

	inline static int32_t get_offset_of_pref_19() { return static_cast<int32_t>(offsetof(FsSaveData_t191170490, ___pref_19)); }
	inline Switch_SaveData_1_t2251045000 * get_pref_19() const { return ___pref_19; }
	inline Switch_SaveData_1_t2251045000 ** get_address_of_pref_19() { return &___pref_19; }
	inline void set_pref_19(Switch_SaveData_1_t2251045000 * value)
	{
		___pref_19 = value;
		Il2CppCodeGenWriteBarrier(&___pref_19, value);
	}

	inline static int32_t get_offset_of_key_20() { return static_cast<int32_t>(offsetof(FsSaveData_t191170490, ___key_20)); }
	inline String_t* get_key_20() const { return ___key_20; }
	inline String_t** get_address_of_key_20() { return &___key_20; }
	inline void set_key_20(String_t* value)
	{
		___key_20 = value;
		Il2CppCodeGenWriteBarrier(&___key_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
