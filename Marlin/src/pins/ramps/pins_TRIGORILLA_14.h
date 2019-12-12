/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Arduino Mega with RAMPS v1.4 for Anycubic
 */
#if !defined(__AVR_ATmega1280__) && !defined(__AVR_ATmega2560__)
  #error "Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu."
#endif

#ifndef BOARD_NAME
  #define BOARD_NAME "Anycubic RAMPS 1.4"
#endif

//
// Servos
//
#define SERVO0_PIN          11
#define SERVO1_PIN          6
#define SERVO2_PIN          5
#define SERVO3_PIN          4

//
// Limit Switches
//
#define X_MIN_PIN          3
#define X_MAX_PIN          2
#define Y_MIN_PIN          14
#define Y_MAX_PIN          15
#define Z_MIN_PIN          18
#define Z_MAX_PIN          19

//
// Steppers
//
#define X_STEP_PIN         54
#define X_DIR_PIN          55
#define X_ENABLE_PIN       38

#define Y_STEP_PIN         60
#define Y_DIR_PIN          61
#define Y_ENABLE_PIN       56

#define Z_STEP_PIN         46
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       62

#define E0_STEP_PIN        26
#define E0_DIR_PIN         28
#define E0_ENABLE_PIN      24

#define E1_STEP_PIN        36
#define E1_DIR_PIN         34
#define E1_ENABLE_PIN      30

//
// Temperature Sensors
//
#define TEMP_0_PIN         13   // Analog Input
#define TEMP_1_PIN         14   // Analog Input
#define TEMP_2_PIN         15   // Analog Input
#define TEMP_3_PIN         12   // Analog Input
#define TEMP_BED_PIN       15   // Analog Input

//
// Heaters / Fans
//
#define HEATER_0_PIN       10
#define HEATER_1_PIN       45
#define HEATER_BED_PIN     8

#define FAN_PIN            9   
#define FAN1_PIN           7
//#define FAN2_PIN           44

//
// Misc. Functions
//
#define PS_ON_PIN          12

//
// LCD Display input pins
//
//>EXP1
#define BEEPER_PIN        37
#define BTN_ENC           35
#define LCD_PINS_ENABLE   17
#define LCD_PINS_RS       16
#define LCD_PINS_D4       23
#define LCD_PINS_D5       25
#define LCD_PINS_D6       27
#define LCD_PINS_D7       29

//>EXP2
//MISO                    50
//SCK                     52
#define BTN_EN2           31
#define SDSS              53
#define BTN_EN1           33
//MOSI                    51
#define SD_DETECT_PIN     49
#define KILL_PIN          41
