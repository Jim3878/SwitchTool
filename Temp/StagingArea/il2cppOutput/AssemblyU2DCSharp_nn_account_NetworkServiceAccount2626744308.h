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

// nn.account.NetworkServiceAccount
struct  NetworkServiceAccount_t2626744308  : public Il2CppObject
{
public:

public:
};

struct NetworkServiceAccount_t2626744308_StaticFields
{
public:
	// nn.ErrorRange nn.account.NetworkServiceAccount::ResultNetworkServiceAccountUnavailable
	ErrorRange_t305124927 * ___ResultNetworkServiceAccountUnavailable_1;
	// nn.ErrorRange nn.account.NetworkServiceAccount::ResultTokenCacheUnavailable
	ErrorRange_t305124927 * ___ResultTokenCacheUnavailable_2;
	// nn.ErrorRange nn.account.NetworkServiceAccount::ResultNetworkCommunicationError
	ErrorRange_t305124927 * ___ResultNetworkCommunicationError_3;
	// nn.ErrorRange nn.account.NetworkServiceAccount::ResultSslService
	ErrorRange_t305124927 * ___ResultSslService_4;

public:
	inline static int32_t get_offset_of_ResultNetworkServiceAccountUnavailable_1() { return static_cast<int32_t>(offsetof(NetworkServiceAccount_t2626744308_StaticFields, ___ResultNetworkServiceAccountUnavailable_1)); }
	inline ErrorRange_t305124927 * get_ResultNetworkServiceAccountUnavailable_1() const { return ___ResultNetworkServiceAccountUnavailable_1; }
	inline ErrorRange_t305124927 ** get_address_of_ResultNetworkServiceAccountUnavailable_1() { return &___ResultNetworkServiceAccountUnavailable_1; }
	inline void set_ResultNetworkServiceAccountUnavailable_1(ErrorRange_t305124927 * value)
	{
		___ResultNetworkServiceAccountUnavailable_1 = value;
		Il2CppCodeGenWriteBarrier(&___ResultNetworkServiceAccountUnavailable_1, value);
	}

	inline static int32_t get_offset_of_ResultTokenCacheUnavailable_2() { return static_cast<int32_t>(offsetof(NetworkServiceAccount_t2626744308_StaticFields, ___ResultTokenCacheUnavailable_2)); }
	inline ErrorRange_t305124927 * get_ResultTokenCacheUnavailable_2() const { return ___ResultTokenCacheUnavailable_2; }
	inline ErrorRange_t305124927 ** get_address_of_ResultTokenCacheUnavailable_2() { return &___ResultTokenCacheUnavailable_2; }
	inline void set_ResultTokenCacheUnavailable_2(ErrorRange_t305124927 * value)
	{
		___ResultTokenCacheUnavailable_2 = value;
		Il2CppCodeGenWriteBarrier(&___ResultTokenCacheUnavailable_2, value);
	}

	inline static int32_t get_offset_of_ResultNetworkCommunicationError_3() { return static_cast<int32_t>(offsetof(NetworkServiceAccount_t2626744308_StaticFields, ___ResultNetworkCommunicationError_3)); }
	inline ErrorRange_t305124927 * get_ResultNetworkCommunicationError_3() const { return ___ResultNetworkCommunicationError_3; }
	inline ErrorRange_t305124927 ** get_address_of_ResultNetworkCommunicationError_3() { return &___ResultNetworkCommunicationError_3; }
	inline void set_ResultNetworkCommunicationError_3(ErrorRange_t305124927 * value)
	{
		___ResultNetworkCommunicationError_3 = value;
		Il2CppCodeGenWriteBarrier(&___ResultNetworkCommunicationError_3, value);
	}

	inline static int32_t get_offset_of_ResultSslService_4() { return static_cast<int32_t>(offsetof(NetworkServiceAccount_t2626744308_StaticFields, ___ResultSslService_4)); }
	inline ErrorRange_t305124927 * get_ResultSslService_4() const { return ___ResultSslService_4; }
	inline ErrorRange_t305124927 ** get_address_of_ResultSslService_4() { return &___ResultSslService_4; }
	inline void set_ResultSslService_4(ErrorRange_t305124927 * value)
	{
		___ResultSslService_4 = value;
		Il2CppCodeGenWriteBarrier(&___ResultSslService_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
