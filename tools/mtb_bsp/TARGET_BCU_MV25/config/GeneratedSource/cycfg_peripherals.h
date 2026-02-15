/*******************************************************************************
 * File Name: cycfg_peripherals.h
 *
 * Description:
 * Analog configuration
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

#if !defined(CYCFG_PERIPHERALS_H)
#define CYCFG_PERIPHERALS_H

#include "cycfg_notices.h"
#include "cy_autanalog.h"
#include "cy_sysclk.h"
#include "cy_i3c.h"
#include "cy_scb_uart.h"
#include "cy_scb_spi.h"
#include "cy_scb_i2c.h"
#include "cy_sd_host.h"
#include "cy_canfd.h"
#include "cy_smif.h"
#include "cycfg_qspi_memslot.h"
#include "cy_mcwdt.h"
#include "cy_tcpwm_counter.h"
#include "cycfg_routing.h"
#include "cy_tcpwm_pwm.h"

#if defined (COMPONENT_MTB_HAL)
#include "mtb_hal.h"
#include "cycfg_peripheral_clocks.h"
#include "mtb_hal_hw_types.h"
#include "mtb_hal_clock.h"
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

#define BSP_ADC_ENABLED 1U
#define AUTANALOG_CLOCK_DIV_PRIO_HS_DEFAULT 20
#define BSP_ADC_lppass_IRQ pass_interrupt_lppass_IRQn
#define BSP_ADC_fifo_IRQ pass_interrupt_fifo_IRQn
#define CYBSP_AUTONOMOUS_CONTROLLER_ENABLED 1U
#define CYBSP_SAR_ADC_ENABLED 1U
#define CYBSP_AUTONOMOUS_CONTROLLER_STATE_0_ENABLED 1U
#define CYBSP_AUTONOMOUS_CONTROLLER_STATE_1_ENABLED 1U
#define CYBSP_AUTONOMOUS_CONTROLLER_STATE_2_ENABLED 1U
#define CYBSP_SAR_ADC_GPIO_CH_0_ENABLED 1U
#define CYBSP_SAR_ADC_SCAN_GRP_0_ENABLED 1U
#define CYBSP_SAR_ADC_SCAN_GRP_0_SCAN_0_ENABLED 1U
#define ETH_IF_ENABLED 1U
#define ETH_PHY_DP83867IR 
#define ETH_IF_PHY_ADDR 0
#define ETH_IF_PHY_INTERFACE 1u
#define ETH_IF_PHY_SPEED 3
#define ETH_IF_PHY_MODE 2
#define ETH_IF_MAC_ADDR0 0x00U
#define ETH_IF_MAC_ADDR1 0x03U
#define ETH_IF_MAC_ADDR2 0x19U
#define ETH_IF_MAC_ADDR3 0x45U
#define ETH_IF_MAC_ADDR4 0x00U
#define ETH_IF_MAC_ADDR5 0x00U
#define ETH_IF_MAC_ADDR (((uint64_t)ETH_IF_MAC_ADDR0<<0) | ((uint64_t)ETH_IF_MAC_ADDR1<<8) | ((uint64_t)ETH_IF_MAC_ADDR2<<16) | ((uint64_t)ETH_IF_MAC_ADDR3<<24) | ((uint64_t)ETH_IF_MAC_ADDR4<<32) | ((uint64_t)ETH_IF_MAC_ADDR5<<40))
#define ETH_IF_STATIC_IP 0
#define ETH_IF_MAC_CLOCK 0u
#define ETH_IF_PROMISCUOUS_MODE false
#define ETH_IF_ACCEPT_BROADCAST_FRAMES true
#define ETH_IF_ETHERNET_INDEX 0
#define ETH_IF_INTRSRC_Q0 (eth_interrupt_eth_0_IRQn)
#define ETH_IF_INTRSRC_Q1 (eth_interrupt_eth_1_IRQn)
#define ETH_IF_INTRSRC_Q2 (eth_interrupt_eth_2_IRQn)
#define ETH_IF_INTRPRIORITY 3UL
#define CYCFG_TCPIP_THREAD_PRIO 4
#define CYCFG_TCPIP_THREAD_STACKSIZE 4096
#define CYCFG_IP_OPTIONS_ALLOWED 1
#define CYCFG_LWIP_IPV6 1
#define CYCFG_IP_FRAG 0
#define CYCFG_IP_REASSEMBLY 0
#define CYCFG_IP_DEFAULT_TTL 255
#define CYCFG_ARP_TABLE_SIZE 10
#define CYCFG_LWIP_AUTOIP 0
#define CYCFG_LWIP_ICMP 1
#define CYCFG_LWIP_IGMP 1
#define CYCFG_LWIP_TCP 1
#define CYCFG_TCP_MSS 1460
#define CYCFG_TCP_WND 5840
#define CYCFG_TCP_SND_BUF 5840
#define CYCFG_TCP_SND_QUEUELEN 25
#define CYCFG_LWIP_UDP 1
#define CYCFG_MEM_SIZE 1600
#define CYCFG_PBUF_POOL_SIZE 50
#define CYCFG_MEMP_NUM_PBUF 16
#define CYCFG_MEMP_NUM_RAW_PCB 4
#define CYCFG_MEMP_NUM_UDP_PCB 8
#define CYCFG_MEMP_NUM_TCP_PCB 8
#define CYCFG_MEMP_NUM_TCP_PCB_LISTEN 1
#define CYCFG_MEMP_NUM_TCP_SEG 27
#define CYCFG_MEMP_NUM_ARP_QUEUE 30
#define CYCFG_MEMP_NUM_NETBUF 8
#define CYCFG_MEMP_NUM_NETCONN 16
#define CYCFG_MEMP_NUM_TCPIP_MSG_API 8
#define CYCFG_MEMP_NUM_TCPIP_MSG_INPKT 8
#define I3C_IF_ENABLED 1U
#define I3C_IF_HW I3C_CORE
#define I3C_IF_IRQ i3c_interrupt_IRQn
#define UART_LS_ENABLED 1U
#define UART_LS_HW SCB1
#define UART_LS_IRQ scb_1_interrupt_IRQn
#define DEBUG_UART_HS_ENABLED 1U
#define DEBUG_UART_HS_HW SCB2
#define DEBUG_UART_HS_IRQ scb_2_interrupt_IRQn
#define PMIC_FRAM_IF_ENABLED 1U
#define PMIC_FRAM_IF_HW SCB3
#define PMIC_FRAM_IF_IRQ scb_3_interrupt_IRQn
#define BT_UART_ENABLED 1U
#define BT_UART_HW SCB4
#define BT_UART_IRQ scb_4_interrupt_IRQn
#define BMS_COM2_IF_ENABLED 1U
#define BMS_COM2_IF_HW SCB5
#define BMS_COM2_IF_IRQ scb_5_interrupt_IRQn
#define RTC_SE_IF_ENABLED 1U
#define RTC_SE_IF_HW SCB6
#define RTC_SE_IF_IRQ scb_6_interrupt_IRQn
#define RS485_IF_ENABLED 1U
#define RS485_IF_HW SCB8
#define RS485_IF_IRQ scb_8_interrupt_IRQn
#define MC33HB2000_IF_ENABLED 1U
#define MC33HB2000_IF_HW SCB9
#define MC33HB2000_IF_IRQ scb_9_interrupt_IRQn
#define BMS_COM1_IF_ENABLED 1U
#define BMS_COM1_IF_HW SCB11
#define BMS_COM1_IF_IRQ scb_11_interrupt_IRQn
#define CYBSP_WIFI_SDIO_ENABLED 1U
#define CYBSP_WIFI_SDIO_HW SDHC0
#define CYBSP_WIFI_SDIO_IRQ sdhc_0_interrupt_general_IRQn
#define CAN0_IF_ENABLED 1U
#define CAN0_IF_HW CANFD0
#define CAN0_IF_CHANNEL CANFD0_CH0
#define CAN0_IF_STD_ID_FILTER_ID_0 0
#define CAN0_IF_EXT_ID_FILTER_ID_0 0
#define CAN0_IF_DATA_0 0
#define CAN0_IF_DATA_1 1
#define CAN0_IF_DATA_2 2
#define CAN0_IF_DATA_3 3
#define CAN0_IF_DATA_4 4
#define CAN0_IF_DATA_5 5
#define CAN0_IF_DATA_6 6
#define CAN0_IF_DATA_7 7
#define CAN0_IF_DATA_8 8
#define CAN0_IF_DATA_9 9
#define CAN0_IF_DATA_10 10
#define CAN0_IF_DATA_11 11
#define CAN0_IF_DATA_12 12
#define CAN0_IF_DATA_13 13
#define CAN0_IF_DATA_14 14
#define CAN0_IF_DATA_15 15
#define CAN0_IF_IRQ_0 canfd_0_interrupts0_0_IRQn
#define CAN0_IF_IRQ_1 canfd_0_interrupts1_0_IRQn
#define CAN0_IF_CHANNEL_NUM 0U
#define CAN1_IF_ENABLED 1U
#define CAN1_IF_HW CANFD0
#define CAN1_IF_CHANNEL CANFD0_CH1
#define CAN1_IF_STD_ID_FILTER_ID_0 0
#define CAN1_IF_EXT_ID_FILTER_ID_0 0
#define CAN1_IF_DATA_0 0
#define CAN1_IF_DATA_1 1
#define CAN1_IF_DATA_2 2
#define CAN1_IF_DATA_3 3
#define CAN1_IF_DATA_4 4
#define CAN1_IF_DATA_5 5
#define CAN1_IF_DATA_6 6
#define CAN1_IF_DATA_7 7
#define CAN1_IF_DATA_8 8
#define CAN1_IF_DATA_9 9
#define CAN1_IF_DATA_10 10
#define CAN1_IF_DATA_11 11
#define CAN1_IF_DATA_12 12
#define CAN1_IF_DATA_13 13
#define CAN1_IF_DATA_14 14
#define CAN1_IF_DATA_15 15
#define CAN1_IF_IRQ_0 canfd_0_interrupts0_1_IRQn
#define CAN1_IF_IRQ_1 canfd_0_interrupts1_1_IRQn
#define CAN1_IF_CHANNEL_NUM 1U
#define SMIF0_QSPI_NOR_ENABLED 1U
#define SMIF0_QSPI_NOR_HW SMIF0_CORE
#define SMIF0_QSPI_NOR_IRQ smif_0_smif0_interrupt_nsec_IRQn
#define SMIF0_QSPI_NOR_MEMORY_MODE_ALIGMENT_ERROR (0UL)
#define SMIF0_QSPI_NOR_RX_DATA_FIFO_UNDERFLOW (0UL)
#define SMIF0_QSPI_NOR_TX_COMMAND_FIFO_OVERFLOW (0UL)
#define SMIF0_QSPI_NOR_TX_DATA_FIFO_OVERFLOW (0UL)
#define SMIF0_QSPI_NOR_RX_DMA_TRIGGER_OUT_USED (0UL)
#define SMIF0_QSPI_NOR_TX_DMA_TRIGGER_OUT_USED (0UL)
#define SMIF0_QSPI_NOR_RX_FIFO_TRIGGER_LEVEL (0UL)
#define SMIF0_QSPI_NOR_TX_FIFO_TRIGGER_LEVEL (0UL)
#define SMIF0_QSPI_NOR_DATALINES0_1 (1UL)
#define SMIF0_QSPI_NOR_DATALINES2_3 (1UL)
#define SMIF0_QSPI_NOR_DATALINES4_5 (0UL)
#define SMIF0_QSPI_NOR_DATALINES6_7 (0UL)
#define SMIF0_QSPI_NOR_SS0 (1UL)
#define SMIF0_QSPI_NOR_SS1 (0UL)
#define SMIF0_QSPI_NOR_SS2 (0UL)
#define SMIF0_QSPI_NOR_SS3 (0UL)
#define SMIF0_QSPI_NOR_DESELECT_DELAY 7
#define SMIF1_HYPERRAM_ENABLED 1U
#define SMIF1_HYPERRAM_HW SMIF1_CORE
#define SMIF1_HYPERRAM_IRQ smif_1_smif0_interrupt_nsec_IRQn
#define SMIF1_HYPERRAM_MEMORY_MODE_ALIGMENT_ERROR (0UL)
#define SMIF1_HYPERRAM_RX_DATA_FIFO_UNDERFLOW (0UL)
#define SMIF1_HYPERRAM_TX_COMMAND_FIFO_OVERFLOW (0UL)
#define SMIF1_HYPERRAM_TX_DATA_FIFO_OVERFLOW (0UL)
#define SMIF1_HYPERRAM_RX_DMA_TRIGGER_OUT_USED (0UL)
#define SMIF1_HYPERRAM_TX_DMA_TRIGGER_OUT_USED (0UL)
#define SMIF1_HYPERRAM_RX_FIFO_TRIGGER_LEVEL (0UL)
#define SMIF1_HYPERRAM_TX_FIFO_TRIGGER_LEVEL (0UL)
#define SMIF1_HYPERRAM_DATALINES0_1 (1UL)
#define SMIF1_HYPERRAM_DATALINES2_3 (1UL)
#define SMIF1_HYPERRAM_DATALINES4_5 (1UL)
#define SMIF1_HYPERRAM_DATALINES6_7 (1UL)
#define SMIF1_HYPERRAM_SS0 (0UL)
#define SMIF1_HYPERRAM_SS1 (0UL)
#define SMIF1_HYPERRAM_SS2 (1UL)
#define SMIF1_HYPERRAM_SS3 (0UL)
#define SMIF1_HYPERRAM_DESELECT_DELAY 7
#define CYBSP_CM33_LPTIMER_0_ENABLED 1U
#define CYBSP_CM33_LPTIMER_0_HW MCWDT_STRUCT0
#define CYBSP_CM33_LPTIMER_0_IRQ srss_interrupt_mcwdt_0_IRQn
#define CYBSP_CM55_LPTIMER_1_ENABLED 1U
#define CYBSP_CM55_LPTIMER_1_HW MCWDT_STRUCT1
#define CYBSP_CM55_LPTIMER_1_IRQ srss_interrupt_mcwdt_1_IRQn
#define BSP_GP_TMR_ENABLED 1U
#define BSP_GP_TMR_HW TCPWM0
#define BSP_GP_TMR_NUM 0UL
#define MC33HB2000_PWM_ENABLED 1U
#define MC33HB2000_PWM_HW TCPWM0
#define MC33HB2000_PWM_NUM 1UL
#define tcpwm_0_group_0_cnt_2_ENABLED 1U
#define tcpwm_0_group_0_cnt_2_HW TCPWM0
#define tcpwm_0_group_0_cnt_2_NUM 2UL
#define tcpwm_0_group_0_cnt_5_ENABLED 1U
#define tcpwm_0_group_0_cnt_5_HW TCPWM0
#define tcpwm_0_group_0_cnt_5_NUM 5UL
#define tcpwm_0_group_0_cnt_6_ENABLED 1U
#define tcpwm_0_group_0_cnt_6_HW TCPWM0
#define tcpwm_0_group_0_cnt_6_NUM 6UL
#define INTERLOCK_IN_ENABLED 1U
#define INTERLOCK_IN_HW TCPWM0
#define INTERLOCK_IN_NUM 260UL
#define INTERLOCKOUT_ENABLED 1U
#define INTERLOCKOUT_HW TCPWM0
#define INTERLOCKOUT_NUM 272UL

extern cy_stc_autanalog_cfg_t autonomous_analog_cfg;
extern cy_stc_autanalog_stt_t autonomous_analog_stt[];
extern cy_stc_autanalog_t autonomous_analog_init;
extern cy_en_autanalog_ac_out_trigger_mask_t CYBSP_AUTONOMOUS_CONTROLLER_out_trig_mask[];
extern cy_stc_autanalog_ac_t CYBSP_AUTONOMOUS_CONTROLLER_cfg;
extern cy_stc_autanalog_stt_ac_t CYBSP_AUTONOMOUS_CONTROLLER_stt[];
extern cy_stc_autanalog_sar_hs_chan_t CYBSP_SAR_ADC_gpio_ch_cfg[];
extern cy_stc_autanalog_sar_sta_hs_t CYBSP_SAR_ADC_sta_hs_cfg;
extern cy_stc_autanalog_sar_sta_t CYBSP_SAR_ADC_sta_cfg;
extern cy_stc_autanalog_sar_seq_tab_hs_t CYBSP_SAR_ADC_seq_hs_cfg[];
extern cy_stc_autanalog_sar_t CYBSP_SAR_ADC_cfg;
extern cy_stc_autanalog_stt_sar_t CYBSP_SAR_ADC_stt[];

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_ADC)
extern mtb_hal_adc_configurator_t CYBSP_SAR_ADC_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_ADC) */

