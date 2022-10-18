/******************************************************************************
*  Filename:       rf_patch_mce_genook.h
*
*  Description: RF core patch for General OOK support in CC13x2 and CC26x2
*
*  Copyright (c) 2015-2020, Texas Instruments Incorporated
*  All rights reserved.
*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions are met:
*
*  1) Redistributions of source code must retain the above copyright notice,
*     this list of conditions and the following disclaimer.
*
*  2) Redistributions in binary form must reproduce the above copyright notice,
*     this list of conditions and the following disclaimer in the documentation
*     and/or other materials provided with the distribution.
*
*  3) Neither the name of the ORGANIZATION nor the names of its contributors may
*     be used to endorse or promote products derived from this software without
*     specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
*  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
*  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
*  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
*  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
*  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
*  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
*  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
*  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
*  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
*  POSSIBILITY OF SUCH DAMAGE.
*
******************************************************************************/

#include <stdint.h>
#include "rf_patch_mce_genook.h"
#include <ti/devices/DeviceFamily.h>
#include DeviceFamily_constructPath(inc/hw_types.h)

#ifndef MCE_PATCH_TYPE
#define MCE_PATCH_TYPE static const uint32_t
#endif

#ifndef PATCH_FUN_SPEC
#define PATCH_FUN_SPEC
#endif

#ifndef RFC_MCERAM_BASE
#define RFC_MCERAM_BASE 0x21008000
#endif

#ifndef MCE_PATCH_MODE
#define MCE_PATCH_MODE 0
#endif

