#ifndef WIREGUARD_C_BRIDGE_H
#define WIREGUARD_C_BRIDGE_H

#include <stdint.h>

// WireGuard C API functions
char* wgVersion(void);
void wgSetLogger(uintptr_t context, uintptr_t loggerFn);
int32_t wgTurnOn(const char* settings, int32_t tunFd);
void wgTurnOff(int32_t handle);
int64_t wgSetConfig(int32_t handle, const char* settings);
char* wgGetConfig(int32_t handle);
void wgBumpSockets(int32_t handle);
void wgDisableSomeRoamingForBrokenMobileSemantics(int32_t handle);

#endif