extern const cy_stc_i3c_config_t I3C_IF_config;
extern const cy_stc_scb_uart_config_t UART_LS_config;

#if defined (COMPONENT_MTB_HAL)
extern const mtb_hal_peri_div_t UART_LS_clock_ref;
extern const mtb_hal_clock_t UART_LS_hal_clock;
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_UART)
extern const mtb_hal_uart_configurator_t UART_LS_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_UART) */

extern const cy_stc_scb_uart_config_t DEBUG_UART_HS_config;

#if defined (COMPONENT_MTB_HAL)
extern const mtb_hal_peri_div_t DEBUG_UART_HS_clock_ref;
extern const mtb_hal_clock_t DEBUG_UART_HS_hal_clock;
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_UART)
extern const mtb_hal_uart_configurator_t DEBUG_UART_HS_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_UART) */

extern const cy_stc_scb_spi_config_t PMIC_FRAM_IF_config;

#if defined (COMPONENT_MTB_HAL)
extern const mtb_hal_peri_div_t PMIC_FRAM_IF_clock_ref;
extern const mtb_hal_clock_t PMIC_FRAM_IF_hal_clock;
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_SPI)
extern const mtb_hal_spi_configurator_t PMIC_FRAM_IF_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_SPI) */

extern const cy_stc_scb_uart_config_t BT_UART_config;

