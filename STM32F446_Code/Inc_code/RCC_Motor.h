/**
  ******************************************************************************
  * @file    RCC_Motor.h
  * @brief   L298N 모터 드라이버 및 차동 구동(Differential Drive) 제어 API 명세
  * @details 4륜/2륜 구동 로봇의 조향 및 속도 제어를 위해 H-Bridge 회로의 
  * 논리 핀(IN1~IN4)과 PWM 핀(ENA, ENB)을 매핑하고 제어 함수를 선언합니다.
  ******************************************************************************
  */
#ifndef INC_RCC_MOTOR_H_
#define INC_RCC_MOTOR_H_

#include "main.h"

/** * @brief 모터 제어용 공통 GPIO 포트 
 * @note 모든 방향 제어 핀(IN1~IN4)이 동일한 포트(GPIOC)를 공유하도록 설계하여 
 * 하드웨어 배선 및 제어 코드의 일관성을 확보함.
 */
#define MOTOR_GPIO GPIOC

/* L298N H-Bridge 방향 제어 핀 (Current Direction Logic) 매핑 */
// 왼쪽 모터 제어 채널 (IN1, IN2)
#define MOTOR_LEFT1  GPIO_PIN_2 
#define MOTOR_LEFT2  GPIO_PIN_3 

// 오른쪽 모터 제어 채널 (IN3, IN4)
#define MOTOR_RIGHT1 GPIO_PIN_0 
#define MOTOR_RIGHT2 GPIO_PIN_1 

/* 차량 거동(Kinematics) 및 조향 제어 함수 프로토타입 */
void Motor_Init(void);                                          // 하드웨어 PWM 타이머 활성화 및 초기 정지
void Motor_Forward(void);                                       // 양륜 정방향 주행
void Motor_Backward(void);                                      // 양륜 역방향 주행
void Motor_Left(void);                                          // 제자리 좌회전 (차동 조향)
void Motor_Right(void);                                         // 제자리 우회전 (차동 조향)
void Motor_Stop(void);                                          // 관성 주행(Free-run) 정지 및 PWM Duty 0%

/**
 * @brief 모터 회전 속도 동적 제어
 * @param left_speed  좌측 모터 PWM Duty Cycle 인가 값 (TIM CCR 레지스터)
 * @param right_speed 우측 모터 PWM Duty Cycle 인가 값 (TIM CCR 레지스터)
 */
void Motor_SetSpeed(uint16_t left_speed, uint16_t right_speed);

#endif /* INC_RCC_MOTOR_H_ */
