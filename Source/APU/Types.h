/*
** Dn-FamiTracker - NES/Famicom sound tracker
** Copyright (C) 2020-2025 D.P.C.M.
** FamiTracker Copyright (C) 2005-2020 Jonathan Liss
** 0CC-FamiTracker Copyright (C) 2014-2018 HertzDevil
**
** This program is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program. If not, see https://www.gnu.org/licenses/.
*/

#pragma once

#include <cstdint>

const uint8_t SNDCHIP_NONE = 0;
const uint8_t SNDCHIP_VRC6 = 1;			// Konami VRCVI
const uint8_t SNDCHIP_VRC7 = 2;			// Konami VRCVII
const uint8_t SNDCHIP_FDS  = 4;			// Famicom Disk System
const uint8_t SNDCHIP_MMC5 = 8;			// Nintendo MMC5
const uint8_t SNDCHIP_N163 = 16;		// Namco N163
const uint8_t SNDCHIP_S5B  = 32;		// Sunsoft 5B

const uint8_t SNDCHIP_EPSM = 128;		// Expansion Port Sound Module

enum chan_id_t {
	CHANID_SQUARE1,
	CHANID_SQUARE2,
	CHANID_TRIANGLE,
	CHANID_NOISE,
	CHANID_DPCM,

	CHANID_VRC6_PULSE1,
	CHANID_VRC6_PULSE2,
	CHANID_VRC6_SAWTOOTH,

	CHANID_MMC5_SQUARE1,
	CHANID_MMC5_SQUARE2,
	CHANID_MMC5_VOICE,		// not counted in NSF export

	CHANID_N163_CH1,		// // //
	CHANID_N163_CH2,
	CHANID_N163_CH3,
	CHANID_N163_CH4,
	CHANID_N163_CH5,
	CHANID_N163_CH6,
	CHANID_N163_CH7,
	CHANID_N163_CH8,

	CHANID_FDS,

	CHANID_VRC7_CH1,
	CHANID_VRC7_CH2,
	CHANID_VRC7_CH3,
	CHANID_VRC7_CH4,
	CHANID_VRC7_CH5,
	CHANID_VRC7_CH6,

	CHANID_S5B_CH1,
	CHANID_S5B_CH2,
	CHANID_S5B_CH3,

	CHANID_EPSM_FM1,
	CHANID_EPSM_FM2,
	CHANID_EPSM_FM3,
	CHANID_EPSM_FM4,
	CHANID_EPSM_FM5,
	CHANID_EPSM_FM6,

	CHANID_EPSM_SSG1,
	CHANID_EPSM_SSG2,
	CHANID_EPSM_SSG3,

	CHANID_EPSM_BD,
	CHANID_EPSM_SD,
	CHANID_EPSM_TOP,
	CHANID_EPSM_HH,
	CHANID_EPSM_TOM,
	CHANID_EPSM_RIM,

	CHANNELS		/* Total number of channels */
};

enum apu_machine_t {
	MACHINE_NTSC, 
	MACHINE_PAL
};
