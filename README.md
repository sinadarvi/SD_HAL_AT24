AT24_HAL_I2C
===================

Hi guys! If you are familiar with **HAL** Libraries , you Know that work with **I2C_HAL** Library is hard to handle.so for start, any Hardware developer recommend You to work with **EEPROMs**[^eeprom] , so here we gone use **I2C_HAL** library and write somethings on EEPROMs (for example **AT24** ) and then read that from.  so here we are.first i wanna show you 2 function in my library that you can see below and then you can easily understand others.

  [^eeprom]: [EEPROM](https://en.wikipedia.org/wiki/EEPROM)

----------


at24_HAL_WriteBytes
-------------

its easy one,this is the base and don't afraid this is easy one . in this function we use **HAL_I2C_Mem_Write** and write our own function.This function handles Writing Array of Bytes on the specific Address .
this program have this feature that don't force you to use absolute 16 bytes , you can use more than 16 bytes buffer.

> **Notes:**

> - ***hi2c:*** Pointer to a I2C_HandleTypeDef structure that contains the configuration information for the specified I2C.
> - ***DevAddress:*** specifies the slave address to be programmed (*EEPROM ADDRESS*).
> - ***MemAddress:*** Internal memory address (*WHERE YOU WANNA WRITE TO*).
> - ***pData:*** Pointer to data buffer.
> - ***TxBufferSize:*** Amount of data you wanna Write.
> - we consider ***Timeout*** as 1000.


----------
at24_HAL_ReadBytes
-------------

Function just get the DevAddress of the Slave (not master) and for the next step You know that the most of the EEPROM address start with ***0xA0***[^datasheet] .it get the MemAddress for the location you want to read data from.
> **Notes:**

> - ***hi2c:*** Pointer to a I2C_HandleTypeDef structure that contains the configuration information for the specified I2C.
> - ***DevAddress:*** specifies the slave address to be programmed (*EEPROM ADDRESS*).
> - ***MemAddress:*** Internal memory address (*WHERE YOU WANNA READ FROM*).
> - ***pData:*** Pointer to data buffer.
> - ***TxBufferSize:*** Amount of data you wanna Write.
> - we consider ***Timeout*** as 1000.


 [^datasheet]: [AT24C08 DATASHEET](https://www.google.com/search?q=at24c08+datasheet&oq=at24c08+da&aqs=chrome.1.69i57j0l5.11432j0j9&sourceid=chrome&es_sm=93&ie=UTF-8)


----------
here we are . we have 2 function for read and write and we can use it and expand our lib and make it better.

 don't forget to ***[visit our site](http://www.R2t.ir)*** .
thanks.
Sina Darvishi

