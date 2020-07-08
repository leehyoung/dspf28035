/*
 * Initialize.c
 *
 *  Created on: 2018Äê12ÔÂ27ÈÕ
 *      Author: YFWS
 */

#include "DSP2803x_Device.h"
#include "DSP2803x_Examples.h"


#pragma CODE_SECTION(InitFlash, "ramfuncs");
void InitDSPPeripheral(void)
{
	DINT;

	// Disable CPU interrupts and clear all CPU interrupt flags:
	IER = 0x0000;
	IFR = 0x0000;


    IER |= M_INT9;
    PieCtrlRegs.PIEIER9.bit.INTx5 = 0;      //ECAN0_INT
	//memcpy(&RamfuncsRunStart, &RamfuncsLoadStart, (Uint32)&RamfuncsLoadSize);
	//InitFlash();




	EINT;
	ERTM;

}

void InitSys(void)
{
	InitSysCtrl();

    InitGpio();
	InitDSPPeripheral();


}

