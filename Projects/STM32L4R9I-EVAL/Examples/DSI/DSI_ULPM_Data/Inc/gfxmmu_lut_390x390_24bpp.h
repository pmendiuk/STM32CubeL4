/**
  ******************************************************************************
  * @file    gfxmmu_lut_390x390_24bpp.h
  * @author  MCD Application Team
  * @brief   This file contains GFXMMU look-up-table for 390x390 24bpp DSI round LCD.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __GFXMMU_LUT_390X390_24BPP_H
#define __GFXMMU_LUT_390X390_24BPP_H

#ifdef __cplusplus
 extern "C" {
#endif

/* GFXMMU look-up table for RGB888 */
#define GFXMMU_LUT_SIZE 390

const uint32_t gfxmmu_lut_config_rgb888[2*GFXMMU_LUT_SIZE] = {
    0x00272101, // GFXMMU_LUT0L
    0x003ffdf0, // GFXMMU_LUT0H
    0x00282001, // GFXMMU_LUT1L
    0x003ffe70, // GFXMMU_LUT1H
    0x002a1e01, // GFXMMU_LUT2L
    0x003fff20, // GFXMMU_LUT2H
    0x002b1d01, // GFXMMU_LUT3L
    0x00000000, // GFXMMU_LUT3H
    0x002c1c01, // GFXMMU_LUT4L
    0x00000100, // GFXMMU_LUT4H
    0x002d1b01, // GFXMMU_LUT5L
    0x00000220, // GFXMMU_LUT5H
    0x002d1b01, // GFXMMU_LUT6L
    0x00000350, // GFXMMU_LUT6H
    0x002e1a01, // GFXMMU_LUT7L
    0x00000490, // GFXMMU_LUT7H
    0x002f1901, // GFXMMU_LUT8L
    0x000005f0, // GFXMMU_LUT8H
    0x002f1901, // GFXMMU_LUT9L
    0x00000760, // GFXMMU_LUT9H
    0x00301801, // GFXMMU_LUT10L
    0x000008e0, // GFXMMU_LUT10H
    0x00301801, // GFXMMU_LUT11L
    0x00000a70, // GFXMMU_LUT11H
    0x00311701, // GFXMMU_LUT12L
    0x00000c10, // GFXMMU_LUT12H
    0x00311701, // GFXMMU_LUT13L
    0x00000dc0, // GFXMMU_LUT13H
    0x00321601, // GFXMMU_LUT14L
    0x00000f80, // GFXMMU_LUT14H
    0x00321601, // GFXMMU_LUT15L
    0x00001150, // GFXMMU_LUT15H
    0x00331501, // GFXMMU_LUT16L
    0x00001330, // GFXMMU_LUT16H
    0x00331501, // GFXMMU_LUT17L
    0x00001520, // GFXMMU_LUT17H
    0x00341501, // GFXMMU_LUT18L
    0x00001710, // GFXMMU_LUT18H
    0x00341401, // GFXMMU_LUT19L
    0x00001920, // GFXMMU_LUT19H
    0x00341401, // GFXMMU_LUT20L
    0x00001b30, // GFXMMU_LUT20H
    0x00351301, // GFXMMU_LUT21L
    0x00001d50, // GFXMMU_LUT21H
    0x00351301, // GFXMMU_LUT22L
    0x00001f80, // GFXMMU_LUT22H
    0x00351301, // GFXMMU_LUT23L
    0x000021b0, // GFXMMU_LUT23H
    0x00361201, // GFXMMU_LUT24L
    0x000023f0, // GFXMMU_LUT24H
    0x00361201, // GFXMMU_LUT25L
    0x00002640, // GFXMMU_LUT25H
    0x00361201, // GFXMMU_LUT26L
    0x00002890, // GFXMMU_LUT26H
    0x00371101, // GFXMMU_LUT27L
    0x00002af0, // GFXMMU_LUT27H
    0x00371101, // GFXMMU_LUT28L
    0x00002d60, // GFXMMU_LUT28H
    0x00371101, // GFXMMU_LUT29L
    0x00002fd0, // GFXMMU_LUT29H
    0x00381001, // GFXMMU_LUT30L
    0x00003250, // GFXMMU_LUT30H
    0x00381001, // GFXMMU_LUT31L
    0x000034e0, // GFXMMU_LUT31H
    0x00381001, // GFXMMU_LUT32L
    0x00003770, // GFXMMU_LUT32H
    0x00381001, // GFXMMU_LUT33L
    0x00003a00, // GFXMMU_LUT33H
    0x00390f01, // GFXMMU_LUT34L
    0x00003ca0, // GFXMMU_LUT34H
    0x00390f01, // GFXMMU_LUT35L
    0x00003f50, // GFXMMU_LUT35H
    0x00390f01, // GFXMMU_LUT36L
    0x00004200, // GFXMMU_LUT36H
    0x003a0f01, // GFXMMU_LUT37L
    0x000044b0, // GFXMMU_LUT37H
    0x003a0e01, // GFXMMU_LUT38L
    0x00004780, // GFXMMU_LUT38H
    0x003a0e01, // GFXMMU_LUT39L
    0x00004a50, // GFXMMU_LUT39H
    0x003a0e01, // GFXMMU_LUT40L
    0x00004d20, // GFXMMU_LUT40H
    0x003b0e01, // GFXMMU_LUT41L
    0x00004ff0, // GFXMMU_LUT41H
    0x003b0d01, // GFXMMU_LUT42L
    0x000052e0, // GFXMMU_LUT42H
    0x003b0d01, // GFXMMU_LUT43L
    0x000055d0, // GFXMMU_LUT43H
    0x003b0d01, // GFXMMU_LUT44L
    0x000058c0, // GFXMMU_LUT44H
    0x003b0d01, // GFXMMU_LUT45L
    0x00005bb0, // GFXMMU_LUT45H
    0x003c0c01, // GFXMMU_LUT46L
    0x00005eb0, // GFXMMU_LUT46H
    0x003c0c01, // GFXMMU_LUT47L
    0x000061c0, // GFXMMU_LUT47H
    0x003c0c01, // GFXMMU_LUT48L
    0x000064d0, // GFXMMU_LUT48H
    0x003c0c01, // GFXMMU_LUT49L
    0x000067e0, // GFXMMU_LUT49H
    0x003d0c01, // GFXMMU_LUT50L
    0x00006af0, // GFXMMU_LUT50H
    0x003d0b01, // GFXMMU_LUT51L
    0x00006e20, // GFXMMU_LUT51H
    0x003d0b01, // GFXMMU_LUT52L
    0x00007150, // GFXMMU_LUT52H
    0x003d0b01, // GFXMMU_LUT53L
    0x00007480, // GFXMMU_LUT53H
    0x003d0b01, // GFXMMU_LUT54L
    0x000077b0, // GFXMMU_LUT54H
    0x003e0b01, // GFXMMU_LUT55L
    0x00007ae0, // GFXMMU_LUT55H
    0x003e0a01, // GFXMMU_LUT56L
    0x00007e30, // GFXMMU_LUT56H
    0x003e0a01, // GFXMMU_LUT57L
    0x00008180, // GFXMMU_LUT57H
    0x003e0a01, // GFXMMU_LUT58L
    0x000084d0, // GFXMMU_LUT58H
    0x003e0a01, // GFXMMU_LUT59L
    0x00008820, // GFXMMU_LUT59H
    0x003e0a01, // GFXMMU_LUT60L
    0x00008b70, // GFXMMU_LUT60H
    0x003f0901, // GFXMMU_LUT61L
    0x00008ed0, // GFXMMU_LUT61H
    0x003f0901, // GFXMMU_LUT62L
    0x00009240, // GFXMMU_LUT62H
    0x003f0901, // GFXMMU_LUT63L
    0x000095b0, // GFXMMU_LUT63H
    0x003f0901, // GFXMMU_LUT64L
    0x00009920, // GFXMMU_LUT64H
    0x003f0901, // GFXMMU_LUT65L
    0x00009c90, // GFXMMU_LUT65H
    0x003f0901, // GFXMMU_LUT66L
    0x0000a000, // GFXMMU_LUT66H
    0x00400901, // GFXMMU_LUT67L
    0x0000a370, // GFXMMU_LUT67H
    0x00400801, // GFXMMU_LUT68L
    0x0000a700, // GFXMMU_LUT68H
    0x00400801, // GFXMMU_LUT69L
    0x0000aa90, // GFXMMU_LUT69H
    0x00400801, // GFXMMU_LUT70L
    0x0000ae20, // GFXMMU_LUT70H
    0x00400801, // GFXMMU_LUT71L
    0x0000b1b0, // GFXMMU_LUT71H
    0x00400801, // GFXMMU_LUT72L
    0x0000b540, // GFXMMU_LUT72H
    0x00410801, // GFXMMU_LUT73L
    0x0000b8d0, // GFXMMU_LUT73H
    0x00410701, // GFXMMU_LUT74L
    0x0000bc80, // GFXMMU_LUT74H
    0x00410701, // GFXMMU_LUT75L
    0x0000c030, // GFXMMU_LUT75H
    0x00410701, // GFXMMU_LUT76L
    0x0000c3e0, // GFXMMU_LUT76H
    0x00410701, // GFXMMU_LUT77L
    0x0000c790, // GFXMMU_LUT77H
    0x00410701, // GFXMMU_LUT78L
    0x0000cb40, // GFXMMU_LUT78H
    0x00410701, // GFXMMU_LUT79L
    0x0000cef0, // GFXMMU_LUT79H
    0x00420601, // GFXMMU_LUT80L
    0x0000d2b0, // GFXMMU_LUT80H
    0x00420601, // GFXMMU_LUT81L
    0x0000d680, // GFXMMU_LUT81H
    0x00420601, // GFXMMU_LUT82L
    0x0000da50, // GFXMMU_LUT82H
    0x00420601, // GFXMMU_LUT83L
    0x0000de20, // GFXMMU_LUT83H
    0x00420601, // GFXMMU_LUT84L
    0x0000e1f0, // GFXMMU_LUT84H
    0x00420601, // GFXMMU_LUT85L
    0x0000e5c0, // GFXMMU_LUT85H
    0x00420601, // GFXMMU_LUT86L
    0x0000e990, // GFXMMU_LUT86H
    0x00430601, // GFXMMU_LUT87L
    0x0000ed60, // GFXMMU_LUT87H
    0x00430601, // GFXMMU_LUT88L
    0x0000f140, // GFXMMU_LUT88H
    0x00430501, // GFXMMU_LUT89L
    0x0000f530, // GFXMMU_LUT89H
    0x00430501, // GFXMMU_LUT90L
    0x0000f920, // GFXMMU_LUT90H
    0x00430501, // GFXMMU_LUT91L
    0x0000fd10, // GFXMMU_LUT91H
    0x00430501, // GFXMMU_LUT92L
    0x00010100, // GFXMMU_LUT92H
    0x00430501, // GFXMMU_LUT93L
    0x000104f0, // GFXMMU_LUT93H
    0x00430501, // GFXMMU_LUT94L
    0x000108e0, // GFXMMU_LUT94H
    0x00440501, // GFXMMU_LUT95L
    0x00010cd0, // GFXMMU_LUT95H
    0x00440501, // GFXMMU_LUT96L
    0x000110d0, // GFXMMU_LUT96H
    0x00440401, // GFXMMU_LUT97L
    0x000114e0, // GFXMMU_LUT97H
    0x00440401, // GFXMMU_LUT98L
    0x000118f0, // GFXMMU_LUT98H
    0x00440401, // GFXMMU_LUT99L
    0x00011d00, // GFXMMU_LUT99H
    0x00440401, // GFXMMU_LUT100L
    0x00012110, // GFXMMU_LUT100H
    0x00440401, // GFXMMU_LUT101L
    0x00012520, // GFXMMU_LUT101H
    0x00440401, // GFXMMU_LUT102L
    0x00012930, // GFXMMU_LUT102H
    0x00440401, // GFXMMU_LUT103L
    0x00012d40, // GFXMMU_LUT103H
    0x00440401, // GFXMMU_LUT104L
    0x00013150, // GFXMMU_LUT104H
    0x00440401, // GFXMMU_LUT105L
    0x00013560, // GFXMMU_LUT105H
    0x00450301, // GFXMMU_LUT106L
    0x00013980, // GFXMMU_LUT106H
    0x00450301, // GFXMMU_LUT107L
    0x00013db0, // GFXMMU_LUT107H
    0x00450301, // GFXMMU_LUT108L
    0x000141e0, // GFXMMU_LUT108H
    0x00450301, // GFXMMU_LUT109L
    0x00014610, // GFXMMU_LUT109H
    0x00450301, // GFXMMU_LUT110L
    0x00014a40, // GFXMMU_LUT110H
    0x00450301, // GFXMMU_LUT111L
    0x00014e70, // GFXMMU_LUT111H
    0x00450301, // GFXMMU_LUT112L
    0x000152a0, // GFXMMU_LUT112H
    0x00450301, // GFXMMU_LUT113L
    0x000156d0, // GFXMMU_LUT113H
    0x00450301, // GFXMMU_LUT114L
    0x00015b00, // GFXMMU_LUT114H
    0x00450301, // GFXMMU_LUT115L
    0x00015f30, // GFXMMU_LUT115H
    0x00460301, // GFXMMU_LUT116L
    0x00016360, // GFXMMU_LUT116H
    0x00460301, // GFXMMU_LUT117L
    0x000167a0, // GFXMMU_LUT117H
    0x00460301, // GFXMMU_LUT118L
    0x00016be0, // GFXMMU_LUT118H
    0x00460201, // GFXMMU_LUT119L
    0x00017030, // GFXMMU_LUT119H
    0x00460201, // GFXMMU_LUT120L
    0x00017480, // GFXMMU_LUT120H
    0x00460201, // GFXMMU_LUT121L
    0x000178d0, // GFXMMU_LUT121H
    0x00460201, // GFXMMU_LUT122L
    0x00017d20, // GFXMMU_LUT122H
    0x00460201, // GFXMMU_LUT123L
    0x00018170, // GFXMMU_LUT123H
    0x00460201, // GFXMMU_LUT124L
    0x000185c0, // GFXMMU_LUT124H
    0x00460201, // GFXMMU_LUT125L
    0x00018a10, // GFXMMU_LUT125H
    0x00460201, // GFXMMU_LUT126L
    0x00018e60, // GFXMMU_LUT126H
    0x00460201, // GFXMMU_LUT127L
    0x000192b0, // GFXMMU_LUT127H
    0x00460201, // GFXMMU_LUT128L
    0x00019700, // GFXMMU_LUT128H
    0x00460201, // GFXMMU_LUT129L
    0x00019b50, // GFXMMU_LUT129H
    0x00470201, // GFXMMU_LUT130L
    0x00019fa0, // GFXMMU_LUT130H
    0x00470201, // GFXMMU_LUT131L
    0x0001a400, // GFXMMU_LUT131H
    0x00470101, // GFXMMU_LUT132L
    0x0001a870, // GFXMMU_LUT132H
    0x00470101, // GFXMMU_LUT133L
    0x0001ace0, // GFXMMU_LUT133H
    0x00470101, // GFXMMU_LUT134L
    0x0001b150, // GFXMMU_LUT134H
    0x00470101, // GFXMMU_LUT135L
    0x0001b5c0, // GFXMMU_LUT135H
    0x00470101, // GFXMMU_LUT136L
    0x0001ba30, // GFXMMU_LUT136H
    0x00470101, // GFXMMU_LUT137L
    0x0001bea0, // GFXMMU_LUT137H
    0x00470101, // GFXMMU_LUT138L
    0x0001c310, // GFXMMU_LUT138H
    0x00470101, // GFXMMU_LUT139L
    0x0001c780, // GFXMMU_LUT139H
    0x00470101, // GFXMMU_LUT140L
    0x0001cbf0, // GFXMMU_LUT140H
    0x00470101, // GFXMMU_LUT141L
    0x0001d060, // GFXMMU_LUT141H
    0x00470101, // GFXMMU_LUT142L
    0x0001d4d0, // GFXMMU_LUT142H
    0x00470101, // GFXMMU_LUT143L
    0x0001d940, // GFXMMU_LUT143H
    0x00470101, // GFXMMU_LUT144L
    0x0001ddb0, // GFXMMU_LUT144H
    0x00470101, // GFXMMU_LUT145L
    0x0001e220, // GFXMMU_LUT145H
    0x00470101, // GFXMMU_LUT146L
    0x0001e690, // GFXMMU_LUT146H
    0x00470101, // GFXMMU_LUT147L
    0x0001eb00, // GFXMMU_LUT147H
    0x00470101, // GFXMMU_LUT148L
    0x0001ef70, // GFXMMU_LUT148H
    0x00480001, // GFXMMU_LUT149L
    0x0001f3f0, // GFXMMU_LUT149H
    0x00480001, // GFXMMU_LUT150L
    0x0001f880, // GFXMMU_LUT150H
    0x00480001, // GFXMMU_LUT151L
    0x0001fd10, // GFXMMU_LUT151H
    0x00480001, // GFXMMU_LUT152L
    0x000201a0, // GFXMMU_LUT152H
    0x00480001, // GFXMMU_LUT153L
    0x00020630, // GFXMMU_LUT153H
    0x00480001, // GFXMMU_LUT154L
    0x00020ac0, // GFXMMU_LUT154H
    0x00480001, // GFXMMU_LUT155L
    0x00020f50, // GFXMMU_LUT155H
    0x00480001, // GFXMMU_LUT156L
    0x000213e0, // GFXMMU_LUT156H
    0x00480001, // GFXMMU_LUT157L
    0x00021870, // GFXMMU_LUT157H
    0x00480001, // GFXMMU_LUT158L
    0x00021d00, // GFXMMU_LUT158H
    0x00480001, // GFXMMU_LUT159L
    0x00022190, // GFXMMU_LUT159H
    0x00480001, // GFXMMU_LUT160L
    0x00022620, // GFXMMU_LUT160H
    0x00480001, // GFXMMU_LUT161L
    0x00022ab0, // GFXMMU_LUT161H
    0x00480001, // GFXMMU_LUT162L
    0x00022f40, // GFXMMU_LUT162H
    0x00480001, // GFXMMU_LUT163L
    0x000233d0, // GFXMMU_LUT163H
    0x00480001, // GFXMMU_LUT164L
    0x00023860, // GFXMMU_LUT164H
    0x00480001, // GFXMMU_LUT165L
    0x00023cf0, // GFXMMU_LUT165H
    0x00480001, // GFXMMU_LUT166L
    0x00024180, // GFXMMU_LUT166H
    0x00480001, // GFXMMU_LUT167L
    0x00024610, // GFXMMU_LUT167H
    0x00480001, // GFXMMU_LUT168L
    0x00024aa0, // GFXMMU_LUT168H
    0x00480001, // GFXMMU_LUT169L
    0x00024f30, // GFXMMU_LUT169H
    0x00480001, // GFXMMU_LUT170L
    0x000253c0, // GFXMMU_LUT170H
    0x00480001, // GFXMMU_LUT171L
    0x00025850, // GFXMMU_LUT171H
    0x00480001, // GFXMMU_LUT172L
    0x00025ce0, // GFXMMU_LUT172H
    0x00480001, // GFXMMU_LUT173L
    0x00026170, // GFXMMU_LUT173H
    0x00480001, // GFXMMU_LUT174L
    0x00026600, // GFXMMU_LUT174H
    0x00480001, // GFXMMU_LUT175L
    0x00026a90, // GFXMMU_LUT175H
    0x00480001, // GFXMMU_LUT176L
    0x00026f20, // GFXMMU_LUT176H
    0x00480001, // GFXMMU_LUT177L
    0x000273b0, // GFXMMU_LUT177H
    0x00480001, // GFXMMU_LUT178L
    0x00027840, // GFXMMU_LUT178H
    0x00480001, // GFXMMU_LUT179L
    0x00027cd0, // GFXMMU_LUT179H
    0x00480001, // GFXMMU_LUT180L
    0x00028160, // GFXMMU_LUT180H
    0x00490001, // GFXMMU_LUT181L
    0x000285f0, // GFXMMU_LUT181H
    0x00490001, // GFXMMU_LUT182L
    0x00028a90, // GFXMMU_LUT182H
    0x00490001, // GFXMMU_LUT183L
    0x00028f30, // GFXMMU_LUT183H
    0x00490001, // GFXMMU_LUT184L
    0x000293d0, // GFXMMU_LUT184H
    0x00490001, // GFXMMU_LUT185L
    0x00029870, // GFXMMU_LUT185H
    0x00490001, // GFXMMU_LUT186L
    0x00029d10, // GFXMMU_LUT186H
    0x00490001, // GFXMMU_LUT187L
    0x0002a1b0, // GFXMMU_LUT187H
    0x00490001, // GFXMMU_LUT188L
    0x0002a650, // GFXMMU_LUT188H
    0x00490001, // GFXMMU_LUT189L
    0x0002aaf0, // GFXMMU_LUT189H
    0x00490001, // GFXMMU_LUT190L
    0x0002af90, // GFXMMU_LUT190H
    0x00490001, // GFXMMU_LUT191L
    0x0002b430, // GFXMMU_LUT191H
    0x00490001, // GFXMMU_LUT192L
    0x0002b8d0, // GFXMMU_LUT192H
    0x00490001, // GFXMMU_LUT193L
    0x0002bd70, // GFXMMU_LUT193H
    0x00490001, // GFXMMU_LUT194L
    0x0002c210, // GFXMMU_LUT194H
    0x00490001, // GFXMMU_LUT195L
    0x0002c6b0, // GFXMMU_LUT195H
    0x00490001, // GFXMMU_LUT196L
    0x0002cb50, // GFXMMU_LUT196H
    0x00490001, // GFXMMU_LUT197L
    0x0002cff0, // GFXMMU_LUT197H
    0x00490001, // GFXMMU_LUT198L
    0x0002d490, // GFXMMU_LUT198H
    0x00490001, // GFXMMU_LUT199L
    0x0002d930, // GFXMMU_LUT199H
    0x00490001, // GFXMMU_LUT200L
    0x0002ddd0, // GFXMMU_LUT200H
    0x00490001, // GFXMMU_LUT201L
    0x0002e270, // GFXMMU_LUT201H
    0x00490001, // GFXMMU_LUT202L
    0x0002e710, // GFXMMU_LUT202H
    0x00490001, // GFXMMU_LUT203L
    0x0002ebb0, // GFXMMU_LUT203H
    0x00490001, // GFXMMU_LUT204L
    0x0002f050, // GFXMMU_LUT204H
    0x00490001, // GFXMMU_LUT205L
    0x0002f4f0, // GFXMMU_LUT205H
    0x00490001, // GFXMMU_LUT206L
    0x0002f990, // GFXMMU_LUT206H
    0x00490001, // GFXMMU_LUT207L
    0x0002fe30, // GFXMMU_LUT207H
    0x00490001, // GFXMMU_LUT208L
    0x000302d0, // GFXMMU_LUT208H
    0x00480001, // GFXMMU_LUT209L
    0x00030770, // GFXMMU_LUT209H
    0x00480001, // GFXMMU_LUT210L
    0x00030c00, // GFXMMU_LUT210H
    0x00480001, // GFXMMU_LUT211L
    0x00031090, // GFXMMU_LUT211H
    0x00480001, // GFXMMU_LUT212L
    0x00031520, // GFXMMU_LUT212H
    0x00480001, // GFXMMU_LUT213L
    0x000319b0, // GFXMMU_LUT213H
    0x00480001, // GFXMMU_LUT214L
    0x00031e40, // GFXMMU_LUT214H
    0x00480001, // GFXMMU_LUT215L
    0x000322d0, // GFXMMU_LUT215H
    0x00480001, // GFXMMU_LUT216L
    0x00032760, // GFXMMU_LUT216H
    0x00480001, // GFXMMU_LUT217L
    0x00032bf0, // GFXMMU_LUT217H
    0x00480001, // GFXMMU_LUT218L
    0x00033080, // GFXMMU_LUT218H
    0x00480001, // GFXMMU_LUT219L
    0x00033510, // GFXMMU_LUT219H
    0x00480001, // GFXMMU_LUT220L
    0x000339a0, // GFXMMU_LUT220H
    0x00480001, // GFXMMU_LUT221L
    0x00033e30, // GFXMMU_LUT221H
    0x00480001, // GFXMMU_LUT222L
    0x000342c0, // GFXMMU_LUT222H
    0x00480001, // GFXMMU_LUT223L
    0x00034750, // GFXMMU_LUT223H
    0x00480001, // GFXMMU_LUT224L
    0x00034be0, // GFXMMU_LUT224H
    0x00480001, // GFXMMU_LUT225L
    0x00035070, // GFXMMU_LUT225H
    0x00480001, // GFXMMU_LUT226L
    0x00035500, // GFXMMU_LUT226H
    0x00480001, // GFXMMU_LUT227L
    0x00035990, // GFXMMU_LUT227H
    0x00480001, // GFXMMU_LUT228L
    0x00035e20, // GFXMMU_LUT228H
    0x00480001, // GFXMMU_LUT229L
    0x000362b0, // GFXMMU_LUT229H
    0x00480001, // GFXMMU_LUT230L
    0x00036740, // GFXMMU_LUT230H
    0x00480001, // GFXMMU_LUT231L
    0x00036bd0, // GFXMMU_LUT231H
    0x00480001, // GFXMMU_LUT232L
    0x00037060, // GFXMMU_LUT232H
    0x00480001, // GFXMMU_LUT233L
    0x000374f0, // GFXMMU_LUT233H
    0x00480001, // GFXMMU_LUT234L
    0x00037980, // GFXMMU_LUT234H
    0x00480001, // GFXMMU_LUT235L
    0x00037e10, // GFXMMU_LUT235H
    0x00480001, // GFXMMU_LUT236L
    0x000382a0, // GFXMMU_LUT236H
    0x00480001, // GFXMMU_LUT237L
    0x00038730, // GFXMMU_LUT237H
    0x00480001, // GFXMMU_LUT238L
    0x00038bc0, // GFXMMU_LUT238H
    0x00480001, // GFXMMU_LUT239L
    0x00039050, // GFXMMU_LUT239H
    0x00480001, // GFXMMU_LUT240L
    0x000394e0, // GFXMMU_LUT240H
    0x00470101, // GFXMMU_LUT241L
    0x00039960, // GFXMMU_LUT241H
    0x00470101, // GFXMMU_LUT242L
    0x00039dd0, // GFXMMU_LUT242H
    0x00470101, // GFXMMU_LUT243L
    0x0003a240, // GFXMMU_LUT243H
    0x00470101, // GFXMMU_LUT244L
    0x0003a6b0, // GFXMMU_LUT244H
    0x00470101, // GFXMMU_LUT245L
    0x0003ab20, // GFXMMU_LUT245H
    0x00470101, // GFXMMU_LUT246L
    0x0003af90, // GFXMMU_LUT246H
    0x00470101, // GFXMMU_LUT247L
    0x0003b400, // GFXMMU_LUT247H
    0x00470101, // GFXMMU_LUT248L
    0x0003b870, // GFXMMU_LUT248H
    0x00470101, // GFXMMU_LUT249L
    0x0003bce0, // GFXMMU_LUT249H
    0x00470101, // GFXMMU_LUT250L
    0x0003c150, // GFXMMU_LUT250H
    0x00470101, // GFXMMU_LUT251L
    0x0003c5c0, // GFXMMU_LUT251H
    0x00470101, // GFXMMU_LUT252L
    0x0003ca30, // GFXMMU_LUT252H
    0x00470101, // GFXMMU_LUT253L
    0x0003cea0, // GFXMMU_LUT253H
    0x00470101, // GFXMMU_LUT254L
    0x0003d310, // GFXMMU_LUT254H
    0x00470101, // GFXMMU_LUT255L
    0x0003d780, // GFXMMU_LUT255H
    0x00470101, // GFXMMU_LUT256L
    0x0003dbf0, // GFXMMU_LUT256H
    0x00470101, // GFXMMU_LUT257L
    0x0003e060, // GFXMMU_LUT257H
    0x00470201, // GFXMMU_LUT258L
    0x0003e4c0, // GFXMMU_LUT258H
    0x00470201, // GFXMMU_LUT259L
    0x0003e920, // GFXMMU_LUT259H
    0x00460201, // GFXMMU_LUT260L
    0x0003ed80, // GFXMMU_LUT260H
    0x00460201, // GFXMMU_LUT261L
    0x0003f1d0, // GFXMMU_LUT261H
    0x00460201, // GFXMMU_LUT262L
    0x0003f620, // GFXMMU_LUT262H
    0x00460201, // GFXMMU_LUT263L
    0x0003fa70, // GFXMMU_LUT263H
    0x00460201, // GFXMMU_LUT264L
    0x0003fec0, // GFXMMU_LUT264H
    0x00460201, // GFXMMU_LUT265L
    0x00040310, // GFXMMU_LUT265H
    0x00460201, // GFXMMU_LUT266L
    0x00040760, // GFXMMU_LUT266H
    0x00460201, // GFXMMU_LUT267L
    0x00040bb0, // GFXMMU_LUT267H
    0x00460201, // GFXMMU_LUT268L
    0x00041000, // GFXMMU_LUT268H
    0x00460201, // GFXMMU_LUT269L
    0x00041450, // GFXMMU_LUT269H
    0x00460201, // GFXMMU_LUT270L
    0x000418a0, // GFXMMU_LUT270H
    0x00460301, // GFXMMU_LUT271L
    0x00041ce0, // GFXMMU_LUT271H
    0x00460301, // GFXMMU_LUT272L
    0x00042120, // GFXMMU_LUT272H
    0x00460301, // GFXMMU_LUT273L
    0x00042560, // GFXMMU_LUT273H
    0x00450301, // GFXMMU_LUT274L
    0x000429a0, // GFXMMU_LUT274H
    0x00450301, // GFXMMU_LUT275L
    0x00042dd0, // GFXMMU_LUT275H
    0x00450301, // GFXMMU_LUT276L
    0x00043200, // GFXMMU_LUT276H
    0x00450301, // GFXMMU_LUT277L
    0x00043630, // GFXMMU_LUT277H
    0x00450301, // GFXMMU_LUT278L
    0x00043a60, // GFXMMU_LUT278H
    0x00450301, // GFXMMU_LUT279L
    0x00043e90, // GFXMMU_LUT279H
    0x00450301, // GFXMMU_LUT280L
    0x000442c0, // GFXMMU_LUT280H
    0x00450301, // GFXMMU_LUT281L
    0x000446f0, // GFXMMU_LUT281H
    0x00450301, // GFXMMU_LUT282L
    0x00044b20, // GFXMMU_LUT282H
    0x00450301, // GFXMMU_LUT283L
    0x00044f50, // GFXMMU_LUT283H
    0x00440401, // GFXMMU_LUT284L
    0x00045370, // GFXMMU_LUT284H
    0x00440401, // GFXMMU_LUT285L
    0x00045780, // GFXMMU_LUT285H
    0x00440401, // GFXMMU_LUT286L
    0x00045b90, // GFXMMU_LUT286H
    0x00440401, // GFXMMU_LUT287L
    0x00045fa0, // GFXMMU_LUT287H
    0x00440401, // GFXMMU_LUT288L
    0x000463b0, // GFXMMU_LUT288H
    0x00440401, // GFXMMU_LUT289L
    0x000467c0, // GFXMMU_LUT289H
    0x00440401, // GFXMMU_LUT290L
    0x00046bd0, // GFXMMU_LUT290H
    0x00440401, // GFXMMU_LUT291L
    0x00046fe0, // GFXMMU_LUT291H
    0x00440401, // GFXMMU_LUT292L
    0x000473f0, // GFXMMU_LUT292H
    0x00440501, // GFXMMU_LUT293L
    0x000477f0, // GFXMMU_LUT293H
    0x00440501, // GFXMMU_LUT294L
    0x00047bf0, // GFXMMU_LUT294H
    0x00430501, // GFXMMU_LUT295L
    0x00047ff0, // GFXMMU_LUT295H
    0x00430501, // GFXMMU_LUT296L
    0x000483e0, // GFXMMU_LUT296H
    0x00430501, // GFXMMU_LUT297L
    0x000487d0, // GFXMMU_LUT297H
    0x00430501, // GFXMMU_LUT298L
    0x00048bc0, // GFXMMU_LUT298H
    0x00430501, // GFXMMU_LUT299L
    0x00048fb0, // GFXMMU_LUT299H
    0x00430501, // GFXMMU_LUT300L
    0x000493a0, // GFXMMU_LUT300H
    0x00430601, // GFXMMU_LUT301L
    0x00049780, // GFXMMU_LUT301H
    0x00430601, // GFXMMU_LUT302L
    0x00049b60, // GFXMMU_LUT302H
    0x00420601, // GFXMMU_LUT303L
    0x00049f40, // GFXMMU_LUT303H
    0x00420601, // GFXMMU_LUT304L
    0x0004a310, // GFXMMU_LUT304H
    0x00420601, // GFXMMU_LUT305L
    0x0004a6e0, // GFXMMU_LUT305H
    0x00420601, // GFXMMU_LUT306L
    0x0004aab0, // GFXMMU_LUT306H
    0x00420601, // GFXMMU_LUT307L
    0x0004ae80, // GFXMMU_LUT307H
    0x00420601, // GFXMMU_LUT308L
    0x0004b250, // GFXMMU_LUT308H
    0x00420601, // GFXMMU_LUT309L
    0x0004b620, // GFXMMU_LUT309H
    0x00410701, // GFXMMU_LUT310L
    0x0004b9e0, // GFXMMU_LUT310H
    0x00410701, // GFXMMU_LUT311L
    0x0004bd90, // GFXMMU_LUT311H
    0x00410701, // GFXMMU_LUT312L
    0x0004c140, // GFXMMU_LUT312H
    0x00410701, // GFXMMU_LUT313L
    0x0004c4f0, // GFXMMU_LUT313H
    0x00410701, // GFXMMU_LUT314L
    0x0004c8a0, // GFXMMU_LUT314H
    0x00410701, // GFXMMU_LUT315L
    0x0004cc50, // GFXMMU_LUT315H
    0x00410801, // GFXMMU_LUT316L
    0x0004cff0, // GFXMMU_LUT316H
    0x00400801, // GFXMMU_LUT317L
    0x0004d390, // GFXMMU_LUT317H
    0x00400801, // GFXMMU_LUT318L
    0x0004d720, // GFXMMU_LUT318H
    0x00400801, // GFXMMU_LUT319L
    0x0004dab0, // GFXMMU_LUT319H
    0x00400801, // GFXMMU_LUT320L
    0x0004de40, // GFXMMU_LUT320H
    0x00400801, // GFXMMU_LUT321L
    0x0004e1d0, // GFXMMU_LUT321H
    0x00400901, // GFXMMU_LUT322L
    0x0004e550, // GFXMMU_LUT322H
    0x003f0901, // GFXMMU_LUT323L
    0x0004e8d0, // GFXMMU_LUT323H
    0x003f0901, // GFXMMU_LUT324L
    0x0004ec40, // GFXMMU_LUT324H
    0x003f0901, // GFXMMU_LUT325L
    0x0004efb0, // GFXMMU_LUT325H
    0x003f0901, // GFXMMU_LUT326L
    0x0004f320, // GFXMMU_LUT326H
    0x003f0901, // GFXMMU_LUT327L
    0x0004f690, // GFXMMU_LUT327H
    0x003f0901, // GFXMMU_LUT328L
    0x0004fa00, // GFXMMU_LUT328H
    0x003e0a01, // GFXMMU_LUT329L
    0x0004fd60, // GFXMMU_LUT329H
    0x003e0a01, // GFXMMU_LUT330L
    0x000500b0, // GFXMMU_LUT330H
    0x003e0a01, // GFXMMU_LUT331L
    0x00050400, // GFXMMU_LUT331H
    0x003e0a01, // GFXMMU_LUT332L
    0x00050750, // GFXMMU_LUT332H
    0x003e0a01, // GFXMMU_LUT333L
    0x00050aa0, // GFXMMU_LUT333H
    0x003e0b01, // GFXMMU_LUT334L
    0x00050de0, // GFXMMU_LUT334H
    0x003d0b01, // GFXMMU_LUT335L
    0x00051120, // GFXMMU_LUT335H
    0x003d0b01, // GFXMMU_LUT336L
    0x00051450, // GFXMMU_LUT336H
    0x003d0b01, // GFXMMU_LUT337L
    0x00051780, // GFXMMU_LUT337H
    0x003d0b01, // GFXMMU_LUT338L
    0x00051ab0, // GFXMMU_LUT338H
    0x003d0c01, // GFXMMU_LUT339L
    0x00051dd0, // GFXMMU_LUT339H
    0x003c0c01, // GFXMMU_LUT340L
    0x000520f0, // GFXMMU_LUT340H
    0x003c0c01, // GFXMMU_LUT341L
    0x00052400, // GFXMMU_LUT341H
    0x003c0c01, // GFXMMU_LUT342L
    0x00052710, // GFXMMU_LUT342H
    0x003c0c01, // GFXMMU_LUT343L
    0x00052a20, // GFXMMU_LUT343H
    0x003b0d01, // GFXMMU_LUT344L
    0x00052d20, // GFXMMU_LUT344H
    0x003b0d01, // GFXMMU_LUT345L
    0x00053010, // GFXMMU_LUT345H
    0x003b0d01, // GFXMMU_LUT346L
    0x00053300, // GFXMMU_LUT346H
    0x003b0d01, // GFXMMU_LUT347L
    0x000535f0, // GFXMMU_LUT347H
    0x003b0e01, // GFXMMU_LUT348L
    0x000538d0, // GFXMMU_LUT348H
    0x003a0e01, // GFXMMU_LUT349L
    0x00053bb0, // GFXMMU_LUT349H
    0x003a0e01, // GFXMMU_LUT350L
    0x00053e80, // GFXMMU_LUT350H
    0x003a0e01, // GFXMMU_LUT351L
    0x00054150, // GFXMMU_LUT351H
    0x003a0f01, // GFXMMU_LUT352L
    0x00054410, // GFXMMU_LUT352H
    0x00390f01, // GFXMMU_LUT353L
    0x000546d0, // GFXMMU_LUT353H
    0x00390f01, // GFXMMU_LUT354L
    0x00054980, // GFXMMU_LUT354H
    0x00390f01, // GFXMMU_LUT355L
    0x00054c30, // GFXMMU_LUT355H
    0x00381001, // GFXMMU_LUT356L
    0x00054ed0, // GFXMMU_LUT356H
    0x00381001, // GFXMMU_LUT357L
    0x00055160, // GFXMMU_LUT357H
    0x00381001, // GFXMMU_LUT358L
    0x000553f0, // GFXMMU_LUT358H
    0x00381001, // GFXMMU_LUT359L
    0x00055680, // GFXMMU_LUT359H
    0x00371101, // GFXMMU_LUT360L
    0x00055900, // GFXMMU_LUT360H
    0x00371101, // GFXMMU_LUT361L
    0x00055b70, // GFXMMU_LUT361H
    0x00371101, // GFXMMU_LUT362L
    0x00055de0, // GFXMMU_LUT362H
    0x00361201, // GFXMMU_LUT363L
    0x00056040, // GFXMMU_LUT363H
    0x00361201, // GFXMMU_LUT364L
    0x00056290, // GFXMMU_LUT364H
    0x00361201, // GFXMMU_LUT365L
    0x000564e0, // GFXMMU_LUT365H
    0x00351301, // GFXMMU_LUT366L
    0x00056720, // GFXMMU_LUT366H
    0x00351301, // GFXMMU_LUT367L
    0x00056950, // GFXMMU_LUT367H
    0x00351301, // GFXMMU_LUT368L
    0x00056b80, // GFXMMU_LUT368H
    0x00341401, // GFXMMU_LUT369L
    0x00056da0, // GFXMMU_LUT369H
    0x00341401, // GFXMMU_LUT370L
    0x00056fb0, // GFXMMU_LUT370H
    0x00341501, // GFXMMU_LUT371L
    0x000571b0, // GFXMMU_LUT371H
    0x00331501, // GFXMMU_LUT372L
    0x000573b0, // GFXMMU_LUT372H
    0x00331501, // GFXMMU_LUT373L
    0x000575a0, // GFXMMU_LUT373H
    0x00321601, // GFXMMU_LUT374L
    0x00057780, // GFXMMU_LUT374H
    0x00321601, // GFXMMU_LUT375L
    0x00057950, // GFXMMU_LUT375H
    0x00311701, // GFXMMU_LUT376L
    0x00057b10, // GFXMMU_LUT376H
    0x00311701, // GFXMMU_LUT377L
    0x00057cc0, // GFXMMU_LUT377H
    0x00301801, // GFXMMU_LUT378L
    0x00057e60, // GFXMMU_LUT378H
    0x00301801, // GFXMMU_LUT379L
    0x00057ff0, // GFXMMU_LUT379H
    0x002f1901, // GFXMMU_LUT380L
    0x00058170, // GFXMMU_LUT380H
    0x002f1901, // GFXMMU_LUT381L
    0x000582e0, // GFXMMU_LUT381H
    0x002e1a01, // GFXMMU_LUT382L
    0x00058440, // GFXMMU_LUT382H
    0x002d1b01, // GFXMMU_LUT383L
    0x00058580, // GFXMMU_LUT383H
    0x002d1b01, // GFXMMU_LUT384L
    0x000586b0, // GFXMMU_LUT384H
    0x002c1c01, // GFXMMU_LUT385L
    0x000587d0, // GFXMMU_LUT385H
    0x002b1d01, // GFXMMU_LUT386L
    0x000588d0, // GFXMMU_LUT386H
    0x002a1e01, // GFXMMU_LUT387L
    0x000589b0, // GFXMMU_LUT387H
    0x00282001, // GFXMMU_LUT388L
    0x00058a60, // GFXMMU_LUT388H
    0x00272101, // GFXMMU_LUT389L
    0x00058ae0  // GFXMMU_LUT389H
};

#ifdef __cplusplus
}
#endif

#endif /* __GFXMMU_LUT_390X390_24BPP_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/