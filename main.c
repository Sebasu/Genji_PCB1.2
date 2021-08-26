/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F18326
        Driver Version    :  2.00
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

#include "main.h"

unsigned char waitingTime = 0;
unsigned char waiter = 0;
char tick = 0;
char DemoSwitchChange = 0;
char modoPress_nDemo = 0;
signed short SeqVals[6] = {0,0,0,0,0,0};
char soundASOn = 0;
char soundASOff = 0;
char run = 0;
char lightsOn = 0;
signed short fullBodyVal = 0;

char flagPressOn = 0;
unsigned short timPresOn = 0;

char flagPressOff = 0;
unsigned short timPresOff = 0;

char flagDemoOn = 0;
unsigned short timDemoOn = 0;

char flagDemoOff = 0;
unsigned short timDemoOff = 0;

char maskIsOn = 0;
unsigned char runMaskOn = 0;
unsigned short indexMaskOn = 0;
unsigned short contTimMaskOn = 0;
unsigned char seqMaskOn[10] = {77,0,77,128,102,51,0,102,179,255};
signed short MaskSeq[12] = {0,0,0,0,0,0,0,0,0,0,0,0};

char runMaskOff = 0;
unsigned char indexMaskOff = 0;
unsigned short contTimMaskOff = 0;
unsigned char subContMaskOff = 0;

char runShadow = 0;
unsigned char indexShadow = 0;
unsigned short contTimShadow = 0;
unsigned char subContShadow = 0;
signed short shadowArray[21] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

char runCrash = 0;
unsigned char indexCrash = 0;
unsigned short contCrash = 0;
unsigned char subContCrash = 0;
unsigned char dragonColor = 0;
unsigned char deltaCrash = 16;//17?
signed short intensityCrash = 0;
signed short intensityCrash2 = 0;
unsigned char dragonArray[15];
unsigned char intensityArray[15];
char dragonCrashDone = 0;

char runRefri = 0;
char intensityRefri = 0;
unsigned char indexRefri = 0;
unsigned short contRefri = 0;
char refriShoulderDone = 0;

char musikRun = 0;
signed short valTempo = 0;
signed short valBip1 = 0;
signed short valBip2 = 0;
unsigned char stepsNote = 0;
unsigned char noteOnTempo = 0;
signed char noteNum = 0;
unsigned short ritmCont = 0;

/*****Steps of 10.4166667_ms Nucleo, Mask, hombF, Cruz1, Cruz2, Parte Baja*****/
unsigned short firstDelay = 152;
unsigned short delaysOn[6] = {0,4,28,36,44,52};
unsigned char seqDeltasOn[6] = {8,6,5,6,7,9};
//char durations[6] = {32,44,52,44,36,28};
unsigned short delaysOff[6] = {48,32,0,0,0,0};//short delaysOff[6] = {140,60,24,16,0};
unsigned char seqDeltasOff[6] = {3,5,5,6,7,9};
unsigned short delaysDemo[6] = {0,0,0,28,36,52};
/******************************************************************************/

unsigned long secCont = 0;
unsigned short minCont = 0;
unsigned char stepContDemo = 0;
unsigned char stepContPress = 0;

unsigned short dotCant1 = 85;
unsigned short dotCant2 = 85;
unsigned char dotValue1[85];
unsigned char dotValue2[85];
unsigned char dotColor1[85];
unsigned char dotColor2[85];
unsigned char dotTestColor[3] = {0,255,0};

unsigned char groupBuff[18];

unsigned char groupCant = 29;
unsigned char groupSize[29] = {1,16,11,3,3,3,3,3,3,3,3,4,4,4,4,3,3,3,3,3,3,3,3,6,6,6,6,8,8};
unsigned char groupValue[29];
unsigned char groupColor[29];

unsigned char State[1]; //0 (Nup)
unsigned char Mask[16]; //1
unsigned char Core[11]; //2
unsigned char ShouldFL[3]; //3
unsigned char ShouldFR[3]; //4
unsigned char ShouldDL[3]; //5
unsigned char ShouldDR[3]; //6
unsigned char ShouldBL[3]; //7
unsigned char ShouldBR[3]; //8
unsigned char NeckL[3]; //9
unsigned char NeckR[3]; //10
unsigned char NeckBL[4]; //11
unsigned char NeckBR[4]; //12
unsigned char NeckBRcolor[4]; //NeckBR Color for Effect
unsigned char AbsUL[4]; //13
unsigned char AbsUR[4]; //14
unsigned char AbsML[3]; //15
unsigned char AbsMR[3]; //16
unsigned char AbsDL[3]; //17
unsigned char AbsDR[3]; //18
unsigned char BackUL[3]; //19
unsigned char BackUR[3]; //20
unsigned char BackUM[3]; //21
unsigned char BackD[3]; //22 (Nup)
unsigned char LegUL[6]; //23
unsigned char LegUR[6]; //24
unsigned char LegDL[6]; //25
unsigned char LegDR[6]; //26
unsigned char ShoeL[8]; //27
unsigned char ShoeR[8]; //28

unsigned char genVal = 0;

char pInit = 0;
char pCont = 0;
unsigned char pVals[10] = {0,0,0,0,0,0,0,0,0,0};
unsigned char pTot = 6;
unsigned char packTotals[2] = {5,2};
char sendOrder = 0;
char execChan = 0;
SHORT_CONV sc;

char defaultLum = 0b00001;

/************Management*******************************/
void initArrays(void) {
    char i = 0;
    for(i = 0; i < dotCant1; i++) {
        dotValue1[i] = 0;
        dotValue2[i] = 0;
        dotColor1[i] = 0;
        dotColor2[i] = 0;
    }
    for(i = 0; i < groupCant; i++)
        applyColor(i, 0, 0);
    for(i = 0; i < 15; i++) {
        dragonArray[i];
        intensityArray[i];
    }
}

