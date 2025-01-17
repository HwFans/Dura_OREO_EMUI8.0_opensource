/*
 * Copyright (C) 2012-2015 HUAWEI, Inc.
 * antenna board match driver
 * Author:l00345350
 *
 * This program check the antenna board match status
 *
 */
#ifndef _ANTENNA_BOARD_MATCH
#define _ANTENNA_BOARD_MATCH
#include <linux/device.h>

struct antenna_device_ops{
    int (*get_antenna_match_status)(void);
};

enum antenna_sysfs_type {
    ANTENNA_BOARD_MATCH = 0,
};

struct antenna_device_info {
    struct device *dev;
    struct antenna_device_ops *ops;
};

int antenna_match_ops_register(struct antenna_device_ops *ops);
#endif


