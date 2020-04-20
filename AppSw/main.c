/***************************************************************************************
 * XMC44 Motor Code
 * Robert Valascho
 * 10-27-19
 * *************************************************************************************/

#include <XMC1400.h>
#include <xmc_gpio.h>

//We will use P4.0 on XMC14 Boot Kit as indicator that template is working
#define LED1 P4_0

/**
 * @brief main() - Application entry point
 *
 * <b>Details of function</b><br>
 * This routine is the application entry point. It is invoked by the device startup code. It is responsible for
 * invoking the App initialization dispatcher routine - DAVE_Init() and hosting the place-holder for user application
 * code.
 */

int main(void)
{
  //Set the LED Port to Output Push Pull
  XMC_GPIO_SetMode(LED1, XMC_GPIO_MODE_OUTPUT_PUSH_PULL);

  /* System timer configuration */
  SysTick_Config(16000000);
  
  while(1)
  {
  }

}

//Periodic handler to toggle the LED
void SysTick_Handler(void)
{
  XMC_GPIO_ToggleOutput(LED1);
}

