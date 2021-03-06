/*
 * Copyright (C) 2013 INRIA
 * Copyright (C) 2014 Freie Universität Berlin
 *
 * This file is subject to the terms and conditions of the GNU Lesser General
 * Public License v2.1. See the file LICENSE in the top level directory for more
 * details.
 */

/**
 * @defgroup        cpu_stm32f1 STM32F1
 * @ingroup         cpu
 * @brief           CPU specific implementations for the STM32F1
 * @{
 *
 * @file
 * @brief           Implementation specific CPU configuration options
 *
 * @author          Alaeddine Weslati <alaeddine.weslati@intia.fr>
 * @author          Hauke Petersen <hauke.petersen@fu-berlin.de>
 */

#ifndef CPU_CONF_H
#define CPU_CONF_H

#include "cpu_conf_common.h"

#if defined(CPU_MODEL_STM32F103C8) || defined(CPU_MODEL_STM32F103CB) || defined(CPU_MODEL_STM32F103RB)
#include "vendor/stm32f103xb.h"
#elif defined(CPU_MODEL_STM32F103RE)
#include "vendor/stm32f103xe.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief   ARM Cortex-M specific CPU configuration
 * @{
 */
#define CPU_DEFAULT_IRQ_PRIO            (1U)
#if defined(CPU_MODEL_STM32F103RE)
#define CPU_IRQ_NUMOF                   (60U)
#else
#define CPU_IRQ_NUMOF                   (43U)
#endif
#define CPU_FLASH_BASE                  FLASH_BASE
/** @} */

/**
 * @brief   Flash page configuration
 * @{
 */
#define FLASHPAGE_SIZE      (2048U)

#if defined(CPU_MODEL_STM32F103C8)
#define FLASHPAGE_NUMOF     (32U)
#elif defined(CPU_MODEL_STM32F103CB) || defined(CPU_MODEL_STM32F103RB)
#define FLASHPAGE_NUMOF     (64U)
#elif defined(CPU_MODEL_STM32F103RE)
#define FLASHPAGE_NUMOF     (256U)
#endif
/** @} */

#ifdef __cplusplus
}
#endif

#endif /* CPU_CONF_H */
/** @} */
