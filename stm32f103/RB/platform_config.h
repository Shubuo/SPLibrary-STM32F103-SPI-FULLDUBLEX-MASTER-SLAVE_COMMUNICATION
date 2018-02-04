/**
  ******************************************************************************
  * @file    SPI/Simplex_Interrupt/platform_config.h 
  * @author  MCD Application Team
  * @version V3.5.0
  * @date    08-April-2011
  * @brief   Evaluation board specific configuration file.
  ******************************************************************************
  * @attention
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2011 STMicroelectronics</center></h2>
  ******************************************************************************
  */ 

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __PLATFORM_CONFIG_H
#define __PLATFORM_CONFIG_H

/* Includes ------------------------------------------------------------------*/

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Uncomment the line corresponding to the STMicroelectronics evaluation board
   used to run the example */
#if !defined (USE_STM32100B_EVAL) && !defined (USE_STM3210B_EVAL) &&  !defined (USE_STM3210E_EVAL) &&  !defined (USE_STM3210C_EVAL) &&  !defined (USE_STM32100E_EVAL)
 //#define USE_STM32100B_EVAL
 //#define USE_STM3210B_EVAL
  #define USE_STM3210E_EVAL
 //#define USE_STM32100E_EVAL
// #define USE_STM3210C_EVAL
#endif

/* Define the STM32F10x hardware depending on the used evaluation board */
#if defined (USE_STM3210B_EVAL) || defined (USE_STM3210E_EVAL) || defined(USE_STM32100B_EVAL) || defined (USE_STM32100E_EVAL)
  #define SPI_SLAVE                   SPI1
  #define SPI_SLAVE_CLK               RCC_APB2Periph_SPI1
  #define SPI_SLAVE_GPIO              GPIOA
  #define SPI_SLAVE_GPIO_CLK          RCC_APB2Periph_GPIOA  
  #define SPI_SLAVE_PIN_SCK           GPIO_Pin_5
  #define SPI_SLAVE_PIN_MISO          GPIO_Pin_6
  #define SPI_SLAVE_PIN_MOSI          GPIO_Pin_7
  #define SPI_SLAVE_IRQn              SPI1_IRQn
#endif
  
#endif /* __PLATFORM_CONFIG_H */

/******************* (C) COPYRIGHT 2011 STMicroelectronics *****END OF FILE****/