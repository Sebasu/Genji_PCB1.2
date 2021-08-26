/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F18326
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set MOS2 aliases
#define MOS2_TRIS                 TRISAbits.TRISA0
#define MOS2_LAT                  LATAbits.LATA0
#define MOS2_PORT                 PORTAbits.RA0
#define MOS2_WPU                  WPUAbits.WPUA0
#define MOS2_OD                   ODCONAbits.ODCA0
#define MOS2_ANS                  ANSELAbits.ANSA0
#define MOS2_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define MOS2_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define MOS2_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define MOS2_GetValue()           PORTAbits.RA0
#define MOS2_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define MOS2_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define MOS2_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define MOS2_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define MOS2_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define MOS2_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define MOS2_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define MOS2_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set MOS1 aliases
#define MOS1_TRIS                 TRISAbits.TRISA1
#define MOS1_LAT                  LATAbits.LATA1
#define MOS1_PORT                 PORTAbits.RA1
#define MOS1_WPU                  WPUAbits.WPUA1
#define MOS1_OD                   ODCONAbits.ODCA1
#define MOS1_ANS                  ANSELAbits.ANSA1
#define MOS1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define MOS1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define MOS1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define MOS1_GetValue()           PORTAbits.RA1
#define MOS1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define MOS1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define MOS1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define MOS1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define MOS1_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define MOS1_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define MOS1_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define MOS1_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set RX_LIN aliases
#define RX_LIN_TRIS                 TRISAbits.TRISA2
#define RX_LIN_LAT                  LATAbits.LATA2
#define RX_LIN_PORT                 PORTAbits.RA2
#define RX_LIN_WPU                  WPUAbits.WPUA2
#define RX_LIN_OD                   ODCONAbits.ODCA2
#define RX_LIN_ANS                  ANSELAbits.ANSA2
#define RX_LIN_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RX_LIN_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RX_LIN_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RX_LIN_GetValue()           PORTAbits.RA2
#define RX_LIN_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RX_LIN_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RX_LIN_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define RX_LIN_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define RX_LIN_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define RX_LIN_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define RX_LIN_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define RX_LIN_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set SERVO3 aliases
#define SERVO3_TRIS                 TRISAbits.TRISA4
#define SERVO3_LAT                  LATAbits.LATA4
#define SERVO3_PORT                 PORTAbits.RA4
#define SERVO3_WPU                  WPUAbits.WPUA4
#define SERVO3_OD                   ODCONAbits.ODCA4
#define SERVO3_ANS                  ANSELAbits.ANSA4
#define SERVO3_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define SERVO3_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define SERVO3_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define SERVO3_GetValue()           PORTAbits.RA4
#define SERVO3_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define SERVO3_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define SERVO3_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define SERVO3_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define SERVO3_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define SERVO3_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define SERVO3_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define SERVO3_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set SER4_MOS3 aliases
#define SER4_MOS3_TRIS                 TRISAbits.TRISA5
#define SER4_MOS3_LAT                  LATAbits.LATA5
#define SER4_MOS3_PORT                 PORTAbits.RA5
#define SER4_MOS3_WPU                  WPUAbits.WPUA5
#define SER4_MOS3_OD                   ODCONAbits.ODCA5
#define SER4_MOS3_ANS                  ANSELAbits.ANSA5
#define SER4_MOS3_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define SER4_MOS3_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define SER4_MOS3_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define SER4_MOS3_GetValue()           PORTAbits.RA5
#define SER4_MOS3_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define SER4_MOS3_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define SER4_MOS3_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define SER4_MOS3_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define SER4_MOS3_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define SER4_MOS3_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define SER4_MOS3_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define SER4_MOS3_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set TX_LIN aliases
#define TX_LIN_TRIS                 TRISCbits.TRISC0
#define TX_LIN_LAT                  LATCbits.LATC0
#define TX_LIN_PORT                 PORTCbits.RC0
#define TX_LIN_WPU                  WPUCbits.WPUC0
#define TX_LIN_OD                   ODCONCbits.ODCC0
#define TX_LIN_ANS                  ANSELCbits.ANSC0
#define TX_LIN_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define TX_LIN_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define TX_LIN_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define TX_LIN_GetValue()           PORTCbits.RC0
#define TX_LIN_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define TX_LIN_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define TX_LIN_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define TX_LIN_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define TX_LIN_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define TX_LIN_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define TX_LIN_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define TX_LIN_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set DI1 aliases
#define DI1_TRIS                 TRISCbits.TRISC1
#define DI1_LAT                  LATCbits.LATC1
#define DI1_PORT                 PORTCbits.RC1
#define DI1_WPU                  WPUCbits.WPUC1
#define DI1_OD                   ODCONCbits.ODCC1
#define DI1_ANS                  ANSELCbits.ANSC1
#define DI1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define DI1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define DI1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define DI1_GetValue()           PORTCbits.RC1
#define DI1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define DI1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define DI1_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define DI1_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define DI1_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define DI1_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define DI1_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define DI1_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set AN2 aliases
#define AN2_TRIS                 TRISCbits.TRISC2
#define AN2_LAT                  LATCbits.LATC2
#define AN2_PORT                 PORTCbits.RC2
#define AN2_WPU                  WPUCbits.WPUC2
#define AN2_OD                   ODCONCbits.ODCC2
#define AN2_ANS                  ANSELCbits.ANSC2
#define AN2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define AN2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define AN2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define AN2_GetValue()           PORTCbits.RC2
#define AN2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define AN2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define AN2_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define AN2_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define AN2_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define AN2_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define AN2_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define AN2_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set AN1 aliases
#define AN1_TRIS                 TRISCbits.TRISC3
#define AN1_LAT                  LATCbits.LATC3
#define AN1_PORT                 PORTCbits.RC3
#define AN1_WPU                  WPUCbits.WPUC3
#define AN1_OD                   ODCONCbits.ODCC3
#define AN1_ANS                  ANSELCbits.ANSC3
#define AN1_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define AN1_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define AN1_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define AN1_GetValue()           PORTCbits.RC3
#define AN1_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define AN1_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define AN1_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define AN1_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define AN1_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define AN1_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define AN1_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define AN1_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set SERVO1 aliases
#define SERVO1_TRIS                 TRISCbits.TRISC4
#define SERVO1_LAT                  LATCbits.LATC4
#define SERVO1_PORT                 PORTCbits.RC4
#define SERVO1_WPU                  WPUCbits.WPUC4
#define SERVO1_OD                   ODCONCbits.ODCC4
#define SERVO1_ANS                  ANSELCbits.ANSC4
#define SERVO1_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define SERVO1_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define SERVO1_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define SERVO1_GetValue()           PORTCbits.RC4
#define SERVO1_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define SERVO1_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define SERVO1_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define SERVO1_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define SERVO1_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define SERVO1_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define SERVO1_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define SERVO1_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set SERVO2 aliases
#define SERVO2_TRIS                 TRISCbits.TRISC5
#define SERVO2_LAT                  LATCbits.LATC5
#define SERVO2_PORT                 PORTCbits.RC5
#define SERVO2_WPU                  WPUCbits.WPUC5
#define SERVO2_OD                   ODCONCbits.ODCC5
#define SERVO2_ANS                  ANSELCbits.ANSC5
#define SERVO2_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define SERVO2_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define SERVO2_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define SERVO2_GetValue()           PORTCbits.RC5
#define SERVO2_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define SERVO2_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define SERVO2_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define SERVO2_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define SERVO2_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define SERVO2_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define SERVO2_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define SERVO2_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF1 pin functionality
 * @Example
    IOCCF1_ISR();
 */
