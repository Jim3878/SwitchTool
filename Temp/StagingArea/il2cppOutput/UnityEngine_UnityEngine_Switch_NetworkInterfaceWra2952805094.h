#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.Switch.NetworkInterfaceWrapper/NetworkConnectedHandler
struct NetworkConnectedHandler_t3659839799;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Switch.NetworkInterfaceWrapper
struct  NetworkInterfaceWrapper_t2952805094  : public Il2CppObject
{
public:

public:
};

struct NetworkInterfaceWrapper_t2952805094_StaticFields
{
public:
	// UnityEngine.Switch.NetworkInterfaceWrapper/NetworkConnectedHandler UnityEngine.Switch.NetworkInterfaceWrapper::networkConnected
	NetworkConnectedHandler_t3659839799 * ___networkConnected_0;

public:
	inline static int32_t get_offset_of_networkConnected_0() { return static_cast<int32_t>(offsetof(NetworkInterfaceWrapper_t2952805094_StaticFields, ___networkConnected_0)); }
	inline NetworkConnectedHandler_t3659839799 * get_networkConnected_0() const { return ___networkConnected_0; }
	inline NetworkConnectedHandler_t3659839799 ** get_address_of_networkConnected_0() { return &___networkConnected_0; }
	inline void set_networkConnected_0(NetworkConnectedHandler_t3659839799 * value)
	{
		___networkConnected_0 = value;
		Il2CppCodeGenWriteBarrier(&___networkConnected_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
