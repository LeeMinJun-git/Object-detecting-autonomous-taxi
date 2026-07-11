/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    tim.h
  * @brief   하드웨어 타이머(Timer) API 명세 (PWM 및 정밀 계측용)
  * @details 모터 제어용 PWM 신호를 생성하는 TIM3와 초음파 센서의 
  * ToF(Time-of-Flight) 측정을 위한 1us 분해능의 TIM4 핸들러를 정의합니다.
  ******************************************************************************
  */
/* USER CODE END Header */
#ifndef __TIM_H__
#define __TIM_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"

extern TIM_HandleTypeDef htim3; // 모터 구동용 PWM 타이머
extern TIM_HandleTypeDef htim4; // 초음파 거리 측정용 마이크로초(us) 타이머

void MX_TIM3_Init(void);
void MX_TIM4_Init(void);
void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

#ifdef __cplusplus
}
#endif

#endif /* __TIM_H__ */
