#include "DSP2803x_Device.h"
#include "DSP2803x_Examples.h"
#include "bootloader.h"
#include "DSP2803x_GlobalPrototypes.h"

//D400 �͵�ƽ��;��Ҳ��PWM7B�����ţ�
#define D400GPIO GPIO41
#define D400MUX GpioCtrlRegs.GPBMUX1.bit.D400GPIO
#define D400DIR GpioCtrlRegs.GPBDIR.bit.D400GPIO
#define D400TOGGLE()  GpioDataRegs.GPBTOGGLE.bit.D400GPIO = 1
#define D400ON()  GpioDataRegs.GPBCLEAR.bit.D400GPIO =1
#define D400LOW() GpioDataRegs.GPBSET.bit.D400GPIO =1

//D401 �͵�ƽ��;
#define D401GPIO GPIO34
#define D401MUX GpioCtrlRegs.GPBMUX1.bit.D401GPIO
#define D401DIR GpioCtrlRegs.GPBDIR.bit.D401GPIO
#define D401TOGGLE()  GpioDataRegs.GPBTOGGLE.bit.D401GPIO = 1
#define D401ON()  GpioDataRegs.GPBCLEAR.bit.D401GPIO =1
#define D401LOW() GpioDataRegs.GPBSET.bit.D401GPIO =1

//D402 �͵�ƽ��;
#define D402GPIO GPIO43
#define D402MUX GpioCtrlRegs.GPBMUX1.bit.D402GPIO
#define D402DIR GpioCtrlRegs.GPBDIR.bit.D402GPIO
#define D402TOGGLE()  GpioDataRegs.GPBTOGGLE.bit.D402GPIO = 1
#define D402ON()  GpioDataRegs.GPBCLEAR.bit.D402GPIO =1
#define D402LOW() GpioDataRegs.GPBSET.bit.D402GPIO =1


//��������S100
#define S100GPIO GPIO27
#define S100MUX GpioCtrlRegs.GPAMUX2.bit.S100GPIO
#define S100DIR GpioCtrlRegs.GPADIR.bit.S100GPIO
#define S100PUD GpioCtrlRegs.GPAPUD.bit.S100GPIO
#define rS100DAT()  GpioDataRegs.GPADAT.bit.S100GPIO

void InitLED()
{
    EALLOW;
    D400MUX = 0;//GPIO����
    D400DIR = 1;//���
    D401MUX = 0;
    D401DIR = 1;
    D402MUX = 0;
    D402DIR = 1;
    EDIS;
}
#pragma CODE_SECTION(delayn, "ramfuncs");
void delayn(void)
{
    int i,j;
    for(i = 0; i < 1000; i++)
    {
        for(j = 0; j < 1000; j++);
    }
}
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}
void main(void)
{
    Uint16 Status;
    Uint16 Times = 0;
    InitSysCtrl();


    /*
    Status = Example_CsmUnlock();
    if(Status != STATUS_SUCCESS)
    {
        Example_Error(Status);
    }

     // We must also copy required user interface functions to RAM.
    Example_MemCopy(&RamfuncsLoadStart, &RamfuncsLoadEnd, &RamfuncsRunStart);
     //flash�Ĵ����ĳ�ʼ��
    InitFlash();
    // Copy the Flash API functions to SARAM
    Example_MemCopy(&Flash28_API_LoadStart, &Flash28_API_LoadEnd, &Flash28_API_RunStart);
    */
    InitGpio();
    DINT;

        // Disable CPU interrupts and clear all CPU interrupt flags:
    IER = 0x0000;
    IFR = 0x0000;
    //memcpy(&RamfuncsRunStart, &RamfuncsLoadStart, (Uint32)&RamfuncsLoadSize);

    EINT;
    ERTM;
    Times = add(10,5);
    Times = sub(10,5);
    //ECAN_A_TX(REQUST_CMD1,REQUST_CMD2);//������������
    //ECAN_A_RX_CMD(); //�涨ʱ�������λ����������

	while(1)
	{
        //������˸
        //D401TOGGLE();
        //D402TOGGLE();

	    GpioDataRegs.GPATOGGLE.bit.GPIO3 = 1;
	    GpioDataRegs.GPATOGGLE.bit.GPIO11 = 1;
        DELAY_US(100000);//��λus

	}
}
//================================================================================
// ��������: JumpToApp
// ��������: bootloader������Ӧ�ó�����ת
// �������:
// �������: ��
// ����˵��: ��
//================================================================================

void JumpToApp()
{

    EALLOW;
    DINT;
    EDIS;

    asm(" LB 0x3E8000");

    //(*APP_START_ADDRESS)();

}

//=====================================
void delay(Uint32 cuntr)
{
    while(cuntr>0)
    {
        cuntr--;
    }
}
