/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    can.h
  * @brief   차량 제어용 CAN 통신 네트워크(Controller Area Network) API 명세
  * @details 라즈베리파이(Edge AI)와의 고신뢰성 통신을 담당하는 CAN1 인터페이스 
  * 핸들러(Handle) 및 하드웨어 초기화 함수 프로토타입을 정의합니다.
  ******************************************************************************
  */
/* USER CODE END Header */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __CAN_H__
#define __CAN_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* 외부 모듈(main.c 등)에서 CAN 통신 제어 및 인터럽트 처리를 
 * 공유할 수 있도록 핸들러(hcan1)를 extern으로 선언함. 
 */
extern CAN_HandleTypeDef hcan1;

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

/* CAN1 하드웨어 비트 타이밍(Baudrate) 및 필터 초기화 함수 */
void MX_CAN1_Init(void);

/* USER CODE BEGIN Prototypes */

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __CAN_H__ */
