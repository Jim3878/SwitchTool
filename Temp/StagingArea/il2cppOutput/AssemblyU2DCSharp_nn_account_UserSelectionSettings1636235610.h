#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_nn_account_Uid2972361106.h"

// nn.account.Uid[]
struct UidU5BU5D_t1246403559;
struct Uid_t2972361106 ;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// nn.account.UserSelectionSettings
struct  UserSelectionSettings_t1636235610 
{
public:
	// nn.account.Uid[] nn.account.UserSelectionSettings::invalidUidList
	UidU5BU5D_t1246403559* ___invalidUidList_0;
	// System.Boolean nn.account.UserSelectionSettings::isSkipEnabled
	bool ___isSkipEnabled_1;
	// System.Boolean nn.account.UserSelectionSettings::isNetworkServiceAccountRequired
	bool ___isNetworkServiceAccountRequired_2;
	// System.Boolean nn.account.UserSelectionSettings::showSkipButton
	bool ___showSkipButton_3;
	// System.Boolean nn.account.UserSelectionSettings::additionalSelect
	bool ___additionalSelect_4;

public:
	inline static int32_t get_offset_of_invalidUidList_0() { return static_cast<int32_t>(offsetof(UserSelectionSettings_t1636235610, ___invalidUidList_0)); }
	inline UidU5BU5D_t1246403559* get_invalidUidList_0() const { return ___invalidUidList_0; }
	inline UidU5BU5D_t1246403559** get_address_of_invalidUidList_0() { return &___invalidUidList_0; }
	inline void set_invalidUidList_0(UidU5BU5D_t1246403559* value)
	{
		___invalidUidList_0 = value;
		Il2CppCodeGenWriteBarrier(&___invalidUidList_0, value);
	}

	inline static int32_t get_offset_of_isSkipEnabled_1() { return static_cast<int32_t>(offsetof(UserSelectionSettings_t1636235610, ___isSkipEnabled_1)); }
	inline bool get_isSkipEnabled_1() const { return ___isSkipEnabled_1; }
	inline bool* get_address_of_isSkipEnabled_1() { return &___isSkipEnabled_1; }
	inline void set_isSkipEnabled_1(bool value)
	{
		___isSkipEnabled_1 = value;
	}

	inline static int32_t get_offset_of_isNetworkServiceAccountRequired_2() { return static_cast<int32_t>(offsetof(UserSelectionSettings_t1636235610, ___isNetworkServiceAccountRequired_2)); }
	inline bool get_isNetworkServiceAccountRequired_2() const { return ___isNetworkServiceAccountRequired_2; }
	inline bool* get_address_of_isNetworkServiceAccountRequired_2() { return &___isNetworkServiceAccountRequired_2; }
	inline void set_isNetworkServiceAccountRequired_2(bool value)
	{
		___isNetworkServiceAccountRequired_2 = value;
	}

	inline static int32_t get_offset_of_showSkipButton_3() { return static_cast<int32_t>(offsetof(UserSelectionSettings_t1636235610, ___showSkipButton_3)); }
	inline bool get_showSkipButton_3() const { return ___showSkipButton_3; }
	inline bool* get_address_of_showSkipButton_3() { return &___showSkipButton_3; }
	inline void set_showSkipButton_3(bool value)
	{
		___showSkipButton_3 = value;
	}

	inline static int32_t get_offset_of_additionalSelect_4() { return static_cast<int32_t>(offsetof(UserSelectionSettings_t1636235610, ___additionalSelect_4)); }
	inline bool get_additionalSelect_4() const { return ___additionalSelect_4; }
	inline bool* get_address_of_additionalSelect_4() { return &___additionalSelect_4; }
	inline void set_additionalSelect_4(bool value)
	{
		___additionalSelect_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of nn.account.UserSelectionSettings
struct UserSelectionSettings_t1636235610_marshaled_pinvoke
{
	Uid_t2972361106  ___invalidUidList_0[8];
	uint8_t ___isSkipEnabled_1;
	uint8_t ___isNetworkServiceAccountRequired_2;
	uint8_t ___showSkipButton_3;
	uint8_t ___additionalSelect_4;
};
// Native definition for COM marshalling of nn.account.UserSelectionSettings
struct UserSelectionSettings_t1636235610_marshaled_com
{
	Uid_t2972361106  ___invalidUidList_0[8];
	uint8_t ___isSkipEnabled_1;
	uint8_t ___isNetworkServiceAccountRequired_2;
	uint8_t ___showSkipButton_3;
	uint8_t ___additionalSelect_4;
};
