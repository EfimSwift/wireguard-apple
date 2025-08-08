/* SPDX-License-Identifier: MIT
 *
 * Copyright (C) 2018-2019 Jason A. Donenfeld <Jason@zx2c4.com>. All Rights Reserved.
 */

#ifndef WIREGUARD_H
#define WIREGUARD_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// WireGuard C API functions
const char *wgVersion(void);
void wgSetLogger(void *context, void (*logger)(void *context, int level, const char *msg));
int32_t wgTurnOn(const char *settings, int32_t tun_fd);
void wgTurnOff(int32_t handle);
int64_t wgSetConfig(int32_t handle, const char *settings);
char *wgGetConfig(int32_t handle);
void wgBumpSockets(int32_t handle);
void wgDisableSomeRoamingForBrokenMobileSemantics(int32_t handle);

#ifdef __cplusplus
}
#endif

#endif /* WIREGUARD_H */