#if defined (COMPONENT_MTB_HAL)
extern const mtb_hal_peri_div_t BT_UART_clock_ref;
extern const mtb_hal_clock_t BT_UART_hal_clock;
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_UART)
extern const mtb_hal_uart_configurator_t BT_UART_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_UART) */

extern const cy_stc_scb_spi_config_t BMS_COM2_IF_config;

#if defined (COMPONENT_MTB_HAL)
extern const mtb_hal_peri_div_t BMS_COM2_IF_clock_ref;
extern const mtb_hal_clock_t BMS_COM2_IF_hal_clock;
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_SPI)
extern const mtb_hal_spi_configurator_t BMS_COM2_IF_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_SPI) */

extern const cy_stc_scb_i2c_config_t RTC_SE_IF_config;

#if defined (COMPONENT_MTB_HAL)
extern const mtb_hal_peri_div_t RTC_SE_IF_clock_ref;
extern const mtb_hal_clock_t RTC_SE_IF_hal_clock;
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_I2C)
extern const mtb_hal_i2c_configurator_t RTC_SE_IF_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_I2C) */

extern const cy_stc_scb_uart_config_t RS485_IF_config;

#if defined (COMPONENT_MTB_HAL)
extern const mtb_hal_peri_div_t RS485_IF_clock_ref;
extern const mtb_hal_clock_t RS485_IF_hal_clock;
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_UART)
extern const mtb_hal_uart_configurator_t RS485_IF_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_UART) */

