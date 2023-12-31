/*
 * Copyright 2021-2023 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "tensorflow/lite/micro/all_ops_resolver.h"

tflite::MicroOpResolver &MODEL_GetOpsResolver()
{
    static tflite::AllOpsResolver s_microOpResolver;

    return s_microOpResolver;
}
