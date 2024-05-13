/**
*****************************************************************************************
*     Copyright(c) 2017, Realtek Semiconductor Corporation. All rights reserved.
*****************************************************************************************
  * @file     ipss.h
  * @brief    Head file for using internet protocol support service.
  * @details  HIDS data structs and external functions declaration.
  * @author   Jeff_Zheng
  * @date     2017-12-01
  * @version  v1.0
  * *************************************************************************************
  */

#ifndef _IPSS_H_
#define _IPSS_H_

#include <stdint.h>

#ifdef  __cplusplus
extern "C" {
#endif

/** @defgroup IPSS Internet Protocol Support Service
  * @brief  Internet Protocol Support Service
   * @details

    The Internet Protocol Support Profile (IPSP) allows devices to discover and communicate to
    other devices that support IPSP. The communication between the devices that support IPSP
    is done using IPv6 packets over the Bluetooth Low Energy transport.

    Application shall register IPS service when initialization through @ref ipss_add_service function.

  * @{
  */


/*============================================================================*
 *                         Macros
 *============================================================================*/
/** @defgroup IPSS_Exported_Macros IPSS Exported Macros
  * @brief
  * @{
  */
#define GATT_UUID_IPSS                  0x1820

/** End of IPSS_Exported_Macros
* @}
*/


/*============================================================================*
 *                         Functions
 *============================================================================*/
/** @defgroup IPSS_Exported_Functions IPSS Exported Functions
  * @brief
  * @{
  */

/**
  * @brief add ipss service to application.
  *
  * @param[in] p_func   pointer of app callback function called by profile.
  * @return service id auto generated by profile layer.
  * @retval service id
  */
uint8_t ipss_add_service(void *p_func);

/** @} End of IPSS_Exported_Functions */

/** @} End of IPSS */

#ifdef  __cplusplus
}
#endif

#endif

