/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0xB2, 0xEE, 0xE0, 0x44, 0x6B, 0x8B, 0xA3, 0xCD}

// The MCU this board uses does not match any definition in platforms/eeprom.h, 
// but has 2kb of EEPROM according to https://www.nxp.com/part/MK20DX256VLH7.
#define EEPROM_CUSTOM 1
#define EEPROM_SIZE 2048
