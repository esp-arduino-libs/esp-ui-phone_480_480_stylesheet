/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include "widgets/app_launcher/esp_ui_app_launcher_type.h"

#ifdef __cplusplus
extern "C" {
#endif

#define ESP_UI_PHONE_480_480_DARK_APP_LAUNCHER_ICON_DATA() \
    {                                                      \
        .main = {                                          \
            .size = ESP_UI_STYLE_SIZE_SQUARE(200),         \
            .layout_row_pad = 10,                          \
        },                                                 \
        .image = {                                         \
            .default_size = ESP_UI_STYLE_SIZE_SQUARE(112), \
            .press_size = ESP_UI_STYLE_SIZE_SQUARE(100),   \
        },                                                 \
        .label = {                                         \
            .text_font = ESP_UI_STYLE_FONT_SIZE(22),       \
            .text_color = ESP_UI_STYLE_COLOR(0xFFFFFF),    \
        }                                                  \
    }

#define ESP_UI_PHONE_480_480_DARK_APP_LAUNCHER_DATA()                       \
    {                                                                       \
        .main = {                                                           \
            .y_start = 0,                                                   \
            .size = ESP_UI_STYLE_SIZE_RECT_PERCENT(100, 100),               \
        },                                                                  \
        .table = {                                                          \
            .default_num = 3,                                               \
            .size = ESP_UI_STYLE_SIZE_RECT_W_PERCENT(100, 400),             \
        },                                                                  \
        .indicator = {                                                      \
            .main_size = ESP_UI_STYLE_SIZE_RECT_W_PERCENT(100, 40),         \
            .main_layout_column_pad = 10,                                   \
            .spot_inactive_size = ESP_UI_STYLE_SIZE_SQUARE(12),             \
            .spot_active_size = ESP_UI_STYLE_SIZE_RECT(30, 12),             \
            .spot_inactive_background_color = ESP_UI_STYLE_COLOR(0xC6C6C6), \
            .spot_active_background_color = ESP_UI_STYLE_COLOR(0xFFFFFF),   \
        },                                                                  \
        .icon = ESP_UI_PHONE_480_480_DARK_APP_LAUNCHER_ICON_DATA(),         \
        .flags = {                                                          \
            .enable_table_scroll_anim = 0,                                  \
        },                                                                  \
    }

#ifdef __cplusplus
}
#endif
