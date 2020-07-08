//###########################################################################
//
// FILE:	DSP2803x_Gpio.c
//
// TITLE:	DSP2803x General Purpose I/O Initialization & Support Functions.
//
//###########################################################################
// $TI Release: F2803x C/C++ Header Files and Peripheral Examples V127 $
// $Release Date: March 30, 2013 $
//###########################################################################

#include "DSP2803x_Device.h"     // DSP2803x Headerfile Include File
#include "DSP2803x_Examples.h"   // DSP2803x Examples Include File

//---------------------------------------------------------------------------
// InitGpio:
//---------------------------------------------------------------------------
// This function initializes the Gpio to a known (default) state.
//
// For more details on configuring GPIO's as peripheral functions,
// refer to the individual peripheral examples and/or GPIO setup example.
void InitGpio(void)
{
   EALLOW;

   // Each GPIO pin can be:
   // a) a GPIO input/output
   // b) peripheral function 1
   // c) peripheral function 2
   // d) peripheral function 3
   // By default, all are GPIO Inputs
//   GpioCtrlRegs.GPAMUX1.all = 0x0555;     // GPIO functionality GPIO0-GPIO15
   GpioCtrlRegs.GPAMUX1.all = 0x0000;
   GpioCtrlRegs.GPAMUX2.all = 0x0000;     // GPIO functionality GPIO16-GPIO31

   GpioCtrlRegs.GPAMUX1.bit.GPIO0 = 1;      //epwm
   GpioCtrlRegs.GPAMUX1.bit.GPIO1 = 1;      //epwm
   GpioCtrlRegs.GPAMUX1.bit.GPIO2 = 1;      //epwm
   GpioCtrlRegs.GPAMUX1.bit.GPIO3 = 0;      //led1
   GpioCtrlRegs.GPAMUX1.bit.GPIO4 = 1;      //epwm
   GpioCtrlRegs.GPAMUX1.bit.GPIO5 = 1;      //epwm

   GpioCtrlRegs.GPBMUX1.all = 0x0000;     // GPIO functionality GPIO32-GPIO44
   GpioCtrlRegs.AIOMUX1.all = 0x0000;     // Dig.IO funct. applies to AIO2,4,6,10,12,14

   GpioCtrlRegs.GPADIR.all = 0x0400;      // GPIO0-GPIO31 are GP inputs
   GpioCtrlRegs.GPADIR.bit.GPIO7 = 1;       //SW_IN
   GpioCtrlRegs.GPADIR.bit.GPIO8 = 1;       //SW_OUT
   GpioCtrlRegs.GPADIR.bit.GPIO9 = 1;       //SW_PLOAD
   GpioCtrlRegs.GPBDIR.all = 0x0004;      // GPIO32-GPIO44 are inputs
   GpioCtrlRegs.AIODIR.all = 0x0000;      // AIO2,4,6,19,12,14 are digital inputs

   // Each input can have different qualification
   // a) input synchronized to SYSCLKOUT
   // b) input qualified by a sampling window
   // c) input sent asynchronously (valid for peripheral inputs only)
   GpioCtrlRegs.GPAQSEL1.all = 0x0000;    // GPIO0-GPIO15 Synch to SYSCLKOUT
   GpioCtrlRegs.GPAQSEL2.all = 0x0000;    // GPIO16-GPIO31 Synch to SYSCLKOUT
   GpioCtrlRegs.GPBQSEL1.all = 0x0000;    // GPIO32-GPIO44 Synch to SYSCLKOUT

   // Pull-ups can be enabled or disabled.
   GpioCtrlRegs.GPAPUD.all = 0x0000;      // Pullup's enabled GPIO0-GPIO31
   GpioCtrlRegs.GPBPUD.all = 0x0000;      // Pullup's enabled GPIO32-GPIO44
   //GpioCtrlRegs.GPAPUD.all = 0xFFFF;    // Pullup's disabled GPIO0-GPIO31
   //GpioCtrlRegs.GPBPUD.all = 0xFFFF;    // Pullup's disabled GPIO32-GPIO44

   GpioCtrlRegs.GPADIR.bit.GPIO3 = 1;	//led1
   GpioCtrlRegs.GPADIR.bit.GPIO10 = 1;	//led2
   GpioCtrlRegs.GPADIR.bit.GPIO11 = 1;	//led3
   EDIS;

}

//===========================================================================
// End of file.
//===========================================================================
