/*
 * Copyright (c) 2017 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <lib/custom/mylib.h>

int custom_get_value(int val)
{
    return (val != 0) ? val : CONFIG_CUSTOM_GET_VALUE_DEFAULT;
}