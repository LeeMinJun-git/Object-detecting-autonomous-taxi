/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : 자율주행 시스템 전역(Global) 설정 및 HAL 라이브러리 허브
  * @details        : 프로젝트 내 모든 소스 코드가 공통으로 의존하는 최상위 헤더 파일입니다.
  * STM32F4xx 하드웨어 추상화 계층(HAL)을 인클루드하며, 시스템 레벨의 에러 핸들링
  * 함수 프로토타입과 전역 매크로를 정의합니다.
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
/* MCU 하드웨어 레지스터 제어 및 주변장치(Peripheral) API 접근을 위한 HAL 라이브러리 */
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
/**
 * @brief 시스템 크리티컬 에러 발생 시 호출되는 핸들러 (HardFault, Clock Fail 등)
 */
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