extern const cy_stc_scb_spi_config_t MC33HB2000_IF_config;

#if defined (COMPONENT_MTB_HAL)
extern const mtb_hal_peri_div_t MC33HB2000_IF_clock_ref;
extern const mtb_hal_clock_t MC33HB2000_IF_hal_clock;
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_SPI)
extern const mtb_hal_spi_configurator_t MC33HB2000_IF_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_SPI) */

extern const cy_stc_scb_spi_config_t BMS_COM1_IF_config;

#if defined (COMPONENT_MTB_HAL)
extern const mtb_hal_peri_div_t BMS_COM1_IF_clock_ref;
extern const mtb_hal_clock_t BMS_COM1_IF_hal_clock;
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_SPI)
extern const mtb_hal_spi_configurator_t BMS_COM1_IF_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_SPI) */

extern cy_en_sd_host_card_capacity_t CYBSP_WIFI_SDIO_cardCapacity;
extern cy_en_sd_host_card_type_t CYBSP_WIFI_SDIO_cardType;
extern uint32_t CYBSP_WIFI_SDIO_rca;
extern const cy_stc_sd_host_init_config_t CYBSP_WIFI_SDIO_config;
extern cy_stc_sd_host_sd_card_config_t CYBSP_WIFI_SDIO_card_cfg;

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_SDHC)
extern const mtb_hal_peri_div_t CYBSP_WIFI_SDIO_clock_ref;
extern const mtb_hal_clock_t CYBSP_WIFI_SDIO_hal_clock;
extern const mtb_hal_sdhc_configurator_t CYBSP_WIFI_SDIO_sdhc_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_SDHC) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_SDIO)
extern const mtb_hal_sdio_configurator_t CYBSP_WIFI_SDIO_sdio_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_SDIO) */

