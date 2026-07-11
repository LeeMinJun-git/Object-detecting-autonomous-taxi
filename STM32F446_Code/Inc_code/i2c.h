/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    i2c.h
  * @brief   I2C 통신 네트워크 하드웨어 API 명세
  * @details 택시 요금 미터기(LCD)와의 Standard-Mode(100kHz) 통신을 위한 
  * I2C1 인터페이스 핸들러 및 초기화 함수 프로토타입을 정의합니다.
  ******************************************************************************
  */
/* USER CODE END Header */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __I2C_H__
#define __I2C_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"

extern I2C_HandleTypeDef hi2c1;

void MX_I2C1_Init(void);

#ifdef __cplusplus
}
#endif

#endif /* __I2C_H__ */
