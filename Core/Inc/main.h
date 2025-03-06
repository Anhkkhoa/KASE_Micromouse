/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define RIGHT_A_Pin GPIO_PIN_0
#define RIGHT_A_GPIO_Port GPIOA
#define RIGHT_B_Pin GPIO_PIN_1
#define RIGHT_B_GPIO_Port GPIOA
#define FL_LEFT_Pin GPIO_PIN_4
#define FL_LEFT_GPIO_Port GPIOA
#define DL_LEFT_Pin GPIO_PIN_5
#define DL_LEFT_GPIO_Port GPIOA
#define SL_LEFT_Pin GPIO_PIN_6
#define SL_LEFT_GPIO_Port GPIOA
#define FR_RIGHT_Pin GPIO_PIN_7
#define FR_RIGHT_GPIO_Port GPIOA
#define DR_RIGHT_Pin GPIO_PIN_0
#define DR_RIGHT_GPIO_Port GPIOB
#define SR_RIGHT_Pin GPIO_PIN_1
#define SR_RIGHT_GPIO_Port GPIOB
#define CW_LEFT_Pin GPIO_PIN_8
#define CW_LEFT_GPIO_Port GPIOA
#define CCW_LEFT_Pin GPIO_PIN_9
#define CCW_LEFT_GPIO_Port GPIOA
#define CW_RIGHT_Pin GPIO_PIN_10
#define CW_RIGHT_GPIO_Port GPIOA
#define CCW_RIGHT_Pin GPIO_PIN_11
#define CCW_RIGHT_GPIO_Port GPIOA
#define LEFT_A_Pin GPIO_PIN_15
#define LEFT_A_GPIO_Port GPIOA
#define LEFT_B_Pin GPIO_PIN_3
#define LEFT_B_GPIO_Port GPIOB
#define RED_Pin GPIO_PIN_4
#define RED_GPIO_Port GPIOB
#define GREEN_Pin GPIO_PIN_5
#define GREEN_GPIO_Port GPIOB
#define BLUE_Pin GPIO_PIN_6
#define BLUE_GPIO_Port GPIOB
#define BUZZER_Pin GPIO_PIN_7
#define BUZZER_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
