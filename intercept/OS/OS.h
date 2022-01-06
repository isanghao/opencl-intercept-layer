/*
// Copyright (c) 2018-2022 Intel Corporation
//
// SPDX-License-Identifier: MIT
*/

#pragma once

#if defined(_WIN32)
#include "OS_windows.h"
#elif defined(__linux__)
#include "OS_linux.h"
#elif defined(__APPLE__)
#include "OS_mac.h"
#else
#error Unknown OS!
#endif
