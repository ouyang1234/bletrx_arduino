/**
  ******************************************************************************
  * @file    :Uart.c
  * @author  :MG Team
  * @version :V1.0
  * @date    
  * @brief   
  ******************************************************************************
***/

/* Includes ------------------------------------------------------------------*/
#include "Includes.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/

#define Hex2Ascii(data)  (data < 10)? ('0' + data) : ('A' + data - 10)

//Usart config data
//������
#define	Usart_BaudRate	115200UL
//���ݳ���
//USART_WordLength_8D: 8 bits Data
//USART_WordLength_9D: 9 bits Data	
#define Usart_Data_Len	USART_WordLength_8D
//ֹͣι
//USART_StopBits_1: One stop bit is transmitted at the end of frame
//USART_StopBits_2: Two stop bits are transmitted at the end of frame
#define	Usart_StopBit	USART_StopBits_1	
//USART_Parity_No: No Parity
//USART_Parity_Even: Even Parity
//USART_Parity_Odd: Odd Parity	 
//У��λ
#define Usart_Parity 	USART_Parity_No
//USART_Mode_Rx: Receive Enable
//USART_Mode_Tx: Transmit Enable
//USART ģʽ
#define	Usart_Mode		(USART_Mode_Rx|USART_Mode_Tx)



/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
//set usart buffer len  BUFFER ����
#define UART_BUF_LEN	20
//RX BUFFER
volatile byte Rx_Buffer[UART_BUF_LEN] = {0}; 

//RX ������
volatile byte Rx_Tx_Buffer_Cnt = 0;

/* Private function prototypes -----------------------------------------------*/


///*******************************************************************************
//* Function   :     	Init_Uart	                                                                                                     
//* Parameter  :     	void                                                                                        
//* Returns    :     	void            
//* Description:                               		                    
//* Note:      :                                                                                                                   
//*******************************************************************************/
//void Init_Uart(void)
//{
//
//  Serial.begin(Usart_BaudRate);
//
//}
///*******************************************************************************
//* Function   :     	Uart_Send_Byte	                                                                                                     
//* Parameter  :     	char data                                                                                        
//* Returns    :     	void            
//* Description:                               		                    
//* Note:      :                                                                                                                   
//*******************************************************************************/
//void Uart_Send_Byte(char data)
//{
//
//  Serial.print(data);
//
//}
//
//
///*******************************************************************************
//* Function   :     	Uart_Send_String	                                                                                                     
//* Parameter  :     	char *data                                                                                        
//* Returns    :     	void            
//* Description:                               		                    
//* Note:      :                                                                                                                   
//*******************************************************************************/
//void Uart_Send_String(char *data)
//{	
//
//  Serial.print(data);
//  
//}





