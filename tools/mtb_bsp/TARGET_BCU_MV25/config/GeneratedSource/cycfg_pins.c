/*******************************************************************************
 * File Name: cycfg_pins.c
 *
 * Description:
 * Pin configuration
 * This file was automatically generated and should not be modified.
 * Configurator Backend 3.70.0
 * device-db 4.34.0.9502
 * mtb-dsl-pse8xxgp 1.1.1.824
 *
 *******************************************************************************
 * Copyright 2026 Cypress Semiconductor Corporation (an Infineon company) or
 * an affiliate of Cypress Semiconductor Corporation.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ******************************************************************************/

#include "cycfg_pins.h"

const cy_stc_gpio_pin_config_t SCB3_SPI_CS0_PMIC_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SCB3_SPI_CS0_PMIC_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t HYPER_RAM_SS_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = HYPER_RAM_SS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SMIF0_DATA0_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = SMIF0_DATA0_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SMIF0_DATA1_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = SMIF0_DATA1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SMIF0_DATA2_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = SMIF0_DATA2_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SMIF0_DATA3_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = SMIF0_DATA3_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t ENT_BTN_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_PULLUP,
    .hsiom = ENT_BTN_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t RTC_TS_L_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = RTC_TS_L_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t RTC_INT_L_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_PULLUP,
    .hsiom = RTC_INT_L_HSIOM,
    .intEdge = CY_GPIO_INTR_FALLING,
    .intMask = 1UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SECURE_RST_L_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SECURE_RST_L_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM1_RST_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BMS_COM1_RST_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BSP_I3C_SCL_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_CFGOUT3_STRONG_PULLUP_HIGHZ,
    .hsiom = BSP_I3C_SCL_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BSP_I3C_SDA_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_CFGOUT3_STRONG_PULLUP_HIGHZ,
    .hsiom = BSP_I3C_SDA_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t HYPERRAM_D0_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = HYPERRAM_D0_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t HYPERRAM_D1_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = HYPERRAM_D1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t HYPERRAM_D2_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = HYPERRAM_D2_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t HYPERRAM_D3_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = HYPERRAM_D3_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t HYPERRAM_D4_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = HYPERRAM_D4_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t HYPERRAM_D5_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = HYPERRAM_D5_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t HYPERRAM_D6_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = HYPERRAM_D6_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t HYPERRAM_D7_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = HYPERRAM_D7_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t QSPI_FLASH_SS_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = QSPI_FLASH_SS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BSP_SWJ_TDO_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BSP_SWJ_TDO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BSP_SWJ_TDI_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_PULLUP,
    .hsiom = BSP_SWJ_TDI_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BSP_SWJ_TMS_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_PULLUP,
    .hsiom = BSP_SWJ_TMS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BSP_SWJ_TCLK_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_PULLDOWN,
    .hsiom = BSP_SWJ_TCLK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t F1_FDO_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = F1_FDO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB2_UART_RX_UART_HS_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = SCB2_UART_RX_UART_HS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t F3_FDO_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = F3_FDO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB2_UART_TX_UART_HS_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SCB2_UART_TX_UART_HS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t F1_FS_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = F1_FS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t F3_FS_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = F3_FS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t PWM_IL_OUT_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = PWM_IL_OUT_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t LOAD_SW_IN3_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = LOAD_SW_IN3_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t EXT_CLK_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = EXT_CLK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t PWM_IL_IN_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = PWM_IL_IN_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t K1_PWM_FB_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = K1_PWM_FB_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t K3_PWM_FB_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = K3_PWM_FB_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM2_DIO2_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = BMS_COM2_DIO2_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM2_DIO2_DIR_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BMS_COM2_DIO2_DIR_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t FRAM_WP_L_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = FRAM_WP_L_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SEL_BTN_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = SEL_BTN_HSIOM,
    .intEdge = CY_GPIO_INTR_FALLING,
    .intMask = 1UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t LOAD_SW_RST_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = LOAD_SW_RST_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t LOAD_SW_FAULT_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = LOAD_SW_FAULT_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t LOAD_SW_IN4_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = LOAD_SW_IN4_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t LOAD_SW_LHM_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = LOAD_SW_LHM_HSIOM,
    .intEdge = CY_GPIO_INTR_FALLING,
    .intMask = 1UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t K_ENBL_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = K_ENBL_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t LED_BLUE_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = LED_BLUE_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB1_UART_TX_UART_LS_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SCB1_UART_TX_UART_LS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB1_UART_RX_UART_LS_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = SCB1_UART_RX_UART_LS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BT_UART_RX_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = BT_UART_RX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BT_UART_TX_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BT_UART_TX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BT_UART_CTS_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = BT_UART_CTS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BT_UART_RTS_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BT_UART_RTS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BT_REG_ON_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BT_REG_ON_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t RMII_ETH_RX_CTL_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = RMII_ETH_RX_CTL_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t RMII_ETH_RXD0_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = RMII_ETH_RXD0_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t RMII_ETH_RXD1_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = RMII_ETH_RXD1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB6_I2C_SCL_RTC_SE_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_OD_DRIVESLOW,
    .hsiom = SCB6_I2C_SCL_RTC_SE_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB6_I2C_SDA_RTC_SE_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_OD_DRIVESLOW,
    .hsiom = SCB6_I2C_SDA_RTC_SE_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t RMII_ETH_TXD0_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = RMII_ETH_TXD0_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t RMII_ETH_TXD1_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = RMII_ETH_TXD1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t RMII_ETH_TX_CTL_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = RMII_ETH_TX_CTL_HSIOM,
    .intEdge = CY_GPIO_INTR_FALLING,
    .intMask = 1UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BT_DEV_WAKE_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BT_DEV_WAKE_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t WL_REG_ON_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = WL_REG_ON_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t RMII_ETH_REF_CLK_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = RMII_ETH_REF_CLK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t WL_SDIO_CLK_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = WL_SDIO_CLK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t WL_SDIO_DATA0_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = WL_SDIO_DATA0_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t WL_SDIO_DATA1_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = WL_SDIO_DATA1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t WL_DEV_WAKE_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = WL_DEV_WAKE_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t WL_SDIO_DATA2_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = WL_SDIO_DATA2_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t WL_SDIO_DATA3_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = WL_SDIO_DATA3_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BT_HOST_WAKE_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_PULLUP,
    .hsiom = BT_HOST_WAKE_HSIOM,
    .intEdge = CY_GPIO_INTR_RISING,
    .intMask = 1UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t ETH_MDC_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = ETH_MDC_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t LED_RED_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = LED_RED_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t LED_GREEN_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = LED_GREEN_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t RMII_ETH_NRST_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = RMII_ETH_NRST_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t WL_HOST_WAKE_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_PULLUP,
    .hsiom = WL_HOST_WAKE_HSIOM,
    .intEdge = CY_GPIO_INTR_FALLING,
    .intMask = 1UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t ETH_MDIO_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = ETH_MDIO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t RS485_DE_RE_L_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = RS485_DE_RE_L_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t PMIC_INT_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_PULLUP,
    .hsiom = PMIC_INT_HSIOM,
    .intEdge = CY_GPIO_INTR_FALLING,
    .intMask = 1UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t PMIC_WDI_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = PMIC_WDI_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM2_RST_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BMS_COM2_RST_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB8_UART_TX_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SCB8_UART_TX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB8_UART_RX_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = SCB8_UART_RX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM2_INT_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = BMS_COM2_INT_HSIOM,
    .intEdge = CY_GPIO_INTR_FALLING,
    .intMask = 1UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CAN1_STB_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = CAN1_STB_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CAN0_STB_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = CAN0_STB_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB9_SPI_CLK_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SCB9_SPI_CLK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB9_SPI_MOSI_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SCB9_SPI_MOSI_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB9_SPI_MISO_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = SCB9_SPI_MISO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB9_SPI_CS0_K1_CSB_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SCB9_SPI_CS0_K1_CSB_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB9_SPI_CS1_K3_CSB_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SCB9_SPI_CS1_K3_CSB_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t ADC_SAR5_K1_CSNS_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = ADC_SAR5_K1_CSNS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t ADC_SAR6_K3_CSNS_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = ADC_SAR6_K3_CSNS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t ADC_TEMP_SENS_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = ADC_TEMP_SENS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CAN0_RX_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = CAN0_RX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CAN0_TX_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CAN0_TX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CAN1_RX_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = CAN1_RX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CAN1_TX_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CAN1_TX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM2_DIO1_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BMS_COM2_DIO1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM2_SPI_MISO_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = BMS_COM2_SPI_MISO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM2_CS0_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BMS_COM2_CS0_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM2_CS1_MC33XS2410_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BMS_COM2_CS1_MC33XS2410_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM2_SPI_CLK_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BMS_COM2_SPI_CLK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM2_SPI_MOSI_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BMS_COM2_SPI_MOSI_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM1_SPI_CLK_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BMS_COM1_SPI_CLK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM1_SPI_MOSI_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BMS_COM1_SPI_MOSI_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM1_DIO1_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BMS_COM1_DIO1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM1_MISO_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = BMS_COM1_MISO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM1_CS0_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BMS_COM1_CS0_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM1_DIO2_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_PULLUP,
    .hsiom = BMS_COM1_DIO2_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t WCO_OUT_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = WCO_OUT_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t RTC_CLK32_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = RTC_CLK32_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BSP_ECO_IN_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = BSP_ECO_IN_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BSP_ECO_OUT_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = BSP_ECO_OUT_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BSP_TRACE_CLK_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BSP_TRACE_CLK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BSP_TRACE_DATA3_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BSP_TRACE_DATA3_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BSP_TRACE_DATA2_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BSP_TRACE_DATA2_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BSP_TRACE_DATA1_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BSP_TRACE_DATA1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BSP_TRACE_DATA0_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BSP_TRACE_DATA0_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM1_INT_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = BMS_COM1_INT_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t K1_PWM_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = K1_PWM_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t K3_PWM_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = K3_PWM_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t WIFI_SDIO_CMD_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = WIFI_SDIO_CMD_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t MEMORY_RST_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = MEMORY_RST_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t LOAD_SW_IN1_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = LOAD_SW_IN1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t LOAD_SW_IN2_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = LOAD_SW_IN2_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB3_SPI_MISO_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = SCB3_SPI_MISO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB3_SPI_MOSI_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SCB3_SPI_MOSI_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB3_SPI_CLK_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SCB3_SPI_CLK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB3_SPI_CS1_FRAM_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SCB3_SPI_CS1_FRAM_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};

