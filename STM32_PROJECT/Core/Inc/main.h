/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f1xx_hal.h"

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
#define LED0_Pin GPIO_PIN_4
#define LED0_GPIO_Port GPIOA
#define LED1_Pin GPIO_PIN_5
#define LED1_GPIO_Port GPIOA
#define LED2_Pin GPIO_PIN_6
#define LED2_GPIO_Port GPIOA
#define LED3_Pin GPIO_PIN_7
#define LED3_GPIO_Port GPIOA
#define RESET0_Pin GPIO_PIN_0
#define RESET0_GPIO_Port GPIOB
#define RESET1_Pin GPIO_PIN_1
#define RESET1_GPIO_Port GPIOB
#define RESET2_Pin GPIO_PIN_2
#define RESET2_GPIO_Port GPIOB
#define RESET10_Pin GPIO_PIN_10
#define RESET10_GPIO_Port GPIOB
#define RESET11_Pin GPIO_PIN_11
#define RESET11_GPIO_Port GPIOB
#define LED4_Pin GPIO_PIN_8
#define LED4_GPIO_Port GPIOA
#define LED5_Pin GPIO_PIN_9
#define LED5_GPIO_Port GPIOA
#define LED6_Pin GPIO_PIN_10
#define LED6_GPIO_Port GPIOA
#define LED7_Pin GPIO_PIN_11
#define LED7_GPIO_Port GPIOA
#define LED8_Pin GPIO_PIN_12
#define LED8_GPIO_Port GPIOA
#define LED9_Pin GPIO_PIN_13
#define LED9_GPIO_Port GPIOA
#define LED10_Pin GPIO_PIN_14
#define LED10_GPIO_Port GPIOA
#define LED11_Pin GPIO_PIN_15
#define LED11_GPIO_Port GPIOA
#define RESET3_Pin GPIO_PIN_3
#define RESET3_GPIO_Port GPIOB
#define RESET4_Pin GPIO_PIN_4
#define RESET4_GPIO_Port GPIOB
#define RESET5_Pin GPIO_PIN_5
#define RESET5_GPIO_Port GPIOB
#define RESET6_Pin GPIO_PIN_6
#define RESET6_GPIO_Port GPIOB
#define RESET7_Pin GPIO_PIN_7
#define RESET7_GPIO_Port GPIOB
#define RESET8_Pin GPIO_PIN_8
#define RESET8_GPIO_Port GPIOB
#define RESET9_Pin GPIO_PIN_9
#define RESET9_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