void valfromGroup(char groupID) {
    char i = 0;
    for(i = 0; i < groupSize[groupID]; i++) {
        switch (groupID) {
        case gState:
            groupBuff[i] = State[i];
            break;
        case gMask:
            groupBuff[i] = Mask[i];
            break;
        case gCore:
            groupBuff[i] = Core[i];
            break;
        case gShouldFL:
            groupBuff[i] = ShouldFL[i];
            break;
        case gShouldFR:
            groupBuff[i] = ShouldFR[i];
            break;
        case gShouldDL:
            groupBuff[i] = ShouldDL[i];
            break;
        case gShouldDR:
            groupBuff[i] = ShouldDR[i];
            break;
        case gShouldBL:
            groupBuff[i] = ShouldBL[i];
            break;
        case gShouldBR:
            groupBuff[i] = ShouldBR[i];
            break;
        case gNeckL:
            groupBuff[i] = NeckL[i];
            break;
        case gNeckR:
            groupBuff[i] = NeckR[i];
            break;
        case gNeckBL:
            groupBuff[i] = NeckBL[i];
            break;
        case gNeckBR:
            groupBuff[i] = NeckBR[i];
            break;
        case gAbsUL:
            groupBuff[i] = AbsUL[i];
            break;
        case gAbsUR:
            groupBuff[i] = AbsUR[i];
            break;
        case gAbsML:
            groupBuff[i] = AbsML[i];
            break;
        case gAbsMR:
            groupBuff[i] = AbsMR[i];
            break;
        case gAbsDL:
            groupBuff[i] = AbsDL[i];
            break;
        case gAbsDR:
            groupBuff[i] = AbsDR[i];
            break;
        case gBackUL:
            groupBuff[i] = BackUL[i];
            break;
        case gBackUR:
            groupBuff[i] = BackUR[i];
            break;
        case gBackM:
            groupBuff[i] = BackUM[i];
            break;
        case gBackD:
            groupBuff[i] = BackD[i];
            break;
        case gLegUL:
            groupBuff[i] = LegUL[i];
            break;
        case gLegUR:
            groupBuff[i] = LegUR[i];
            break;
        case gLegDL:
            groupBuff[i] = LegDL[i];
            break;
        case gLegDR:
            groupBuff[i] = LegDR[i];
            break;
        case gShoeL:
            groupBuff[i] = ShoeL[i];
            break;
        case gShoeR:
            groupBuff[i] = ShoeR[i];
            break;
        }
    }
}

void val2group(char groupID, unsigned char val) {
    char i = 0;
    for(i = 0; i < groupSize[groupID]; i++) {
        switch (groupID) {
        case gState:
            State[i] = val;
            break;
        case gMask:
            Mask[i] = val;
            break;
        case gCore:
            Core[i] = val;
            break;
        case gShouldFL:
            ShouldFL[i] = val;
            break;
        case gShouldFR:
            ShouldFR[i] = val;
            break;
        case gShouldDL:
            ShouldDL[i] = val;
            break;
        case gShouldDR:
            ShouldDR[i] = val;
            break;
        case gShouldBL:
            ShouldBL[i] = val;
            break;
        case gShouldBR:
            ShouldBR[i] = val;
            break;
        case gNeckL:
            NeckL[i] = val;
            break;
        case gNeckR:
            NeckR[i] = val;
            break;
        case gNeckBL:
            NeckBL[i] = val;
            break;
        case gNeckBR:
            NeckBR[i] = val;
            break;
        case gAbsUL:
            AbsUL[i] = val;
            break;
        case gAbsUR:
            AbsUR[i] = val;
            break;
        case gAbsML:
            AbsML[i] = val;
            break;
        case gAbsMR:
            AbsMR[i] = val;
            break;
        case gAbsDL:
            AbsDL[i] = val;
            break;
        case gAbsDR:
            AbsDR[i] = val;
            break;
        case gBackUL:
            BackUL[i] = val;
            break;
        case gBackUR:
            BackUR[i] = val;
            break;
        case gBackM:
            BackUM[i] = val;
            break;
        case gBackD:
            BackD[i] = val;
            break;
        case gLegUL:
            LegUL[i] = val;
            break;
        case gLegUR:
            LegUR[i] = val;
            break;
        case gLegDL:
            LegDL[i] = val;
            break;
        case gLegDR:
            LegDR[i] = val;
            break;
        case gShoeL:
            ShoeL[i] = val;
            break;
        case gShoeR:
            ShoeR[i] = val;
            break;
        }
    }
    groupValue[groupID] = val;
}

char mergeGroup1(char groupID, short accum) {
    short i = 0;
    short size = (short)groupSize[groupID];
    valfromGroup(groupID);
    for(i = 0; i < size; i++) {
        dotValue1[i + accum] = groupBuff[i];
        dotColor1[i + accum] = groupColor[groupID];
    }
    accum += size;
    return accum;
}

char mergeGroup2(char groupID, short accum) {
    short i = 0;
    short size = (short)groupSize[groupID];
    valfromGroup(groupID);
    for(i = 0; i < size; i++) {
        dotValue2[i + accum] = groupBuff[i];
        dotColor2[i + accum] = groupColor[groupID];
    }
    accum += size;
    return accum;
}

char mergeBridge1(short cantB, short accum) {
    short i = 0;
    for(i = 0; i < cantB; i++) {
        dotValue1[i + accum] = 0;
        dotColor1[i + accum] = 0;
    }
    accum += cantB;
    return accum;
}

char mergeBridge2(short cantB, short accum) {
    short i = 0;
    for(i = 0; i < cantB; i++) {
        dotValue2[i + accum] = 0;
        dotColor2[i + accum] = 0;
    }
    accum += cantB;
    return accum;
}

void merger(void) {
    short accum = 0;
    short i = 0;
    //accum = mergeGroup(gState, accum);
    //accum = mergeGroup(gBackD, accum); //Nup
    accum = mergeGroup1(gBackM, accum);
    accum = mergeGroup1(gBackUL, accum);
    accum = mergeGroup1(gBackUR, accum);
    accum = mergeBridge1(3, accum);
    accum = mergeGroup1(gShouldBR, accum);
    accum = mergeGroup1(gShouldDR, accum);
    accum = mergeGroup1(gShouldFR, accum);
    accum = mergeBridge1(1, accum);
    accum = mergeGroup1(gNeckR, accum);
    for(i = 0; i < groupSize[gNeckBR]; i++) { //accum = mergeGroup(gNeckBR, accum);
        dotValue1[i + accum] = NeckBR[i];
        dotColor1[i + accum] = NeckBRcolor[i];//groupColor[gNeckBR];
    }
    accum += groupSize[gNeckBR];
    //accum = mergeBridge1(3, accum);
    accum = mergeGroup1(gMask, accum);
    //accum = mergeBridge1(3, accum);
    accum = mergeGroup1(gNeckBL, accum);
    accum = mergeGroup1(gNeckL, accum);
    accum = mergeBridge1(1, accum);
    accum = mergeGroup1(gShouldBL, accum);
    accum = mergeGroup1(gShouldDL, accum);
    accum = mergeGroup1(gShouldFL, accum);
    accum = mergeBridge1(3, accum);
    accum = mergeGroup1(gCore, accum);
    accum = mergeBridge1(1, accum);
    accum = mergeGroup1(gAbsUL, accum);
    accum = mergeGroup1(gAbsUR, accum);
    accum = 0;
    accum = mergeGroup2(gAbsMR, accum);
    accum = mergeGroup2(gAbsML, accum);
    accum = mergeGroup2(gAbsDL, accum);
    accum = mergeGroup2(gAbsDR, accum);
    accum = mergeBridge2(1, accum);
    accum = mergeBridge2(3, accum);
    accum = mergeGroup2(gLegUR, accum);
    accum = mergeBridge2(6, accum);
    accum = mergeGroup2(gLegDR, accum);
    accum = mergeBridge2(3, accum);
    accum = mergeGroup2(gShoeR, accum);
    accum = mergeBridge2(1, accum);
    accum = mergeBridge2(10, accum);
    accum = mergeGroup2(gLegUL, accum);
    accum = mergeBridge2(6, accum);
    accum = mergeGroup2(gLegDL, accum);
    accum = mergeBridge2(3, accum);
    accum = mergeGroup2(gShoeL, accum);
}