extern const cy_stc_canfd_bitrate_t CAN0_IF_nominalBitrateConfig;
extern const cy_stc_canfd_bitrate_t CAN0_IF_dataBitrateConfig;
extern const cy_stc_canfd_transceiver_delay_compensation_t CAN0_IF_tdcConfig;
extern const cy_stc_id_filter_t CAN0_IF_stdIdFilter_0;
extern const cy_stc_id_filter_t CAN0_IF_stdIdFilters[];
extern const cy_stc_canfd_sid_filter_config_t CAN0_IF_sidFiltersConfig;
extern const cy_stc_canfd_f0_t CAN0_IF_extIdFilterF0Config_0;
extern const cy_stc_canfd_f1_t CAN0_IF_extIdFilterF1Config_0;
extern const cy_stc_extid_filter_t CAN0_IF_extIdFilter_0;
extern const cy_stc_extid_filter_t CAN0_IF_extIdFilters[];
extern const cy_stc_canfd_extid_filter_config_t CAN0_IF_extIdFiltersConfig;
extern const cy_stc_canfd_global_filter_config_t CAN0_IF_globalFilterConfig;
extern const cy_en_canfd_fifo_config_t CAN0_IF_rxFifo0Config;
extern const cy_en_canfd_fifo_config_t CAN0_IF_rxFifo1Config;
extern const cy_stc_canfd_config_t CAN0_IF_config;
extern cy_stc_canfd_t0_t CAN0_IF_T0RegisterBuffer_0;
extern cy_stc_canfd_t1_t CAN0_IF_T1RegisterBuffer_0;
extern uint32_t CAN0_IF_dataBuffer_0[];
extern cy_stc_canfd_tx_buffer_t CAN0_IF_txBuffer_0;
extern const cy_stc_canfd_bitrate_t CAN1_IF_nominalBitrateConfig;
extern const cy_stc_canfd_bitrate_t CAN1_IF_dataBitrateConfig;
extern const cy_stc_canfd_transceiver_delay_compensation_t CAN1_IF_tdcConfig;
extern const cy_stc_id_filter_t CAN1_IF_stdIdFilter_0;
extern const cy_stc_id_filter_t CAN1_IF_stdIdFilters[];
extern const cy_stc_canfd_sid_filter_config_t CAN1_IF_sidFiltersConfig;
extern const cy_stc_canfd_f0_t CAN1_IF_extIdFilterF0Config_0;
extern const cy_stc_canfd_f1_t CAN1_IF_extIdFilterF1Config_0;
extern const cy_stc_extid_filter_t CAN1_IF_extIdFilter_0;
extern const cy_stc_extid_filter_t CAN1_IF_extIdFilters[];
extern const cy_stc_canfd_extid_filter_config_t CAN1_IF_extIdFiltersConfig;
extern const cy_stc_canfd_global_filter_config_t CAN1_IF_globalFilterConfig;
extern const cy_en_canfd_fifo_config_t CAN1_IF_rxFifo0Config;
extern const cy_en_canfd_fifo_config_t CAN1_IF_rxFifo1Config;
extern const cy_stc_canfd_config_t CAN1_IF_config;
extern cy_stc_canfd_t0_t CAN1_IF_T0RegisterBuffer_0;
extern cy_stc_canfd_t1_t CAN1_IF_T1RegisterBuffer_0;
extern uint32_t CAN1_IF_dataBuffer_0[];
extern cy_stc_canfd_tx_buffer_t CAN1_IF_txBuffer_0;
extern const cy_stc_smif_config_t SMIF0_QSPI_NOR_config;

