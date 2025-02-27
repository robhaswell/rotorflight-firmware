/*
 * This file is part of Rotorflight.
 *
 * Rotorflight is free software. You can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Rotorflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software. If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

#include "platform.h"

#define MOTOR_OVERRIDE_OFF      0
#define MOTOR_OVERRIDE_MIN      0
#define MOTOR_OVERRIDE_MAX   1000


uint8_t getMotorCount(void);

uint16_t getMotorOutput(uint8_t motor);

uint16_t getMotorOverride(uint8_t motor);
uint16_t setMotorOverride(uint8_t motor, uint16_t value);

bool hasMotorOverride(uint8_t motor);
void resetMotorOverride(void);

bool areMotorsRunning(void);
bool isRpmSourceActive(void);

int getMotorRPM(uint8_t motor);
float getMotorRPMf(uint8_t motor);

int getMotorRawRPM(uint8_t motor);
float getMotorRawRPMf(uint8_t motor);

int calcMotorRPM(uint8_t motor, int erpm);
float calcMotorRPMf(uint8_t motor, int erpm);

void rpmSourceInit(void);

void motorStop(void);
void motorInit(void);
void motorUpdate(void);

static inline void stopMotors(void) { motorStop(); }