void sendOrderX(void) {
    sendOrder = 1;
}

void sendOrderXs(void) {
    merger();
    sendOrderDot();
    sendOrder = 0;
}
/************Management*******************************/

/************DotStar Drivers*******************************/
void dotStart(char i) {
    for(i = 0; i < 4; i++)
        SPI2_ExchangeByte(0);
}

void sendDotStar(char r, char g, char b) {
    SPI2_ExchangeByte(0b11100000 | defaultLum);
    SPI2_ExchangeByte(b);
    SPI2_ExchangeByte(g);SPI2_ExchangeByte(r);
}

void sendDotStar2(char lumen, char r, char g, char b) {
    if(lumen > 0b11111)
        lumen = 0b11111;//31
    char l = 0b11100000 | lumen;
    SPI2_ExchangeByte(l);SPI2_ExchangeByte(b);
    SPI2_ExchangeByte(g);SPI2_ExchangeByte(r);
}

void sendOrderDot(void) {
    short i = 0;
    dotStart(i);
    for(i = 0; i < dotCant1; i++) {
        if(dotColor1[i] == RED)
            sendDotStar(dotValue1[i],0,0);
        else if(dotColor1[i] == GREEN)
            sendDotStar(0,dotValue1[i],0);
        else if(dotColor1[i] == BLUE)
            sendDotStar(0,0,dotValue1[i]);
        else if(dotColor1[i] == YELLOW)
            sendDotStar(dotValue1[i],dotValue1[i],0);
        else if(dotColor1[i] == PURPLE)
            sendDotStar(dotValue1[i],0,dotValue1[i]);
        else if(dotColor1[i] == CYAN)
            sendDotStar(0,dotValue1[i],dotValue1[i]);
        else if(dotColor1[i] == WHITE)
            sendDotStar(dotValue1[i],dotValue1[i],dotValue1[i]);
        else if(dotColor1[i] == DRAGON)
            sendDotStar(0, dotValue1[i], 255-dotValue1[i]);
        else if(dotColor1[i] == DRAGON2)
            sendDotStar(0, 255-dotValue1[i], dotValue1[i]);
        else if(dotColor1[i] == REFRI)
            sendDotStar(0, dotValue1[i], intensityRefri);
    }
    for(i = 0; i < dotCant2; i++) {
        if(dotColor2[i] == RED)
            sendDotStar(dotValue2[i],0,0);
        else if(dotColor2[i] == GREEN)
            sendDotStar(0,dotValue2[i],0);
        else if(dotColor2[i] == BLUE)
            sendDotStar(0,0,dotValue2[i]);
        else if(dotColor2[i] == YELLOW)
            sendDotStar(dotValue2[i],dotValue2[i],0);
        else if(dotColor2[i] == PURPLE)
            sendDotStar(dotValue2[i],0,dotValue2[i]);
        else if(dotColor2[i] == CYAN)
            sendDotStar(0,dotValue2[i],dotValue2[i]);
        else if(dotColor2[i] == WHITE)
            sendDotStar(dotValue2[i],dotValue2[i],dotValue2[i]);
        else if(dotColor2[i] == DRAGON)
            sendDotStar(0, dotValue2[i], 255-dotValue2[i]);
        else if(dotColor2[i] == DRAGON2)
            sendDotStar(0, 255-dotValue2[i], dotValue2[i]);
        else if(dotColor2[i] == REFRI)
            sendDotStar(0, dotValue2[i], intensityRefri);
    }
    sendDotStar(255,255,255); //One more Pixel on White???
}
/************DotStar Drivers*******************************/

/************Light Effects*********************************/
void rstShadow(char start) {
    subContShadow = 0;
    indexShadow = 0;
    contTimShadow = 0;
    runShadow = start;
}

void despShadow(void) {
    if(runShadow && contTimShadow < 650) {
        if(contTimShadow < 1) {
            char i = 0;
            for(i = 0; i < 22; i++)
                shadowArray[i] = 255;
        }
        subContShadow++;
        if(indexShadow < 25) {
            if(indexShadow < 22) {
                shadowArray[indexShadow] -= 6;
                if(shadowArray[indexShadow] < 0)
                    shadowArray[indexShadow] = 0;
            }
            if(indexShadow > 0 && indexShadow < 23) {
                shadowArray[indexShadow - 1] -= 6;
                if(shadowArray[indexShadow - 1] < 0)
                    shadowArray[indexShadow - 1] = 0;
            }
            if(indexShadow > 1 && indexShadow < 24) {
                shadowArray[indexShadow - 2] += 6;
                if(shadowArray[indexShadow - 2] > 255)
                    shadowArray[indexShadow - 2] = 255;
            }
            if(indexShadow > 2 && indexShadow < 25) {
                shadowArray[indexShadow - 3] += 6;
                if(shadowArray[indexShadow - 3] > 255)
                    shadowArray[indexShadow - 3] = 255;
            }
        }else {
            char i = 0;
            for(i = 0; i < 22; i++)
                shadowArray[i] = 255;
            rstShadow(0);
        }
        if(subContShadow >= 25) {
            indexShadow++;
            subContShadow = 0;
        }
        translateShadows();
        sendOrderX();
        contTimShadow++;
    }
}

void translateShadows(void) {
    char i = 0;
    for(i = 0; i < groupSize[gNeckBL]; i++) {
        NeckBL[i] = shadowArray[i];
        NeckBR[i] = shadowArray[i];
    }
    val2group(gNeckL, shadowArray[4]);
    val2group(gNeckR, shadowArray[4]);
    val2group(gBackUL, shadowArray[5]);
    val2group(gBackUR, shadowArray[5]);
    val2group(gShouldBL, shadowArray[6]);
    val2group(gShouldBR, shadowArray[6]);
    val2group(gShouldDL, shadowArray[7]);
    val2group(gShouldDR, shadowArray[7]);
    val2group(gShouldFL, shadowArray[8]);
    val2group(gShouldFR, shadowArray[8]);
    val2group(gAbsUL, shadowArray[9]);
    val2group(gAbsUR, shadowArray[9]);
    val2group(gAbsML, shadowArray[10]);
    val2group(gAbsMR, shadowArray[10]);
    val2group(gAbsDL, shadowArray[11]);
    val2group(gAbsDR, shadowArray[11]);
    val2group(gLegUL, shadowArray[12]);
    val2group(gLegUR, shadowArray[12]);
    val2group(gLegDL, shadowArray[13]);
    val2group(gLegDR, shadowArray[13]);
    for(i = 0; i < groupSize[gShoeL]; i++) {
        char sas = i + 14;
        ShoeL[i] = shadowArray[sas];
        ShoeR[i] = shadowArray[sas];
    }
}

