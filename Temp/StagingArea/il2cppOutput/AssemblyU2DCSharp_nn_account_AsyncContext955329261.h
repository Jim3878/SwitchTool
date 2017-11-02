#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// nn.account.AsyncContext
struct  AsyncContext_t955329261  : public Il2CppObject
{
public:
	// System.IntPtr nn.account.AsyncContext::_context
	IntPtr_t ____context_0;

public:
	inline static int32_t get_offset_of__context_0() { return static_cast<int32_t>(offsetof(AsyncContext_t955329261, ____context_0)); }
	inline IntPtr_t get__context_0() const { return ____context_0; }
	inline IntPtr_t* get_address_of__context_0() { return &____context_0; }
	inline void set__context_0(IntPtr_t value)
	{
		____context_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
