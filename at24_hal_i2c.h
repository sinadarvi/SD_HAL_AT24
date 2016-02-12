/*
 * at24_hal_i2c.h
 *
 *  Created on: Sep,11,2015
 *      Author: Sina Darvishi
 */

#ifndef DRIVERS_MYLIB_AT24_HAL_I2C_H_
#define DRIVERS_MYLIB_AT24_HAL_I2C_H_

#include "stm32f0xx_hal.h"
#include "stm32f0xx_hal_i2c.h"

int at24_HAL_WriteBytes(I2C_HandleTypeDef *hi2c,uint16_t DevAddress,uint16_t MemAddress, uint8_t *pData,uint16_t TxBufferSize);
int at24_HAL_ReadBytes(I2C_HandleTypeDef *hi2c,uint16_t DevAddress,uint16_t MemAddress, uint8_t *pData,uint16_t RxBufferSize);

int at24_HAL_SequentialRead(I2C_HandleTypeDef *hi2c ,uint8_t DevAddress,uint16_t MemAddress,uint8_t *pData,uint16_t RxBufferSize);
int at24_HAL_EraseMemFull(I2C_HandleTypeDef *hi2c);
int at24_HAL_WriteString(I2C_HandleTypeDef *hi2c,char *pString ,uint16_t MemAddress ,uint8_t length);
int at24_HAL_ReadString(I2C_HandleTypeDef *hi2c,char *pString,uint16_t MemAddress,uint8_t length);


#endif /* DRIVERS_MYLIB_AT24_HAL_I2C_H_ */
