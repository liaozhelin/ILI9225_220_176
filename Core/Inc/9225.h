#ifndef __9225_H
#define __9225_H

#define DAT GPIOA->ODR  //输出位端口
#define RST_H RST_GPIO_Port->BSRR = RST_Pin
#define RST_L RST_GPIO_Port->BRR = RST_Pin
#define WR_H  WR_GPIO_Port->BSRR = WR_Pin
#define WR_L  WR_GPIO_Port->BRR = WR_Pin
#define RD_H  RD_GPIO_Port->BSRR = RD_Pin
#define RD_L  RD_GPIO_Port->BRR = RD_Pin
#define RS_H  RS_GPIO_Port->BSRR = RS_Pin
#define RS_L  RS_GPIO_Port->BRR = RS_Pin
#define CS_H  CS_GPIO_Port->BSRR = CS_Pin
#define CS_L  CS_GPIO_Port->BRR = CS_Pin

#endif
