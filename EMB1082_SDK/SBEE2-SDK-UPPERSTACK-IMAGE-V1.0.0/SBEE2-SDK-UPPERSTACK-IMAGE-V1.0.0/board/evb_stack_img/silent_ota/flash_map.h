/**
*****************************************************************************************
*     Copyright(c) 2017, Realtek Semiconductor Corporation. All rights reserved.
*****************************************************************************************
* @file    flash_map.h
* @brief   Flash Layout Configuration, and flash layout must be changed with config file!
* @note    flash_map.h must be generated by FlashMapGenerateTool!
* *************************************************************************************
*/

#ifndef _FLASH_MAP_H_
#define _FLASH_MAP_H_

#ifdef __cplusplus
extern "C" {
#endif

/*============================================================================*
*                        Flash Layout
*============================================================================*/
/*  Flash total size                                512KB
example:
    1) Reaerved:                                       4K (0x00800000)
    2) OEM Header:                                     4K (0x00801000)
    3) OTA Bank0:                                    328K (0x00802000)
        a) OTA Header                    4K (0x00802000)
        b) Secure boot loader            4K (0x0080D000)
        c) Patch code                   40K (0x00803000)
        d) Upperstack  Code            120K (0x0080E000)
        e) APP code                    148K (0x0082C000)
        f) APP data1                    12K (0x00851000)
        g) APP data2                     0K (0x00854000)
        h) APP data3                     0K (0x00854000)
        i) APP data4                     0K (0x00854000)
        j) APP data5                     0K (0x00854000)
        k) APP data6                     0K (0x00854000)
    4) OTA Bank1:                                      0K (0x00854000)
        a) OTA Header                    0K (0x00000000)
        b) Secure boot loader            0K (0x00000000)
        c) Patch code                    0K (0x00000000)
        d) Upperstack Code               0K (0x00000000)
        e) APP code                      0K (0x00000000)
        f) APP data1                     0K (0x00000000)
        g) APP data2                     0K (0x00000000)
        h) APP data3                     0K (0x00000000)
        i) APP data4                     0K (0x00000000)
        j) APP data5                     0K (0x00000000)
        k) APP data6                     0K (0x00000000)
    5) FTL:                                           16K (0x00854000)
    6) OTA Tmp:                                      148K (0x00858000)
    7) APP Defined Section:                           12K (0x0087D000)
*/

/*============================================================================*
*            Flash Layout Configuration (Generated by FlashMapGenerateTool)
*============================================================================*/

#define FLASH_ADDR                      0x00800000  //Fixed
#define FLASH_SIZE                      0x00080000  //512K Bytes

/* ========== High Level Flash Layout Configuration ========== */
#define RESERVED_ADDR                   0x00800000
#define RESERVED_SIZE                   0x00001000  //4K Bytes
#define OEM_CFG_ADDR                    0x00801000
#define OEM_CFG_SIZE                    0x00001000  //4K Bytes
#define OTA_BANK0_ADDR                  0x00802000
#define OTA_BANK0_SIZE                  0x00052000  //328K Bytes
#define OTA_BANK1_ADDR                  0x00854000
#define OTA_BANK1_SIZE                  0x00000000  //0K Bytes
#define FTL_ADDR                        0x00854000
#define FTL_SIZE                        0x00004000  //16K Bytes
#define OTA_TMP_ADDR                    0x00858000
#define OTA_TMP_SIZE                    0x00025000  //148K Bytes
#define BKP_DATA1_ADDR                  0x0087D000
#define BKP_DATA1_SIZE                  0x00003000  //12K Bytes
#define BKP_DATA2_ADDR                  0x00000000
#define BKP_DATA2_SIZE                  0x00000000  //0K Bytes

/* ========== OTA Bank0 Flash Layout Configuration ========== */
#define BANK0_OTA_HEADER_ADDR           0x00802000
#define BANK0_OTA_HEADER_SIZE           0x00001000  //4K Bytes
#define BANK0_SECURE_BOOT_ADDR          0x0080D000
#define BANK0_SECURE_BOOT_SIZE          0x00001000  //4K Bytes
#define BANK0_ROM_PATCH_ADDR            0x00803000
#define BANK0_ROM_PATCH_SIZE            0x0000A000  //40K Bytes
#define BANK0_UPPERSTACK_ADDR           0x0080E000
#define BANK0_UPPERSTACK_SIZE           0x0001E000  //120K Bytes
#define BANK0_APP_ADDR                  0x0082C000
#define BANK0_APP_SIZE                  0x00025000  //148K Bytes
#define BANK0_APP_DATA1_ADDR            0x00851000
#define BANK0_APP_DATA1_SIZE            0x00003000  //12K Bytes
#define BANK0_APP_DATA2_ADDR            0x00854000
#define BANK0_APP_DATA2_SIZE            0x00000000  //0K Bytes
#define BANK0_APP_DATA3_ADDR            0x00854000
#define BANK0_APP_DATA3_SIZE            0x00000000  //0K Bytes
#define BANK0_APP_DATA4_ADDR            0x00854000
#define BANK0_APP_DATA4_SIZE            0x00000000  //0K Bytes
#define BANK0_APP_DATA5_ADDR            0x00854000
#define BANK0_APP_DATA5_SIZE            0x00000000  //0K Bytes
#define BANK0_APP_DATA6_ADDR            0x00854000
#define BANK0_APP_DATA6_SIZE            0x00000000  //0K Bytes

/* ========== OTA Bank1 Flash Layout Configuration ========== */
#define BANK1_OTA_HEADER_ADDR           0x00000000
#define BANK1_OTA_HEADER_SIZE           0x00000000  //0K Bytes
#define BANK1_SECURE_BOOT_ADDR          0x00000000
#define BANK1_SECURE_BOOT_SIZE          0x00000000  //0K Bytes
#define BANK1_ROM_PATCH_ADDR            0x00000000
#define BANK1_ROM_PATCH_SIZE            0x00000000  //0K Bytes
#define BANK1_UPPERSTACK_ADDR           0x00000000
#define BANK1_UPPERSTACK_SIZE           0x00000000  //0K Bytes
#define BANK1_APP_ADDR                  0x00000000
#define BANK1_APP_SIZE                  0x00000000  //0K Bytes
#define BANK1_APP_DATA1_ADDR            0x00000000
#define BANK1_APP_DATA1_SIZE            0x00000000  //0K Bytes
#define BANK1_APP_DATA2_ADDR            0x00000000
#define BANK1_APP_DATA2_SIZE            0x00000000  //0K Bytes
#define BANK1_APP_DATA3_ADDR            0x00000000
#define BANK1_APP_DATA3_SIZE            0x00000000  //0K Bytes
#define BANK1_APP_DATA4_ADDR            0x00000000
#define BANK1_APP_DATA4_SIZE            0x00000000  //0K Bytes
#define BANK1_APP_DATA5_ADDR            0x00000000
#define BANK1_APP_DATA5_SIZE            0x00000000  //0K Bytes
#define BANK1_APP_DATA6_ADDR            0x00000000
#define BANK1_APP_DATA6_SIZE            0x00000000  //0K Bytes


#ifdef __cplusplus
}
#endif
/** @} */ /* _FLASH_MAP_H_ */
#endif
