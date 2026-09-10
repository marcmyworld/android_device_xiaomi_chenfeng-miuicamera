/*
 * Copyright (C) 2024 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

// Dummy destructor needed by libmibokeh_845_video.so (Movie Mode)
extern "C" void _ZN3zdl8DlSystem11TensorShapeD1Ev() {
    return;
}

// Dummy vtable needed by libwrapper_dlengine.so
extern "C" void* _ZTVN3zdl8DlSystem21UserBufferEncodingTfNE[32] = {0};