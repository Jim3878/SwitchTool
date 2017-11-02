#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// nn.fs.DirectoryEntry
struct  DirectoryEntry_t704930011 
{
public:
	// System.String nn.fs.DirectoryEntry::name
	String_t* ___name_0;
	// System.Byte nn.fs.DirectoryEntry::_reserved0
	uint8_t ____reserved0_1;
	// System.Byte nn.fs.DirectoryEntry::_reserved1
	uint8_t ____reserved1_2;
	// System.Byte nn.fs.DirectoryEntry::_reserved2
	uint8_t ____reserved2_3;
	// System.SByte nn.fs.DirectoryEntry::_entryType
	int8_t ____entryType_4;
	// System.Byte nn.fs.DirectoryEntry::_reserved3
	uint8_t ____reserved3_5;
	// System.Byte nn.fs.DirectoryEntry::_reserved4
	uint8_t ____reserved4_6;
	// System.Byte nn.fs.DirectoryEntry::_reserved5
	uint8_t ____reserved5_7;
	// System.Int64 nn.fs.DirectoryEntry::fileSize
	int64_t ___fileSize_8;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DirectoryEntry_t704930011, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of__reserved0_1() { return static_cast<int32_t>(offsetof(DirectoryEntry_t704930011, ____reserved0_1)); }
	inline uint8_t get__reserved0_1() const { return ____reserved0_1; }
	inline uint8_t* get_address_of__reserved0_1() { return &____reserved0_1; }
	inline void set__reserved0_1(uint8_t value)
	{
		____reserved0_1 = value;
	}

	inline static int32_t get_offset_of__reserved1_2() { return static_cast<int32_t>(offsetof(DirectoryEntry_t704930011, ____reserved1_2)); }
	inline uint8_t get__reserved1_2() const { return ____reserved1_2; }
	inline uint8_t* get_address_of__reserved1_2() { return &____reserved1_2; }
	inline void set__reserved1_2(uint8_t value)
	{
		____reserved1_2 = value;
	}

	inline static int32_t get_offset_of__reserved2_3() { return static_cast<int32_t>(offsetof(DirectoryEntry_t704930011, ____reserved2_3)); }
	inline uint8_t get__reserved2_3() const { return ____reserved2_3; }
	inline uint8_t* get_address_of__reserved2_3() { return &____reserved2_3; }
	inline void set__reserved2_3(uint8_t value)
	{
		____reserved2_3 = value;
	}

	inline static int32_t get_offset_of__entryType_4() { return static_cast<int32_t>(offsetof(DirectoryEntry_t704930011, ____entryType_4)); }
	inline int8_t get__entryType_4() const { return ____entryType_4; }
	inline int8_t* get_address_of__entryType_4() { return &____entryType_4; }
	inline void set__entryType_4(int8_t value)
	{
		____entryType_4 = value;
	}

	inline static int32_t get_offset_of__reserved3_5() { return static_cast<int32_t>(offsetof(DirectoryEntry_t704930011, ____reserved3_5)); }
	inline uint8_t get__reserved3_5() const { return ____reserved3_5; }
	inline uint8_t* get_address_of__reserved3_5() { return &____reserved3_5; }
	inline void set__reserved3_5(uint8_t value)
	{
		____reserved3_5 = value;
	}

	inline static int32_t get_offset_of__reserved4_6() { return static_cast<int32_t>(offsetof(DirectoryEntry_t704930011, ____reserved4_6)); }
	inline uint8_t get__reserved4_6() const { return ____reserved4_6; }
	inline uint8_t* get_address_of__reserved4_6() { return &____reserved4_6; }
	inline void set__reserved4_6(uint8_t value)
	{
		____reserved4_6 = value;
	}

	inline static int32_t get_offset_of__reserved5_7() { return static_cast<int32_t>(offsetof(DirectoryEntry_t704930011, ____reserved5_7)); }
	inline uint8_t get__reserved5_7() const { return ____reserved5_7; }
	inline uint8_t* get_address_of__reserved5_7() { return &____reserved5_7; }
	inline void set__reserved5_7(uint8_t value)
	{
		____reserved5_7 = value;
	}

	inline static int32_t get_offset_of_fileSize_8() { return static_cast<int32_t>(offsetof(DirectoryEntry_t704930011, ___fileSize_8)); }
	inline int64_t get_fileSize_8() const { return ___fileSize_8; }
	inline int64_t* get_address_of_fileSize_8() { return &___fileSize_8; }
	inline void set_fileSize_8(int64_t value)
	{
		___fileSize_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of nn.fs.DirectoryEntry
struct DirectoryEntry_t704930011_marshaled_pinvoke
{
	char ___name_0[769];
	uint8_t ____reserved0_1;
	uint8_t ____reserved1_2;
	uint8_t ____reserved2_3;
	int8_t ____entryType_4;
	uint8_t ____reserved3_5;
	uint8_t ____reserved4_6;
	uint8_t ____reserved5_7;
	int64_t ___fileSize_8;
};
// Native definition for COM marshalling of nn.fs.DirectoryEntry
struct DirectoryEntry_t704930011_marshaled_com
{
	char ___name_0[769];
	uint8_t ____reserved0_1;
	uint8_t ____reserved1_2;
	uint8_t ____reserved2_3;
	int8_t ____entryType_4;
	uint8_t ____reserved3_5;
	uint8_t ____reserved4_6;
	uint8_t ____reserved5_7;
	int64_t ___fileSize_8;
};
