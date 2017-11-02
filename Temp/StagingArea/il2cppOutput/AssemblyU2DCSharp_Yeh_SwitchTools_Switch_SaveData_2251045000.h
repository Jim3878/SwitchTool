#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_nn_account_Uid2972361106.h"
#include "AssemblyU2DCSharp_nn_fs_FileHandle1965634894.h"

// System.String
struct String_t;
// nn.hid.NpadId[]
struct NpadIdU5BU5D_t2986333413;
// Yeh.SwitchTools.Switch_SaveData`1<Sample>
struct Switch_SaveData_1_t2251045000;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yeh.SwitchTools.Switch_SaveData`1<Sample>
struct  Switch_SaveData_1_t2251045000  : public Il2CppObject
{
public:
	// nn.account.Uid Yeh.SwitchTools.Switch_SaveData`1::userId
	Uid_t2972361106  ___userId_0;
	// System.String Yeh.SwitchTools.Switch_SaveData`1::filePath
	String_t* ___filePath_3;
	// nn.fs.FileHandle Yeh.SwitchTools.Switch_SaveData`1::fileHandle
	FileHandle_t1965634894  ___fileHandle_4;
	// nn.hid.NpadId[] Yeh.SwitchTools.Switch_SaveData`1::npadIds
	NpadIdU5BU5D_t2986333413* ___npadIds_5;
	// System.Boolean Yeh.SwitchTools.Switch_SaveData`1::isOpen
	bool ___isOpen_7;
	// System.Object Yeh.SwitchTools.Switch_SaveData`1::<Source>k__BackingField
	Il2CppObject * ___U3CSourceU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_userId_0() { return static_cast<int32_t>(offsetof(Switch_SaveData_1_t2251045000, ___userId_0)); }
	inline Uid_t2972361106  get_userId_0() const { return ___userId_0; }
	inline Uid_t2972361106 * get_address_of_userId_0() { return &___userId_0; }
	inline void set_userId_0(Uid_t2972361106  value)
	{
		___userId_0 = value;
	}

	inline static int32_t get_offset_of_filePath_3() { return static_cast<int32_t>(offsetof(Switch_SaveData_1_t2251045000, ___filePath_3)); }
	inline String_t* get_filePath_3() const { return ___filePath_3; }
	inline String_t** get_address_of_filePath_3() { return &___filePath_3; }
	inline void set_filePath_3(String_t* value)
	{
		___filePath_3 = value;
		Il2CppCodeGenWriteBarrier(&___filePath_3, value);
	}

	inline static int32_t get_offset_of_fileHandle_4() { return static_cast<int32_t>(offsetof(Switch_SaveData_1_t2251045000, ___fileHandle_4)); }
	inline FileHandle_t1965634894  get_fileHandle_4() const { return ___fileHandle_4; }
	inline FileHandle_t1965634894 * get_address_of_fileHandle_4() { return &___fileHandle_4; }
	inline void set_fileHandle_4(FileHandle_t1965634894  value)
	{
		___fileHandle_4 = value;
	}

	inline static int32_t get_offset_of_npadIds_5() { return static_cast<int32_t>(offsetof(Switch_SaveData_1_t2251045000, ___npadIds_5)); }
	inline NpadIdU5BU5D_t2986333413* get_npadIds_5() const { return ___npadIds_5; }
	inline NpadIdU5BU5D_t2986333413** get_address_of_npadIds_5() { return &___npadIds_5; }
	inline void set_npadIds_5(NpadIdU5BU5D_t2986333413* value)
	{
		___npadIds_5 = value;
		Il2CppCodeGenWriteBarrier(&___npadIds_5, value);
	}

	inline static int32_t get_offset_of_isOpen_7() { return static_cast<int32_t>(offsetof(Switch_SaveData_1_t2251045000, ___isOpen_7)); }
	inline bool get_isOpen_7() const { return ___isOpen_7; }
	inline bool* get_address_of_isOpen_7() { return &___isOpen_7; }
	inline void set_isOpen_7(bool value)
	{
		___isOpen_7 = value;
	}

	inline static int32_t get_offset_of_U3CSourceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Switch_SaveData_1_t2251045000, ___U3CSourceU3Ek__BackingField_9)); }
	inline Il2CppObject * get_U3CSourceU3Ek__BackingField_9() const { return ___U3CSourceU3Ek__BackingField_9; }
	inline Il2CppObject ** get_address_of_U3CSourceU3Ek__BackingField_9() { return &___U3CSourceU3Ek__BackingField_9; }
	inline void set_U3CSourceU3Ek__BackingField_9(Il2CppObject * value)
	{
		___U3CSourceU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSourceU3Ek__BackingField_9, value);
	}
};

struct Switch_SaveData_1_t2251045000_StaticFields
{
public:
	// System.String Yeh.SwitchTools.Switch_SaveData`1::mountName
	String_t* ___mountName_1;
	// System.String Yeh.SwitchTools.Switch_SaveData`1::fileName
	String_t* ___fileName_2;
	// Yeh.SwitchTools.Switch_SaveData`1<T> Yeh.SwitchTools.Switch_SaveData`1::_instance
	Switch_SaveData_1_t2251045000 * ____instance_8;

public:
	inline static int32_t get_offset_of_mountName_1() { return static_cast<int32_t>(offsetof(Switch_SaveData_1_t2251045000_StaticFields, ___mountName_1)); }
	inline String_t* get_mountName_1() const { return ___mountName_1; }
	inline String_t** get_address_of_mountName_1() { return &___mountName_1; }
	inline void set_mountName_1(String_t* value)
	{
		___mountName_1 = value;
		Il2CppCodeGenWriteBarrier(&___mountName_1, value);
	}

	inline static int32_t get_offset_of_fileName_2() { return static_cast<int32_t>(offsetof(Switch_SaveData_1_t2251045000_StaticFields, ___fileName_2)); }
	inline String_t* get_fileName_2() const { return ___fileName_2; }
	inline String_t** get_address_of_fileName_2() { return &___fileName_2; }
	inline void set_fileName_2(String_t* value)
	{
		___fileName_2 = value;
		Il2CppCodeGenWriteBarrier(&___fileName_2, value);
	}

	inline static int32_t get_offset_of__instance_8() { return static_cast<int32_t>(offsetof(Switch_SaveData_1_t2251045000_StaticFields, ____instance_8)); }
	inline Switch_SaveData_1_t2251045000 * get__instance_8() const { return ____instance_8; }
	inline Switch_SaveData_1_t2251045000 ** get_address_of__instance_8() { return &____instance_8; }
	inline void set__instance_8(Switch_SaveData_1_t2251045000 * value)
	{
		____instance_8 = value;
		Il2CppCodeGenWriteBarrier(&____instance_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
