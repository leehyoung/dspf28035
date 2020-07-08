/*
 * bootloader.h
 *
 *  Created on: 2019年10月30日
 *      Author: lihaiyang
 */

#ifndef BOOTLOADER_H_
#define BOOTLOADER_H_


#ifdef __cplusplus
extern "C" {
#endif



#include "Flash2803x_API_Library.h"
#include "Flash2803x_API_Config.h"
#include "Example_Flash2803x_API.h"
#include "DSP2803x_ECan.h"


#define  APP_START_ADDRESS        (void(*)(void))(0x3F0000)


#define  REQUST_CMD1   0x00005555//请求命令
#define  REQUST_CMD2   0x0000AAAA

#define  UPDATA_CMD1   0x88886666//升级命令
#define  UPDATA_CMD2   0x00008888

#define  FILE_CMD1     0x00001111//发送升级文件命令
#define  FILE_CMD2     0x0000FFFF


#define  RAM_BUFFER_SIZE    100
#define   BLOCK_SIZE         32640L
#define  DEST_ADDR         0x3E8000
#define  TXCOUNT           10


extern FLASH_ST FlashStatus;


extern Uint16   *BlockBufferPtr;
extern Uint32   BlockRemain;
extern Uint16   BufferIndexMax;
extern Uint16   BlockBuffer1[RAM_BUFFER_SIZE];
extern Uint16   BlockBuffer2[RAM_BUFFER_SIZE];

extern Uint32   MyCallbackCounter;

extern Uint32  Boot_TimeCnt;
extern Uint32  RxCmdCnt;
extern Uint32  RxDataCnt;
extern Uint16  FrameCnt;
extern Uint16  Load1Cnt;
extern Uint16  Load2Cnt;

extern Uint16  CanRxMsgFlag;
extern Uint16  EraseFlag;
extern Uint16  FinishFlag;
extern Uint16  UpdataFlag;

extern Uint32 RecData_l;
extern Uint32 RecData_h;
extern Uint16 AddrTemp;
extern Uint16 LocalAddr;


extern Uint16 RecValue;
extern Uint32 DestAddr;
extern Uint16 FrameNum;
extern Uint16 byteNum;


void ECAN_A_TX(Uint32 cmd1,Uint32 cmd2);
void ECAN_A_RX_CMD (void);
void ECAN_A_RX_DATA (void);
void ECAN_BlockProcessing(void);
void ECAN_Communicate();

Uint16 CAN_Start();
void ECAN_rx();
void LocalAdrr();

void JumpToApp();
void InitValue();
void delay(Uint32 cuntr);


// These are defined by the linker
extern Uint16 textLoadStart;
extern Uint16 textLoadEnd;
extern Uint16 textRunStart;
extern Uint16 econstLoadStart;
extern Uint16 econstLoadEnd;
extern Uint16 econstRunStart;

extern Uint16 econstLoadStart;
extern Uint16 econstLoadEnd;
extern Uint16 econstRunStart;

extern Uint16 cinit_loadstart;
extern Uint16 econstLoadEnd;
extern Uint16 cinit_runstart;




#ifdef __cplusplus
}
#endif /* extern "C" */



#endif /* BOOTLOADER_H_ */
