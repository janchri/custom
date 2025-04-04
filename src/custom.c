/*
 * Copyright (c) 2015 Christoph Jans
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "libcustom.h"

int custom_get_value(int val)
{
    return val % 2; //(val != 0) ? val : CONFIG_CUSTOM_GET_VALUE_DEFAULT;
}