#if defined (COMPONENT_MTB_HAL)
extern const mtb_hal_hf_clock_t SMIF0_QSPI_NOR_clock_ref;
extern const mtb_hal_clock_t SMIF0_QSPI_NOR_hal_clock;
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_MEMORYSPI)
extern const mtb_hal_memoryspi_configurator_t SMIF0_QSPI_NOR_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_MEMORYSPI) */

extern const cy_stc_smif_config_t SMIF1_HYPERRAM_config;

#if defined (COMPONENT_MTB_HAL)
extern const mtb_hal_hf_clock_t SMIF1_HYPERRAM_clock_ref;
extern const mtb_hal_clock_t SMIF1_HYPERRAM_hal_clock;
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_MEMORYSPI)
extern const mtb_hal_memoryspi_configurator_t SMIF1_HYPERRAM_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_MEMORYSPI) */

extern const cy_stc_mcwdt_config_t CYBSP_CM33_LPTIMER_0_config;

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_LPTIMER)
extern const mtb_hal_lptimer_configurator_t CYBSP_CM33_LPTIMER_0_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_LPTIMER) */

extern const cy_stc_mcwdt_config_t CYBSP_CM55_LPTIMER_1_config;

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_LPTIMER)
extern const mtb_hal_lptimer_configurator_t CYBSP_CM55_LPTIMER_1_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_LPTIMER) */

