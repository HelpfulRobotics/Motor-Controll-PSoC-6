/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include <stdio.h>
int main(void)
{
    __enable_irq(); /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
//    int compareValue=5000;
   Clock_1_Enable(); 
//    UART_1_Start();
//  
//    setvbuf(stdin, NULL, _IONBF, 0); 
//    char data;
//    printf("PSoC Started\r\n"); 
//    
    //Motor 1 start
    Cy_TCPWM_PWM_Init(PWM_Motor1_HW, PWM_Motor1_CNT_NUM, &PWM_Motor1_config);
    Cy_TCPWM_PWM_Enable(PWM_Motor1_HW, PWM_Motor1_CNT_NUM);
    Cy_TCPWM_TriggerStart(PWM_Motor1_HW, PWM_Motor1_CNT_MASK);
    
    //Motor 2 start
     Cy_TCPWM_PWM_Init(PWM_Motor2_HW, PWM_Motor2_CNT_NUM, &PWM_Motor2_config);
    Cy_TCPWM_PWM_Enable(PWM_Motor2_HW, PWM_Motor2_CNT_NUM);
       Cy_TCPWM_TriggerStart(PWM_Motor2_HW, PWM_Motor2_CNT_MASK);
    /* Step 3 - Trigger PWM */
    
  
    for(;;)
    {
//        data=getchar(); //Gets the 
//        if(data)
//        {
//            printf("%c",data);
//        }
        //Cy_TCPWM_PWM_SetCompare0(PWM_Motor1_HW,PWM_Motor1_CNT_NUM,compareValue);
        //compareValue=(compareValue+1)%100;
        //CyDelay(200); 
        
        
       
      
    }
}

/* [] END OF FILE */