MCE_PATCH_TYPE patchGenookMce[489] = {
   0x0000603b,
   0x01952fcf,
   0x7fff0001,
   0x030c003f,
   0x070c680a,
   0x00010000,
   0xaaaa000f,
   0x00fc00aa,
   0x272d8080,
   0x00170003,
   0x0000001f,
   0x04000000,
   0x0000000f,
   0x00020387,
   0x00434074,
   0x00028000,
   0x06f00020,
   0x091e0000,
   0x00540500,
   0x00000000,
   0x00505014,
   0x000f0000,
   0x007f7f30,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x72230000,
   0x73037263,
   0x72037305,
   0x73067304,
   0x73917204,
   0xc7c07291,
   0x00018001,
   0x90109001,
   0x90010801,
   0x720e720d,
   0x7210720f,
   0x7100b0d0,
   0xa0d0b110,
   0x8162721b,
   0x06701020,
   0x407d1e00,
   0x407e1e10,
   0x40681e20,
   0x06f23982,
   0x11011632,
   0x6c011421,
   0x61936193,
   0x633f6329,
   0x39423982,
   0x11011632,
   0x6c011421,
   0x60ef60ef,
   0x12206118,
   0x12106074,
   0x73117223,
   0x73137312,
   0x001081b1,
   0xb07091b0,
   0x60736050,
   0xc2b2c121,
   0x1820c4e0,
   0x6e236f13,
   0x16121611,
   0x78706882,
   0x78809c80,
   0x78909c90,
   0x78b09ca0,
   0x790099c0,
   0x94909480,
   0xc750c4f2,
   0x409a1820,
   0x6e231203,
   0x68971612,
   0x979078a0,
   0x81906073,
   0x81709640,
   0x2a703980,
   0x16111001,
   0x84b484a2,
   0xc0f5c0f3,
   0x1c01c200,
   0xc10040c1,
   0x40b71c10,
   0x10134cb9,
   0x18301803,
   0x1a101a13,
   0x68b43912,
   0x13f360c1,
   0x13f360c1,
   0xc1001015,
   0x1a151850,
   0x39141a10,
   0xb0e868bf,
   0xb1287100,
   0xb230a0e8,
   0xb012b002,
   0x22168246,
   0x817640c8,
   0x06f63d46,
   0x81708195,
   0x105106f0,
   0x65620611,
   0x68d13d15,
   0x22f08170,
   0x1a1644cb,
   0x87914cce,
   0x9a11d030,
   0x13f067cb,
   0x40e81c03,
   0x1021c0f0,
   0x65620611,
   0x68e33d12,
   0x1041c0f0,
   0x65620611,
   0x68e93d14,
   0x73117000,
   0xc0007312,
   0xb11191f0,
   0xc050b0d1,
   0xc0109910,
   0xc0089930,
   0x8ca3649d,
   0x39533983,
   0x82100613,
   0x410f2210,
   0x083181d1,
   0x65621017,
   0x39808160,
   0x1e103940,
   0x1071450e,
   0x65620a11,
   0x120160ff,
   0xb2346562,
   0xb111a0d1,
   0xc040a0d3,
   0x607367cb,
   0x73117223,
   0xc0007312,
   0xb11191f0,
   0xc050b0d1,
   0xc0109910,
   0xb2309930,
   0x22168246,
   0xb0024124,
   0xc008b012,
   0x78cac030,
   0x061110a1,
   0x391a6562,
   0xc0f0692c,
   0x10a178da,
   0x65620611,
   0x6933391a,
   0x78eac070,
   0x061110a1,
   0x391a6562,
   0xc090693a,
   0x10a178fa,
   0x65620611,
   0x6941391a,
   0x39838ca3,
   0x06133953,
   0x22108210,
   0xc0114157,
   0x65620831,
   0x67a781d1,
   0xc0016562,
   0x65620831,
   0xc011614a,
   0xc0016562,
   0xb2346562,
   0xb111a0d1,
   0xc050a0d3,
   0x607367cb,
   0x2208c029,
   0x22014568,
   0x6177417e,
   0x457e2201,
   0x22ff879f,
   0x65834177,
   0x92313111,
   0x10183911,
   0xc019811e,
   0xc0294576,
   0xb111617e,
   0x31117100,
   0x39119231,
   0xc0191018,
   0x7100b111,
   0x457e1a19,
   0x10f97000,
   0x04f9785f,
   0x10001000,
   0x10001000,
   0x10001000,
   0x10001000,
   0x10001000,
   0x45861a19,
   0x67617000,
   0x67cbc060,
   0xc01084ed,
   0x312d140d,
   0x8c9e142d,
   0x311e318e,
   0x8c99397e,
   0x39793149,
   0x31293949,
   0x99301090,
   0xb9147291,
   0xc662a914,
   0xb0029912,
   0xe070b012,
   0x9a2f9a1b,
   0xb63567cb,
   0x66aab63c,
   0x8c81a1b2,
   0x45bc22f1,
   0x22f18ca1,
   0x61f145bc,
   0x80b77100,
   0x460f2207,
   0x22b08090,
   0x105441c8,
   0x6648873c,
   0x61bc669f,
   0x22f18c81,
   0x223741d2,
   0xb13341d2,
   0x223080b0,
   0x61e045cd,
   0x41e522e1,
   0x22508090,
   0xb11541e5,
   0x22108240,
   0x993941bc,
   0xa914b914,
   0x61bcb116,
   0xb914993d,
   0xb116a914,
   0x8ca061bc,
   0x42eb22f0,
   0x42eb2237,
   0xb133b075,
   0x223080b0,
   0xb08745eb,
   0x710061bc,
   0x220780b7,
   0x2237460f,
   0x8090460e,
   0x420022b0,
   0x873c1054,
   0x669f6648,
   0x8c8161f1,
   0x41f122e1,
   0x22508090,
   0xb11541f1,
   0x22108240,
   0x993d41f1,
   0xa914b914,
   0x61f1b116,
   0xb130b1b2,
   0xb133a0f0,
   0xb074a0f3,
   0xa044b231,
   0x22408360,
   0xb0d24224,
   0x7100b112,
   0x22b08090,
   0x10544224,
   0x6648873c,
   0x621b669f,
   0xb112a0d2,
   0x9a1ad080,
   0xc00f67cb,
   0x7100c00e,
   0x22008090,
   0x873c4450,
   0x66481054,
   0x8160669f,
   0x06f03980,
   0x463a1e10,
   0x623b668b,
   0x8180667f,
   0x422b1e00,
   0x1cf01a10,
   0x62434e2b,
   0xa0d6622b,
   0xa0dbb116,
   0x6317b11b,
   0x8a72ba34,
   0x063189c1,
   0x42651e01,
   0x42571e21,
   0x425e1e31,
   0x14261056,
   0x10653916,
   0x10566266,
   0x18563126,
   0x39261426,
   0x62661065,
   0x31361056,
   0x14261856,
   0x10653936,
   0x10266266,
   0x39228242,
   0x4e741c26,
   0xc1011862,
   0x4e721c12,
   0x18211201,
   0x627c3121,
   0x627ccc01,
   0xc1011826,
   0x4e7b1c16,
   0x31211061,
   0xc401627c,
   0xb11b9731,
   0x1c8a7000,
   0x8240468a,
   0x1c043920,
   0xc0014e87,
   0xc0116288,
   0x161f91c1,
   0x1c8a7000,
   0x8730469e,
   0x3d803180,
   0x18701001,
   0x1e1e1017,
   0x3980469d,
   0x8ca13970,
   0x39513981,
   0x91c00810,
   0x0a1e161f,
   0x87317000,
   0x081010c0,
   0x42a62270,
   0x62a9120a,
   0x42a41cba,
   0x7000161a,
   0xb116b11b,
   0xb130b111,
   0xb115b133,
   0x720db112,
   0x720f720e,
   0xb0f0b0db,
   0x8c82b0f3,
   0x42bd22f2,
   0xb913b0d6,
   0x8ca062c0,
   0x42e022f0,
   0xa444b445,
   0xa469a468,
   0x3180caa0,
   0x0001caa1,
   0x94d194c1,
   0x31838ca3,
   0x84503983,
   0x39803180,
   0x00303183,
   0x84409450,
   0x39503150,
   0x39838ca3,
   0xc1f406f3,
   0x31841834,
   0x00403134,
   0xb0899440,
   0x42ea22e2,
   0x394a8c9a,
   0x312a398a,
   0xb0d5993a,
   0xb913b0d6,
   0xb23f7000,
   0xa0f3a0f0,
   0x993ea0db,
   0xa914b914,
   0xb130b116,
   0xb11bb133,
   0x22008240,
   0xb11542f6,
   0xa0048002,
   0xa001a006,
   0x72047203,
   0x67cbc090,
   0xb9147100,
   0xb0d5b116,
   0x7100a23f,
   0xa0d5b115,
   0x90307820,
   0x78309002,
   0x90609040,
   0xa23fb072,
   0x993a66aa,
   0xb116a914,
   0xba3c61b5,
   0x8b5481b0,
   0x31843924,
   0x91b40004,
   0x67cbc0a0,
   0x72917391,
   0x72067263,
   0x72047202,
   0x73067305,
   0x67616073,
   0x67cbc0b0,
   0xb0dbb118,
   0xb005b11b,
   0x7100b258,
   0x8ca0b11b,
   0x433922e0,
   0x22108240,
   0x66484331,
   0x39708730,
   0x679d0a10,
   0x67616331,
   0x67cbc0c0,
   0xb074b0db,
   0x89ce120c,
   0x1e0e398e,
   0x1210434f,
   0x1a2030e0,
   0x66487100,
   0x71006b4c,
   0x22e08ca0,
   0x82404356,
   0x43472210,
   0x39716648,
   0x91c10a11,
   0x1e048184,
   0x161c4347,
   0x43171cc4,
   0x12006347,
   0xb11891e0,
   0xb016b006,
   0xb014b004,
   0xb012b002,
   0x78628440,
   0x81730420,
   0x2a733983,
   0xc1f294e3,
   0x31621832,
   0x31511021,
   0x00200012,
   0x78209440,
   0x90509030,
   0x90407830,
   0xc04b9060,
   0x39308360,
   0x1e000630,
   0x300b4386,
   0x1a1b10b8,
   0xc00a3918,
   0xa234108f,
   0x8360a233,
   0x43942240,
   0xc022165f,
   0x639a67ac,
   0x439a2230,
   0xc022163f,
   0xb23367ac,
   0xb072b235,
   0x22007000,
   0xb00547a1,
   0x800063a6,
   0x43a62250,
   0xa005b270,
   0x82d27000,
   0x06123972,
   0x70000821,
   0x302084a0,
   0x39818191,
   0x1823c083,
   0x14103831,
   0x84b09590,
   0x84a13020,
   0x38313981,
   0x95a01410,
   0x302084c0,
   0x39818191,
   0x14103831,
   0x84d095b0,
   0x84c13020,
   0x38313981,
   0x95c01410,
   0x9a007000,
   0x220089f0,
   0xb9e047cc,
   0x00007000
};

PATCH_FUN_SPEC void rf_patch_mce_genook(void)
{
#ifdef __PATCH_NO_UNROLLING
   uint32_t i;
   for (i = 0; i < 489; i++) {
      HWREG(RFC_MCERAM_BASE + 4 * i) = patchGenookMce[i];
   }
#else
   const uint32_t *pS = patchGenookMce;
   volatile unsigned long *pD = &HWREG(RFC_MCERAM_BASE);
   uint32_t t1, t2, t3, t4, t5, t6, t7, t8;
   uint32_t nIterations = 61;

   do {
      t1 = *pS++;
      t2 = *pS++;
      t3 = *pS++;
      t4 = *pS++;
      t5 = *pS++;
      t6 = *pS++;
      t7 = *pS++;
      t8 = *pS++;
      *pD++ = t1;
      *pD++ = t2;
      *pD++ = t3;
      *pD++ = t4;
      *pD++ = t5;
      *pD++ = t6;
      *pD++ = t7;
      *pD++ = t8;
   } while (--nIterations);

   t1 = *pS++;
   *pD++ = t1;
#endif
}