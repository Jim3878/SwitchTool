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

// UnityEngine.Switch.SwitchVideoPlayer/MovieEventDelegate
struct MovieEventDelegate_t2970185297;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Switch.SwitchVideoPlayer
struct  SwitchVideoPlayer_t692929986  : public Il2CppObject
{
public:
	// System.IntPtr UnityEngine.Switch.SwitchVideoPlayer::m_VideoPlayer
	IntPtr_t ___m_VideoPlayer_0;
	// UnityEngine.Switch.SwitchVideoPlayer/MovieEventDelegate UnityEngine.Switch.SwitchVideoPlayer::m_MovieEvent
	MovieEventDelegate_t2970185297 * ___m_MovieEvent_1;

public:
	inline static int32_t get_offset_of_m_VideoPlayer_0() { return static_cast<int32_t>(offsetof(SwitchVideoPlayer_t692929986, ___m_VideoPlayer_0)); }
	inline IntPtr_t get_m_VideoPlayer_0() const { return ___m_VideoPlayer_0; }
	inline IntPtr_t* get_address_of_m_VideoPlayer_0() { return &___m_VideoPlayer_0; }
	inline void set_m_VideoPlayer_0(IntPtr_t value)
	{
		___m_VideoPlayer_0 = value;
	}

	inline static int32_t get_offset_of_m_MovieEvent_1() { return static_cast<int32_t>(offsetof(SwitchVideoPlayer_t692929986, ___m_MovieEvent_1)); }
	inline MovieEventDelegate_t2970185297 * get_m_MovieEvent_1() const { return ___m_MovieEvent_1; }
	inline MovieEventDelegate_t2970185297 ** get_address_of_m_MovieEvent_1() { return &___m_MovieEvent_1; }
	inline void set_m_MovieEvent_1(MovieEventDelegate_t2970185297 * value)
	{
		___m_MovieEvent_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_MovieEvent_1, value);
	}
};

struct SwitchVideoPlayer_t692929986_StaticFields
{
public:
	// UnityEngine.Switch.SwitchVideoPlayer/MovieEventDelegate UnityEngine.Switch.SwitchVideoPlayer::OnMovieEvent
	MovieEventDelegate_t2970185297 * ___OnMovieEvent_2;

public:
	inline static int32_t get_offset_of_OnMovieEvent_2() { return static_cast<int32_t>(offsetof(SwitchVideoPlayer_t692929986_StaticFields, ___OnMovieEvent_2)); }
	inline MovieEventDelegate_t2970185297 * get_OnMovieEvent_2() const { return ___OnMovieEvent_2; }
	inline MovieEventDelegate_t2970185297 ** get_address_of_OnMovieEvent_2() { return &___OnMovieEvent_2; }
	inline void set_OnMovieEvent_2(MovieEventDelegate_t2970185297 * value)
	{
		___OnMovieEvent_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnMovieEvent_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