extern const cy_stc_tcpwm_counter_config_t BSP_GP_TMR_config;

#if defined (COMPONENT_MTB_HAL)
extern const mtb_hal_peri_div_t BSP_GP_TMR_clock_ref;
extern const mtb_hal_clock_t BSP_GP_TMR_hal_clock;
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_TIMER)
extern const mtb_hal_timer_configurator_t BSP_GP_TMR_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_TIMER) */

extern const cy_stc_tcpwm_pwm_config_t MC33HB2000_PWM_config;

#if defined (COMPONENT_MTB_HAL)
extern const mtb_hal_peri_div_t MC33HB2000_PWM_clock_ref;
extern const mtb_hal_clock_t MC33HB2000_PWM_hal_clock;
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_PWM)
extern const mtb_hal_pwm_configurator_t MC33HB2000_PWM_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_PWM) */

extern const cy_stc_tcpwm_pwm_config_t tcpwm_0_group_0_cnt_2_config;

#if defined (COMPONENT_MTB_HAL)
extern const mtb_hal_peri_div_t tcpwm_0_group_0_cnt_2_clock_ref;
extern const mtb_hal_clock_t tcpwm_0_group_0_cnt_2_hal_clock;
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_PWM)
extern const mtb_hal_pwm_configurator_t tcpwm_0_group_0_cnt_2_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_PWM) */

extern const cy_stc_tcpwm_counter_config_t tcpwm_0_group_0_cnt_5_config;

#if defined (COMPONENT_MTB_HAL)
extern const mtb_hal_peri_div_t tcpwm_0_group_0_cnt_5_clock_ref;
extern const mtb_hal_clock_t tcpwm_0_group_0_cnt_5_hal_clock;
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_TIMER)
extern const mtb_hal_timer_configurator_t tcpwm_0_group_0_cnt_5_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_TIMER) */

extern const cy_stc_tcpwm_counter_config_t tcpwm_0_group_0_cnt_6_config;

#if defined (COMPONENT_MTB_HAL)
extern const mtb_hal_peri_div_t tcpwm_0_group_0_cnt_6_clock_ref;
extern const mtb_hal_clock_t tcpwm_0_group_0_cnt_6_hal_clock;
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_TIMER)
extern const mtb_hal_timer_configurator_t tcpwm_0_group_0_cnt_6_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_TIMER) */

extern const cy_stc_tcpwm_counter_config_t INTERLOCK_IN_config;

#if defined (COMPONENT_MTB_HAL)
extern const mtb_hal_peri_div_t INTERLOCK_IN_clock_ref;
extern const mtb_hal_clock_t INTERLOCK_IN_hal_clock;
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_TIMER)
extern const mtb_hal_timer_configurator_t INTERLOCK_IN_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_TIMER) */

extern const cy_stc_tcpwm_pwm_config_t INTERLOCKOUT_config;

#if defined (COMPONENT_MTB_HAL)
extern const mtb_hal_peri_div_t INTERLOCKOUT_clock_ref;
extern const mtb_hal_clock_t INTERLOCKOUT_hal_clock;
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_PWM)
extern const mtb_hal_pwm_configurator_t INTERLOCKOUT_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_PWM) */

void init_cycfg_peripherals(void);

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* CYCFG_PERIPHERALS_H */
