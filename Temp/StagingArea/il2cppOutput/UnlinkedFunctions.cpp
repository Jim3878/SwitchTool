#include <nn/hid.h>
class IGraphicsDebugger;
extern "C"{
bool InitializeTouchScreen () {
	nn::hid::InitializeTouchScreen(); return true;
}
int GetSwitchSupportedNpadStyle () {
	return 0;
}
IGraphicsDebugger* GetNvnGraphicsDebugger() { return 0; }
}
