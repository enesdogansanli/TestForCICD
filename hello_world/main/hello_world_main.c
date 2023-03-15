/*
 * SPDX-FileCopyrightText: 2010-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include "esp_flash.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "sdkconfig.h"
#include <stdio.h>

void app_main(void) {

  while (true) {
    printf("Hello world!\n");
    vTaskDelay(1000 / portTICK_PERIOD_MS);
  }
}
