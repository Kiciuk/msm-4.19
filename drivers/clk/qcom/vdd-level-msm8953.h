/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2020-2023, The Linux Foundation. All rights reserved.
 */

#ifndef __DRIVERS_CLK_QCOM_VDD_LEVEL_MSM8953_H
#define __DRIVERS_CLK_QCOM_VDD_LEVEL_MSM8953_H

#include <linux/regulator/rpm-smd-regulator.h>
#include <linux/regulator/consumer.h>

enum vdd_levels {
	VDD_NONE,
	VDD_MIN_SVS,
	VDD_LOW_SVS,
	VDD_SVS,
	VDD_SVS_PLUS,
	VDD_NOMINAL,
	VDD_NOMINAL_L1,
	VDD_HIGH,
	VDD_NUM
};

static int vdd_corner[] = {
	RPM_REGULATOR_LEVEL_NONE,		/* VDD_NONE */
	RPM_REGULATOR_LEVEL_MIN_SVS,		/* VDD_MIN_SVS */
	RPM_REGULATOR_LEVEL_LOW_SVS,		/* VDD_LOW_SVS*/
	RPM_REGULATOR_LEVEL_SVS,		/* VDD_SVS */
	RPM_REGULATOR_LEVEL_SVS_PLUS,		/* VDD_SVS_PLUS */
	RPM_REGULATOR_LEVEL_NOM,		/* VDD_NOM */
	RPM_REGULATOR_LEVEL_NOM_PLUS,		/* VDD_NOM_PLUS */
	RPM_REGULATOR_LEVEL_TURBO,		/* VDD_TURBO */
};

#endif
