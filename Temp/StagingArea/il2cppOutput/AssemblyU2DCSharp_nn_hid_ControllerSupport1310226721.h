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

// nn.hid.ControllerSupport
struct  ControllerSupport_t1310226721  : public Il2CppObject
{
public:

public:
};

struct ControllerSupport_t1310226721_StaticFields
{
public:
	// nn.ErrorRange nn.hid.ControllerSupport::ResultCanceled
	ErrorRange_t305124927 * ___ResultCanceled_3;
	// nn.ErrorRange nn.hid.ControllerSupport::ResultNotSupportedNpadStyle
	ErrorRange_t305124927 * ___ResultNotSupportedNpadStyle_4;

public:
	inline static int32_t get_offset_of_ResultCanceled_3() { return static_cast<int32_t>(offsetof(ControllerSupport_t1310226721_StaticFields, ___ResultCanceled_3)); }
	inline ErrorRange_t305124927 * get_ResultCanceled_3() const { return ___ResultCanceled_3; }
	inline ErrorRange_t305124927 ** get_address_of_ResultCanceled_3() { return &___ResultCanceled_3; }
	inline void set_ResultCanceled_3(ErrorRange_t305124927 * value)
	{
		___ResultCanceled_3 = value;
		Il2CppCodeGenWriteBarrier(&___ResultCanceled_3, value);
	}

	inline static int32_t get_offset_of_ResultNotSupportedNpadStyle_4() { return static_cast<int32_t>(offsetof(ControllerSupport_t1310226721_StaticFields, ___ResultNotSupportedNpadStyle_4)); }
	inline ErrorRange_t305124927 * get_ResultNotSupportedNpadStyle_4() const { return ___ResultNotSupportedNpadStyle_4; }
	inline ErrorRange_t305124927 ** get_address_of_ResultNotSupportedNpadStyle_4() { return &___ResultNotSupportedNpadStyle_4; }
	inline void set_ResultNotSupportedNpadStyle_4(ErrorRange_t305124927 * value)
	{
		___ResultNotSupportedNpadStyle_4 = value;
		Il2CppCodeGenWriteBarrier(&___ResultNotSupportedNpadStyle_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