void crashOn1(void) {
    if(subContCrash < 17) {
        dragonArray[indexCrash] = GREEN;
        intensityCrash -= deltaCrash;
        if(intensityCrash < 0)
            intensityCrash = 0;
    }else {
        dragonArray[indexCrash] = BLUE;
        intensityCrash += deltaCrash;
        if(intensityCrash > 255)
            intensityCrash = 255;
    }
    intensityArray[indexCrash] = intensityCrash;
}

void crashOff1(void) {
    if(subContCrash < 17) {
        dragonArray[32 - indexCrash] = BLUE;
        intensityCrash -= deltaCrash;
        if(intensityCrash < 0)
            intensityCrash = 0;
    }else {
        dragonArray[32 - indexCrash] = GREEN;
        intensityCrash += deltaCrash;
        if(intensityCrash > 255)
            intensityCrash = 255;
    }
    intensityArray[32 - indexCrash] = intensityCrash;
}

void crashOn2(void) {
    dragonArray[indexCrash] = DRAGON;
    intensityCrash -= deltaCrash;
    if(intensityCrash < 0)
        intensityCrash = 0;
    /*if(subContCrash >= 32) {
        dragonArray[indexCrash] = GREEN;
        intensityCrash = 255;
    }*/
    intensityArray[indexCrash] = intensityCrash;
}

void crashOff2(void) {
    dragonArray[32 - indexCrash] = DRAGON2;
    intensityCrash -= deltaCrash;
    if(intensityCrash < 0)
        intensityCrash = 0;
    intensityArray[32 - indexCrash] = intensityCrash;
}

void crashOff3(void) {
    intensityCrash2 -= 1;
    if(intensityCrash2 < 0)
        intensityCrash2 = 0;
    char ix = 0;
    for(ix = 0; ix < 15; ix++) {
        dragonArray[ix] = DRAGON2;
        intensityArray[ix] = intensityCrash2;
    }
}

void dragonCrashTool(void) {
    applyColor(gShouldDR, dragonArray[0], intensityArray[0]);
    applyColor(gShouldFR, dragonArray[1], intensityArray[1]);
    applyColor(gShouldBR, dragonArray[2], intensityArray[2]);
    applyColor(gNeckR, dragonArray[3], intensityArray[3]);
    applyColor(gAbsUR, dragonArray[4], intensityArray[4]);
    applyColor(gBackUR, dragonArray[5], intensityArray[5]);
    NeckBR[0] = intensityArray[6]; NeckBRcolor[0] = dragonArray[6];
    applyColor(gAbsMR, dragonArray[7], intensityArray[7]);
    NeckBR[1] = intensityArray[8]; NeckBRcolor[1] = dragonArray[8];
    applyColor(gAbsDR, dragonArray[9], intensityArray[9]);
    NeckBR[2] = intensityArray[10]; NeckBRcolor[2] = dragonArray[10];
    applyColor(gLegUR, dragonArray[11], intensityArray[11]);
    NeckBR[3] = intensityArray[12]; NeckBRcolor[3] = dragonArray[12];
    applyColor(gLegDR, dragonArray[13], intensityArray[13]);
    applyColor(gShoeR, dragonArray[14], intensityArray[14]);
}

void rstDragon(char start) {
    char i = 0;
    for(i = 0; i < 15; i++) {
        intensityArray[i] = 255;
        dragonArray[i] = GREEN;
        dragonCrashTool();
    }
    intensityCrash = 255;
    subContCrash = 0;
    indexCrash = 0;
    contCrash = 0;
    runCrash = start;
}

void dragonCrash(void) {
    if(runCrash && contCrash < 1500) {
        subContCrash++;
        if(indexCrash < 15) {
            //crashOn1();//OBO Cut
            crashOn2();//OBO Smooth
        }else if(indexCrash < 18){
            //La lala lala
            intensityCrash2 = 255;
        }else if(indexCrash < 33){
            //crashOff1();//OBO Cut
            //crashOff2();//OBO Smooth
            crashOff3();//All Smooth
        }else {
            rstDragon(0);
            dragonCrashDone = 1;
        }
        if(subContCrash >= 32) {
            indexCrash++;
            intensityCrash = 255;
            subContCrash = 0;
        }
        dragonCrashTool();
        sendOrderX();
        contCrash++;
    }
}

void refriShoulderTool(char on) {
    char col = GREEN;
    if(on)
        col = REFRI;
    applyColor(gShouldBL, col, 255);
    applyColor(gShouldBR, col, 255);
    applyColor(gShouldDL, col, 255);
    applyColor(gShouldDR, col, 255);
    applyColor(gShouldFL, col, 255);
    applyColor(gShouldFR, col, 255);
}

void rstRefri(char start) {
    intensityRefri = 0;
    indexRefri = 0;
    contRefri = 0;
    refriShoulderTool(start);
    runRefri = start;
}

void refriShoulder(void) {
    if(runRefri && contRefri < 1000) {
        if(contRefri < 64) {
            indexRefri++;
            if(indexRefri >= 4) {
                intensityRefri += 1;
                indexRefri = 0;
            }
        }else if(contRefri < 88) {
            intensityRefri += 1;
        }else if(contRefri < 112) {
            intensityRefri -= 1;
        }else if(contRefri < 712) {
            //Waiting...
        }else if(intensityRefri > 0 && contRefri < 728) {
            intensityRefri -= 1;
            if(intensityRefri < 0)
                intensityRefri = 0;
        }else {
            rstRefri(0);
            refriShoulderDone = 1;
        }
        sendOrderX();
        contRefri++;
    }
}

void rstMaskOn(char start) {
    indexMaskOn = 0;
    contTimMaskOn = 0;
    runMaskOn = start;
}

void maskOn(void) {//CallOn Timer
    if(runMaskOn && contTimMaskOn < 60) {
        contTimMaskOn++;
        if(contTimMaskOn == (short)4*(indexMaskOn + 1)) {
            val2group(gMask, seqMaskOn[indexMaskOn]);
            indexMaskOn++;
            sendOrderX();
            if(indexMaskOn >= 10) {
                maskIsOn = 1;
                rstMaskOn(0);
            }
        }
    }
}

