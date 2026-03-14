/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

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
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define RGB_RED_Pin GPIO_PIN_0
#define RGB_RED_GPIO_Port GPIOC
#define RGB_GREEN_Pin GPIO_PIN_2
#define RGB_GREEN_GPIO_Port GPIOC
#define RGB_BLUE_Pin GPIO_PIN_3
#define RGB_BLUE_GPIO_Port GPIOC
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define BUZZER_Pin GPIO_PIN_4
#define BUZZER_GPIO_Port GPIOA
#define KEYPAD_COL_Pin GPIO_PIN_4
#define KEYPAD_COL_GPIO_Port GPIOC
#define BUTTON_DOWN_Pin GPIO_PIN_5
#define BUTTON_DOWN_GPIO_Port GPIOC
#define KEYPAD_ROW_Pin GPIO_PIN_13
#define KEYPAD_ROW_GPIO_Port GPIOB
#define KEYPAD_ROWB14_Pin GPIO_PIN_14
#define KEYPAD_ROWB14_GPIO_Port GPIOB
#define KEYPAD_ROWB15_Pin GPIO_PIN_15
#define KEYPAD_ROWB15_GPIO_Port GPIOB
#define BUTTON_UP_Pin GPIO_PIN_6
#define BUTTON_UP_GPIO_Port GPIOC
#define KEYPAD_ROWA10_Pin GPIO_PIN_10
#define KEYPAD_ROWA10_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define KEYPAD_COLB3_Pin GPIO_PIN_3
#define KEYPAD_COLB3_GPIO_Port GPIOB
#define KEYPAD_COLB5_Pin GPIO_PIN_5
#define KEYPAD_COLB5_GPIO_Port GPIOB
#define BUTTON_LEFT_Pin GPIO_PIN_8
#define BUTTON_LEFT_GPIO_Port GPIOB
#define BUTTON_RIGHT_Pin GPIO_PIN_9
#define BUTTON_RIGHT_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
