// SPDX-FileCopyrightText: 2019-2024 Connor McLaughlin <stenzek@gmail.com>
// SPDX-License-Identifier: CC-BY-NC-ND-4.0

#include "gpu_sw_rasterizer.h"

#include "common/assert.h"
#include "common/gsvector.h"

namespace GPU_SW_Rasterizer::AVX2 {
#define USE_VECTOR 1
#include "gpu_sw_rasterizer.inl"
}
