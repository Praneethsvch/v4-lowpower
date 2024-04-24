/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32u5xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define DEBUG_RX_Pin GPIO_PIN_0
#define DEBUG_RX_GPIO_Port GPIOC
#define DEBUG_TX_Pin GPIO_PIN_1
#define DEBUG_TX_GPIO_Port GPIOC
#define HEART_LED_Pin GPIO_PIN_2
#define HEART_LED_GPIO_Port GPIOC
#define ADC_SOLAR_V_Pin GPIO_PIN_3
#define ADC_SOLAR_V_GPIO_Port GPIOC
#define LORA_TX_Pin GPIO_PIN_0
#define LORA_TX_GPIO_Port GPIOA
#define LORA_RX_Pin GPIO_PIN_1
#define LORA_RX_GPIO_Port GPIOA
#define WIFI_TX_Pin GPIO_PIN_2
#define WIFI_TX_GPIO_Port GPIOA
#define WIFI_RX_Pin GPIO_PIN_3
#define WIFI_RX_GPIO_Port GPIOA
#define ADC_BATTERY_Pin GPIO_PIN_4
#define ADC_BATTERY_GPIO_Port GPIOA
#define WIFI_WAKEUP_Pin GPIO_PIN_5
#define WIFI_WAKEUP_GPIO_Port GPIOA
#define WIFI_EN_Pin GPIO_PIN_6
#define WIFI_EN_GPIO_Port GPIOA
#define ERROR_LED_Pin GPIO_PIN_7
#define ERROR_LED_GPIO_Port GPIOA
#define MODEM_TX_Pin GPIO_PIN_4
#define MODEM_TX_GPIO_Port GPIOC
#define MODEM_RX_Pin GPIO_PIN_5
#define MODEM_RX_GPIO_Port GPIOC
#define CELL_RST_Pin GPIO_PIN_0
#define CELL_RST_GPIO_Port GPIOB
#define GPSLNA_ON_Pin GPIO_PIN_14
#define GPSLNA_ON_GPIO_Port GPIOB
#define LTE_ON_OFF_Pin GPIO_PIN_15
#define LTE_ON_OFF_GPIO_Port GPIOB
#define ACEL_INT2_Pin GPIO_PIN_6
#define ACEL_INT2_GPIO_Port GPIOC
#define ACEL_INT1_Pin GPIO_PIN_7
#define ACEL_INT1_GPIO_Port GPIOC
#define LTE_EN_Pin GPIO_PIN_8
#define LTE_EN_GPIO_Port GPIOA
#define TX_TP_Pin GPIO_PIN_9
#define TX_TP_GPIO_Port GPIOA
#define ULTRASOUND_DATAIN_Pin GPIO_PIN_10
#define ULTRASOUND_DATAIN_GPIO_Port GPIOA
#define LIGHTSENSOR_INT_Pin GPIO_PIN_11
#define LIGHTSENSOR_INT_GPIO_Port GPIOA
#define LDO_ULTRA_ON_OFF_Pin GPIO_PIN_4
#define LDO_ULTRA_ON_OFF_GPIO_Port GPIOB
#define CHARGER_ON_OFF_INT_Pin GPIO_PIN_5
#define CHARGER_ON_OFF_INT_GPIO_Port GPIOB
#define CHARGER_ON_OFF_INT_EXTI_IRQn EXTI5_IRQn
#define RANGE_ON_OFF_Pin GPIO_PIN_8
#define RANGE_ON_OFF_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
