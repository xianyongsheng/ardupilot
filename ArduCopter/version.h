#pragma once

#include "ap_version.h"

#define THISFIRMWARE "#Copter V3.5.5-iov4"
#define FIRMWARE_VERSION 3,5,5,FIRMWARE_VERSION_TYPE_OFFICIAL

#ifndef GIT_VERSION
#define FIRMWARE_STRING THISFIRMWARE
#else
#define FIRMWARE_STRING THISFIRMWARE " (" GIT_VERSION ")"
#endif



/*
 *-2018.4.13
 * modify files:
 *  src/drivers/boards/px4fmu-v4/board_config.h
 *  src/drivers/boards/px4fmu-v4/px4fmu_spi/init.c
 *  src/drivers/px4fmu/fmu.cpp src/drivers/stm32/adc/adc.cpp
 *  AP_HAL_PX4 SPIDevice.cpp ms5611
 *  nuttx-configs/px4fmu-v4/include/board.h  :sck
 *  AP_Inertialsensor.cpp
 *  hal/board/px4.h
 *  AP_Compass.cpp
 *
 *
 *-2018.04.10
 * modify AC_ATTITUDE_ACCEL_Y_CONTROLLER_MAX_RADSS 120 to 1200
 * modify POSCONTROL_LEASH_LENGTH_MIN 100 to 1000
 *
 */