void rstMaskOff(char start) {
    contTimMaskOff = 0;
    subContMaskOff = 0;
    indexMaskOff = 0;
    runMaskOff = start;
}

void maskOff(void) {
    if(runMaskOff && contTimMaskOff < 150) {
        if(contTimMaskOff < 1) {
            char i = 0;
            for(i = 0; i < 12; i++)
                MaskSeq[i] = 255;
        }
        subContMaskOff++;
        if(indexMaskOff < 12) {
            MaskSeq[indexMaskOff] -= 13;
            if(indexMaskOff > 0)
                MaskSeq[indexMaskOff - 1] -= 13;
            if(indexMaskOff > 1)
                MaskSeq[indexMaskOff - 2] -= 13;
            if(indexMaskOff > 2) {
                MaskSeq[indexMaskOff - 3] -= 13;
                if(MaskSeq[indexMaskOff - 3] < 0)
                    MaskSeq[indexMaskOff - 3] = 0;
            }
            if(indexMaskOff > 3) {
                if(MaskSeq[indexMaskOff - 4] > 0)
                    MaskSeq[indexMaskOff - 4] = 0; 
            }
            if(indexMaskOff > 4)
                MaskSeq[indexMaskOff - 5] += 13;
            if(indexMaskOff > 5)
                MaskSeq[indexMaskOff - 6] += 13;
            if(indexMaskOff > 6)
                MaskSeq[indexMaskOff - 7] += 13;
            if(indexMaskOff > 7) {
                MaskSeq[indexMaskOff - 8] += 13;
                if(MaskSeq[indexMaskOff - 8] > 255)
                    MaskSeq[indexMaskOff - 8] = 255;
            }
        }else {
            if(indexMaskOff < 16)
                MaskSeq[15 - indexMaskOff] -= 13;
            if(indexMaskOff < 17)
                MaskSeq[16 - indexMaskOff] -= 13;
            if(indexMaskOff < 18)
                MaskSeq[17 - indexMaskOff] -= 13;
            if(indexMaskOff < 19) {
                MaskSeq[18 - indexMaskOff] -= 13;
                if(MaskSeq[18 - indexMaskOff] < 0)
                    MaskSeq[18 - indexMaskOff] = 0;
            }else {
                char i = 0;
                for(i = 0; i < 8; i++)
                    MaskSeq[i] = 0;
                maskIsOn = 0;
                rstMaskOff(0);
                val2group(gMask, 0);
            }
        }
        if(subContMaskOff == 5) {
            subContMaskOff = 0;
            indexMaskOff++;
        }
        char i = 0;
        for(i = 0; i < 8; i++) {
            Mask[i] = MaskSeq[i];
            Mask[15-i] = MaskSeq[i];
        }
        sendOrderX();
        contTimMaskOff++;
    }
}

void maskOffOld(void) {
    if(runMaskOff && contTimMaskOff < 150) {
        if(contTimMaskOff < 1) {
            char i = 0;
            for(i = 0; i < 8; i++)
                MaskSeq[i] = 255;
        }
        subContMaskOff++;
        if(indexMaskOff < 9) {
            if(indexMaskOff < 8) {
                MaskSeq[indexMaskOff] -= 16;
                if(MaskSeq[indexMaskOff] < 0)
                    MaskSeq[indexMaskOff] = 0;
            }
            if(indexMaskOff > 0) {
                MaskSeq[indexMaskOff-1] -= 16;
                if(MaskSeq[indexMaskOff-1] < 0)
                    MaskSeq[indexMaskOff-1] = 0;
            }
            if(indexMaskOff > 1) {
                MaskSeq[indexMaskOff-2] += 16;
                if(MaskSeq[indexMaskOff-2] > 255)
                    MaskSeq[indexMaskOff-2] = 255;
            }
            if(indexMaskOff > 2) {
                MaskSeq[indexMaskOff-3] += 16;
                if(MaskSeq[indexMaskOff-3] > 255)
                    MaskSeq[indexMaskOff-3] = 255; 
            }
        }else if(indexMaskOff < 16) {
            if(indexMaskOff < 15) {
                MaskSeq[14-indexMaskOff] -= 16;
                if(MaskSeq[14-indexMaskOff] < 0)
                    MaskSeq[14-indexMaskOff] = 0;
            }
            MaskSeq[15-indexMaskOff] -= 16;
            if(MaskSeq[15-indexMaskOff] < 0)
                MaskSeq[15-indexMaskOff] = 0;
        }else {
            char i = 0;
            for(i = 0; i < 8; i++)
                MaskSeq[i] = 0;
            maskIsOn = 0;
            rstMaskOff(0);
            val2group(gMask, 0);
        }
        if(subContMaskOff == 8) {
            subContMaskOff = 0;
            indexMaskOff++;
        }
        char i = 0;
        for(i = 0; i < 8; i++) {
            Mask[i] = MaskSeq[i];
            Mask[15-i] = MaskSeq[i];
        }
        sendOrderX();
        contTimMaskOff++;
    }
}

void rstDemoOn(char start) {
    timDemoOn = 0;
    flagDemoOn = start;
}

void demoEfectOn(void) {//CallOn Timer
    if(timDemoOn < 600) {
        timDemoOn++;
        if(!lightsOn) {
            if(timDemoOn < 260) {
                fullBodyVal += 1;
                if(fullBodyVal >= 255) {
                    fullBodyVal = 255;
                    lightsOn = 1;
                }
                allBodyVal((char)fullBodyVal, genVal);
                sendOrderX();
            }
        }else {
            rstDemoOn(0);
            putch('z');
            if(!musikRun)
                rstMusik(1);
        }
    }
}

void rstMusik(char start) {
    ritmCont = 0;
    noteNum = -5;
    stepsNote = 0;
    noteOnTempo = 0;
    musikRun = start;
}