void IOCCF1_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF1 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF1 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF1_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF1_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF1 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF1_SetInterruptHandler() method.
    This handler is called every time the IOCCF1 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF1_SetInterruptHandler(IOCCF1_InterruptHandler);

*/
extern void (*IOCCF1_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF1 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF1_SetInterruptHandler() method.
    This handler is called every time the IOCCF1 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF1_SetInterruptHandler(IOCCF1_DefaultInterruptHandler);

*/
void IOCCF1_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF2 pin functionality
 * @Example
    IOCCF2_ISR();
 */
void IOCCF2_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF2 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF2 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF2_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF2_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF2 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF2_SetInterruptHandler() method.
    This handler is called every time the IOCCF2 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF2_SetInterruptHandler(IOCCF2_InterruptHandler);

*/
extern void (*IOCCF2_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF2 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF2_SetInterruptHandler() method.
    This handler is called every time the IOCCF2 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF2_SetInterruptHandler(IOCCF2_DefaultInterruptHandler);

*/
void IOCCF2_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF3 pin functionality
 * @Example
    IOCCF3_ISR();
 */
void IOCCF3_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF3 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF3 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF3_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF3_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF3 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF3_SetInterruptHandler() method.
    This handler is called every time the IOCCF3 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF3_SetInterruptHandler(IOCCF3_InterruptHandler);

*/
extern void (*IOCCF3_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF3 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF3_SetInterruptHandler() method.
    This handler is called every time the IOCCF3 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF3_SetInterruptHandler(IOCCF3_DefaultInterruptHandler);

*/
void IOCCF3_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/