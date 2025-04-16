/*
 * Copyright (c) 2019 STMicroelectronics
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef CAPTEURS_H
#define CAPTEURS_H

#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/sensor.h>
#include <stdio.h>
#include <zephyr/sys/util.h>
#include <math.h>




#ifdef CONFIG_LIS2DW12_TRIGGER

static void lis2dw12_trigger_handler(const struct device *dev,
				     const struct sensor_trigger *trig);
#endif

#ifdef CONFIG_LSM6DSO_TRIGGER
static void lsm6dso_acc_trig_handler(const struct device *dev,
				     const struct sensor_trigger *trig);
					 
static void lsm6dso_gyr_trig_handler(const struct device *dev,
				     const struct sensor_trigger *trig);

static void lsm6dso_temp_trig_handler(const struct device *dev,
				      const struct sensor_trigger *trig);
#endif


void lis2mdl_config(const struct device *lis2mdl);


void lis2dw12_config(const struct device *lis2dw12);

void lsm6dso_config(const struct device *lsm6dso);


#endif