void musik(void) {
    if(musikRun && ritmCont < 1100) {
        if(ritmCont < 1 && lightsOn) {
            valTempo = 255;
            valBip1 = 255;
            valBip2 = 255;
            putch('e');
        }
        stepsNote++;
        if(noteNum < 72) {
            if(noteOnTempo < 2) {
                valTempo -= 13;
                if(valTempo < 0)
                    valTempo = 0;
            }else if(noteOnTempo < 3){
                if(stepsNote > 4) {
                    valTempo += 13;
                    if(valTempo > 255)
                        valTempo = 255;
                }
            }else {
                valTempo += 13;
                if(valTempo > 255)
                    valTempo = 255;
            }
            if(noteNum == 5 || noteNum == 53) {
                valBip1 -= 20;
                valBip2 -= 20;
                if(valBip1 < 0) {
                    valBip1 = 0;
                    valBip2 = 0;
                }
            }else if(noteNum == 8 || noteNum == 56) {
                if(stepsNote < 1) {
                    valBip1 = 0;
                }else if(stepsNote < 7) {
                    valBip1 += 43;
                    if(valBip1 > 255)
                        valBip1 = 255;
                }else {
                    valBip1 -= 43;
                    if(valBip1 < 0)
                        valBip1 = 0;
                }
            }else if(noteNum == 11 || noteNum == 14 || 
                    noteNum == 59 || noteNum == 62){
                if(stepsNote < 5) {
                    if(stepsNote < 1) {
                        valBip1 = 0;
                    }else if(stepsNote < 3) {
                        valBip1 += 128;
                        if(valBip1 > 255)
                            valBip1 = 255;
                    }else {
                        valBip1 -= 128;
                        if(valBip1 < 0)
                            valBip1 = 0;
                    }
                }
            }else if(noteNum == 28/* || noteNum == 68*/) {
                valBip1 += 20;
                valBip2 += 20;
                if(valBip1 > 255) {
                    valBip1 = 255;
                    valBip2 = 255;
                }
            }else if(noteNum == 16 || noteNum == 17 || noteNum == 19 || 
                    noteNum == 20 || noteNum == 22 || noteNum == 64 || 
                    noteNum == 65 || noteNum == 67 || noteNum == 68 || 
                    noteNum == 70) {
                if(stepsNote < 5) {
                    if(stepsNote < 1) {
                        valBip2 = 0;
                    }else if(stepsNote < 3) {
                        valBip2 += 128;
                        if(valBip2 > 255)
                            valBip2 = 255;
                    }else {
                        valBip2 -= 128;
                        if(valBip2 < 0)
                            valBip2 = 0;
                    }
                }
            }
        }else {
            valBip1 += 20;
            valBip2 += 20;
            valTempo += 13;
            if(valTempo > 255)
                valTempo = 255;
            if(valBip1 > 255) {
                valBip1 = 255;
                valBip2 = 255;
                rstMusik(0);
            }
        }
        if(musikRun && stepsNote == 13) {
            stepsNote = 0;
            noteNum++;
            noteOnTempo++;
            if(noteOnTempo > 3)
                noteOnTempo = 0;
        }
        val2group(gBackUL, (unsigned char)valTempo);
        val2group(gBackUR, (unsigned char)valTempo);
        val2group(gBackM, (unsigned char)valTempo);
        val2group(gBackD, (unsigned char)valTempo);
        val2group(gNeckBL, (unsigned char)valTempo);
        val2group(gNeckBR, (unsigned char)valTempo);
        val2group(gNeckL, (unsigned char)valTempo);
        val2group(gNeckR, (unsigned char)valTempo);
        val2group(gShouldBL, (unsigned char)valTempo);
        val2group(gShouldBR, (unsigned char)valTempo);
        val2group(gCore, (unsigned char)valBip2);
        val2group(gShouldFL, (unsigned char)valBip2);//?
        val2group(gShouldFR, (unsigned char)valBip2);//?
        val2group(gAbsUL, (unsigned char)valBip1);
        val2group(gAbsUR, (unsigned char)valBip1);
        val2group(gAbsML, (unsigned char)valBip1);
        val2group(gAbsMR, (unsigned char)valBip1);
        val2group(gAbsDL, (unsigned char)valBip1);
        val2group(gAbsDR, (unsigned char)valBip1);
        sendOrderX();
        ritmCont++;
    }
}

void rstDemoOff(char start) {
    timDemoOff = 0;
    flagDemoOff = start;
}

void demoEfectOff(void) {
    if(timDemoOff < 200) {
        timDemoOff++;
        if(timDemoOff <= 50) {
            fullBodyVal -= 5;
            if(fullBodyVal < 0)
                fullBodyVal = 0;
        }
        if(timDemoOff > 50 && timDemoOff <= 100) {
            fullBodyVal += 4;
            if(fullBodyVal > 100)
                fullBodyVal = 100;
        }
        if(timDemoOff > 100) {
            fullBodyVal -= 5;
            if(fullBodyVal < 0) {
                fullBodyVal = 0;
                resetAndOff(1);
            }
        }
        allBodyVal((char)fullBodyVal, genVal);
        sendOrderX();
    }
}

void seqByZone_On(char num, short time) {
    if(time >= (firstDelay + delaysOn[num])) {
        SeqVals[num] += seqDeltasOn[num];
        if(SeqVals[num] >= 255)
            SeqVals[num] = 255;
    }
}

void seqByZone_Off(char num, short time) {
    if(time >= (130 + delaysOff[num])) {
        SeqVals[num] -= seqDeltasOff[num];
        if(SeqVals[num] < 0)
            SeqVals[num] = 0;
    }
}

void rstPressOn(char start) {
    timPresOn = 0;
    flagPressOn = start;
}

void SeqPresOn(void) {//CallOn Timer
    if(timPresOn < 250) {
        timPresOn++;
        if(!soundASOn && timPresOn > 40/*/firstDelay/**/) {
            putch('g'); //Sound Press On
            soundASOn = 1;
        }
        seqByZone_On(seqCORE, timPresOn);
        seqByZone_On(seqMASK, timPresOn);
        seqByZone_On(seqFRONT, timPresOn);
        seqByZone_On(seqCRUZ1, timPresOn);
        seqByZone_On(seqCRUZ2, timPresOn);
        seqByZone_On(seqLEGS, timPresOn);
        if(timPresOn >= 240) {
            maskIsOn = 1;
            lightsOn = 1;
            fullBodyVal = 255;
            rstPressOn(0);
        }
        seqApply();
        sendOrderX();
    }
}

void rstPressOff(char start) {
    timPresOff = 0;
    flagPressOff = start;
}

void SeqPresOff(void) {//CallOn Timer
    if(timPresOff < 320) {
        timPresOff++;
        if(!soundASOff && timPresOff > delaysOff[seqLEGS]) {
            putch('f'); //Sound Press Off
            soundASOff = 1;
        }
        seqByZone_Off(seqCORE, timPresOff);
        seqByZone_Off(seqMASK, timPresOff);
        seqByZone_Off(seqFRONT, timPresOff);
        seqByZone_Off(seqCRUZ1, timPresOff);
        seqByZone_Off(seqCRUZ2, timPresOff);
        seqByZone_Off(seqLEGS, timPresOff);
        if(timPresOff >= 305) {
            resetAndOff(1);
        }
        seqApply();
        sendOrderX();
    }
}

