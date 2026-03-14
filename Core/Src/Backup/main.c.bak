/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "adc.h"
#include "spi.h"
#include "usart.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <string.h>
#include <stdio.h>
#include "st7735.h"
#include "fonts.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
int mode = 0;
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
void uart_print(char *msg)
{
    HAL_UART_Transmit(&huart2,(uint8_t*)msg,strlen(msg),HAL_MAX_DELAY);
}
void rgb_red()
{
    HAL_GPIO_WritePin(GPIOC, RGB_RED_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOC, RGB_GREEN_Pin|RGB_BLUE_Pin, GPIO_PIN_RESET);
}

void rgb_green()
{
    HAL_GPIO_WritePin(GPIOC, RGB_GREEN_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOC, RGB_RED_Pin|RGB_BLUE_Pin, GPIO_PIN_RESET);
}

void rgb_blue()
{
    HAL_GPIO_WritePin(GPIOC, RGB_BLUE_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOC, RGB_RED_Pin|RGB_GREEN_Pin, GPIO_PIN_RESET);
}

void rgb_off()
{
    HAL_GPIO_WritePin(GPIOC, RGB_RED_Pin|RGB_GREEN_Pin|RGB_BLUE_Pin, GPIO_PIN_RESET);
}
void buzzer_beep(int time)
{
    HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_SET);
    HAL_Delay(time);
    HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_RESET);
}
uint8_t touch_pressed()
{
    return HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_8);
}
uint32_t read_rotation()
{
    HAL_ADC_Start(&hadc1);
    HAL_ADC_PollForConversion(&hadc1,HAL_MAX_DELAY);
    uint32_t val = HAL_ADC_GetValue(&hadc1);
    HAL_ADC_Stop(&hadc1);
    return val;
}
uint8_t btn_up()
{
    return HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_6);
}

uint8_t btn_down()
{
    return HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_5);
}

uint8_t btn_left()
{
    return HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_8);
}

uint8_t btn_right()
{
    return HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_9);
}
char read_keypad(void)
{
    const char keypad[4][3] =
    {
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'},
        {'*','0','#'}
    };

    GPIO_TypeDef *row_ports[4] =
    {
        GPIOA,
        GPIOB,
        GPIOB,
        GPIOB
    };

    uint16_t row_pins[4] =
    {
        KEYPAD_ROWA10_Pin,
        KEYPAD_ROWB15_Pin,
        KEYPAD_ROWB14_Pin,
        KEYPAD_ROW_Pin
    };

    GPIO_TypeDef *col_ports[3] =
    {
        GPIOB,
        GPIOC,
        GPIOB
    };

    uint16_t col_pins[3] =
    {
        KEYPAD_COLB3_Pin,
        KEYPAD_COL_Pin,
        KEYPAD_COLB5_Pin
    };

    for(int c = 0; c < 3; c++)
        HAL_GPIO_WritePin(col_ports[c], col_pins[c], GPIO_PIN_SET);

    for(int col = 0; col < 3; col++)
    {
        HAL_GPIO_WritePin(col_ports[col], col_pins[col], GPIO_PIN_RESET);

        for(int row = 0; row < 4; row++)
        {
            if(HAL_GPIO_ReadPin(row_ports[row], row_pins[row]) == GPIO_PIN_RESET)
            {
            	HAL_Delay(30);

            	while(HAL_GPIO_ReadPin(row_ports[row], row_pins[row]) == GPIO_PIN_RESET);

            	return keypad[row][col];
            }
        }

        HAL_GPIO_WritePin(col_ports[col], col_pins[col], GPIO_PIN_SET);
    }

    return 0;
}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_USART2_UART_Init();
  MX_ADC1_Init();
  MX_SPI1_Init();
  /* USER CODE BEGIN 2 */
  ST7735_Init();
  HAL_Delay(500);

  ST7735_FillScreen(0x0000);

  ST7735_WriteString(5,10,"CONTROL PANEL",Font_7x10,0xFFFF,0x0000);
  ST7735_WriteString(5,30,"1 LED CONTROL",Font_7x10,0xFFFF,0x0000);
  ST7735_WriteString(5,45,"2 COLOR MODE",Font_7x10,0xFFFF,0x0000);
  ST7735_WriteString(5,60,"3 SOUND MODE",Font_7x10,0xFFFF,0x0000);
  ST7735_WriteString(5,75,"* SENSOR MODE",Font_7x10,0xFFFF,0x0000);

  uart_print("\r\n==== CONTROL PANEL ====\r\n");
  uart_print("1 LED CONTROL\r\n");
  uart_print("2 COLOR MODE\r\n");
  uart_print("3 SOUND MODE\r\n");
  uart_print("* SENSOR MODE\r\n\r\n");
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  { char key = read_keypad();

  if(key != 0)
  {
      char msg[20];

      sprintf(msg,"Key: %c\r\n",key);
      uart_print(msg);

      ST7735_FillScreen(0x0000);

      sprintf(msg,"Key: %c",key);
      ST7735_WriteString(5,20,msg,Font_11x18,0xFFFF,0x0000);

      buzzer_beep(50);

      if(key == '1')
      {
    	  mode = 1;
    	  uart_print("LED CONTROL MODE\r\n");

    	  ST7735_WriteString(5,50,"LED CONTROL MODE",Font_7x10,0x07E0,0x0000);
      }

      else if(key == '2')
      {
    	  mode = 2;
    	  uart_print("COLOR MODE\r\n");

    	  ST7735_WriteString(5,50,"COLOR MODE",Font_7x10,0x07E0,0x0000);
      }

      else if(key == '3')
      {
    	  mode = 3;
    	  uart_print("SOUND MODE\r\n");

    	  ST7735_WriteString(5,50,"SOUND MODE",Font_7x10,0x07E0,0x0000);
      }

      else if(key == '*')
      {
    	  mode = 4;
    	  uart_print("SENSOR MODE\r\n");

    	  ST7735_WriteString(5,50,"SENSOR MODE",Font_7x10,0x07E0,0x0000);
      }
  }

  /* ---------------- MODE 1 ---------------- */
  if(mode == 1)
  {
      if(btn_up())
          rgb_red();

      if(btn_down())
          rgb_green();

      if(btn_left())
          rgb_blue();

      if(btn_right())
          rgb_off();
  }

  /* ---------------- MODE 2 ---------------- */
  if(mode == 2)
  {
      uint32_t rot = read_rotation();

      if(rot < 1000)
          rgb_red();

      else if(rot < 2500)
          rgb_green();

      else
          rgb_blue();
  }

  /* ---------------- MODE 3 ---------------- */
  if(mode == 3)
  {
      if(btn_up())
          buzzer_beep(50);

      if(btn_down())
          buzzer_beep(150);

      if(btn_left())
          buzzer_beep(300);

      if(btn_right())
          buzzer_beep(500);
  }

  /* ---------------- MODE 4 ---------------- */
  if(mode == 4)
  {
      uint32_t rot = read_rotation();

      char msg[40];
      sprintf(msg,"Rotation = %lu\r\n",rot);
      uart_print(msg);

      if(touch_pressed())
      {
          uart_print("Touch detected\r\n");
          buzzer_beep(200);
          HAL_Delay(300);
      }
  }

  HAL_Delay(50);
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE2);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 16;
  RCC_OscInitStruct.PLL.PLLN = 336;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV4;
  RCC_OscInitStruct.PLL.PLLQ = 7;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}
#ifdef USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
