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

// nn.hid.ControllerFirmwareUpdate
struct  ControllerFirmwareUpdate_t2479806090  : public Il2CppObject
{
public:

public:
};

struct ControllerFirmwareUpdate_t2479806090_StaticFields
{
public:
	// nn.ErrorRange nn.hid.ControllerFirmwareUpdate::ResultControllerFirmwareUpdateError
	ErrorRange_t305124927 * ___ResultControllerFirmwareUpdateError_0;
	// nn.ErrorRange nn.hid.ControllerFirmwareUpdate::ResultControllerFirmwareUpdateFailed
	ErrorRange_t305124927 * ___ResultControllerFirmwareUpdateFailed_1;

public:
	inline static int32_t get_offset_of_ResultControllerFirmwareUpdateError_0() { return static_cast<int32_t>(offsetof(ControllerFirmwareUpdate_t2479806090_StaticFields, ___ResultControllerFirmwareUpdateError_0)); }
	inline ErrorRange_t305124927 * get_ResultControllerFirmwareUpdateError_0() const { return ___ResultControllerFirmwareUpdateError_0; }
	inline ErrorRange_t305124927 ** get_address_of_ResultControllerFirmwareUpdateError_0() { return &___ResultControllerFirmwareUpdateError_0; }
	inline void set_ResultControllerFirmwareUpdateError_0(ErrorRange_t305124927 * value)
	{
		___ResultControllerFirmwareUpdateError_0 = value;
		Il2CppCodeGenWriteBarrier(&___ResultControllerFirmwareUpdateError_0, value);
	}

	inline static int32_t get_offset_of_ResultControllerFirmwareUpdateFailed_1() { return static_cast<int32_t>(offsetof(ControllerFirmwareUpdate_t2479806090_StaticFields, ___ResultControllerFirmwareUpdateFailed_1)); }
	inline ErrorRange_t305124927 * get_ResultControllerFirmwareUpdateFailed_1() const { return ___ResultControllerFirmwareUpdateFailed_1; }
	inline ErrorRange_t305124927 ** get_address_of_ResultControllerFirmwareUpdateFailed_1() { return &___ResultControllerFirmwareUpdateFailed_1; }
	inline void set_ResultControllerFirmwareUpdateFailed_1(ErrorRange_t305124927 * value)
	{
		___ResultControllerFirmwareUpdateFailed_1 = value;
		Il2CppCodeGenWriteBarrier(&___ResultControllerFirmwareUpdateFailed_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