void seqApply(void) {
    //State[1] = {0};
    
    val2group(gCore, (unsigned char)SeqVals[seqCORE]);
    val2group(gMask, (unsigned char)SeqVals[seqMASK]);
    val2group(gShouldFL, (unsigned char)SeqVals[seqFRONT]);
    val2group(gShouldFR, (unsigned char)SeqVals[seqFRONT]);
    
    val2group(gAbsUR, (unsigned char)SeqVals[seqCRUZ1]);
    val2group(gAbsMR, (unsigned char)SeqVals[seqCRUZ1]);
    val2group(gAbsDR, (unsigned char)SeqVals[seqCRUZ1]);
    val2group(gShouldDR, (unsigned char)SeqVals[seqCRUZ1]);
    val2group(gNeckL, (unsigned char)SeqVals[seqCRUZ1]);
    val2group(gShouldBL, (unsigned char)SeqVals[seqCRUZ1]);
    val2group(gNeckBR, (unsigned char)SeqVals[seqCRUZ1]);
    val2group(gBackUL, (unsigned char)SeqVals[seqCRUZ1]);
    
    val2group(gAbsUL, (unsigned char)SeqVals[seqCRUZ2]);
    val2group(gAbsML, (unsigned char)SeqVals[seqCRUZ2]);
    val2group(gAbsDL, (unsigned char)SeqVals[seqCRUZ2]);
    val2group(gShouldDL, (unsigned char)SeqVals[seqCRUZ2]);
    val2group(gNeckR, (unsigned char)SeqVals[seqCRUZ2]);
    val2group(gShouldBR, (unsigned char)SeqVals[seqCRUZ2]);
    val2group(gNeckBL, (unsigned char)SeqVals[seqCRUZ2]);
    val2group(gBackUR, (unsigned char)SeqVals[seqCRUZ2]);
    val2group(gBackM, (unsigned char)SeqVals[seqCRUZ2]);
    //val2group(gBackD, (unsigned char)SeqVals[seqCRUZ2]);
    
    val2group(gLegUL, (unsigned char)SeqVals[seqLEGS]);
    val2group(gLegUR, (unsigned char)SeqVals[seqLEGS]);
    val2group(gLegDL, (unsigned char)SeqVals[seqLEGS]);
    val2group(gLegDR, (unsigned char)SeqVals[seqLEGS]);
    val2group(gShoeL, (unsigned char)SeqVals[seqLEGS]);
    val2group(gShoeR, (unsigned char)SeqVals[seqLEGS]);
}
/************Light Effects*********************************/

/************Light Resources*********************************/
void applyColor(char group, char color, unsigned char intensity) {
    groupColor[group] = color;
    val2group(group, intensity);
}

void rstSeq(void) {
    char i = 0;
    for(i = 0; i < 6; i++)
        SeqVals[i] = 0;
}

void allBodyVal(char val, char color) {
    char i = 0;
    for(i = 0; i < groupCant; i++)
        applyColor(i, color, val);
}

void resetAndOff(char light) {
    soundASOn = 0;
    soundASOff = 0;
    maskIsOn = 0;
    lightsOn = 0;
    rstPressOn(0);
    rstPressOff(0);
    rstSeq();
    rstDemoOn(0);
    rstDemoOff(0);
    rstMaskOn(0);
    rstMaskOff(0);
    rstShadow(0);
    rstDragon(0);
    rstMusik(0);
    secCont = 0;
    stepContDemo = 0;
    stepContPress = 0;
    dragonCrashDone = 0;
    refriShoulderDone = 0;
    //applyColor(gBridge, GREEN, 0);
    run = 0;
    if(light) {
        fullBodyVal = 0;
        genVal = GREEN;
        allBodyVal(0, GREEN);
    }
    sendOrderX();
}
/************Light Resources*********************************/

void execMask_Sword(void) {
    if(modoPress_nDemo) {
        if(lightsOn) {
            if(maskIsOn)
                rstMaskOff(1);
            else
                rstMaskOn(1);
        }
    }else
        putch('s');//Demo: Sonido Sword en Celular
}

void initStop(void) {
    if(modoPress_nDemo) {
        rstPressOn(!run);
        rstPressOff(run);
        if(run) {
            lightsOn = 0;
            soundASOn = 0;
        }else
            soundASOff = 0;
    }else {
        if(!flagDemoOn && !musikRun)
            rstDemoOn(1);
    }
    if(!run)
        run = 1;
}

void protExec(void) {
    switch(pVals[0]) {
        case pLedGroup: //bInit, type, numGroup|allArray, valR, valG, valB, bEnd
            if(pVals[1] == 100) {//allArray
                dotTestColor[0] = pVals[2];
                dotTestColor[1] = pVals[3];
                dotTestColor[2] = pVals[4];
            }else {
                //???
            }
            break;
        case pLedGlovalVal: //bInit, type, valT, bEnd
            if(pVals[1] > 31)
                defaultLum = 31;
            else
                defaultLum = pVals[1];
            sendOrderX();
            break;
    }
    execChan = 0;
}

void protRCV(char rcv) {
    if(!pInit) {
        if(rcv == 13){
            pCont = 0;
            pInit = 1;
            pTot = 6;
        }
    }else if(pCont < pTot){
        if(pCont == 0 && rcv < 4)
            pTot = packTotals[rcv];
        pVals[pCont] = rcv;
        pCont++;
    }else if(rcv == 10) {
        pInit = 0;
        execChan = 1;
    }
}

void secuences(void) {
    if(run) {
        if(flagPressOn)
            SeqPresOn();
        else if(flagPressOff)
            SeqPresOff();
        else if(flagDemoOn)
            demoEfectOn();
        else if(flagDemoOff)
            demoEfectOff();
        else if(modoPress_nDemo) {
            maskOn();
            maskOff();
            dragonCrash();
            refriShoulder();
        }else {
            if(lightsOn && !runShadow) {
                stepContDemo++;
                if(stepContDemo >= 96) {//96 = 1 sec
                    secCont++;
                    stepContDemo = 0;
                }
                if(secCont >= 30) {
                    secCont = 0;
                    stepContDemo = 0;
                    rstShadow(1);
                }
            }
            if(!musikRun)
                despShadow();
            musik();
        }
    }
    if(sendOrder)
        sendOrderXs();
}

/************Interruptions*******************************/
void pTMR2_ISR(void) { //10.4166667 ms steps
    if(waiter < 50)
        waiter++;
    if(waiter > waitingTime)
        waitingTime = 0;
    tick = 1;
}

void pTMR1_ISR(void) { //20 ms steps
    //MOS1_Toggle();
    if(run && modoPress_nDemo) {
        stepContPress++;
        if(stepContPress >= 50) {//50*20 ms = 1 sec
            secCont++;
            stepContPress = 0;
        }
    }
    /*if(!dragonCrashDone) {
        if(!runCrash && secCont == 7)
            rstDragon(1);
    }
    if(!refriShoulderDone) {
        if(!runRefri && secCont == 25)
            rstRefri(1);
    }*/
}

