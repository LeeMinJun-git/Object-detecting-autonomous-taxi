# Autonomous Driving Taxi & Edge AI System

이 프로젝트는 Raspberry Pi 기반의 Edge AI(YOLOv8/NCNN)와 STM32F446RE 임베디드 제어 시스템을 결합하여, 실시간 객체 인식 및 자율주행을 수행하는 지능형 택시 플랫폼입니다.



## 📋 프로젝트 개요
* **목표**: 실시간 도로 상황(스쿨존, 신호등, 횡단보도)을 인식하고, 차량의 CAN 통신을 통해 안전하게 주행 및 요금 정산을 수행하는 로봇 시스템 구축
* **개발 환경**: 
    * **AI**: Python, NCNN(YOLOv8 기반 경량화), OpenCV
    * **Firmware**: STM32CubeIDE, FreeRTOS, HAL Library
    * **Hardware**: STM32F446RE, Raspberry Pi 4, L298N, 초음파 센서, 휠 엔코더

## 🚀 주요 기능 및 시스템 아키텍처
### 1. Edge AI Vision (Raspberry Pi)
* **객체 인식**: 스쿨존 표지판, 횡단보도, 신호등 등 6개 클래스를 실시간 인식.
* **최적화**: NCNN 프레임워크를 적용하여 고속 추론 성능 확보 (FPS 최적화).
* **CAN 브릿지**: 인식된 상태(STOP, SLOW, GO)를 차량 제어부(STM32)로 실시간 전송.

### 2. Firmware Control (STM32)
* **멀티태스킹 (FreeRTOS)**: 센서 감지, 주행 제어, 요금 UI 갱신 태스크를 분리하여 시스템 실시간성 보장.
* **차동 구동 (Differential Drive)**: PID 제어의 기초가 되는 P-Control을 적용하여 중앙 유지 주행 구현.
* **정밀 계측**: TIM4를 활용한 1us 분해능의 초음파 거리 측정 및 EXTI 기반 휠 엔코더 오도메트리.

## 🛠 아키텍처 요약
| 모듈 | 기술적 특징 | 역할 |
| :--- | :--- | :--- |
| **Vision** | YOLOv8 + NCNN | 스쿨존/신호등 인식 및 추론 |
| **Bridge** | SocketCAN | 라즈베리파이-STM32 제어 명령 전송 |
| **Control** | FreeRTOS + P-Control | 실시간 모터 제어 및 센서 융합 |
| **Odometry** | Photo Interrupter | 이동 거리 계산 및 요금 산출 |

## 📁 디렉토리 구조
```text
.
├── STM32_Firmware/          # FreeRTOS 및 제어 코드
│   ├── Core/Src/            # 메인 로직(main.c, freertos.c, RCC_Motor.c)
│   └── Core/Inc/            # 헤더 파일
├── Edge_AI_Bridge/          # Raspberry Pi 파이썬 브릿지
│   ├── bridge_code.py       # 실시간 추론 및 CAN 전송 루틴
│   └── best_ncnn_model/     # 학습 완료된 가중치(param/bin)
└── README.md
