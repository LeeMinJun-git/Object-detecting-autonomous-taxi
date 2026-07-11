/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    gpio.h
  * @brief   차량 시스템 전체 GPIO 및 외부 인터럽트(EXTI) API 명세
  * @details 자율주행에 필요한 엑추에이터(L298N 모터 드라이버)와 센서(초음파, 휠 엔코더)의
  * 핀 상태를 총괄하며, 입출력(I/O) 하드웨어 초기화 함수 프로토타입을 정의합니다.
  ******************************************************************************
  */
/* USER CODE END Header */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __GPIO_H__
#define __GPIO_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

/* 시스템 부팅 시 모든 GPIO 핀의 클럭 활성화, 입출력 모드(PP/OD), 
 * 초기 출력 레벨(안전 상태) 및 인터럽트 우선순위(NVIC)를 설정하는 함수 
 */
void MX_GPIO_Init(void);

/* USER CODE BEGIN Prototypes */

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ GPIO_H__ */
