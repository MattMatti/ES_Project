#include "project.h"
#include <stdio.h>
#include <stdint.h>

//Momentary switches are connected to
//

//*****************************************************************************
//
// The error routine that is called if the driver library encounters an error.
//
//*****************************************************************************

#ifdef DEBUG
void
__error__(char *pcFilename, uint32_t ui32Line)
{
}
#endif


void PlayArea ()
{
	int32_t scratch;
	scratch = GPIOPinRead(GPIO_PORTF_BASE,GPIO_PIN_4|GPIO_PIN_0);
	scratch = ~scratch & (GPIO_PIN_4|GPIO_PIN_0) ; 
	switch (scratch)
	{
		case GPIO_PIN_4:
			GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2,0xF);
			GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1,0);
			GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3,0);
			break;
		case GPIO_PIN_0:
			GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1,0xF);
			GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3,0);
			GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2,0);
			break;
		case (GPIO_PIN_4|GPIO_PIN_0):
			GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1,0);
			GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3,0xF);
			GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2,0);
			break;
		default:
			GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1,0);
			GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3,0);
			GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2,0);
			break;
	}
}

//call this periodically to update services
void ServiceRoutine()
{
		UpdateSwitches();
}

//Hardware abstraction Layer.  Setup all the hardware
//Do it once.  
void SetupHardware()
{
	SetupPLL();								// Setup the clock to 80Mhz
	SetupSystick();           // initialize SysTick timer
	UartSetup();							// Setup the Uart to print to terminal
	GpioSetup();							// GPIO
}

int  main(void)
{
		uint8_t temp;
    volatile uint32_t ui32Loop;
		
		EnableAllPorts();					//make sure ports are enabled. Cant configure unenabled port
		SetupHardware();
		
    while(1)
    {
				UARTCharPut(UART0_BASE, temp);
			  temp++;
				UARTCharPut(UART0_BASE, '\n');
				UARTCharPut(UART0_BASE, '\r');

				PlayArea();
				ServiceRoutine();
			
				if (MySwitches.SW5==1)
				{
					GPIOPinWrite(GPIO_PORTB_BASE, GPIO_PIN_5,0xFF);
				}
				else 
				{
					GPIOPinWrite(GPIO_PORTB_BASE, GPIO_PIN_5,0x0);
				}

				//GPIO_PORTB_DATA_R = 0x00000020;
				//SetupLCD();
				test_stick();
				
    }
}
