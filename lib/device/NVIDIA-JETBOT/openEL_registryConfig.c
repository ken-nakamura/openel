/*
 * openEL_registryConfig.c
 *
 *  Created on: 2021/12/24
 *      Author: OpenEL-WG
 */

#include "openEL.h"
#include "openEL_registry.h"

#include "openEL_MotorPCA9685.h" /* デバイスベンダーから提供される定義ファイル */

const HAL_REG_T HalRegTbl[] = {
/*		DevKind		Vendor		Product			function table		component size								*/
		{0x0001,	0x0000000B,	0x00000001,		&HalMotorPCA9685Tbl,	sizeof(HALACTUATOR_T)	},
};

const int32_t hal_szRegTbl = sizeof(HalRegTbl)/sizeof(HAL_REG_T);
