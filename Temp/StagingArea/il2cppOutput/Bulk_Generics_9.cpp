#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "UnityEngine_UI_UnityEngine_UI_ListPool_1_gen1096682397.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1612828713.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen159234864.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen2979414464.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen1235855446.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen4056035046.h"
#include "System_System_Collections_Generic_Stack_1_gen3777177449.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Yeh_SwitchTools_Switch_SaveData_1997862593.h"
#include "AssemblyU2DCSharp_nn_Result3781601813.h"
#include "AssemblyU2DCSharp_nn_account_UserHandle494615319.h"
#include "AssemblyU2DCSharp_nn_account_Uid2972361106.h"
#include "AssemblyU2DCSharp_nn_fs_FileHandle1965634894.h"
#include "AssemblyU2DCSharp_nn_hid_NpadId4213705196.h"
#include "AssemblyU2DCSharp_nn_fs_EntryType783714102.h"
#include "AssemblyU2DCSharp_nn_fs_OpenFileMode931884339.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_Int64909078037.h"
#include "mscorlib_System_Byte3683104436.h"
#include "mscorlib_System_IO_MemoryStream743994179.h"
#include "mscorlib_System_IO_BinaryReader2491843768.h"
#include "AssemblyU2DCSharp_nn_fs_FileSystem2257963377.h"
#include "AssemblyU2DCSharp_nn_ErrorRange305124927.h"
#include "AssemblyU2DCSharp_nn_fs_WriteOption1290167740.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B1866979105.h"

// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t1612828713;
// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t1235855446;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t4056035046;
// System.Object
struct Il2CppObject;
// Yeh.SwitchTools.Switch_SaveData`1<System.Object>
struct Switch_SaveData_1_t997862593;
// System.String
struct String_t;
// nn.ErrorRange
struct ErrorRange_t305124927;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.IO.BinaryReader
struct BinaryReader_t2491843768;
// System.IO.Stream
struct Stream_t3255436806;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t1866979105;
// System.Array
struct Il2CppArray;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral273729679;
extern const uint32_t ObjectPool_1_Release_m1615270002_MetadataUsageId;
extern Il2CppClass* FileHandle_t1965634894_il2cpp_TypeInfo_var;
extern Il2CppClass* NpadIdU5BU5D_t2986333413_il2cpp_TypeInfo_var;
extern Il2CppClass* Il2CppObject_il2cpp_TypeInfo_var;
extern Il2CppClass* Account_t2499231255_il2cpp_TypeInfo_var;
extern Il2CppClass* UserHandle_t494615319_il2cpp_TypeInfo_var;
extern Il2CppClass* SaveData_t1419429939_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3632215114;
extern const uint32_t Switch_SaveData_1__ctor_m39987587_MetadataUsageId;
extern Il2CppClass* FileSystem_t2257963377_il2cpp_TypeInfo_var;
extern const uint32_t Switch_SaveData_1_Close_m3540589325_MetadataUsageId;
extern const uint32_t Switch_SaveData_1_Open_m520806127_MetadataUsageId;
extern Il2CppClass* ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var;
extern Il2CppClass* MemoryStream_t743994179_il2cpp_TypeInfo_var;
extern Il2CppClass* BinaryReader_t2491843768_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t2427283555_il2cpp_TypeInfo_var;
extern const uint32_t Switch_SaveData_1_GetString_m3481675963_MetadataUsageId;
extern const uint32_t Switch_SaveData_1_GetByte_m3127918815_MetadataUsageId;
extern Il2CppClass* BinaryFormatter_t1866979105_il2cpp_TypeInfo_var;
extern const MethodInfo* Array_Resize_TisByte_t3683104436_m4242698446_MethodInfo_var;
extern const uint32_t Switch_SaveData_1_Save_m2537965706_MetadataUsageId;
extern const uint32_t Switch_SaveData_1_Load_m1981043488_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral2402480901;
extern Il2CppCodeGenString* _stringLiteral3738695445;
extern const uint32_t Switch_SaveData_1__cctor_m2489610820_MetadataUsageId;

// nn.hid.NpadId[]
struct NpadIdU5BU5D_t2986333413  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_t3397334013  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Array::Resize<System.Byte>(!!0[]&,System.Int32)
extern "C"  void Array_Resize_TisByte_t3683104436_m4242698446_gshared (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013** p0, int32_t p1, const MethodInfo* method);

// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m2551263788 (Il2CppObject * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Object::ReferenceEquals(System.Object,System.Object)
extern "C"  bool Object_ReferenceEquals_m3900584722 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, Il2CppObject * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m3715728798 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void nn.account.Account::Initialize()
extern "C"  void Account_Initialize_m3731655343 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// nn.Result nn.account.Account::OpenPreselectedUser(nn.account.UserHandle&)
extern "C"  Result_t3781601813  Account_OpenPreselectedUser_m1210218894 (Il2CppObject * __this /* static, unused */, UserHandle_t494615319 * ___pOutHandle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// nn.Result nn.account.Account::GetUserId(nn.account.Uid&,nn.account.UserHandle)
extern "C"  Result_t3781601813  Account_GetUserId_m3975101502 (Il2CppObject * __this /* static, unused */, Uid_t2972361106 * ___pOut0, UserHandle_t494615319  ___handle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// nn.Result nn.fs.SaveData::Mount(System.String,nn.account.Uid)
extern "C"  Result_t3781601813  SaveData_Mount_m1927070781 (Il2CppObject * __this /* static, unused */, String_t* ___name0, Uid_t2972361106  ___user1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void nn.Result::abortUnlessSuccess()
extern "C"  void Result_abortUnlessSuccess_m794763603 (Result_t3781601813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C"  String_t* String_Format_m1811873526 (Il2CppObject * __this /* static, unused */, String_t* p0, Il2CppObject * p1, Il2CppObject * p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void nn.fs.FileSystem::Unmount(System.String)
extern "C"  void FileSystem_Unmount_m667315337 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// nn.Result nn.fs.FileSystem::GetEntryType(nn.fs.EntryType&,System.String)
extern "C"  Result_t3781601813  FileSystem_GetEntryType_m2098803304 (Il2CppObject * __this /* static, unused */, int32_t* ___outValue0, String_t* ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean nn.ErrorRange::Includes(nn.Result)
extern "C"  bool ErrorRange_Includes_m3831401200 (ErrorRange_t305124927 * __this, Result_t3781601813  ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// nn.Result nn.fs.File::Open(nn.fs.FileHandle&,System.String,nn.fs.OpenFileMode)
extern "C"  Result_t3781601813  File_Open_m1924846877 (Il2CppObject * __this /* static, unused */, FileHandle_t1965634894 * ___outValue0, String_t* ___path1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// nn.Result nn.fs.File::GetSize(System.Int64&,nn.fs.FileHandle)
extern "C"  Result_t3781601813  File_GetSize_m2071092106 (Il2CppObject * __this /* static, unused */, int64_t* ___outValue0, FileHandle_t1965634894  ___handle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// nn.Result nn.fs.File::Read(nn.fs.FileHandle,System.Int64,System.Byte[],System.Int64)
extern "C"  Result_t3781601813  File_Read_m977585544 (Il2CppObject * __this /* static, unused */, FileHandle_t1965634894  ___handle0, int64_t ___offset1, ByteU5BU5D_t3397334013* ___buffer2, int64_t ___size3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void nn.fs.File::Close(nn.fs.FileHandle)
extern "C"  void File_Close_m1929692247 (Il2CppObject * __this /* static, unused */, FileHandle_t1965634894  ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
extern "C"  void MemoryStream__ctor_m4073175573 (MemoryStream_t743994179 * __this, ByteU5BU5D_t3397334013* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
extern "C"  void BinaryReader__ctor_m4190061006 (BinaryReader_t2491843768 * __this, Stream_t3255436806 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
extern "C"  void BinaryFormatter__ctor_m4171832002 (BinaryFormatter_t1866979105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor()
extern "C"  void MemoryStream__ctor_m1043059966 (MemoryStream_t743994179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object)
extern "C"  void BinaryFormatter_Serialize_m433301673 (BinaryFormatter_t1866979105 * __this, Stream_t3255436806 * p0, Il2CppObject * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Resize<System.Byte>(!!0[]&,System.Int32)
#define Array_Resize_TisByte_t3683104436_m4242698446(__this /* static, unused */, p0, p1, method) ((  void (*) (Il2CppObject * /* static, unused */, ByteU5BU5D_t3397334013**, int32_t, const MethodInfo*))Array_Resize_TisByte_t3683104436_m4242698446_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void UnityEngine.Switch.Notification::EnterExitRequestHandlingSection()
extern "C"  void Notification_EnterExitRequestHandlingSection_m1541497651 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// nn.Result nn.fs.File::Delete(System.String)
extern "C"  Result_t3781601813  File_Delete_m2226978171 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// nn.Result nn.fs.File::Create(System.String,System.Int64)
extern "C"  Result_t3781601813  File_Create_m3542780336 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int64_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Array::get_LongLength()
extern "C"  int64_t Array_get_LongLength_m2538298538 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// nn.Result nn.fs.File::Write(nn.fs.FileHandle,System.Int64,System.Byte[],System.Int64,nn.fs.WriteOption)
extern "C"  Result_t3781601813  File_Write_m1266405810 (Il2CppObject * __this /* static, unused */, FileHandle_t1965634894  ___handle0, int64_t ___offset1, ByteU5BU5D_t3397334013* ___buffer2, int64_t ___size3, int32_t ___option4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// nn.Result nn.fs.SaveData::Commit(System.String)
extern "C"  Result_t3781601813  SaveData_Commit_m589386000 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Switch.Notification::LeaveExitRequestHandlingSection()
extern "C"  void Notification_LeaveExitRequestHandlingSection_m2011232702 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
extern "C"  Il2CppObject * BinaryFormatter_Deserialize_m2771853471 (BinaryFormatter_t1866979105 * __this, Stream_t3255436806 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Get()
extern "C"  List_1_t1612828713 * ListPool_1_Get_m3009093805_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	List_1_t1612828713 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectPool_1_t159234864 * L_0 = ((ListPool_1_t1096682397_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->get_s_ListPool_0();
		List_1_t1612828713 * L_1 = ((  List_1_t1612828713 * (*) (ObjectPool_1_t159234864 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->methodPointer)((ObjectPool_1_t159234864 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t1612828713 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t1612828713 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Release(System.Collections.Generic.List`1<T>)
extern "C"  void ListPool_1_Release_m1119005941_gshared (Il2CppObject * __this /* static, unused */, List_1_t1612828713 * ___toRelease0, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectPool_1_t159234864 * L_0 = ((ListPool_1_t1096682397_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->get_s_ListPool_0();
		List_1_t1612828713 * L_1 = ___toRelease0;
		((  void (*) (ObjectPool_1_t159234864 *, List_1_t1612828713 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t159234864 *)L_0, (List_1_t1612828713 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::.cctor()
extern "C"  void ListPool_1__cctor_m1474516473_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		IntPtr_t L_0;
		L_0.set_m_value_0((void*)(void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		UnityAction_1_t2979414464 * L_1 = (UnityAction_1_t2979414464 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		((  void (*) (UnityAction_1_t2979414464 *, Il2CppObject *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->methodPointer)(L_1, (Il2CppObject *)NULL, (IntPtr_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		ObjectPool_1_t159234864 * L_2 = (ObjectPool_1_t159234864 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		((  void (*) (ObjectPool_1_t159234864 *, UnityAction_1_t2979414464 *, UnityAction_1_t2979414464 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->methodPointer)(L_2, (UnityAction_1_t2979414464 *)NULL, (UnityAction_1_t2979414464 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		((ListPool_1_t1096682397_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->set_s_ListPool_0(L_2);
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::<s_ListPool>m__0(System.Collections.Generic.List`1<T>)
extern "C"  void ListPool_1_U3Cs_ListPoolU3Em__0_m3090281341_gshared (Il2CppObject * __this /* static, unused */, List_1_t1612828713 * ___l0, const MethodInfo* method)
{
	{
		List_1_t1612828713 * L_0 = ___l0;
		((  void (*) (List_1_t1612828713 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->methodPointer)((List_1_t1612828713 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C"  void ObjectPool_1__ctor_m1532275833_gshared (ObjectPool_1_t1235855446 * __this, UnityAction_1_t4056035046 * ___actionOnGet0, UnityAction_1_t4056035046 * ___actionOnRelease1, const MethodInfo* method)
{
	{
		Stack_1_t3777177449 * L_0 = (Stack_1_t3777177449 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 0));
		((  void (*) (Stack_1_t3777177449 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		__this->set_m_Stack_0(L_0);
		Object__ctor_m2551263788((Il2CppObject *)__this, /*hidden argument*/NULL);
		UnityAction_1_t4056035046 * L_1 = ___actionOnGet0;
		__this->set_m_ActionOnGet_1(L_1);
		UnityAction_1_t4056035046 * L_2 = ___actionOnRelease1;
		__this->set_m_ActionOnRelease_2(L_2);
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C"  int32_t ObjectPool_1_get_countAll_m4217365918_gshared (ObjectPool_1_t1235855446 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_U3CcountAllU3Ek__BackingField_3();
		V_0 = (int32_t)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C"  void ObjectPool_1_set_countAll_m1742773675_gshared (ObjectPool_1_t1235855446 * __this, int32_t ___value0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CcountAllU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C"  int32_t ObjectPool_1_get_countActive_m2655657865_gshared (ObjectPool_1_t1235855446 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ((  int32_t (*) (ObjectPool_1_t1235855446 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)((ObjectPool_1_t1235855446 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		int32_t L_1 = ((  int32_t (*) (ObjectPool_1_t1235855446 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3)->methodPointer)((ObjectPool_1_t1235855446 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3));
		V_0 = (int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1));
		goto IL_0014;
	}

IL_0014:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C"  int32_t ObjectPool_1_get_countInactive_m763736764_gshared (ObjectPool_1_t1235855446 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Stack_1_t3777177449 * L_0 = (Stack_1_t3777177449 *)__this->get_m_Stack_0();
		int32_t L_1 = ((  int32_t (*) (Stack_1_t3777177449 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)((Stack_1_t3777177449 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		V_0 = (int32_t)L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C"  Il2CppObject * ObjectPool_1_Get_m3724675538_gshared (ObjectPool_1_t1235855446 * __this, const MethodInfo* method)
{
	Il2CppObject * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	{
		Stack_1_t3777177449 * L_0 = (Stack_1_t3777177449 *)__this->get_m_Stack_0();
		int32_t L_1 = ((  int32_t (*) (Stack_1_t3777177449 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)((Stack_1_t3777177449 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		Il2CppObject * L_2 = ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5));
		V_0 = (Il2CppObject *)L_2;
		int32_t L_3 = ((  int32_t (*) (ObjectPool_1_t1235855446 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)((ObjectPool_1_t1235855446 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		((  void (*) (ObjectPool_1_t1235855446 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6)->methodPointer)((ObjectPool_1_t1235855446 *)__this, (int32_t)((int32_t)((int32_t)L_3+(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6));
		goto IL_003a;
	}

IL_002c:
	{
		Stack_1_t3777177449 * L_4 = (Stack_1_t3777177449 *)__this->get_m_Stack_0();
		Il2CppObject * L_5 = ((  Il2CppObject * (*) (Stack_1_t3777177449 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7)->methodPointer)((Stack_1_t3777177449 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7));
		V_0 = (Il2CppObject *)L_5;
	}

IL_003a:
	{
		UnityAction_1_t4056035046 * L_6 = (UnityAction_1_t4056035046 *)__this->get_m_ActionOnGet_1();
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		UnityAction_1_t4056035046 * L_7 = (UnityAction_1_t4056035046 *)__this->get_m_ActionOnGet_1();
		Il2CppObject * L_8 = V_0;
		((  void (*) (UnityAction_1_t4056035046 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->methodPointer)((UnityAction_1_t4056035046 *)L_7, (Il2CppObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
	}

IL_0051:
	{
		Il2CppObject * L_9 = V_0;
		V_1 = (Il2CppObject *)L_9;
		goto IL_0058;
	}

IL_0058:
	{
		Il2CppObject * L_10 = V_1;
		return L_10;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C"  void ObjectPool_1_Release_m1615270002_gshared (ObjectPool_1_t1235855446 * __this, Il2CppObject * ___element0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1_Release_m1615270002_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_t3777177449 * L_0 = (Stack_1_t3777177449 *)__this->get_m_Stack_0();
		int32_t L_1 = ((  int32_t (*) (Stack_1_t3777177449 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)((Stack_1_t3777177449 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Stack_1_t3777177449 * L_2 = (Stack_1_t3777177449 *)__this->get_m_Stack_0();
		Il2CppObject * L_3 = ((  Il2CppObject * (*) (Stack_1_t3777177449 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 9)->methodPointer)((Stack_1_t3777177449 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 9));
		Il2CppObject * L_4 = ___element0;
		bool L_5 = Object_ReferenceEquals_m3900584722(NULL /*static, unused*/, (Il2CppObject *)L_3, (Il2CppObject *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_LogError_m3715728798(NULL /*static, unused*/, (Il2CppObject *)_stringLiteral273729679, /*hidden argument*/NULL);
	}

IL_003c:
	{
		UnityAction_1_t4056035046 * L_6 = (UnityAction_1_t4056035046 *)__this->get_m_ActionOnRelease_2();
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		UnityAction_1_t4056035046 * L_7 = (UnityAction_1_t4056035046 *)__this->get_m_ActionOnRelease_2();
		Il2CppObject * L_8 = ___element0;
		((  void (*) (UnityAction_1_t4056035046 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->methodPointer)((UnityAction_1_t4056035046 *)L_7, (Il2CppObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
	}

IL_0053:
	{
		Stack_1_t3777177449 * L_9 = (Stack_1_t3777177449 *)__this->get_m_Stack_0();
		Il2CppObject * L_10 = ___element0;
		((  void (*) (Stack_1_t3777177449 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 11)->methodPointer)((Stack_1_t3777177449 *)L_9, (Il2CppObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 11));
		return;
	}
}
// System.Void Yeh.SwitchTools.Switch_SaveData`1<System.Object>::.ctor(System.String,System.String)
extern "C"  void Switch_SaveData_1__ctor_m39987587_gshared (Switch_SaveData_1_t997862593 * __this, String_t* ___mountName0, String_t* ___fileName1, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Switch_SaveData_1__ctor_m39987587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FileHandle_t1965634894  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Il2CppObject * V_1 = NULL;
	UserHandle_t494615319  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Result_t3781601813  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		Initobj (FileHandle_t1965634894_il2cpp_TypeInfo_var, (&V_0));
		FileHandle_t1965634894  L_0 = V_0;
		__this->set_fileHandle_4(L_0);
		NpadIdU5BU5D_t2986333413* L_1 = (NpadIdU5BU5D_t2986333413*)((NpadIdU5BU5D_t2986333413*)SZArrayNew(NpadIdU5BU5D_t2986333413_il2cpp_TypeInfo_var, (uint32_t)2));
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)32));
		__this->set_npadIds_5(L_1);
		Object__ctor_m2551263788((Il2CppObject *)__this, /*hidden argument*/NULL);
		__this->set_isOpen_7((bool)1);
		Initobj (Il2CppObject_il2cpp_TypeInfo_var, (&V_1));
		Il2CppObject * L_2 = V_1;
		((  void (*) (Switch_SaveData_1_t997862593 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->methodPointer)((Switch_SaveData_1_t997862593 *)__this, (Il2CppObject *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		String_t* L_3 = ___mountName0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2));
		((Switch_SaveData_1_t997862593_StaticFields*)IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2)->static_fields)->set_mountName_1(L_3);
		String_t* L_4 = ___fileName1;
		((Switch_SaveData_1_t997862593_StaticFields*)IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2)->static_fields)->set_fileName_2(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Account_t2499231255_il2cpp_TypeInfo_var);
		Account_Initialize_m3731655343(NULL /*static, unused*/, /*hidden argument*/NULL);
		Initobj (UserHandle_t494615319_il2cpp_TypeInfo_var, (&V_2));
		Account_OpenPreselectedUser_m1210218894(NULL /*static, unused*/, (UserHandle_t494615319 *)(&V_2), /*hidden argument*/NULL);
		Uid_t2972361106 * L_5 = (Uid_t2972361106 *)__this->get_address_of_userId_0();
		UserHandle_t494615319  L_6 = V_2;
		Account_GetUserId_m3975101502(NULL /*static, unused*/, (Uid_t2972361106 *)L_5, (UserHandle_t494615319 )L_6, /*hidden argument*/NULL);
		String_t* L_7 = ___mountName0;
		Uid_t2972361106  L_8 = (Uid_t2972361106 )__this->get_userId_0();
		IL2CPP_RUNTIME_CLASS_INIT(SaveData_t1419429939_il2cpp_TypeInfo_var);
		Result_t3781601813  L_9 = SaveData_Mount_m1927070781(NULL /*static, unused*/, (String_t*)L_7, (Uid_t2972361106 )L_8, /*hidden argument*/NULL);
		V_3 = (Result_t3781601813 )L_9;
		Result_abortUnlessSuccess_m794763603((Result_t3781601813 *)(&V_3), /*hidden argument*/NULL);
		String_t* L_10 = ___mountName0;
		String_t* L_11 = ___fileName1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Format_m1811873526(NULL /*static, unused*/, (String_t*)_stringLiteral3632215114, (Il2CppObject *)L_10, (Il2CppObject *)L_11, /*hidden argument*/NULL);
		__this->set_filePath_3(L_12);
		return;
	}
}
// System.Object Yeh.SwitchTools.Switch_SaveData`1<System.Object>::get_Source()
extern "C"  Il2CppObject * Switch_SaveData_1_get_Source_m3003135266_gshared (Switch_SaveData_1_t997862593 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = (Il2CppObject *)__this->get_U3CSourceU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Yeh.SwitchTools.Switch_SaveData`1<System.Object>::set_Source(System.Object)
extern "C"  void Switch_SaveData_1_set_Source_m3616062489_gshared (Switch_SaveData_1_t997862593 * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___value0;
		__this->set_U3CSourceU3Ek__BackingField_9(L_0);
		return;
	}
}
// Yeh.SwitchTools.Switch_SaveData`1<T> Yeh.SwitchTools.Switch_SaveData`1<System.Object>::getInstance()
extern "C"  Switch_SaveData_1_t997862593 * Switch_SaveData_1_getInstance_m3800466225_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Switch_SaveData_1_t997862593 * L_0 = ((Switch_SaveData_1_t997862593_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->get__instance_8();
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		String_t* L_1 = ((Switch_SaveData_1_t997862593_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->get_mountName_1();
		String_t* L_2 = ((Switch_SaveData_1_t997862593_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->get_fileName_2();
		Switch_SaveData_1_t997862593 * L_3 = (Switch_SaveData_1_t997862593 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		((  void (*) (Switch_SaveData_1_t997862593 *, String_t*, String_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->methodPointer)(L_3, (String_t*)L_1, (String_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		((Switch_SaveData_1_t997862593_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->set__instance_8(L_3);
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Switch_SaveData_1_t997862593 * L_4 = ((Switch_SaveData_1_t997862593_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->get__instance_8();
		return L_4;
	}
}
// Yeh.SwitchTools.Switch_SaveData`1<T> Yeh.SwitchTools.Switch_SaveData`1<System.Object>::getInstance(System.String)
extern "C"  Switch_SaveData_1_t997862593 * Switch_SaveData_1_getInstance_m474518243_gshared (Il2CppObject * __this /* static, unused */, String_t* ___dataName0, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Switch_SaveData_1_t997862593 * L_0 = ((Switch_SaveData_1_t997862593_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->get__instance_8();
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_1 = ___dataName0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		String_t* L_2 = ((Switch_SaveData_1_t997862593_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->get_fileName_2();
		Switch_SaveData_1_t997862593 * L_3 = (Switch_SaveData_1_t997862593 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		((  void (*) (Switch_SaveData_1_t997862593 *, String_t*, String_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->methodPointer)(L_3, (String_t*)L_1, (String_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		((Switch_SaveData_1_t997862593_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->set__instance_8(L_3);
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Switch_SaveData_1_t997862593 * L_4 = ((Switch_SaveData_1_t997862593_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->get__instance_8();
		return L_4;
	}
}
// System.Void Yeh.SwitchTools.Switch_SaveData`1<System.Object>::Close()
extern "C"  void Switch_SaveData_1_Close_m3540589325_gshared (Switch_SaveData_1_t997862593 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Switch_SaveData_1_Close_m3540589325_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = (bool)__this->get_isOpen_7();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		__this->set_isOpen_7((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2));
		String_t* L_1 = ((Switch_SaveData_1_t997862593_StaticFields*)IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2)->static_fields)->get_mountName_1();
		IL2CPP_RUNTIME_CLASS_INIT(FileSystem_t2257963377_il2cpp_TypeInfo_var);
		FileSystem_Unmount_m667315337(NULL /*static, unused*/, (String_t*)L_1, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void Yeh.SwitchTools.Switch_SaveData`1<System.Object>::Open()
extern "C"  void Switch_SaveData_1_Open_m520806127_gshared (Switch_SaveData_1_t997862593 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Switch_SaveData_1_Open_m520806127_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Result_t3781601813  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = (bool)__this->get_isOpen_7();
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		__this->set_isOpen_7((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2));
		String_t* L_1 = ((Switch_SaveData_1_t997862593_StaticFields*)IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2)->static_fields)->get_mountName_1();
		Uid_t2972361106  L_2 = (Uid_t2972361106 )__this->get_userId_0();
		IL2CPP_RUNTIME_CLASS_INIT(SaveData_t1419429939_il2cpp_TypeInfo_var);
		Result_t3781601813  L_3 = SaveData_Mount_m1927070781(NULL /*static, unused*/, (String_t*)L_1, (Uid_t2972361106 )L_2, /*hidden argument*/NULL);
		V_0 = (Result_t3781601813 )L_3;
		Result_abortUnlessSuccess_m794763603((Result_t3781601813 *)(&V_0), /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.String Yeh.SwitchTools.Switch_SaveData`1<System.Object>::GetString(System.String)
extern "C"  String_t* Switch_SaveData_1_GetString_m3481675963_gshared (Switch_SaveData_1_t997862593 * __this, String_t* ___key0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Switch_SaveData_1_GetString_m3481675963_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Result_t3781601813  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int64_t V_3 = 0;
	ByteU5BU5D_t3397334013* V_4 = NULL;
	MemoryStream_t743994179 * V_5 = NULL;
	BinaryReader_t2491843768 * V_6 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2));
		String_t* L_0 = ((Switch_SaveData_1_t997862593_StaticFields*)IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2)->static_fields)->get_mountName_1();
		String_t* L_1 = ___key0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m1811873526(NULL /*static, unused*/, (String_t*)_stringLiteral3632215114, (Il2CppObject *)L_0, (Il2CppObject *)L_1, /*hidden argument*/NULL);
		__this->set_filePath_3(L_2);
		V_1 = (int32_t)0;
		String_t* L_3 = (String_t*)__this->get_filePath_3();
		IL2CPP_RUNTIME_CLASS_INIT(FileSystem_t2257963377_il2cpp_TypeInfo_var);
		Result_t3781601813  L_4 = FileSystem_GetEntryType_m2098803304(NULL /*static, unused*/, (int32_t*)(&V_1), (String_t*)L_3, /*hidden argument*/NULL);
		V_2 = (Result_t3781601813 )L_4;
		ErrorRange_t305124927 * L_5 = ((FileSystem_t2257963377_StaticFields*)FileSystem_t2257963377_il2cpp_TypeInfo_var->static_fields)->get_ResultPathNotFound_2();
		Result_t3781601813  L_6 = V_2;
		bool L_7 = ErrorRange_Includes_m3831401200((ErrorRange_t305124927 *)L_5, (Result_t3781601813 )L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		return L_8;
	}

IL_003c:
	{
		Result_abortUnlessSuccess_m794763603((Result_t3781601813 *)(&V_2), /*hidden argument*/NULL);
		FileHandle_t1965634894 * L_9 = (FileHandle_t1965634894 *)__this->get_address_of_fileHandle_4();
		String_t* L_10 = (String_t*)__this->get_filePath_3();
		Result_t3781601813  L_11 = File_Open_m1924846877(NULL /*static, unused*/, (FileHandle_t1965634894 *)L_9, (String_t*)L_10, (int32_t)1, /*hidden argument*/NULL);
		V_2 = (Result_t3781601813 )L_11;
		Result_abortUnlessSuccess_m794763603((Result_t3781601813 *)(&V_2), /*hidden argument*/NULL);
		V_3 = (int64_t)(((int64_t)((int64_t)0)));
		FileHandle_t1965634894  L_12 = (FileHandle_t1965634894 )__this->get_fileHandle_4();
		Result_t3781601813  L_13 = File_GetSize_m2071092106(NULL /*static, unused*/, (int64_t*)(&V_3), (FileHandle_t1965634894 )L_12, /*hidden argument*/NULL);
		V_2 = (Result_t3781601813 )L_13;
		Result_abortUnlessSuccess_m794763603((Result_t3781601813 *)(&V_2), /*hidden argument*/NULL);
		int64_t L_14 = V_3;
		if ((int64_t)(L_14) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		V_4 = (ByteU5BU5D_t3397334013*)((ByteU5BU5D_t3397334013*)SZArrayNew(ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_14))));
		FileHandle_t1965634894  L_15 = (FileHandle_t1965634894 )__this->get_fileHandle_4();
		ByteU5BU5D_t3397334013* L_16 = V_4;
		int64_t L_17 = V_3;
		Result_t3781601813  L_18 = File_Read_m977585544(NULL /*static, unused*/, (FileHandle_t1965634894 )L_15, (int64_t)(((int64_t)((int64_t)0))), (ByteU5BU5D_t3397334013*)L_16, (int64_t)L_17, /*hidden argument*/NULL);
		V_2 = (Result_t3781601813 )L_18;
		Result_abortUnlessSuccess_m794763603((Result_t3781601813 *)(&V_2), /*hidden argument*/NULL);
		FileHandle_t1965634894  L_19 = (FileHandle_t1965634894 )__this->get_fileHandle_4();
		File_Close_m1929692247(NULL /*static, unused*/, (FileHandle_t1965634894 )L_19, /*hidden argument*/NULL);
		ByteU5BU5D_t3397334013* L_20 = V_4;
		MemoryStream_t743994179 * L_21 = (MemoryStream_t743994179 *)il2cpp_codegen_object_new(MemoryStream_t743994179_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m4073175573(L_21, (ByteU5BU5D_t3397334013*)L_20, /*hidden argument*/NULL);
		V_5 = (MemoryStream_t743994179 *)L_21;
	}

IL_00aa:
	try
	{ // begin try (depth: 1)
		MemoryStream_t743994179 * L_22 = V_5;
		BinaryReader_t2491843768 * L_23 = (BinaryReader_t2491843768 *)il2cpp_codegen_object_new(BinaryReader_t2491843768_il2cpp_TypeInfo_var);
		BinaryReader__ctor_m4190061006(L_23, (Stream_t3255436806 *)L_22, /*hidden argument*/NULL);
		V_6 = (BinaryReader_t2491843768 *)L_23;
		BinaryReader_t2491843768 * L_24 = V_6;
		String_t* L_25 = VirtFuncInvoker0< String_t* >::Invoke(22 /* System.String System.IO.BinaryReader::ReadString() */, (BinaryReader_t2491843768 *)L_24);
		V_0 = (String_t*)L_25;
		IL2CPP_LEAVE(0xCF, FINALLY_00c0);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_00c0;
	}

FINALLY_00c0:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t743994179 * L_26 = V_5;
			if (!L_26)
			{
				goto IL_00ce;
			}
		}

IL_00c7:
		{
			MemoryStream_t743994179 * L_27 = V_5;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, (Il2CppObject *)L_27);
		}

IL_00ce:
		{
			IL2CPP_END_FINALLY(192)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(192)
	{
		IL2CPP_JUMP_TBL(0xCF, IL_00cf)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_00cf:
	{
		String_t* L_28 = V_0;
		return L_28;
	}
}
// System.Byte[] Yeh.SwitchTools.Switch_SaveData`1<System.Object>::GetByte()
extern "C"  ByteU5BU5D_t3397334013* Switch_SaveData_1_GetByte_m3127918815_gshared (Switch_SaveData_1_t997862593 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Switch_SaveData_1_GetByte_m3127918815_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Result_t3781601813  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int64_t V_2 = 0;
	ByteU5BU5D_t3397334013* V_3 = NULL;
	MemoryStream_t743994179 * V_4 = NULL;
	BinaryReader_t2491843768 * V_5 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (int32_t)0;
		String_t* L_0 = (String_t*)__this->get_filePath_3();
		IL2CPP_RUNTIME_CLASS_INIT(FileSystem_t2257963377_il2cpp_TypeInfo_var);
		Result_t3781601813  L_1 = FileSystem_GetEntryType_m2098803304(NULL /*static, unused*/, (int32_t*)(&V_0), (String_t*)L_0, /*hidden argument*/NULL);
		V_1 = (Result_t3781601813 )L_1;
		ErrorRange_t305124927 * L_2 = ((FileSystem_t2257963377_StaticFields*)FileSystem_t2257963377_il2cpp_TypeInfo_var->static_fields)->get_ResultPathNotFound_2();
		Result_t3781601813  L_3 = V_1;
		bool L_4 = ErrorRange_Includes_m3831401200((ErrorRange_t305124927 *)L_2, (Result_t3781601813 )L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		return (ByteU5BU5D_t3397334013*)NULL;
	}

IL_0022:
	{
		Result_abortUnlessSuccess_m794763603((Result_t3781601813 *)(&V_1), /*hidden argument*/NULL);
		FileHandle_t1965634894 * L_5 = (FileHandle_t1965634894 *)__this->get_address_of_fileHandle_4();
		String_t* L_6 = (String_t*)__this->get_filePath_3();
		Result_t3781601813  L_7 = File_Open_m1924846877(NULL /*static, unused*/, (FileHandle_t1965634894 *)L_5, (String_t*)L_6, (int32_t)1, /*hidden argument*/NULL);
		V_1 = (Result_t3781601813 )L_7;
		Result_abortUnlessSuccess_m794763603((Result_t3781601813 *)(&V_1), /*hidden argument*/NULL);
		V_2 = (int64_t)(((int64_t)((int64_t)0)));
		FileHandle_t1965634894  L_8 = (FileHandle_t1965634894 )__this->get_fileHandle_4();
		Result_t3781601813  L_9 = File_GetSize_m2071092106(NULL /*static, unused*/, (int64_t*)(&V_2), (FileHandle_t1965634894 )L_8, /*hidden argument*/NULL);
		V_1 = (Result_t3781601813 )L_9;
		Result_abortUnlessSuccess_m794763603((Result_t3781601813 *)(&V_1), /*hidden argument*/NULL);
		int64_t L_10 = V_2;
		if ((int64_t)(L_10) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		V_3 = (ByteU5BU5D_t3397334013*)((ByteU5BU5D_t3397334013*)SZArrayNew(ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_10))));
		FileHandle_t1965634894  L_11 = (FileHandle_t1965634894 )__this->get_fileHandle_4();
		ByteU5BU5D_t3397334013* L_12 = V_3;
		int64_t L_13 = V_2;
		Result_t3781601813  L_14 = File_Read_m977585544(NULL /*static, unused*/, (FileHandle_t1965634894 )L_11, (int64_t)(((int64_t)((int64_t)0))), (ByteU5BU5D_t3397334013*)L_12, (int64_t)L_13, /*hidden argument*/NULL);
		V_1 = (Result_t3781601813 )L_14;
		Result_abortUnlessSuccess_m794763603((Result_t3781601813 *)(&V_1), /*hidden argument*/NULL);
		FileHandle_t1965634894  L_15 = (FileHandle_t1965634894 )__this->get_fileHandle_4();
		File_Close_m1929692247(NULL /*static, unused*/, (FileHandle_t1965634894 )L_15, /*hidden argument*/NULL);
		ByteU5BU5D_t3397334013* L_16 = V_3;
		MemoryStream_t743994179 * L_17 = (MemoryStream_t743994179 *)il2cpp_codegen_object_new(MemoryStream_t743994179_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m4073175573(L_17, (ByteU5BU5D_t3397334013*)L_16, /*hidden argument*/NULL);
		V_4 = (MemoryStream_t743994179 *)L_17;
	}

IL_008d:
	try
	{ // begin try (depth: 1)
		MemoryStream_t743994179 * L_18 = V_4;
		BinaryReader_t2491843768 * L_19 = (BinaryReader_t2491843768 *)il2cpp_codegen_object_new(BinaryReader_t2491843768_il2cpp_TypeInfo_var);
		BinaryReader__ctor_m4190061006(L_19, (Stream_t3255436806 *)L_18, /*hidden argument*/NULL);
		V_5 = (BinaryReader_t2491843768 *)L_19;
		IL2CPP_LEAVE(0xAA, FINALLY_009b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_009b;
	}

FINALLY_009b:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t743994179 * L_20 = V_4;
			if (!L_20)
			{
				goto IL_00a9;
			}
		}

IL_00a2:
		{
			MemoryStream_t743994179 * L_21 = V_4;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, (Il2CppObject *)L_21);
		}

IL_00a9:
		{
			IL2CPP_END_FINALLY(155)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(155)
	{
		IL2CPP_JUMP_TBL(0xAA, IL_00aa)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_00aa:
	{
		ByteU5BU5D_t3397334013* L_22 = V_3;
		return L_22;
	}
}
// System.Void Yeh.SwitchTools.Switch_SaveData`1<System.Object>::Save(T)
extern "C"  void Switch_SaveData_1_Save_m2537965706_gshared (Switch_SaveData_1_t997862593 * __this, Il2CppObject * ___data0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Switch_SaveData_1_Save_m2537965706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BinaryFormatter_t1866979105 * V_0 = NULL;
	ByteU5BU5D_t3397334013* V_1 = NULL;
	int32_t V_2 = 0;
	MemoryStream_t743994179 * V_3 = NULL;
	Result_t3781601813  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		((  void (*) (Switch_SaveData_1_t997862593 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5)->methodPointer)((Switch_SaveData_1_t997862593 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5));
		BinaryFormatter_t1866979105 * L_0 = (BinaryFormatter_t1866979105 *)il2cpp_codegen_object_new(BinaryFormatter_t1866979105_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m4171832002(L_0, /*hidden argument*/NULL);
		V_0 = (BinaryFormatter_t1866979105 *)L_0;
		MemoryStream_t743994179 * L_1 = (MemoryStream_t743994179 *)il2cpp_codegen_object_new(MemoryStream_t743994179_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m1043059966(L_1, /*hidden argument*/NULL);
		V_3 = (MemoryStream_t743994179 *)L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		BinaryFormatter_t1866979105 * L_2 = V_0;
		MemoryStream_t743994179 * L_3 = V_3;
		Il2CppObject * L_4 = ___data0;
		BinaryFormatter_Serialize_m433301673((BinaryFormatter_t1866979105 *)L_2, (Stream_t3255436806 *)L_3, (Il2CppObject *)L_4, /*hidden argument*/NULL);
		MemoryStream_t743994179 * L_5 = V_3;
		int64_t L_6 = VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.Stream::get_Position() */, (Stream_t3255436806 *)L_5);
		V_2 = (int32_t)(((int32_t)((int32_t)L_6)));
		MemoryStream_t743994179 * L_7 = V_3;
		VirtActionInvoker0::Invoke(12 /* System.Void System.IO.Stream::Close() */, (Stream_t3255436806 *)L_7);
		MemoryStream_t743994179 * L_8 = V_3;
		ByteU5BU5D_t3397334013* L_9 = VirtFuncInvoker0< ByteU5BU5D_t3397334013* >::Invoke(25 /* System.Byte[] System.IO.MemoryStream::GetBuffer() */, (MemoryStream_t743994179 *)L_8);
		V_1 = (ByteU5BU5D_t3397334013*)L_9;
		int32_t L_10 = V_2;
		Array_Resize_TisByte_t3683104436_m4242698446(NULL /*static, unused*/, (ByteU5BU5D_t3397334013**)(&V_1), (int32_t)L_10, /*hidden argument*/Array_Resize_TisByte_t3683104436_m4242698446_MethodInfo_var);
		IL2CPP_LEAVE(0x4E, FINALLY_0041);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t743994179 * L_11 = V_3;
			if (!L_11)
			{
				goto IL_004d;
			}
		}

IL_0047:
		{
			MemoryStream_t743994179 * L_12 = V_3;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, (Il2CppObject *)L_12);
		}

IL_004d:
		{
			IL2CPP_END_FINALLY(65)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_004e:
	{
		Notification_EnterExitRequestHandlingSection_m1541497651(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_13 = (String_t*)__this->get_filePath_3();
		Result_t3781601813  L_14 = File_Delete_m2226978171(NULL /*static, unused*/, (String_t*)L_13, /*hidden argument*/NULL);
		V_4 = (Result_t3781601813 )L_14;
		IL2CPP_RUNTIME_CLASS_INIT(FileSystem_t2257963377_il2cpp_TypeInfo_var);
		ErrorRange_t305124927 * L_15 = ((FileSystem_t2257963377_StaticFields*)FileSystem_t2257963377_il2cpp_TypeInfo_var->static_fields)->get_ResultPathNotFound_2();
		Result_t3781601813  L_16 = V_4;
		bool L_17 = ErrorRange_Includes_m3831401200((ErrorRange_t305124927 *)L_15, (Result_t3781601813 )L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0078;
		}
	}
	{
		Result_abortUnlessSuccess_m794763603((Result_t3781601813 *)(&V_4), /*hidden argument*/NULL);
	}

IL_0078:
	{
		String_t* L_18 = (String_t*)__this->get_filePath_3();
		int32_t L_19 = V_2;
		Result_t3781601813  L_20 = File_Create_m3542780336(NULL /*static, unused*/, (String_t*)L_18, (int64_t)(((int64_t)((int64_t)L_19))), /*hidden argument*/NULL);
		V_4 = (Result_t3781601813 )L_20;
		Result_abortUnlessSuccess_m794763603((Result_t3781601813 *)(&V_4), /*hidden argument*/NULL);
		FileHandle_t1965634894 * L_21 = (FileHandle_t1965634894 *)__this->get_address_of_fileHandle_4();
		String_t* L_22 = (String_t*)__this->get_filePath_3();
		Result_t3781601813  L_23 = File_Open_m1924846877(NULL /*static, unused*/, (FileHandle_t1965634894 *)L_21, (String_t*)L_22, (int32_t)2, /*hidden argument*/NULL);
		V_4 = (Result_t3781601813 )L_23;
		Result_abortUnlessSuccess_m794763603((Result_t3781601813 *)(&V_4), /*hidden argument*/NULL);
		FileHandle_t1965634894  L_24 = (FileHandle_t1965634894 )__this->get_fileHandle_4();
		ByteU5BU5D_t3397334013* L_25 = V_1;
		ByteU5BU5D_t3397334013* L_26 = V_1;
		int64_t L_27 = Array_get_LongLength_m2538298538((Il2CppArray *)(Il2CppArray *)L_26, /*hidden argument*/NULL);
		Result_t3781601813  L_28 = File_Write_m1266405810(NULL /*static, unused*/, (FileHandle_t1965634894 )L_24, (int64_t)(((int64_t)((int64_t)0))), (ByteU5BU5D_t3397334013*)L_25, (int64_t)L_27, (int32_t)1, /*hidden argument*/NULL);
		V_4 = (Result_t3781601813 )L_28;
		Result_abortUnlessSuccess_m794763603((Result_t3781601813 *)(&V_4), /*hidden argument*/NULL);
		FileHandle_t1965634894  L_29 = (FileHandle_t1965634894 )__this->get_fileHandle_4();
		File_Close_m1929692247(NULL /*static, unused*/, (FileHandle_t1965634894 )L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2));
		String_t* L_30 = ((Switch_SaveData_1_t997862593_StaticFields*)IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2)->static_fields)->get_mountName_1();
		IL2CPP_RUNTIME_CLASS_INIT(SaveData_t1419429939_il2cpp_TypeInfo_var);
		Result_t3781601813  L_31 = SaveData_Commit_m589386000(NULL /*static, unused*/, (String_t*)L_30, /*hidden argument*/NULL);
		V_4 = (Result_t3781601813 )L_31;
		Result_abortUnlessSuccess_m794763603((Result_t3781601813 *)(&V_4), /*hidden argument*/NULL);
		Notification_LeaveExitRequestHandlingSection_m2011232702(NULL /*static, unused*/, /*hidden argument*/NULL);
		((  void (*) (Switch_SaveData_1_t997862593 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6)->methodPointer)((Switch_SaveData_1_t997862593 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6));
		return;
	}
}
// T Yeh.SwitchTools.Switch_SaveData`1<System.Object>::Load()
extern "C"  Il2CppObject * Switch_SaveData_1_Load_m1981043488_gshared (Switch_SaveData_1_t997862593 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Switch_SaveData_1_Load_m1981043488_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Result_t3781601813  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Il2CppObject * V_2 = NULL;
	int64_t V_3 = 0;
	ByteU5BU5D_t3397334013* V_4 = NULL;
	BinaryFormatter_t1866979105 * V_5 = NULL;
	MemoryStream_t743994179 * V_6 = NULL;
	Il2CppObject * V_7 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		((  void (*) (Switch_SaveData_1_t997862593 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5)->methodPointer)((Switch_SaveData_1_t997862593 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5));
		V_0 = (int32_t)0;
		String_t* L_0 = (String_t*)__this->get_filePath_3();
		IL2CPP_RUNTIME_CLASS_INIT(FileSystem_t2257963377_il2cpp_TypeInfo_var);
		Result_t3781601813  L_1 = FileSystem_GetEntryType_m2098803304(NULL /*static, unused*/, (int32_t*)(&V_0), (String_t*)L_0, /*hidden argument*/NULL);
		V_1 = (Result_t3781601813 )L_1;
		ErrorRange_t305124927 * L_2 = ((FileSystem_t2257963377_StaticFields*)FileSystem_t2257963377_il2cpp_TypeInfo_var->static_fields)->get_ResultPathNotFound_2();
		Result_t3781601813  L_3 = V_1;
		bool L_4 = ErrorRange_Includes_m3831401200((ErrorRange_t305124927 *)L_2, (Result_t3781601813 )L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		Initobj (Il2CppObject_il2cpp_TypeInfo_var, (&V_2));
		Il2CppObject * L_5 = V_2;
		return L_5;
	}

IL_0030:
	{
		Result_abortUnlessSuccess_m794763603((Result_t3781601813 *)(&V_1), /*hidden argument*/NULL);
		FileHandle_t1965634894 * L_6 = (FileHandle_t1965634894 *)__this->get_address_of_fileHandle_4();
		String_t* L_7 = (String_t*)__this->get_filePath_3();
		Result_t3781601813  L_8 = File_Open_m1924846877(NULL /*static, unused*/, (FileHandle_t1965634894 *)L_6, (String_t*)L_7, (int32_t)1, /*hidden argument*/NULL);
		V_1 = (Result_t3781601813 )L_8;
		Result_abortUnlessSuccess_m794763603((Result_t3781601813 *)(&V_1), /*hidden argument*/NULL);
		V_3 = (int64_t)(((int64_t)((int64_t)0)));
		FileHandle_t1965634894  L_9 = (FileHandle_t1965634894 )__this->get_fileHandle_4();
		Result_t3781601813  L_10 = File_GetSize_m2071092106(NULL /*static, unused*/, (int64_t*)(&V_3), (FileHandle_t1965634894 )L_9, /*hidden argument*/NULL);
		V_1 = (Result_t3781601813 )L_10;
		Result_abortUnlessSuccess_m794763603((Result_t3781601813 *)(&V_1), /*hidden argument*/NULL);
		int64_t L_11 = V_3;
		if ((int64_t)(L_11) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		V_4 = (ByteU5BU5D_t3397334013*)((ByteU5BU5D_t3397334013*)SZArrayNew(ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_11))));
		FileHandle_t1965634894  L_12 = (FileHandle_t1965634894 )__this->get_fileHandle_4();
		ByteU5BU5D_t3397334013* L_13 = V_4;
		int64_t L_14 = V_3;
		Result_t3781601813  L_15 = File_Read_m977585544(NULL /*static, unused*/, (FileHandle_t1965634894 )L_12, (int64_t)(((int64_t)((int64_t)0))), (ByteU5BU5D_t3397334013*)L_13, (int64_t)L_14, /*hidden argument*/NULL);
		V_1 = (Result_t3781601813 )L_15;
		Result_abortUnlessSuccess_m794763603((Result_t3781601813 *)(&V_1), /*hidden argument*/NULL);
		FileHandle_t1965634894  L_16 = (FileHandle_t1965634894 )__this->get_fileHandle_4();
		File_Close_m1929692247(NULL /*static, unused*/, (FileHandle_t1965634894 )L_16, /*hidden argument*/NULL);
		BinaryFormatter_t1866979105 * L_17 = (BinaryFormatter_t1866979105 *)il2cpp_codegen_object_new(BinaryFormatter_t1866979105_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m4171832002(L_17, /*hidden argument*/NULL);
		V_5 = (BinaryFormatter_t1866979105 *)L_17;
		((  void (*) (Switch_SaveData_1_t997862593 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6)->methodPointer)((Switch_SaveData_1_t997862593 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6));
		ByteU5BU5D_t3397334013* L_18 = V_4;
		MemoryStream_t743994179 * L_19 = (MemoryStream_t743994179 *)il2cpp_codegen_object_new(MemoryStream_t743994179_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m4073175573(L_19, (ByteU5BU5D_t3397334013*)L_18, /*hidden argument*/NULL);
		V_6 = (MemoryStream_t743994179 *)L_19;
	}

IL_00ab:
	try
	{ // begin try (depth: 1)
		BinaryFormatter_t1866979105 * L_20 = V_5;
		MemoryStream_t743994179 * L_21 = V_6;
		Il2CppObject * L_22 = BinaryFormatter_Deserialize_m2771853471((BinaryFormatter_t1866979105 *)L_20, (Stream_t3255436806 *)L_21, /*hidden argument*/NULL);
		V_7 = (Il2CppObject *)((Il2CppObject *)Castclass(L_22, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 0)));
		IL2CPP_LEAVE(0xCF, FINALLY_00c0);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_00c0;
	}

FINALLY_00c0:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t743994179 * L_23 = V_6;
			if (!L_23)
			{
				goto IL_00ce;
			}
		}

IL_00c7:
		{
			MemoryStream_t743994179 * L_24 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, (Il2CppObject *)L_24);
		}

IL_00ce:
		{
			IL2CPP_END_FINALLY(192)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(192)
	{
		IL2CPP_JUMP_TBL(0xCF, IL_00cf)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_00cf:
	{
		Il2CppObject * L_25 = V_7;
		return L_25;
	}
}
// System.Void Yeh.SwitchTools.Switch_SaveData`1<System.Object>::.cctor()
extern "C"  void Switch_SaveData_1__cctor_m2489610820_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Switch_SaveData_1__cctor_m2489610820_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Switch_SaveData_1_t997862593_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->set_mountName_1(_stringLiteral2402480901);
		((Switch_SaveData_1_t997862593_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->static_fields)->set_fileName_2(_stringLiteral3738695445);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
