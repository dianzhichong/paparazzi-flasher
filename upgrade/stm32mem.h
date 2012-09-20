/*
 * This file is part of the Black Magic Debug project.
 *
 * Copyright (C) 2011  Black Sphere Technologies Ltd.
 * Written by Gareth McMullin <gareth@blacksphere.co.nz>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __STM32MEM_H
#define __STM32MEM_H

#include <usb.h>

#if defined(__cplusplus)
extern "C" {
#endif

int stm32_mem_erase(usb_dev_handle *dev, uint16_t iface, uint32_t addr);
int stm32_mem_write(usb_dev_handle *dev, uint16_t iface, void *data, int size);
int stm32_mem_manifest(usb_dev_handle *dev, uint16_t iface);

#if defined(__cplusplus)
} /* extern "C" */
#endif

#endif

