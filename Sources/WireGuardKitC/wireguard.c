
/* SPDX-License-Identifier: MIT
 *
 * Copyright (C) 2018-2019 Jason A. Donenfeld <Jason@zx2c4.com>. All Rights Reserved.
 */

#include "wireguard.h"
#include <stdlib.h>
#include <string.h>

// Простые заглушки для проверки
const char *wgVersion(void) {
    return "1.0.20210914";
}

void wgSetLogger(void *context, void (*logger)(void *context, int level, const char *msg)) {
    // Заглушка для логгера
}

int32_t wgTurnOn(const char *settings, int32_t tun_fd) {
    return 0; // Заглушка
}

void wgTurnOff(int32_t handle) {
    // Заглушка
}

int64_t wgSetConfig(int32_t handle, const char *settings) {
    return 0; // Заглушка
}

char *wgGetConfig(int32_t handle) {
    return strdup(""); // Заглушка
}

void wgBumpSockets(int32_t handle) {
    // Заглушка
}

void wgDisableSomeRoamingForBrokenMobileSemantics(int32_t handle) {
    // Заглушка
}
