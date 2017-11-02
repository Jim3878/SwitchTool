#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<UnityEngine.Switch.Notification/Message>
struct Action_1_t2301946914;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Switch.Notification
struct  Notification_t4064058857  : public Il2CppObject
{
public:

public:
};

struct Notification_t4064058857_StaticFields
{
public:
	// System.Action`1<UnityEngine.Switch.Notification/Message> UnityEngine.Switch.Notification::notificationMessageReceived
	Action_1_t2301946914 * ___notificationMessageReceived_0;

public:
	inline static int32_t get_offset_of_notificationMessageReceived_0() { return static_cast<int32_t>(offsetof(Notification_t4064058857_StaticFields, ___notificationMessageReceived_0)); }
	inline Action_1_t2301946914 * get_notificationMessageReceived_0() const { return ___notificationMessageReceived_0; }
	inline Action_1_t2301946914 ** get_address_of_notificationMessageReceived_0() { return &___notificationMessageReceived_0; }
	inline void set_notificationMessageReceived_0(Action_1_t2301946914 * value)
	{
		___notificationMessageReceived_0 = value;
		Il2CppCodeGenWriteBarrier(&___notificationMessageReceived_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