void pRC1_ISR(void) { //Antena HC-05, IO1 e IO3
    char cha = RC1REG;
    if(cha == 'o')
        butt3Pres(1);
    else if(cha == 'd')
        butt3Pres(0);
    else if(cha == 'a')
        butt1Pres(0);
    else if(cha == 'b')
        butt2Pres(0);
    else if(cha == 'g')
        rstDragon(1);
    else if(cha == 'r')
        rstRefri(1);
    else if(cha == 'R') {
        genVal = RED;
        allBodyVal(255, RED);
    }else if(cha == 'G') {
        genVal = GREEN;
        allBodyVal(255, GREEN);
    }else if(cha == 'B') {
        genVal = BLUE;
        allBodyVal(255, BLUE);
    }else if(cha == 'P') {
        genVal = PURPLE;
        allBodyVal(255, PURPLE);
    }else if(cha == 'Y') {
        genVal = YELLOW;
        allBodyVal(255, YELLOW);
    }else if(cha == 'C') {
        genVal = CYAN;
        allBodyVal(255, CYAN);
    }
    protRCV(cha);
    PIR1bits.RCIF = 0;
}

void IOC_DI1_ISR(void) { //Boton 1 AKA On/Off
    if(!waitingTime) {
        butt1Pres(1);
        waitX0ms(5);
    }
}

void IOC_AN1_ISR(void) { //Boton 2 AKA Mask/Sword
    if(!waitingTime) {
        butt2Pres(1);
        waitX0ms(5);
    }
}

void IOC_AN2_ISR(void) { //Boton 3 AKA SelectDemo
    if(waitingTime)
        DemoSwitchChange = 1;
    else
        changeDemoMode();
}

void changeDemoMode(void) {
    if(!AN2_GetValue()) {
        butt3Pres(1);
        waitX0ms(5);
    }else {
        butt3Pres(0);
        waitX0ms(5);
    }
}
/************Interruptions*******************************/

void butt1Pres(char state) {
    putch('a');
    initStop();
}

void butt2Pres(char state) {
    execMask_Sword();
}

void butt3Pres(char state) {
    if(state) {
        putch('o');//demo off
        modoPress_nDemo = 1;
        if(lightsOn) {
            resetAndOff(0);
            rstDemoOff(1);
            run = 1;
            putch('f'); //Sound Press Off
        }else
            resetAndOff(1);
    }else {
        putch('d');//demo on
        modoPress_nDemo = 0;
        resetAndOff(1);
    }
}

/************Resources*******************************/
void putch(char val) {
    EUSART_Write(val);
}

void waitX0ms(char X) { //Must be < 11 (X * 10.4 ms)
    waiter = 0;
    waitingTime = X;
    //while(waiter < X);
}

void dotTest1(short cantDot) {
    short i = 0;
    short i2 = 0;
    short cant1 = cantDot;
    short cant2 = 0;
    if(cantDot > dotCant1) {
        cant1 = dotCant1;
        cant2 = cantDot - dotCant1;
    }
    for(i = 0; i < cantDot; i++) {
        if(i < dotCant1)
            dotValue1[i] = 1;
        else
            dotValue2[i - dotCant1] = 1;
        dotStart(0);
        for(i2 = 0; i2 < cant1; i2++) {
            sendDotStar(0, dotValue1[i2], 0);
            if(i == cant1 - 1)
                dotValue1[i2] = 0;
        }
        for(i2 = 0; i2 < cant2; i2++) {
            sendDotStar(0, dotValue2[i2], 0);
            if(i == cant2 - 1)
                dotValue2[i2] = 0;
        }
        sendDotStar(255,255,255);
        waitX0ms(1);
    }
}

void dotTest2(short cantDot) {
    short i = 0;
    short cant1 = cantDot;
    short cant2 = 0;
    if(cantDot > dotCant1) {
        cant1 = dotCant1;
        cant2 = cantDot - dotCant1;
    }
    for(i = 0; i < cantDot; i++) {
        char i2 = 0;
        dotStart(i2);
        for(i2 = 0; i2 < cant1; i2++) {
            sendDotStar(0, dotValue1[i2], 0);
            dotValue1[i2] = 0;
        }
        for(i2 = 0; i2 < cant2; i2++) {
            sendDotStar(0, dotValue2[i2], 0);
            dotValue2[i2] = 0;
        }
        sendDotStar(255,255,255);
        if(i < dotCant1)
            dotValue1[i] = 20;
        else
            dotValue2[i - dotCant1] = 20;
        waitX0ms(5);
    }
}

void dotTest3(short cantDot) {
    short i = 0;
    short cant1 = cantDot;
    short cant2 = 0;
    if(cantDot > dotCant1) {
        cant1 = dotCant1;
        cant2 = cantDot - dotCant1;
    }
    for(i = 0; i < cantDot; i++) {
        char i2 = 0;
        dotStart(i2);
        for(i2 = 0; i2 < cant1; i2++) {
            sendDotStar2(dotValue1[i2], dotTestColor[0], dotTestColor[1], dotTestColor[2]);
            dotValue1[i2] = 0;
        }
        for(i2 = 0; i2 < cant2; i2++) {
            sendDotStar2(dotValue2[i2], dotTestColor[0], dotTestColor[1], dotTestColor[2]);
            dotValue2[i2] = 0;
        }
        sendDotStar(255,255,255);
        if(i < dotCant1)
            dotValue1[i] = 31;
        else
            dotValue2[i - dotCant1] = 31;
        waitX0ms(5);
    }
}
/************Resources*******************************/

void main(void) {
    SYSTEM_Initialize(); // initialize the device
    initArrays();
    SPI2_Open(MASTER0_CONFIG);
    TMR2_SetInterruptHandler(pTMR2_ISR); //10.41666667ms Steps
    TMR1_SetInterruptHandler(pTMR1_ISR); //TimeBase (20 ms)
    IOCCF1_SetInterruptHandler(IOC_DI1_ISR);
    IOCCF2_SetInterruptHandler(IOC_AN2_ISR);
    IOCCF3_SetInterruptHandler(IOC_AN1_ISR);
    EUSART_SetRxInterruptHandler(pRC1_ISR);
    
    INTERRUPT_GlobalInterruptEnable(); // Enable the Global Interrupts
    INTERRUPT_PeripheralInterruptEnable(); // Enable the Peripheral Interrupts

    resetAndOff(1);
    butt3Pres(!AN2_GetValue());//Check Switch State
    
    while (1)
    {
        if(tick) {
            tick = 0;
            secuences();
        }
        if(DemoSwitchChange && !waitingTime) {
            DemoSwitchChange = 0;
            changeDemoMode();
        }
        if(execChan) {
            protExec();
        }
        /*char i = 0;
        dotStart(i);
        for(i = 0; i < 10; i++)
            sendDotStar(dotRed1[i], dotGreen1[i], dotBlue1[i]);
        sendDotStar(255, 255, 255);*/
    }
}
