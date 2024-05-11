#ifndef __USB_DESCRIPTORS_H
#define __USB_DESCRIPTORS_H

#include "stm32f3xx_hal.h"

uint8_t const *tud_descriptor_device_cb(void);
uint8_t const *tud_descriptor_configuration_cb(uint8_t index);
uint16_t const *tud_descriptor_string_cb(uint8_t index, uint16_t langid);

#endif