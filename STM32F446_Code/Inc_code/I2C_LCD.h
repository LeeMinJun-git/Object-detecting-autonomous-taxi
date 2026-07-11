/**
  ******************************************************************************
  * @file    I2C_LCD.h
  * @brief   I2C 기반 HD44780 LCD 디스플레이 제어 API 명세
  * @details PCF8574 I2C Expander 모듈을 활용하여 16x2 Text LCD를 제어하기 위한 
  * 매크로 상수 및 함수 프로토타입을 정의합니다.
  ******************************************************************************
  */
#ifndef INC_I2C_LCD_H_
#define INC_I2C_LCD_H_

#include "main.h"

/** * @brief I2C Slave Address 설정
 * @note PCF8574의 기본 7-bit 주소는 0x27입니다. 
 * STM32 HAL 라이브러리는 최하위 비트(LSB)를 Read/Write 플래그로 사용하므로, 
 * 7-bit 주소를 좌측으로 1-bit 시프트(<< 1)하여 8-bit 포맷으로 변환해야 통신이 가능합니다.
 */
#define I2C_LCD_ADDRESS     (0x27<<1)

/* HD44780 LCD 컨트롤러 명령어(Instruction) 데이터시트 매크로 정의 */
#define DISPLAY_ON          0x0C  // 화면 ON, 커서 OFF, 블링크 OFF
#define DISPLAY_OFF         0x08  // 화면 OFF
#define CLEAR_DISPLAY       0x01  // DDRAM(화면) 전체 초기화 및 커서 홈 복귀
#define RETURN_HOME         0x02  // 커서를 첫 번째 줄의 첫 번째 칸(0,0)으로 복귀

/* I2C LCD 제어 함수 프로토타입 (Hardware Abstraction Layer) */
void lcd_command(uint8_t command);             // LCD 하드웨어 제어 명령어 전송
void lcd_data(uint8_t data);                   // LCD DDRAM에 출력할 아스키코드 데이터 전송
void i2c_lcd_init();                           // 4-bit 모드 초기화 시퀀스 실행
void lcd_string(char *str);                    // 문자열 연속 출력 (Null-terminated)
void move_cusor(uint8_t row, uint8_t col);     // 화면 내 커서 좌표 이동 (row: 0~1, col: 0~15)

#endif /* INC_I2C_LCD_H_ */