void init_cycfg_pins(void)
{
    Cy_GPIO_Pin_Init(SCB3_SPI_CS0_PMIC_PORT, SCB3_SPI_CS0_PMIC_PIN, &SCB3_SPI_CS0_PMIC_config);
    Cy_GPIO_Pin_Init(HYPER_RAM_SS_PORT, HYPER_RAM_SS_PIN, &HYPER_RAM_SS_config);
    Cy_GPIO_Pin_Init(SMIF0_DATA0_PORT, SMIF0_DATA0_PIN, &SMIF0_DATA0_config);
    Cy_GPIO_Pin_Init(SMIF0_DATA1_PORT, SMIF0_DATA1_PIN, &SMIF0_DATA1_config);
    Cy_GPIO_Pin_Init(SMIF0_DATA2_PORT, SMIF0_DATA2_PIN, &SMIF0_DATA2_config);
    Cy_GPIO_Pin_Init(SMIF0_DATA3_PORT, SMIF0_DATA3_PIN, &SMIF0_DATA3_config);
    Cy_GPIO_Pin_Init(ENT_BTN_PORT, ENT_BTN_PIN, &ENT_BTN_config);
    Cy_GPIO_Pin_Init(RTC_TS_L_PORT, RTC_TS_L_PIN, &RTC_TS_L_config);
    Cy_GPIO_Pin_Init(RTC_INT_L_PORT, RTC_INT_L_PIN, &RTC_INT_L_config);
    Cy_GPIO_Pin_Init(SECURE_RST_L_PORT, SECURE_RST_L_PIN, &SECURE_RST_L_config);
    Cy_GPIO_Pin_Init(BMS_COM1_RST_PORT, BMS_COM1_RST_PIN, &BMS_COM1_RST_config);
    Cy_GPIO_Pin_Init(BSP_I3C_SCL_PORT, BSP_I3C_SCL_PIN, &BSP_I3C_SCL_config);
    Cy_GPIO_Pin_Init(BSP_I3C_SDA_PORT, BSP_I3C_SDA_PIN, &BSP_I3C_SDA_config);
    Cy_GPIO_Pin_Init(HYPERRAM_D0_PORT, HYPERRAM_D0_PIN, &HYPERRAM_D0_config);
    Cy_GPIO_Pin_Init(HYPERRAM_D1_PORT, HYPERRAM_D1_PIN, &HYPERRAM_D1_config);
    Cy_GPIO_Pin_Init(HYPERRAM_D2_PORT, HYPERRAM_D2_PIN, &HYPERRAM_D2_config);
    Cy_GPIO_Pin_Init(HYPERRAM_D3_PORT, HYPERRAM_D3_PIN, &HYPERRAM_D3_config);
    Cy_GPIO_Pin_Init(HYPERRAM_D4_PORT, HYPERRAM_D4_PIN, &HYPERRAM_D4_config);
    Cy_GPIO_Pin_Init(HYPERRAM_D5_PORT, HYPERRAM_D5_PIN, &HYPERRAM_D5_config);
    Cy_GPIO_Pin_Init(HYPERRAM_D6_PORT, HYPERRAM_D6_PIN, &HYPERRAM_D6_config);
    Cy_GPIO_Pin_Init(HYPERRAM_D7_PORT, HYPERRAM_D7_PIN, &HYPERRAM_D7_config);
    Cy_GPIO_Pin_Init(QSPI_FLASH_SS_PORT, QSPI_FLASH_SS_PIN, &QSPI_FLASH_SS_config);
    Cy_GPIO_Pin_Init(BSP_SWJ_TDO_PORT, BSP_SWJ_TDO_PIN, &BSP_SWJ_TDO_config);
    Cy_GPIO_Pin_Init(BSP_SWJ_TDI_PORT, BSP_SWJ_TDI_PIN, &BSP_SWJ_TDI_config);
    Cy_GPIO_Pin_Init(BSP_SWJ_TMS_PORT, BSP_SWJ_TMS_PIN, &BSP_SWJ_TMS_config);
    Cy_GPIO_Pin_Init(BSP_SWJ_TCLK_PORT, BSP_SWJ_TCLK_PIN, &BSP_SWJ_TCLK_config);
    Cy_GPIO_Pin_Init(F1_FDO_PORT, F1_FDO_PIN, &F1_FDO_config);
    Cy_GPIO_Pin_Init(SCB2_UART_RX_UART_HS_PORT, SCB2_UART_RX_UART_HS_PIN, &SCB2_UART_RX_UART_HS_config);
    Cy_GPIO_Pin_Init(F3_FDO_PORT, F3_FDO_PIN, &F3_FDO_config);
    Cy_GPIO_Pin_Init(SCB2_UART_TX_UART_HS_PORT, SCB2_UART_TX_UART_HS_PIN, &SCB2_UART_TX_UART_HS_config);
    Cy_GPIO_Pin_Init(F1_FS_PORT, F1_FS_PIN, &F1_FS_config);
    Cy_GPIO_Pin_Init(F3_FS_PORT, F3_FS_PIN, &F3_FS_config);
    Cy_GPIO_Pin_Init(PWM_IL_OUT_PORT, PWM_IL_OUT_PIN, &PWM_IL_OUT_config);
    Cy_GPIO_Pin_Init(LOAD_SW_IN3_PORT, LOAD_SW_IN3_PIN, &LOAD_SW_IN3_config);
    Cy_GPIO_Pin_Init(PWM_IL_IN_PORT, PWM_IL_IN_PIN, &PWM_IL_IN_config);
    Cy_GPIO_Pin_Init(K1_PWM_FB_PORT, K1_PWM_FB_PIN, &K1_PWM_FB_config);
    Cy_GPIO_Pin_Init(K3_PWM_FB_PORT, K3_PWM_FB_PIN, &K3_PWM_FB_config);
    Cy_GPIO_Pin_Init(BMS_COM2_DIO2_PORT, BMS_COM2_DIO2_PIN, &BMS_COM2_DIO2_config);
    Cy_GPIO_Pin_Init(BMS_COM2_DIO2_DIR_PORT, BMS_COM2_DIO2_DIR_PIN, &BMS_COM2_DIO2_DIR_config);
    Cy_GPIO_Pin_Init(FRAM_WP_L_PORT, FRAM_WP_L_PIN, &FRAM_WP_L_config);
    Cy_GPIO_Pin_Init(SEL_BTN_PORT, SEL_BTN_PIN, &SEL_BTN_config);
    Cy_GPIO_Pin_Init(LOAD_SW_RST_PORT, LOAD_SW_RST_PIN, &LOAD_SW_RST_config);
    Cy_GPIO_Pin_Init(LOAD_SW_FAULT_PORT, LOAD_SW_FAULT_PIN, &LOAD_SW_FAULT_config);
    Cy_GPIO_Pin_Init(LOAD_SW_IN4_PORT, LOAD_SW_IN4_PIN, &LOAD_SW_IN4_config);
    Cy_GPIO_Pin_Init(LOAD_SW_LHM_PORT, LOAD_SW_LHM_PIN, &LOAD_SW_LHM_config);
    Cy_GPIO_Pin_Init(K_ENBL_PORT, K_ENBL_PIN, &K_ENBL_config);
    Cy_GPIO_Pin_Init(LED_BLUE_PORT, LED_BLUE_PIN, &LED_BLUE_config);
    Cy_GPIO_Pin_Init(SCB1_UART_TX_UART_LS_PORT, SCB1_UART_TX_UART_LS_PIN, &SCB1_UART_TX_UART_LS_config);
    Cy_GPIO_Pin_Init(SCB1_UART_RX_UART_LS_PORT, SCB1_UART_RX_UART_LS_PIN, &SCB1_UART_RX_UART_LS_config);
    Cy_GPIO_Pin_Init(BT_UART_RX_PORT, BT_UART_RX_PIN, &BT_UART_RX_config);
    Cy_GPIO_Pin_Init(BT_UART_TX_PORT, BT_UART_TX_PIN, &BT_UART_TX_config);
    Cy_GPIO_Pin_Init(BT_UART_CTS_PORT, BT_UART_CTS_PIN, &BT_UART_CTS_config);
    Cy_GPIO_Pin_Init(BT_UART_RTS_PORT, BT_UART_RTS_PIN, &BT_UART_RTS_config);
    Cy_GPIO_Pin_Init(BT_REG_ON_PORT, BT_REG_ON_PIN, &BT_REG_ON_config);
    Cy_GPIO_Pin_Init(RMII_ETH_RX_CTL_PORT, RMII_ETH_RX_CTL_PIN, &RMII_ETH_RX_CTL_config);
    Cy_GPIO_Pin_Init(RMII_ETH_RXD0_PORT, RMII_ETH_RXD0_PIN, &RMII_ETH_RXD0_config);
    Cy_GPIO_Pin_Init(RMII_ETH_RXD1_PORT, RMII_ETH_RXD1_PIN, &RMII_ETH_RXD1_config);
    Cy_GPIO_Pin_Init(SCB6_I2C_SCL_RTC_SE_PORT, SCB6_I2C_SCL_RTC_SE_PIN, &SCB6_I2C_SCL_RTC_SE_config);
    Cy_GPIO_Pin_Init(SCB6_I2C_SDA_RTC_SE_PORT, SCB6_I2C_SDA_RTC_SE_PIN, &SCB6_I2C_SDA_RTC_SE_config);
    Cy_GPIO_Pin_Init(RMII_ETH_TXD0_PORT, RMII_ETH_TXD0_PIN, &RMII_ETH_TXD0_config);
    Cy_GPIO_Pin_Init(RMII_ETH_TXD1_PORT, RMII_ETH_TXD1_PIN, &RMII_ETH_TXD1_config);
    Cy_GPIO_Pin_Init(RMII_ETH_TX_CTL_PORT, RMII_ETH_TX_CTL_PIN, &RMII_ETH_TX_CTL_config);
    Cy_GPIO_Pin_Init(BT_DEV_WAKE_PORT, BT_DEV_WAKE_PIN, &BT_DEV_WAKE_config);
    Cy_GPIO_Pin_Init(WL_REG_ON_PORT, WL_REG_ON_PIN, &WL_REG_ON_config);
    Cy_GPIO_Pin_Init(RMII_ETH_REF_CLK_PORT, RMII_ETH_REF_CLK_PIN, &RMII_ETH_REF_CLK_config);
    Cy_GPIO_Pin_Init(WL_SDIO_CLK_PORT, WL_SDIO_CLK_PIN, &WL_SDIO_CLK_config);
    Cy_GPIO_Pin_Init(WL_SDIO_DATA0_PORT, WL_SDIO_DATA0_PIN, &WL_SDIO_DATA0_config);
    Cy_GPIO_Pin_Init(WL_SDIO_DATA1_PORT, WL_SDIO_DATA1_PIN, &WL_SDIO_DATA1_config);
    Cy_GPIO_Pin_Init(WL_DEV_WAKE_PORT, WL_DEV_WAKE_PIN, &WL_DEV_WAKE_config);
    Cy_GPIO_Pin_Init(WL_SDIO_DATA2_PORT, WL_SDIO_DATA2_PIN, &WL_SDIO_DATA2_config);
    Cy_GPIO_Pin_Init(WL_SDIO_DATA3_PORT, WL_SDIO_DATA3_PIN, &WL_SDIO_DATA3_config);
    Cy_GPIO_Pin_Init(BT_HOST_WAKE_PORT, BT_HOST_WAKE_PIN, &BT_HOST_WAKE_config);
    Cy_GPIO_Pin_Init(ETH_MDC_PORT, ETH_MDC_PIN, &ETH_MDC_config);
    Cy_GPIO_Pin_Init(LED_RED_PORT, LED_RED_PIN, &LED_RED_config);
    Cy_GPIO_Pin_Init(LED_GREEN_PORT, LED_GREEN_PIN, &LED_GREEN_config);
    Cy_GPIO_Pin_Init(RMII_ETH_NRST_PORT, RMII_ETH_NRST_PIN, &RMII_ETH_NRST_config);
    Cy_GPIO_Pin_Init(WL_HOST_WAKE_PORT, WL_HOST_WAKE_PIN, &WL_HOST_WAKE_config);
    Cy_GPIO_Pin_Init(ETH_MDIO_PORT, ETH_MDIO_PIN, &ETH_MDIO_config);
    Cy_GPIO_Pin_Init(RS485_DE_RE_L_PORT, RS485_DE_RE_L_PIN, &RS485_DE_RE_L_config);
    Cy_GPIO_Pin_Init(PMIC_INT_PORT, PMIC_INT_PIN, &PMIC_INT_config);
    Cy_GPIO_Pin_Init(PMIC_WDI_PORT, PMIC_WDI_PIN, &PMIC_WDI_config);
    Cy_GPIO_Pin_Init(BMS_COM2_RST_PORT, BMS_COM2_RST_PIN, &BMS_COM2_RST_config);
    Cy_GPIO_Pin_Init(SCB8_UART_TX_PORT, SCB8_UART_TX_PIN, &SCB8_UART_TX_config);
    Cy_GPIO_Pin_Init(SCB8_UART_RX_PORT, SCB8_UART_RX_PIN, &SCB8_UART_RX_config);
    Cy_GPIO_Pin_Init(BMS_COM2_INT_PORT, BMS_COM2_INT_PIN, &BMS_COM2_INT_config);
    Cy_GPIO_Pin_Init(CAN1_STB_PORT, CAN1_STB_PIN, &CAN1_STB_config);
    Cy_GPIO_Pin_Init(CAN0_STB_PORT, CAN0_STB_PIN, &CAN0_STB_config);
    Cy_GPIO_Pin_Init(SCB9_SPI_CLK_PORT, SCB9_SPI_CLK_PIN, &SCB9_SPI_CLK_config);
    Cy_GPIO_Pin_Init(SCB9_SPI_MOSI_PORT, SCB9_SPI_MOSI_PIN, &SCB9_SPI_MOSI_config);
    Cy_GPIO_Pin_Init(SCB9_SPI_MISO_PORT, SCB9_SPI_MISO_PIN, &SCB9_SPI_MISO_config);
    Cy_GPIO_Pin_Init(SCB9_SPI_CS0_K1_CSB_PORT, SCB9_SPI_CS0_K1_CSB_PIN, &SCB9_SPI_CS0_K1_CSB_config);
    Cy_GPIO_Pin_Init(SCB9_SPI_CS1_K3_CSB_PORT, SCB9_SPI_CS1_K3_CSB_PIN, &SCB9_SPI_CS1_K3_CSB_config);
    Cy_GPIO_Pin_Init(ADC_SAR5_K1_CSNS_PORT, ADC_SAR5_K1_CSNS_PIN, &ADC_SAR5_K1_CSNS_config);
    Cy_GPIO_Pin_Init(ADC_SAR6_K3_CSNS_PORT, ADC_SAR6_K3_CSNS_PIN, &ADC_SAR6_K3_CSNS_config);
    Cy_GPIO_Pin_Init(ADC_TEMP_SENS_PORT, ADC_TEMP_SENS_PIN, &ADC_TEMP_SENS_config);
    Cy_GPIO_Pin_Init(CAN0_RX_PORT, CAN0_RX_PIN, &CAN0_RX_config);
    Cy_GPIO_Pin_Init(CAN0_TX_PORT, CAN0_TX_PIN, &CAN0_TX_config);
    Cy_GPIO_Pin_Init(CAN1_RX_PORT, CAN1_RX_PIN, &CAN1_RX_config);
    Cy_GPIO_Pin_Init(CAN1_TX_PORT, CAN1_TX_PIN, &CAN1_TX_config);
    Cy_GPIO_Pin_Init(BMS_COM2_DIO1_PORT, BMS_COM2_DIO1_PIN, &BMS_COM2_DIO1_config);
    Cy_GPIO_Pin_Init(BMS_COM2_SPI_MISO_PORT, BMS_COM2_SPI_MISO_PIN, &BMS_COM2_SPI_MISO_config);
    Cy_GPIO_Pin_Init(BMS_COM2_CS0_PORT, BMS_COM2_CS0_PIN, &BMS_COM2_CS0_config);
    Cy_GPIO_Pin_Init(BMS_COM2_CS1_MC33XS2410_PORT, BMS_COM2_CS1_MC33XS2410_PIN, &BMS_COM2_CS1_MC33XS2410_config);
    Cy_GPIO_Pin_Init(BMS_COM2_SPI_CLK_PORT, BMS_COM2_SPI_CLK_PIN, &BMS_COM2_SPI_CLK_config);
    Cy_GPIO_Pin_Init(BMS_COM2_SPI_MOSI_PORT, BMS_COM2_SPI_MOSI_PIN, &BMS_COM2_SPI_MOSI_config);
    Cy_GPIO_Pin_Init(BMS_COM1_SPI_CLK_PORT, BMS_COM1_SPI_CLK_PIN, &BMS_COM1_SPI_CLK_config);
    Cy_GPIO_Pin_Init(BMS_COM1_SPI_MOSI_PORT, BMS_COM1_SPI_MOSI_PIN, &BMS_COM1_SPI_MOSI_config);
    Cy_GPIO_Pin_Init(BMS_COM1_DIO1_PORT, BMS_COM1_DIO1_PIN, &BMS_COM1_DIO1_config);
    Cy_GPIO_Pin_Init(BMS_COM1_MISO_PORT, BMS_COM1_MISO_PIN, &BMS_COM1_MISO_config);
    Cy_GPIO_Pin_Init(BMS_COM1_CS0_PORT, BMS_COM1_CS0_PIN, &BMS_COM1_CS0_config);
    Cy_GPIO_Pin_Init(BMS_COM1_DIO2_PORT, BMS_COM1_DIO2_PIN, &BMS_COM1_DIO2_config);
    Cy_GPIO_Pin_Init(BSP_TRACE_CLK_PORT, BSP_TRACE_CLK_PIN, &BSP_TRACE_CLK_config);
    Cy_GPIO_Pin_Init(BSP_TRACE_DATA3_PORT, BSP_TRACE_DATA3_PIN, &BSP_TRACE_DATA3_config);
    Cy_GPIO_Pin_Init(BSP_TRACE_DATA2_PORT, BSP_TRACE_DATA2_PIN, &BSP_TRACE_DATA2_config);
    Cy_GPIO_Pin_Init(BSP_TRACE_DATA1_PORT, BSP_TRACE_DATA1_PIN, &BSP_TRACE_DATA1_config);
    Cy_GPIO_Pin_Init(BSP_TRACE_DATA0_PORT, BSP_TRACE_DATA0_PIN, &BSP_TRACE_DATA0_config);
    Cy_GPIO_Pin_Init(BMS_COM1_INT_PORT, BMS_COM1_INT_PIN, &BMS_COM1_INT_config);
    Cy_GPIO_Pin_Init(K1_PWM_PORT, K1_PWM_PIN, &K1_PWM_config);
    Cy_GPIO_Pin_Init(K3_PWM_PORT, K3_PWM_PIN, &K3_PWM_config);
    Cy_GPIO_Pin_Init(WIFI_SDIO_CMD_PORT, WIFI_SDIO_CMD_PIN, &WIFI_SDIO_CMD_config);
    Cy_GPIO_Pin_Init(MEMORY_RST_PORT, MEMORY_RST_PIN, &MEMORY_RST_config);
    Cy_GPIO_Pin_Init(LOAD_SW_IN1_PORT, LOAD_SW_IN1_PIN, &LOAD_SW_IN1_config);
    Cy_GPIO_Pin_Init(LOAD_SW_IN2_PORT, LOAD_SW_IN2_PIN, &LOAD_SW_IN2_config);
    Cy_GPIO_Pin_Init(SCB3_SPI_MISO_PORT, SCB3_SPI_MISO_PIN, &SCB3_SPI_MISO_config);
    Cy_GPIO_Pin_Init(SCB3_SPI_MOSI_PORT, SCB3_SPI_MOSI_PIN, &SCB3_SPI_MOSI_config);
    Cy_GPIO_Pin_Init(SCB3_SPI_CLK_PORT, SCB3_SPI_CLK_PIN, &SCB3_SPI_CLK_config);
    Cy_GPIO_Pin_Init(SCB3_SPI_CS1_FRAM_PORT, SCB3_SPI_CS1_FRAM_PIN, &SCB3_SPI_CS1_FRAM_config);
}
