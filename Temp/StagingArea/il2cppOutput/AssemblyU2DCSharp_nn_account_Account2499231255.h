#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// nn.ErrorRange
struct ErrorRange_t305124927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// nn.account.Account
struct  Account_t2499231255  : public Il2CppObject
{
public:

public:
};

struct Account_t2499231255_StaticFields
{
public:
	// nn.ErrorRange nn.account.Account::ResultCancelled
	ErrorRange_t305124927 * ___ResultCancelled_3;
	// nn.ErrorRange nn.account.Account::ResultCancelledByUser
	ErrorRange_t305124927 * ___ResultCancelledByUser_4;
	// nn.ErrorRange nn.account.Account::ResultUserNotExist
	ErrorRange_t305124927 * ___ResultUserNotExist_5;

public:
	inline static int32_t get_offset_of_ResultCancelled_3() { return static_cast<int32_t>(offsetof(Account_t2499231255_StaticFields, ___ResultCancelled_3)); }
	inline ErrorRange_t305124927 * get_ResultCancelled_3() const { return ___ResultCancelled_3; }
	inline ErrorRange_t305124927 ** get_address_of_ResultCancelled_3() { return &___ResultCancelled_3; }
	inline void set_ResultCancelled_3(ErrorRange_t305124927 * value)
	{
		___ResultCancelled_3 = value;
		Il2CppCodeGenWriteBarrier(&___ResultCancelled_3, value);
	}

	inline static int32_t get_offset_of_ResultCancelledByUser_4() { return static_cast<int32_t>(offsetof(Account_t2499231255_StaticFields, ___ResultCancelledByUser_4)); }
	inline ErrorRange_t305124927 * get_ResultCancelledByUser_4() const { return ___ResultCancelledByUser_4; }
	inline ErrorRange_t305124927 ** get_address_of_ResultCancelledByUser_4() { return &___ResultCancelledByUser_4; }
	inline void set_ResultCancelledByUser_4(ErrorRange_t305124927 * value)
	{
		___ResultCancelledByUser_4 = value;
		Il2CppCodeGenWriteBarrier(&___ResultCancelledByUser_4, value);
	}

	inline static int32_t get_offset_of_ResultUserNotExist_5() { return static_cast<int32_t>(offsetof(Account_t2499231255_StaticFields, ___ResultUserNotExist_5)); }
	inline ErrorRange_t305124927 * get_ResultUserNotExist_5() const { return ___ResultUserNotExist_5; }
	inline ErrorRange_t305124927 ** get_address_of_ResultUserNotExist_5() { return &___ResultUserNotExist_5; }
	inline void set_ResultUserNotExist_5(ErrorRange_t305124927 * value)
	{
		___ResultUserNotExist_5 = value;
		Il2CppCodeGenWriteBarrier(&___ResultUserNotExist_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
