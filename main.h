#include "mcc_generated_files/mcc.h"
/*#include "mcc_generated_files/system.h"
#include "mcc_generated_files/pin_manager.h"
#include "mcc_generated_files/uart2.h"
#include "mcc_generated_files/uart3.h"
#include "mcc_generated_files/spi2_types.h"
#include "mcc_generated_files/spi2_driver.h"
#include "mcc_generated_files/tmr1.h"
#include "mcc_generated_files/tmr2.h"*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../Comunic.h"
//#include "../delay.h"

#define seqCORE 0
#define seqMASK 1
#define seqFRONT 2
#define seqCRUZ1 3
#define seqCRUZ2 4
#define seqLEGS 5

#define GREEN 0
#define RED 1
#define BLUE 2
#define YELLOW 3
#define PURPLE 4
#define CYAN 8
#define WHITE 10
#define DRAGON 20
#define DRAGON2 21
#define REFRI 22

#define gState 0
#define gMask 1
#define gCore 2
#define gShouldFL 3
#define gShouldFR 4
#define gShouldDL 5
#define gShouldDR 6
#define gShouldBL 7
#define gShouldBR 8
#define gNeckL 9
#define gNeckR 10
#define gNeckBL 11
#define gNeckBR 12
#define gAbsUL 13
#define gAbsUR 14
#define gAbsML 15
#define gAbsMR 16
#define gAbsDL 17
#define gAbsDR 18
#define gBackUL 19
#define gBackUR 20
#define gBackM 21
#define gBackD 22
#define gLegUL 23
#define gLegUR 24
#define gLegDL 25
#define gLegDR 26
#define gShoeL 27
#define gShoeR 28
#define gAllLed 100

#define pLedGroup 0
#define pLedGlovalVal 1

typedef union {
    unsigned short valS;
    struct {
        unsigned char valSL;//LessSifnificant
        unsigned char valSH;//MostSignificant
    };
}SHORT_CONV;

void valfromGroup(char groupID);
void val2group(char group, unsigned char val);
void merger(void);
void sendOrderX(void);
void sendOrderXs(void);

char mergeGroup1(char groupID, short accum);
char mergeGroup2(char groupID, short accum);
char mergeBridge1(short cantB, short accum);
char mergeBridge2(short cantB, short accum);

void dotStart(char i);
void sendDotStar(char r, char g, char b);
void sendDotStar2(char lumen, char r, char g, char b);
void sendOrderDot(void);

void rstShadow(char start);
void despShadow(void);
void translateShadows(void);
void crashOn1(void);
void crashOff1(void);
void crashOn2(void);
void crashOff2(void);
void crashOff3(void);
void dragonCrashTool(void);
void rstDragon(char start);
void dragonCrash(void);
void refriShoulderTool(char on);
void rstRefri(char start);
void refriShoulder(void);
void rstMaskOn(char start);
void maskOn(void);
void rstMaskOff(char start);
void maskOff(void);
void rstDemoOn(char start);
void demoEfectOn(void);
void rstMusik(char start);
void musik(void);
void rstDemoOff(char start);
void demoEfectOff(void);
void seqByZone_On(char num, short time);
void seqByZone_Off(char num, short time);
void rstPressOn(char start);
void SeqPresOn(void);
void rstPressOff(char start);
void SeqPresOff(void);
void seqApply(void);

void applyColor(char group, char color, unsigned char intensity);
void rstSeq(void);
void allBodyVal(char val, char color);
void resetAndOff(char light);

void execMask_Sword(void);
void initStop(void);
void protExec(void);
void protRCV(char rcv);
void secuences(void);

void pTMR2_ISR(void);
void pTMR0_ISR(void);
void pRC1_ISR(void);

void IOC_DI1_ISR(void);
void IOC_AN1_ISR(void);
void IOC_AN2_ISR(void);
void changeDemoMode(void);

void butt1Pres(char state);
void butt2Pres(char state);
void butt3Pres(char state);

void waitX0ms(char X);
void dotTest1(short cantDot);
void dotTest2(short cantDot);
void dotTest3(short cantDot);

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    // TODO If C++ is being used, regular C code needs function names to have C 
    // linkage so the functions can be used by the c code. 

#ifdef	__cplusplus
}
#endif /* __cplusplus */

