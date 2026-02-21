#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AnimMenu
// Address: 0x218580 - 0x219020
void AnimMenu_0x218580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x218580u;

    // 0x218580: 0x27bdfed0
    ctx->pc = 0x218580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x218584: 0xffbf0120
    ctx->pc = 0x218584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x218588: 0xffbe0110
    ctx->pc = 0x218588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 30));
    // 0x21858c: 0xffb70100
    ctx->pc = 0x21858cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 23));
    // 0x218590: 0xffb600f0
    ctx->pc = 0x218590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
    // 0x218594: 0xffb500e0
    ctx->pc = 0x218594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 21));
    // 0x218598: 0xffb400d0
    ctx->pc = 0x218598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x21859c: 0xffb300c0
    ctx->pc = 0x21859cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 19));
    // 0x2185a0: 0xffb200b0
    ctx->pc = 0x2185a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x2185a4: 0xffb100a0
    ctx->pc = 0x2185a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 17));
    // 0x2185a8: 0xffb00090
    ctx->pc = 0x2185a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x2185ac: 0xa82d
    ctx->pc = 0x2185acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2185b0: 0x3c10003c
    ctx->pc = 0x2185b0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x2185b4: 0x8e02d0ac
    ctx->pc = 0x2185b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294955180)));
    // 0x2185b8: 0x14400042
    ctx->pc = 0x2185B8u;
    {
        const bool branch_taken_0x2185b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2185BCu;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2185b8) {
            ctx->pc = 0x2186C4u;
            goto label_2186c4;
        }
    }
    ctx->pc = 0x2185C0u;
    // 0x2185c0: 0x3c013f4c
    ctx->pc = 0x2185c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16204 << 16));
    // 0x2185c4: 0x3421cccd
    ctx->pc = 0x2185c4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2185c8: 0x44816000
    ctx->pc = 0x2185c8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2185cc: 0xc0b1740
    ctx->pc = 0x2185CCu;
    SET_GPR_U32(ctx, 31, 0x2185D4u);
    ctx->pc = 0x2185D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetAmbient_0x2c5d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2185D4u; }
    }
    if (ctx->pc != 0x2185D4u) { return; }
    ctx->pc = 0x2185D4u;
    // 0x2185d4: 0x202d
    ctx->pc = 0x2185d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2185d8: 0x3c013f80
    ctx->pc = 0x2185d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2185dc: 0x44816000
    ctx->pc = 0x2185dcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2185e0: 0xc0b16d8
    ctx->pc = 0x2185E0u;
    SET_GPR_U32(ctx, 31, 0x2185E8u);
    ctx->pc = 0x2185E4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBAddLight_0x2c5b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2185E8u; }
    }
    if (ctx->pc != 0x2185E8u) { return; }
    ctx->pc = 0x2185E8u;
    // 0x2185e8: 0x3c02003c
    ctx->pc = 0x2185e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2185ec: 0xac40d150
    ctx->pc = 0x2185ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955344), GPR_U32(ctx, 0));
    // 0x2185f0: 0x3c04003a
    ctx->pc = 0x2185f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2185f4: 0x24845be8
    ctx->pc = 0x2185f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23528));
    // 0x2185f8: 0x3c05003a
    ctx->pc = 0x2185f8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2185fc: 0x24a52550
    ctx->pc = 0x2185fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9552));
    // 0x218600: 0x302d
    ctx->pc = 0x218600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218604: 0xc0b1b04
    ctx->pc = 0x218604u;
    SET_GPR_U32(ctx, 31, 0x21860Cu);
    ctx->pc = 0x218608u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewObject_0x2c6c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21860Cu; }
    }
    if (ctx->pc != 0x21860Cu) { return; }
    ctx->pc = 0x21860Cu;
    // 0x21860c: 0xae02d0ac
    ctx->pc = 0x21860cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294955180), GPR_U32(ctx, 2));
    // 0x218610: 0x3c02003c
    ctx->pc = 0x218610u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218614: 0x24040001
    ctx->pc = 0x218614u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x218618: 0xac44cf30
    ctx->pc = 0x218618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954800), GPR_U32(ctx, 4));
    // 0x21861c: 0x3c03003c
    ctx->pc = 0x21861cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x218620: 0x3c020032
    ctx->pc = 0x218620u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x218624: 0x8c42f4d0
    ctx->pc = 0x218624u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964432)));
    // 0x218628: 0xac62cf4c
    ctx->pc = 0x218628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954828), GPR_U32(ctx, 2));
    // 0x21862c: 0x3c020032
    ctx->pc = 0x21862cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x218630: 0xac44f8d4
    ctx->pc = 0x218630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965460), GPR_U32(ctx, 4));
    // 0x218634: 0x3c02003c
    ctx->pc = 0x218634u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218638: 0xac40d100
    ctx->pc = 0x218638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955264), GPR_U32(ctx, 0));
    // 0x21863c: 0x3c02003c
    ctx->pc = 0x21863cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218640: 0xac40d104
    ctx->pc = 0x218640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955268), GPR_U32(ctx, 0));
    // 0x218644: 0x3c02003c
    ctx->pc = 0x218644u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218648: 0xac40d108
    ctx->pc = 0x218648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955272), GPR_U32(ctx, 0));
    // 0x21864c: 0x3c030032
    ctx->pc = 0x21864cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x218650: 0x2465f9a8
    ctx->pc = 0x218650u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294965672));
    // 0x218654: 0x3c020032
    ctx->pc = 0x218654u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x218658: 0x2444f880
    ctx->pc = 0x218658u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294965376));
    // 0x21865c: 0xc442f880
    ctx->pc = 0x21865cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x218660: 0xe462f9a8
    ctx->pc = 0x218660u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965672), bits); }
    // 0x218664: 0xc4810004
    ctx->pc = 0x218664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218668: 0xe4a10004
    ctx->pc = 0x218668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x21866c: 0xc4800008
    ctx->pc = 0x21866cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218670: 0xe4a00008
    ctx->pc = 0x218670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x218674: 0x3c02003c
    ctx->pc = 0x218674u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218678: 0x2443d0a0
    ctx->pc = 0x218678u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294955168));
    // 0x21867c: 0xe442d0a0
    ctx->pc = 0x21867cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294955168), bits); }
    // 0x218680: 0xe4610004
    ctx->pc = 0x218680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x218684: 0xe4600008
    ctx->pc = 0x218684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x218688: 0x3c02003c
    ctx->pc = 0x218688u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21868c: 0x3c01bf80
    ctx->pc = 0x21868cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x218690: 0x44810000
    ctx->pc = 0x218690u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x218694: 0xe440d154
    ctx->pc = 0x218694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294955348), bits); }
    // 0x218698: 0x802d
    ctx->pc = 0x218698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21869c: 0x3c02003c
    ctx->pc = 0x21869cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2186a0: 0x2443d158
    ctx->pc = 0x2186a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294955352));
    // 0x2186a4: 0x0
    ctx->pc = 0x2186a4u;
    // NOP
label_2186a8:
    // 0x2186a8: 0x101080
    ctx->pc = 0x2186a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2186ac: 0x431021
    ctx->pc = 0x2186acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2186b0: 0xac400000
    ctx->pc = 0x2186b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2186b4: 0x26100001
    ctx->pc = 0x2186b4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2186b8: 0x2a020100
    ctx->pc = 0x2186b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 256));
    // 0x2186bc: 0x1440fffa
    ctx->pc = 0x2186BCu;
    {
        const bool branch_taken_0x2186bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2186bc) {
            ctx->pc = 0x2186A8u;
            goto label_2186a8;
        }
    }
    ctx->pc = 0x2186C4u;
label_2186c4:
    // 0x2186c4: 0x3c10003c
    ctx->pc = 0x2186c4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x2186c8: 0x8e02d0b0
    ctx->pc = 0x2186c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294955184)));
    // 0x2186cc: 0x54400016
    ctx->pc = 0x2186CCu;
    {
        const bool branch_taken_0x2186cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2186cc) {
            ctx->pc = 0x2186D0u;
            SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
            ctx->pc = 0x218728u;
            goto label_218728;
        }
    }
    ctx->pc = 0x2186D4u;
    // 0x2186d4: 0x3c04003a
    ctx->pc = 0x2186d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2186d8: 0x24845bf8
    ctx->pc = 0x2186d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23544));
    // 0x2186dc: 0x282d
    ctx->pc = 0x2186dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2186e0: 0xc0b1ba8
    ctx->pc = 0x2186E0u;
    SET_GPR_U32(ctx, 31, 0x2186E8u);
    ctx->pc = 0x2186E4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Err_0x2c6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2186E8u; }
    }
    if (ctx->pc != 0x2186E8u) { return; }
    ctx->pc = 0x2186E8u;
    // 0x2186e8: 0x3c030037
    ctx->pc = 0x2186e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2186ec: 0x8c64319c
    ctx->pc = 0x2186ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 12700)));
    // 0x2186f0: 0x40282d
    ctx->pc = 0x2186f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2186f4: 0x302d
    ctx->pc = 0x2186f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2186f8: 0x382d
    ctx->pc = 0x2186f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2186fc: 0x24080200
    ctx->pc = 0x2186fcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x218700: 0xc0b0b54
    ctx->pc = 0x218700u;
    SET_GPR_U32(ctx, 31, 0x218708u);
    ctx->pc = 0x218704u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 384));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218708u; }
    }
    if (ctx->pc != 0x218708u) { return; }
    ctx->pc = 0x218708u;
    // 0x218708: 0xae02d0b0
    ctx->pc = 0x218708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294955184), GPR_U32(ctx, 2));
    // 0x21870c: 0x3c01bf80
    ctx->pc = 0x21870cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x218710: 0x44816000
    ctx->pc = 0x218710u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x218714: 0xc0b0dd6
    ctx->pc = 0x218714u;
    SET_GPR_U32(ctx, 31, 0x21871Cu);
    ctx->pc = 0x218718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21871Cu; }
    }
    if (ctx->pc != 0x21871Cu) { return; }
    ctx->pc = 0x21871Cu;
    // 0x21871c: 0x8e02d0b0
    ctx->pc = 0x21871cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294955184)));
    // 0x218720: 0x1040000a
    ctx->pc = 0x218720u;
    {
        const bool branch_taken_0x218720 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x218724u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x218720) {
            ctx->pc = 0x21874Cu;
            goto label_21874c;
        }
    }
    ctx->pc = 0x218728u;
label_218728:
    // 0x218728: 0x3c030032
    ctx->pc = 0x218728u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21872c: 0x2463f858
    ctx->pc = 0x21872cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965336));
    // 0x218730: 0x3c02003c
    ctx->pc = 0x218730u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218734: 0x8c42cf30
    ctx->pc = 0x218734u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954800)));
    // 0x218738: 0x21080
    ctx->pc = 0x218738u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x21873c: 0x431021
    ctx->pc = 0x21873cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218740: 0x8c84d0b0
    ctx->pc = 0x218740u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4294955184)));
    // 0x218744: 0xc0b0f40
    ctx->pc = 0x218744u;
    SET_GPR_U32(ctx, 31, 0x21874Cu);
    ctx->pc = 0x218748u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2C3D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetColor_0x2c3d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21874Cu; }
    }
    if (ctx->pc != 0x21874Cu) { return; }
    ctx->pc = 0x21874Cu;
label_21874c:
    // 0x21874c: 0x3c030032
    ctx->pc = 0x21874cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x218750: 0x2463f7e8
    ctx->pc = 0x218750u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965224));
    // 0x218754: 0x3c02003c
    ctx->pc = 0x218754u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218758: 0x8c42cf30
    ctx->pc = 0x218758u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954800)));
    // 0x21875c: 0x2404000c
    ctx->pc = 0x21875cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    // 0x218760: 0x441018
    ctx->pc = 0x218760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x218764: 0x432021
    ctx->pc = 0x218764u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218768: 0x622821
    ctx->pc = 0x218768u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21876c: 0xa0182d
    ctx->pc = 0x21876cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218770: 0x8c840000
    ctx->pc = 0x218770u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x218774: 0x8ca50004
    ctx->pc = 0x218774u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x218778: 0xc0b1734
    ctx->pc = 0x218778u;
    SET_GPR_U32(ctx, 31, 0x218780u);
    ctx->pc = 0x21877Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->pc = 0x2C5CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetBGColor_0x2c5cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218780u; }
    }
    if (ctx->pc != 0x218780u) { return; }
    ctx->pc = 0x218780u;
    // 0x218780: 0x3c100032
    ctx->pc = 0x218780u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x218784: 0x8e11f8d4
    ctx->pc = 0x218784u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 4294965460)));
    // 0x218788: 0x3c02003c
    ctx->pc = 0x218788u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21878c: 0x202d
    ctx->pc = 0x21878cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218790: 0x282d
    ctx->pc = 0x218790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218794: 0x220302d
    ctx->pc = 0x218794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218798: 0x382d
    ctx->pc = 0x218798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21879c: 0xc085a1e
    ctx->pc = 0x21879Cu;
    SET_GPR_U32(ctx, 31, 0x2187A4u);
    ctx->pc = 0x2187A0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 4294954828)));
    ctx->pc = 0x216878u;
    {
        const uint32_t __entryPc = ctx->pc;
        MenuMod_0x216878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2187A4u; }
    }
    if (ctx->pc != 0x2187A4u) { return; }
    ctx->pc = 0x2187A4u;
    // 0x2187a4: 0xae02f8d4
    ctx->pc = 0x2187a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965460), GPR_U32(ctx, 2));
    // 0x2187a8: 0x3c030032
    ctx->pc = 0x2187a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2187ac: 0x2463f538
    ctx->pc = 0x2187acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294964536));
    // 0x2187b0: 0x22080
    ctx->pc = 0x2187b0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2187b4: 0x831821
    ctx->pc = 0x2187b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2187b8: 0x10510027
    ctx->pc = 0x2187B8u;
    {
        const bool branch_taken_0x2187b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        ctx->pc = 0x2187BCu;
        SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x2187b8) {
            ctx->pc = 0x218858u;
            goto label_218858;
        }
    }
    ctx->pc = 0x2187C0u;
    // 0x2187c0: 0x12e0002a
    ctx->pc = 0x2187C0u;
    {
        const bool branch_taken_0x2187c0 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x2187C4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x2187c0) {
            ctx->pc = 0x21886Cu;
            goto label_21886c;
        }
    }
    ctx->pc = 0x2187C8u;
    // 0x2187c8: 0x3c02003c
    ctx->pc = 0x2187c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2187cc: 0x2442d030
    ctx->pc = 0x2187ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955056));
    // 0x2187d0: 0x821021
    ctx->pc = 0x2187d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2187d4: 0x8c420000
    ctx->pc = 0x2187d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2187d8: 0xac62d100
    ctx->pc = 0x2187d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294955264), GPR_U32(ctx, 2));
    // 0x2187dc: 0x3c020032
    ctx->pc = 0x2187dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2187e0: 0x2442f718
    ctx->pc = 0x2187e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965016));
    // 0x2187e4: 0x821021
    ctx->pc = 0x2187e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2187e8: 0x8c450000
    ctx->pc = 0x2187e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2187ec: 0x4a00007
    ctx->pc = 0x2187ECu;
    {
        const bool branch_taken_0x2187ec = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2187F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2187ec) {
            ctx->pc = 0x21880Cu;
            goto label_21880c;
        }
    }
    ctx->pc = 0x2187F4u;
    // 0x2187f4: 0x86e20000
    ctx->pc = 0x2187f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2187f8: 0x10400004
    ctx->pc = 0x2187F8u;
    {
        const bool branch_taken_0x2187f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2187FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2187f8) {
            ctx->pc = 0x21880Cu;
            goto label_21880c;
        }
    }
    ctx->pc = 0x218800u;
    // 0x218800: 0xc084c42
    ctx->pc = 0x218800u;
    SET_GPR_U32(ctx, 31, 0x218808u);
    ctx->pc = 0x218804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x213108u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitTexMods_0x213108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218808u; }
    }
    if (ctx->pc != 0x218808u) { return; }
    ctx->pc = 0x218808u;
    // 0x218808: 0x3c02003c
    ctx->pc = 0x218808u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21880c:
    // 0x21880c: 0x3c01bf80
    ctx->pc = 0x21880cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x218810: 0x44810000
    ctx->pc = 0x218810u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x218814: 0xe440d154
    ctx->pc = 0x218814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294955348), bits); }
    // 0x218818: 0x3c03003c
    ctx->pc = 0x218818u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21881c: 0x2463cfd0
    ctx->pc = 0x21881cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954960));
    // 0x218820: 0x3c020032
    ctx->pc = 0x218820u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x218824: 0x8c42f8d4
    ctx->pc = 0x218824u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965460)));
    // 0x218828: 0x21080
    ctx->pc = 0x218828u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x21882c: 0x431021
    ctx->pc = 0x21882cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218830: 0x8c450000
    ctx->pc = 0x218830u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218834: 0x24020024
    ctx->pc = 0x218834u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
    // 0x218838: 0xa22818
    ctx->pc = 0x218838u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21883c: 0x8ee20004
    ctx->pc = 0x21883cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x218840: 0x3c04003a
    ctx->pc = 0x218840u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x218844: 0x24846068
    ctx->pc = 0x218844u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24680));
    // 0x218848: 0xc0bed0a
    ctx->pc = 0x218848u;
    SET_GPR_U32(ctx, 31, 0x218850u);
    ctx->pc = 0x21884Cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->pc = 0x2FB428u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x2fb428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218850u; }
    }
    if (ctx->pc != 0x218850u) { return; }
    ctx->pc = 0x218850u;
    // 0x218850: 0x3c02003c
    ctx->pc = 0x218850u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218854: 0xac40d0fc
    ctx->pc = 0x218854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955260), GPR_U32(ctx, 0));
label_218858:
    // 0x218858: 0x12e00005
    ctx->pc = 0x218858u;
    {
        const bool branch_taken_0x218858 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x21885Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x218858) {
            ctx->pc = 0x218870u;
            goto label_218870;
        }
    }
    ctx->pc = 0x218860u;
    // 0x218860: 0x86e20000
    ctx->pc = 0x218860u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x218864: 0x5440000a
    ctx->pc = 0x218864u;
    {
        const bool branch_taken_0x218864 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x218864) {
            ctx->pc = 0x218868u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 23), 4)));
            ctx->pc = 0x218890u;
            goto label_218890;
        }
    }
    ctx->pc = 0x21886Cu;
label_21886c:
    // 0x21886c: 0x3c03003c
    ctx->pc = 0x21886cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_218870:
    // 0x218870: 0x2463cfd0
    ctx->pc = 0x218870u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954960));
    // 0x218874: 0x3c020032
    ctx->pc = 0x218874u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x218878: 0x8c42f8d4
    ctx->pc = 0x218878u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965460)));
    // 0x21887c: 0x21080
    ctx->pc = 0x21887cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x218880: 0x431021
    ctx->pc = 0x218880u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218884: 0xac400000
    ctx->pc = 0x218884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x218888: 0x1000002d
    ctx->pc = 0x218888u;
    {
        const bool branch_taken_0x218888 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21888Cu;
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x218888) {
            ctx->pc = 0x218940u;
            goto label_218940;
        }
    }
    ctx->pc = 0x218890u;
label_218890:
    // 0x218890: 0x10800015
    ctx->pc = 0x218890u;
    {
        const bool branch_taken_0x218890 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x218894u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x218890) {
            ctx->pc = 0x2188E8u;
            goto label_2188e8;
        }
    }
    ctx->pc = 0x218898u;
    // 0x218898: 0x2463cfd0
    ctx->pc = 0x218898u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954960));
    // 0x21889c: 0x3c020032
    ctx->pc = 0x21889cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2188a0: 0x8c42f8d4
    ctx->pc = 0x2188a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965460)));
    // 0x2188a4: 0x21080
    ctx->pc = 0x2188a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2188a8: 0x431021
    ctx->pc = 0x2188a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2188ac: 0x8c420000
    ctx->pc = 0x2188acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2188b0: 0x24030024
    ctx->pc = 0x2188b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 36));
    // 0x2188b4: 0x432818
    ctx->pc = 0x2188b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2188b8: 0xa41021
    ctx->pc = 0x2188b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2188bc: 0x8c420020
    ctx->pc = 0x2188bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2188c0: 0x2e2f021
    ctx->pc = 0x2188c0u;
    SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2188c4: 0x3c10003c
    ctx->pc = 0x2188c4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x2188c8: 0x24040001
    ctx->pc = 0x2188c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2188cc: 0x282d
    ctx->pc = 0x2188ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2188d0: 0x8e06d100
    ctx->pc = 0x2188d0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4294955264)));
    // 0x2188d4: 0x382d
    ctx->pc = 0x2188d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2188d8: 0xc085a1e
    ctx->pc = 0x2188D8u;
    SET_GPR_U32(ctx, 31, 0x2188E0u);
    ctx->pc = 0x2188DCu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    ctx->pc = 0x216878u;
    {
        const uint32_t __entryPc = ctx->pc;
        MenuMod_0x216878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2188E0u; }
    }
    if (ctx->pc != 0x2188E0u) { return; }
    ctx->pc = 0x2188E0u;
    // 0x2188e0: 0x10000004
    ctx->pc = 0x2188E0u;
    {
        const bool branch_taken_0x2188e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2188E4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294955264), GPR_U32(ctx, 2));
        if (branch_taken_0x2188e0) {
            ctx->pc = 0x2188F4u;
            goto label_2188f4;
        }
    }
    ctx->pc = 0x2188E8u;
label_2188e8:
    // 0x2188e8: 0xf02d
    ctx->pc = 0x2188e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2188ec: 0x3c02003c
    ctx->pc = 0x2188ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2188f0: 0xac40d100
    ctx->pc = 0x2188f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955264), GPR_U32(ctx, 0));
label_2188f4:
    // 0x2188f4: 0x3c04003c
    ctx->pc = 0x2188f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2188f8: 0x3c03003c
    ctx->pc = 0x2188f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2188fc: 0x2463d030
    ctx->pc = 0x2188fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294955056));
    // 0x218900: 0x3c020032
    ctx->pc = 0x218900u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x218904: 0x8c42f8d4
    ctx->pc = 0x218904u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965460)));
    // 0x218908: 0x21080
    ctx->pc = 0x218908u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x21890c: 0x431821
    ctx->pc = 0x21890cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218910: 0x8c85d100
    ctx->pc = 0x218910u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 4294955264)));
    // 0x218914: 0x8c620000
    ctx->pc = 0x218914u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218918: 0x10a20009
    ctx->pc = 0x218918u;
    {
        const bool branch_taken_0x218918 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x21891Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x218918) {
            ctx->pc = 0x218940u;
            goto label_218940;
        }
    }
    ctx->pc = 0x218920u;
    // 0x218920: 0xac650000
    ctx->pc = 0x218920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x218924: 0x3c03003c
    ctx->pc = 0x218924u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x218928: 0x2463d158
    ctx->pc = 0x218928u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294955352));
    // 0x21892c: 0x51080
    ctx->pc = 0x21892cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x218930: 0x431021
    ctx->pc = 0x218930u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218934: 0xc4400000
    ctx->pc = 0x218934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218938: 0x46800020
    ctx->pc = 0x218938u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21893c: 0xe480d154
    ctx->pc = 0x21893cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294955348), bits); }
label_218940:
    // 0x218940: 0x12e00048
    ctx->pc = 0x218940u;
    {
        const bool branch_taken_0x218940 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x218944u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x218940) {
            ctx->pc = 0x218A64u;
            goto label_218a64;
        }
    }
    ctx->pc = 0x218948u;
    // 0x218948: 0x13c00045
    ctx->pc = 0x218948u;
    {
        const bool branch_taken_0x218948 = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        ctx->pc = 0x21894Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x218948) {
            ctx->pc = 0x218A60u;
            goto label_218a60;
        }
    }
    ctx->pc = 0x218950u;
    // 0x218950: 0x8c42cf18
    ctx->pc = 0x218950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954776)));
    // 0x218954: 0x3c030100
    ctx->pc = 0x218954u;
    SET_GPR_U32(ctx, 3, ((uint32_t)256 << 16));
    // 0x218958: 0x431024
    ctx->pc = 0x218958u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21895c: 0x1040000f
    ctx->pc = 0x21895Cu;
    {
        const bool branch_taken_0x21895c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x218960u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21895c) {
            ctx->pc = 0x21899Cu;
            goto label_21899c;
        }
    }
    ctx->pc = 0x218964u;
    // 0x218964: 0x3c03003c
    ctx->pc = 0x218964u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x218968: 0x2463cfd0
    ctx->pc = 0x218968u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954960));
    // 0x21896c: 0x3c020032
    ctx->pc = 0x21896cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x218970: 0x8c42f8d4
    ctx->pc = 0x218970u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965460)));
    // 0x218974: 0x21080
    ctx->pc = 0x218974u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x218978: 0x432021
    ctx->pc = 0x218978u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21897c: 0x8c820000
    ctx->pc = 0x21897cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x218980: 0x24420001
    ctx->pc = 0x218980u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x218984: 0xac820000
    ctx->pc = 0x218984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x218988: 0x86e30000
    ctx->pc = 0x218988u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x21898c: 0x43102a
    ctx->pc = 0x21898cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x218990: 0x50400001
    ctx->pc = 0x218990u;
    {
        const bool branch_taken_0x218990 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x218990) {
            ctx->pc = 0x218994u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x218998u;
            goto label_218998;
        }
    }
    ctx->pc = 0x218998u;
label_218998:
    // 0x218998: 0x24040001
    ctx->pc = 0x218998u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_21899c:
    // 0x21899c: 0x3c02003c
    ctx->pc = 0x21899cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2189a0: 0x8c42cf18
    ctx->pc = 0x2189a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954776)));
    // 0x2189a4: 0x3c030400
    ctx->pc = 0x2189a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1024 << 16));
    // 0x2189a8: 0x431024
    ctx->pc = 0x2189a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2189ac: 0x1040000e
    ctx->pc = 0x2189ACu;
    {
        const bool branch_taken_0x2189ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2189B0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x2189ac) {
            ctx->pc = 0x2189E8u;
            goto label_2189e8;
        }
    }
    ctx->pc = 0x2189B4u;
    // 0x2189b4: 0x2463cfd0
    ctx->pc = 0x2189b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954960));
    // 0x2189b8: 0x3c020032
    ctx->pc = 0x2189b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2189bc: 0x8c42f8d4
    ctx->pc = 0x2189bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965460)));
    // 0x2189c0: 0x21080
    ctx->pc = 0x2189c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2189c4: 0x431821
    ctx->pc = 0x2189c4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2189c8: 0x8c620000
    ctx->pc = 0x2189c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2189cc: 0x2442ffff
    ctx->pc = 0x2189ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2189d0: 0x4410004
    ctx->pc = 0x2189D0u;
    {
        const bool branch_taken_0x2189d0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2189D4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2189d0) {
            ctx->pc = 0x2189E4u;
            goto label_2189e4;
        }
    }
    ctx->pc = 0x2189D8u;
    // 0x2189d8: 0x86e20000
    ctx->pc = 0x2189d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2189dc: 0x2442ffff
    ctx->pc = 0x2189dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2189e0: 0xac620000
    ctx->pc = 0x2189e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2189e4:
    // 0x2189e4: 0x24040001
    ctx->pc = 0x2189e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_2189e8:
    // 0x2189e8: 0x1080001d
    ctx->pc = 0x2189E8u;
    {
        const bool branch_taken_0x2189e8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2189ECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2189e8) {
            ctx->pc = 0x218A60u;
            goto label_218a60;
        }
    }
    ctx->pc = 0x2189F0u;
    // 0x2189f0: 0x2442cfd0
    ctx->pc = 0x2189f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294954960));
    // 0x2189f4: 0x3c030032
    ctx->pc = 0x2189f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2189f8: 0x8c63f8d4
    ctx->pc = 0x2189f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294965460)));
    // 0x2189fc: 0x32880
    ctx->pc = 0x2189fcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 2));
    // 0x218a00: 0xa21021
    ctx->pc = 0x218a00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x218a04: 0x8c420000
    ctx->pc = 0x218a04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218a08: 0x8ee40004
    ctx->pc = 0x218a08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x218a0c: 0x24030024
    ctx->pc = 0x218a0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 36));
    // 0x218a10: 0x431018
    ctx->pc = 0x218a10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x218a14: 0x441021
    ctx->pc = 0x218a14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x218a18: 0x8c420020
    ctx->pc = 0x218a18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x218a1c: 0x2e2f021
    ctx->pc = 0x218a1cu;
    SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x218a20: 0x3c04003c
    ctx->pc = 0x218a20u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x218a24: 0x8c82d100
    ctx->pc = 0x218a24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294955264)));
    // 0x218a28: 0x8fc30014
    ctx->pc = 0x218a28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x218a2c: 0x43102a
    ctx->pc = 0x218a2cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x218a30: 0x1440000c
    ctx->pc = 0x218A30u;
    {
        const bool branch_taken_0x218a30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x218A34u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x218a30) {
            ctx->pc = 0x218A64u;
            goto label_218a64;
        }
    }
    ctx->pc = 0x218A38u;
    // 0x218a38: 0xac80d100
    ctx->pc = 0x218a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294955264), GPR_U32(ctx, 0));
    // 0x218a3c: 0x3c02003c
    ctx->pc = 0x218a3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218a40: 0x2442d030
    ctx->pc = 0x218a40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955056));
    // 0x218a44: 0xa21021
    ctx->pc = 0x218a44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x218a48: 0xac400000
    ctx->pc = 0x218a48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x218a4c: 0x3c03003c
    ctx->pc = 0x218a4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x218a50: 0x3c02003c
    ctx->pc = 0x218a50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218a54: 0xc440d158
    ctx->pc = 0x218a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218a58: 0x46800020
    ctx->pc = 0x218a58u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x218a5c: 0xe460d154
    ctx->pc = 0x218a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294955348), bits); }
label_218a60:
    // 0x218a60: 0x3c02003c
    ctx->pc = 0x218a60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_218a64:
    // 0x218a64: 0x2444d108
    ctx->pc = 0x218a64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294955272));
    // 0x218a68: 0x8c42d108
    ctx->pc = 0x218a68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955272)));
    // 0x218a6c: 0x10400006
    ctx->pc = 0x218A6Cu;
    {
        const bool branch_taken_0x218a6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x218A70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x218a6c) {
            ctx->pc = 0x218A88u;
            goto label_218a88;
        }
    }
    ctx->pc = 0x218A74u;
    // 0x218a74: 0x8c42d104
    ctx->pc = 0x218a74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955268)));
    // 0x218a78: 0x13c20030
    ctx->pc = 0x218A78u;
    {
        const bool branch_taken_0x218a78 = (GPR_U32(ctx, 30) == GPR_U32(ctx, 2));
        if (branch_taken_0x218a78) {
            ctx->pc = 0x218B3Cu;
            goto label_218b3c;
        }
    }
    ctx->pc = 0x218A80u;
    // 0x218a80: 0xc08496c
    ctx->pc = 0x218A80u;
    SET_GPR_U32(ctx, 31, 0x218A88u);
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218A88u; }
    }
    if (ctx->pc != 0x218A88u) { return; }
    ctx->pc = 0x218A88u;
label_218a88:
    // 0x218a88: 0x13c00024
    ctx->pc = 0x218A88u;
    {
        const bool branch_taken_0x218a88 = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        ctx->pc = 0x218A8Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x218a88) {
            ctx->pc = 0x218B1Cu;
            goto label_218b1c;
        }
    }
    ctx->pc = 0x218A90u;
    // 0x218a90: 0x8c511d00
    ctx->pc = 0x218a90u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 7424)));
    // 0x218a94: 0x3c020031
    ctx->pc = 0x218a94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x218a98: 0xdc420e28
    ctx->pc = 0x218a98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x218a9c: 0x30420001
    ctx->pc = 0x218a9cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x218aa0: 0x2103c
    ctx->pc = 0x218aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x218aa4: 0x2103f
    ctx->pc = 0x218aa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x218aa8: 0x10400005
    ctx->pc = 0x218AA8u;
    {
        const bool branch_taken_0x218aa8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x218AACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x218aa8) {
            ctx->pc = 0x218AC0u;
            goto label_218ac0;
        }
    }
    ctx->pc = 0x218AB0u;
    // 0x218ab0: 0x3c10003c
    ctx->pc = 0x218ab0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x218ab4: 0x2605d108
    ctx->pc = 0x218ab4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294955272));
    // 0x218ab8: 0x10000009
    ctx->pc = 0x218AB8u;
    {
        const bool branch_taken_0x218ab8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x218ABCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x218ab8) {
            ctx->pc = 0x218AE0u;
            goto label_218ae0;
        }
    }
    ctx->pc = 0x218AC0u;
label_218ac0:
    // 0x218ac0: 0x3c020032
    ctx->pc = 0x218ac0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x218ac4: 0x8c42f8d4
    ctx->pc = 0x218ac4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965460)));
    // 0x218ac8: 0x21100
    ctx->pc = 0x218ac8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x218acc: 0x3c060032
    ctx->pc = 0x218accu;
    SET_GPR_U32(ctx, 6, ((uint32_t)50 << 16));
    // 0x218ad0: 0x24c6f598
    ctx->pc = 0x218ad0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294964632));
    // 0x218ad4: 0x3c10003c
    ctx->pc = 0x218ad4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x218ad8: 0x2605d108
    ctx->pc = 0x218ad8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294955272));
    // 0x218adc: 0x463021
    ctx->pc = 0x218adcu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_218ae0:
    // 0x218ae0: 0xc08476a
    ctx->pc = 0x218AE0u;
    SET_GPR_U32(ctx, 31, 0x218AE8u);
    ctx->pc = 0x218AE4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211DA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeInit_0x211da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218AE8u; }
    }
    if (ctx->pc != 0x218AE8u) { return; }
    ctx->pc = 0x218AE8u;
    // 0x218ae8: 0xae02d108
    ctx->pc = 0x218ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294955272), GPR_U32(ctx, 2));
    // 0x218aec: 0x3c03003a
    ctx->pc = 0x218aecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x218af0: 0x8c621d00
    ctx->pc = 0x218af0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 7424)));
    // 0x218af4: 0x54400001
    ctx->pc = 0x218AF4u;
    {
        const bool branch_taken_0x218af4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x218af4) {
            ctx->pc = 0x218AF8u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 7424), GPR_U32(ctx, 17));
            ctx->pc = 0x218AFCu;
            goto label_218afc;
        }
    }
    ctx->pc = 0x218AFCu;
label_218afc:
    // 0x218afc: 0x3c02003c
    ctx->pc = 0x218afcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218b00: 0x8c42d108
    ctx->pc = 0x218b00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955272)));
    // 0x218b04: 0x3c03003c
    ctx->pc = 0x218b04u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x218b08: 0x8c440000
    ctx->pc = 0x218b08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218b0c: 0xc0b3f94
    ctx->pc = 0x218B0Cu;
    SET_GPR_U32(ctx, 31, 0x218B14u);
    ctx->pc = 0x218B10u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294955180)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B14u; }
    }
    if (ctx->pc != 0x218B14u) { return; }
    ctx->pc = 0x218B14u;
    // 0x218b14: 0x10000004
    ctx->pc = 0x218B14u;
    {
        const bool branch_taken_0x218b14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x218B18u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x218b14) {
            ctx->pc = 0x218B28u;
            goto label_218b28;
        }
    }
    ctx->pc = 0x218B1Cu;
label_218b1c:
    // 0x218b1c: 0x3c02003c
    ctx->pc = 0x218b1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218b20: 0xac40d108
    ctx->pc = 0x218b20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955272), GPR_U32(ctx, 0));
    // 0x218b24: 0x3c02003c
    ctx->pc = 0x218b24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_218b28:
    // 0x218b28: 0xac5ed104
    ctx->pc = 0x218b28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955268), GPR_U32(ctx, 30));
    // 0x218b2c: 0x3c02003c
    ctx->pc = 0x218b2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218b30: 0x3c01bf80
    ctx->pc = 0x218b30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x218b34: 0x44810000
    ctx->pc = 0x218b34u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x218b38: 0xe440d154
    ctx->pc = 0x218b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294955348), bits); }
label_218b3c:
    // 0x218b3c: 0x13c00057
    ctx->pc = 0x218B3Cu;
    {
        const bool branch_taken_0x218b3c = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        ctx->pc = 0x218B40u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x218b3c) {
            ctx->pc = 0x218C9Cu;
            goto label_218c9c;
        }
    }
    ctx->pc = 0x218B44u;
    // 0x218b44: 0x8c42ff9c
    ctx->pc = 0x218b44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x218b48: 0x1440002a
    ctx->pc = 0x218B48u;
    {
        const bool branch_taken_0x218b48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x218B4Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x218b48) {
            ctx->pc = 0x218BF4u;
            goto label_218bf4;
        }
    }
    ctx->pc = 0x218B50u;
    // 0x218b50: 0x3c03003c
    ctx->pc = 0x218b50u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x218b54: 0x3c02003c
    ctx->pc = 0x218b54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218b58: 0x8c42d100
    ctx->pc = 0x218b58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955264)));
    // 0x218b5c: 0x8c64d10c
    ctx->pc = 0x218b5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4294955276)));
    // 0x218b60: 0x24030030
    ctx->pc = 0x218b60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
    // 0x218b64: 0x431018
    ctx->pc = 0x218b64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x218b68: 0x441021
    ctx->pc = 0x218b68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x218b6c: 0x84420022
    ctx->pc = 0x218b6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x218b70: 0x18400010
    ctx->pc = 0x218B70u;
    {
        const bool branch_taken_0x218b70 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x218B74u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x218b70) {
            ctx->pc = 0x218BB4u;
            goto label_218bb4;
        }
    }
    ctx->pc = 0x218B78u;
    // 0x218b78: 0x44820800
    ctx->pc = 0x218b78u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x218b7c: 0x46800860
    ctx->pc = 0x218b7cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x218b80: 0x3c0141f0
    ctx->pc = 0x218b80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x218b84: 0x44811000
    ctx->pc = 0x218b84u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x218b88: 0x0
    ctx->pc = 0x218b88u;
    // NOP
    // 0x218b8c: 0x0
    ctx->pc = 0x218b8cu;
    // NOP
    // 0x218b90: 0x46011043
    ctx->pc = 0x218b90u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x218b94: 0x3c020031
    ctx->pc = 0x218b94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x218b98: 0xc440ffa8
    ctx->pc = 0x218b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218b9c: 0x46020002
    ctx->pc = 0x218b9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x218ba0: 0x46000842
    ctx->pc = 0x218ba0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x218ba4: 0xc460d154
    ctx->pc = 0x218ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218ba8: 0x46000840
    ctx->pc = 0x218ba8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x218bac: 0x10000009
    ctx->pc = 0x218BACu;
    {
        const bool branch_taken_0x218bac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x218BB0u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294955348), bits); }
        if (branch_taken_0x218bac) {
            ctx->pc = 0x218BD4u;
            goto label_218bd4;
        }
    }
    ctx->pc = 0x218BB4u;
label_218bb4:
    // 0x218bb4: 0x3c020031
    ctx->pc = 0x218bb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x218bb8: 0xc440ffa8
    ctx->pc = 0x218bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218bbc: 0x3c0141f0
    ctx->pc = 0x218bbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x218bc0: 0x44810800
    ctx->pc = 0x218bc0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x218bc4: 0x46010002
    ctx->pc = 0x218bc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x218bc8: 0xc461d154
    ctx->pc = 0x218bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218bcc: 0x46010000
    ctx->pc = 0x218bccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x218bd0: 0xe460d154
    ctx->pc = 0x218bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294955348), bits); }
label_218bd4:
    // 0x218bd4: 0x3c02003c
    ctx->pc = 0x218bd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218bd8: 0xc440d154
    ctx->pc = 0x218bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218bdc: 0x44800800
    ctx->pc = 0x218bdcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x218be0: 0x46010034
    ctx->pc = 0x218be0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218be4: 0x0
    ctx->pc = 0x218be4u;
    // NOP
    // 0x218be8: 0x45030001
    ctx->pc = 0x218BE8u;
    {
        const bool branch_taken_0x218be8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x218be8) {
            ctx->pc = 0x218BECu;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294955348), bits); }
            ctx->pc = 0x218BF0u;
            goto label_218bf0;
        }
    }
    ctx->pc = 0x218BF0u;
label_218bf0:
    // 0x218bf0: 0x3c02003c
    ctx->pc = 0x218bf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_218bf4:
    // 0x218bf4: 0x2442d108
    ctx->pc = 0x218bf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955272));
    // 0x218bf8: 0x24030001
    ctx->pc = 0x218bf8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x218bfc: 0xa4430038
    ctx->pc = 0x218bfcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x218c00: 0x3c03003c
    ctx->pc = 0x218c00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x218c04: 0x84420014
    ctx->pc = 0x218c04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x218c08: 0x44820800
    ctx->pc = 0x218c08u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x218c0c: 0x46800860
    ctx->pc = 0x218c0cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x218c10: 0xc460d154
    ctx->pc = 0x218c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218c14: 0x46000836
    ctx->pc = 0x218c14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218c18: 0x0
    ctx->pc = 0x218c18u;
    // NOP
    // 0x218c1c: 0x45030001
    ctx->pc = 0x218C1Cu;
    {
        const bool branch_taken_0x218c1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x218c1c) {
            ctx->pc = 0x218C20u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294955348), GPR_U32(ctx, 0));
            ctx->pc = 0x218C24u;
            goto label_218c24;
        }
    }
    ctx->pc = 0x218C24u;
label_218c24:
    // 0x218c24: 0x3c02003c
    ctx->pc = 0x218c24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218c28: 0xc441d154
    ctx->pc = 0x218c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218c2c: 0x44800000
    ctx->pc = 0x218c2cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x218c30: 0x46010036
    ctx->pc = 0x218c30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218c34: 0x0
    ctx->pc = 0x218c34u;
    // NOP
    // 0x218c38: 0x45000008
    ctx->pc = 0x218C38u;
    {
        const bool branch_taken_0x218c38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x218C3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x218c38) {
            ctx->pc = 0x218C5Cu;
            goto label_218c5c;
        }
    }
    ctx->pc = 0x218C40u;
    // 0x218c40: 0x3c04003c
    ctx->pc = 0x218c40u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x218c44: 0x2484d108
    ctx->pc = 0x218c44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955272));
    // 0x218c48: 0x8c45d100
    ctx->pc = 0x218c48u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294955264)));
    // 0x218c4c: 0x46000824
    ctx->pc = 0x218c4cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x218c50: 0x44060000
    ctx->pc = 0x218c50u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[0]);
    // 0x218c54: 0xc084af4
    ctx->pc = 0x218C54u;
    SET_GPR_U32(ctx, 31, 0x218C5Cu);
    ctx->pc = 0x218C58u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x212BD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateATreeFrame_0x212bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C5Cu; }
    }
    if (ctx->pc != 0x218C5Cu) { return; }
    ctx->pc = 0x218C5Cu;
label_218c5c:
    // 0x218c5c: 0x3c02003c
    ctx->pc = 0x218c5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218c60: 0x8c43d108
    ctx->pc = 0x218c60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294955272)));
    // 0x218c64: 0x3c02003c
    ctx->pc = 0x218c64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218c68: 0xc440d150
    ctx->pc = 0x218c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218c6c: 0x3c01437f
    ctx->pc = 0x218c6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17279 << 16));
    // 0x218c70: 0x44810800
    ctx->pc = 0x218c70u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x218c74: 0x46010002
    ctx->pc = 0x218c74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x218c78: 0x8c640000
    ctx->pc = 0x218c78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218c7c: 0x46000064
    ctx->pc = 0x218c7cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x218c80: 0x44050800
    ctx->pc = 0x218c80u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[1]);
    // 0x218c84: 0xc0b4156
    ctx->pc = 0x218C84u;
    SET_GPR_U32(ctx, 31, 0x218C8Cu);
    ctx->pc = 0x218C88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0558u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAmbientAdd_0x2d0558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C8Cu; }
    }
    if (ctx->pc != 0x218C8Cu) { return; }
    ctx->pc = 0x218C8Cu;
    // 0x218c8c: 0x12e00004
    ctx->pc = 0x218C8Cu;
    {
        const bool branch_taken_0x218c8c = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x218C90u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x218c8c) {
            ctx->pc = 0x218CA0u;
            goto label_218ca0;
        }
    }
    ctx->pc = 0x218C94u;
    // 0x218c94: 0xc084cc4
    ctx->pc = 0x218C94u;
    SET_GPR_U32(ctx, 31, 0x218C9Cu);
    ctx->pc = 0x218C98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x213310u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoTexMods_0x213310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C9Cu; }
    }
    if (ctx->pc != 0x218C9Cu) { return; }
    ctx->pc = 0x218C9Cu;
label_218c9c:
    // 0x218c9c: 0x3c03003c
    ctx->pc = 0x218c9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_218ca0:
    // 0x218ca0: 0x2463d158
    ctx->pc = 0x218ca0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294955352));
    // 0x218ca4: 0x3c02003c
    ctx->pc = 0x218ca4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218ca8: 0x8c42d100
    ctx->pc = 0x218ca8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955264)));
    // 0x218cac: 0x21080
    ctx->pc = 0x218cacu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x218cb0: 0x431021
    ctx->pc = 0x218cb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218cb4: 0x3c03003c
    ctx->pc = 0x218cb4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x218cb8: 0xc460d154
    ctx->pc = 0x218cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218cbc: 0x46000064
    ctx->pc = 0x218cbcu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x218cc0: 0xe4410000
    ctx->pc = 0x218cc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x218cc4: 0xc085c06
    ctx->pc = 0x218CC4u;
    SET_GPR_U32(ctx, 31, 0x218CCCu);
    ctx->pc = 0x218CC8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    ctx->pc = 0x217018u;
    {
        const uint32_t __entryPc = ctx->pc;
        mod_objpos_0x217018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218CCCu; }
    }
    if (ctx->pc != 0x218CCCu) { return; }
    ctx->pc = 0x218CCCu;
    // 0x218ccc: 0x8e04d0ac
    ctx->pc = 0x218cccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294955180)));
    // 0x218cd0: 0x3c05003c
    ctx->pc = 0x218cd0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x218cd4: 0xc0b5a4e
    ctx->pc = 0x218CD4u;
    SET_GPR_U32(ctx, 31, 0x218CDCu);
    ctx->pc = 0x218CD8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955152));
    ctx->pc = 0x2D6938u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreatePYRMatrix_0x2d6938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218CDCu; }
    }
    if (ctx->pc != 0x218CDCu) { return; }
    ctx->pc = 0x218CDCu;
    // 0x218cdc: 0x8e03d0ac
    ctx->pc = 0x218cdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294955180)));
    // 0x218ce0: 0x3c02003c
    ctx->pc = 0x218ce0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218ce4: 0x2444d0a0
    ctx->pc = 0x218ce4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294955168));
    // 0x218ce8: 0xc440d0a0
    ctx->pc = 0x218ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218cec: 0xe4600030
    ctx->pc = 0x218cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x218cf0: 0xc4800004
    ctx->pc = 0x218cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218cf4: 0xe4600034
    ctx->pc = 0x218cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x218cf8: 0xc4800008
    ctx->pc = 0x218cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218cfc: 0xe4600038
    ctx->pc = 0x218cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x218d00: 0x3c02003c
    ctx->pc = 0x218d00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218d04: 0x8c42cf18
    ctx->pc = 0x218d04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954776)));
    // 0x218d08: 0x3c030040
    ctx->pc = 0x218d08u;
    SET_GPR_U32(ctx, 3, ((uint32_t)64 << 16));
    // 0x218d0c: 0x431024
    ctx->pc = 0x218d0cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218d10: 0x10400007
    ctx->pc = 0x218D10u;
    {
        const bool branch_taken_0x218d10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x218D14u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x218d10) {
            ctx->pc = 0x218D30u;
            goto label_218d30;
        }
    }
    ctx->pc = 0x218D18u;
    // 0x218d18: 0xc440d150
    ctx->pc = 0x218d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218d1c: 0x3c013d4c
    ctx->pc = 0x218d1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15692 << 16));
    // 0x218d20: 0x3421cccd
    ctx->pc = 0x218d20u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x218d24: 0x44810800
    ctx->pc = 0x218d24u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x218d28: 0x46010000
    ctx->pc = 0x218d28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x218d2c: 0xe440d150
    ctx->pc = 0x218d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294955344), bits); }
label_218d30:
    // 0x218d30: 0x3c02003c
    ctx->pc = 0x218d30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218d34: 0x8c42cf18
    ctx->pc = 0x218d34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954776)));
    // 0x218d38: 0x3c030080
    ctx->pc = 0x218d38u;
    SET_GPR_U32(ctx, 3, ((uint32_t)128 << 16));
    // 0x218d3c: 0x431024
    ctx->pc = 0x218d3cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218d40: 0x10400007
    ctx->pc = 0x218D40u;
    {
        const bool branch_taken_0x218d40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x218D44u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x218d40) {
            ctx->pc = 0x218D60u;
            goto label_218d60;
        }
    }
    ctx->pc = 0x218D48u;
    // 0x218d48: 0xc440d150
    ctx->pc = 0x218d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218d4c: 0x3c013d4c
    ctx->pc = 0x218d4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15692 << 16));
    // 0x218d50: 0x3421cccd
    ctx->pc = 0x218d50u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x218d54: 0x44810800
    ctx->pc = 0x218d54u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x218d58: 0x46010001
    ctx->pc = 0x218d58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x218d5c: 0xe440d150
    ctx->pc = 0x218d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294955344), bits); }
label_218d60:
    // 0x218d60: 0x3c020031
    ctx->pc = 0x218d60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x218d64: 0xdc420e28
    ctx->pc = 0x218d64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x218d68: 0x30420001
    ctx->pc = 0x218d68u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x218d6c: 0x2103c
    ctx->pc = 0x218d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x218d70: 0x2103f
    ctx->pc = 0x218d70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x218d74: 0x1040000b
    ctx->pc = 0x218D74u;
    {
        const bool branch_taken_0x218d74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x218D78u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x218d74) {
            ctx->pc = 0x218DA4u;
            goto label_218da4;
        }
    }
    ctx->pc = 0x218D7Cu;
    // 0x218d7c: 0x3c03003c
    ctx->pc = 0x218d7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x218d80: 0x8c44d0ac
    ctx->pc = 0x218d80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294955180)));
    // 0x218d84: 0x2405fffe
    ctx->pc = 0x218d84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x218d88: 0x8c66cf28
    ctx->pc = 0x218d88u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4294954792)));
    // 0x218d8c: 0xc0b4126
    ctx->pc = 0x218D8Cu;
    SET_GPR_U32(ctx, 31, 0x218D94u);
    ctx->pc = 0x218D90u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0498u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAltTex_0x2d0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218D94u; }
    }
    if (ctx->pc != 0x218D94u) { return; }
    ctx->pc = 0x218D94u;
    // 0x218d94: 0x3c03003c
    ctx->pc = 0x218d94u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x218d98: 0x24020001
    ctx->pc = 0x218d98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x218d9c: 0x1000000b
    ctx->pc = 0x218D9Cu;
    {
        const bool branch_taken_0x218d9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x218DA0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954796), GPR_U32(ctx, 2));
        if (branch_taken_0x218d9c) {
            ctx->pc = 0x218DCCu;
            goto label_218dcc;
        }
    }
    ctx->pc = 0x218DA4u;
label_218da4:
    // 0x218da4: 0x3c10003c
    ctx->pc = 0x218da4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x218da8: 0x8e02cf2c
    ctx->pc = 0x218da8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294954796)));
    // 0x218dac: 0x10400007
    ctx->pc = 0x218DACu;
    {
        const bool branch_taken_0x218dac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x218DB0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x218dac) {
            ctx->pc = 0x218DCCu;
            goto label_218dcc;
        }
    }
    ctx->pc = 0x218DB4u;
    // 0x218db4: 0x8c44d0ac
    ctx->pc = 0x218db4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294955180)));
    // 0x218db8: 0x2405ffff
    ctx->pc = 0x218db8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x218dbc: 0x302d
    ctx->pc = 0x218dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218dc0: 0xc0b4126
    ctx->pc = 0x218DC0u;
    SET_GPR_U32(ctx, 31, 0x218DC8u);
    ctx->pc = 0x218DC4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0498u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAltTex_0x2d0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218DC8u; }
    }
    if (ctx->pc != 0x218DC8u) { return; }
    ctx->pc = 0x218DC8u;
    // 0x218dc8: 0xae00cf2c
    ctx->pc = 0x218dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294954796), GPR_U32(ctx, 0));
label_218dcc:
    // 0x218dcc: 0x3c02003c
    ctx->pc = 0x218dccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218dd0: 0x8c42cf4c
    ctx->pc = 0x218dd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954828)));
    // 0x218dd4: 0x18400018
    ctx->pc = 0x218DD4u;
    {
        const bool branch_taken_0x218dd4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x218DD8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x218dd4) {
            ctx->pc = 0x218E38u;
            goto label_218e38;
        }
    }
    ctx->pc = 0x218DDCu;
    // 0x218ddc: 0x3c14003a
    ctx->pc = 0x218ddcu;
    SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
    // 0x218de0: 0x3c130032
    ctx->pc = 0x218de0u;
    SET_GPR_U32(ctx, 19, ((uint32_t)50 << 16));
    // 0x218de4: 0x3c1200ff
    ctx->pc = 0x218de4u;
    SET_GPR_U32(ctx, 18, ((uint32_t)255 << 16));
    // 0x218de8: 0x3652ff00
    ctx->pc = 0x218de8u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 65280));
    // 0x218dec: 0x3c11003c
    ctx->pc = 0x218decu;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
label_218df0:
    // 0x218df0: 0x3a0202d
    ctx->pc = 0x218df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218df4: 0x26856078
    ctx->pc = 0x218df4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 20), 24696));
    // 0x218df8: 0xc0b6252
    ctx->pc = 0x218DF8u;
    SET_GPR_U32(ctx, 31, 0x218E00u);
    ctx->pc = 0x218DFCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E00u; }
    }
    if (ctx->pc != 0x218E00u) { return; }
    ctx->pc = 0x218E00u;
    // 0x218e00: 0x8e62f8d4
    ctx->pc = 0x218e00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294965460)));
    // 0x218e04: 0x3c0400ff
    ctx->pc = 0x218e04u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x218e08: 0x3484ffff
    ctx->pc = 0x218e08u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x218e0c: 0x2021026
    ctx->pc = 0x218e0cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x218e10: 0x242200a
    ctx->pc = 0x218e10u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 18));
    // 0x218e14: 0x2a0282d
    ctx->pc = 0x218e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218e18: 0x2c0302d
    ctx->pc = 0x218e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218e1c: 0xc0b4724
    ctx->pc = 0x218E1Cu;
    SET_GPR_U32(ctx, 31, 0x218E24u);
    ctx->pc = 0x218E20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E24u; }
    }
    if (ctx->pc != 0x218E24u) { return; }
    ctx->pc = 0x218E24u;
    // 0x218e24: 0x26100001
    ctx->pc = 0x218e24u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x218e28: 0x8e22cf4c
    ctx->pc = 0x218e28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294954828)));
    // 0x218e2c: 0x202102a
    ctx->pc = 0x218e2cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x218e30: 0x1440ffef
    ctx->pc = 0x218E30u;
    {
        const bool branch_taken_0x218e30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x218E34u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 3));
        if (branch_taken_0x218e30) {
            ctx->pc = 0x218DF0u;
            goto label_218df0;
        }
    }
    ctx->pc = 0x218E38u;
label_218e38:
    // 0x218e38: 0x3c0400ff
    ctx->pc = 0x218e38u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x218e3c: 0xc0b46e2
    ctx->pc = 0x218E3Cu;
    SET_GPR_U32(ctx, 31, 0x218E44u);
    ctx->pc = 0x218E40u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    ctx->pc = 0x2D1B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        text_set_color_0x2d1b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E44u; }
    }
    if (ctx->pc != 0x218E44u) { return; }
    ctx->pc = 0x218E44u;
    // 0x218e44: 0x13c00015
    ctx->pc = 0x218E44u;
    {
        const bool branch_taken_0x218e44 = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        ctx->pc = 0x218E48u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        if (branch_taken_0x218e44) {
            ctx->pc = 0x218E9Cu;
            goto label_218e9c;
        }
    }
    ctx->pc = 0x218E4Cu;
    // 0x218e4c: 0x3c020036
    ctx->pc = 0x218e4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x218e50: 0x8c42dee0
    ctx->pc = 0x218e50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x218e54: 0x8c430038
    ctx->pc = 0x218e54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x218e58: 0x3c020032
    ctx->pc = 0x218e58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x218e5c: 0x8c42f8d0
    ctx->pc = 0x218e5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965456)));
    // 0x218e60: 0x21100
    ctx->pc = 0x218e60u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x218e64: 0x621821
    ctx->pc = 0x218e64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218e68: 0x8c700004
    ctx->pc = 0x218e68u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x218e6c: 0x82020020
    ctx->pc = 0x218e6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x218e70: 0x1040000a
    ctx->pc = 0x218E70u;
    {
        const bool branch_taken_0x218e70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x218E74u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 32));
        if (branch_taken_0x218e70) {
            ctx->pc = 0x218E9Cu;
            goto label_218e9c;
        }
    }
    ctx->pc = 0x218E78u;
    // 0x218e78: 0xc0bf306
    ctx->pc = 0x218E78u;
    SET_GPR_U32(ctx, 31, 0x218E80u);
    ctx->pc = 0x218E7Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E80u; }
    }
    if (ctx->pc != 0x218E80u) { return; }
    ctx->pc = 0x218E80u;
    // 0x218e80: 0x2405003d
    ctx->pc = 0x218e80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 61));
    // 0x218e84: 0x3c0400ff
    ctx->pc = 0x218e84u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x218e88: 0x3484ff00
    ctx->pc = 0x218e88u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65280));
    // 0x218e8c: 0xa22823
    ctx->pc = 0x218e8cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x218e90: 0x24060003
    ctx->pc = 0x218e90u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x218e94: 0xc0b4724
    ctx->pc = 0x218E94u;
    SET_GPR_U32(ctx, 31, 0x218E9Cu);
    ctx->pc = 0x218E98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E9Cu; }
    }
    if (ctx->pc != 0x218E9Cu) { return; }
    ctx->pc = 0x218E9Cu;
label_218e9c:
    // 0x218e9c: 0x27b10040
    ctx->pc = 0x218e9cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 64));
    // 0x218ea0: 0x3c10003c
    ctx->pc = 0x218ea0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x218ea4: 0x2610d108
    ctx->pc = 0x218ea4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294955272));
    // 0x218ea8: 0xc0be862
    ctx->pc = 0x218EA8u;
    SET_GPR_U32(ctx, 31, 0x218EB0u);
    ctx->pc = 0x218EACu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218EB0u; }
    }
    if (ctx->pc != 0x218EB0u) { return; }
    ctx->pc = 0x218EB0u;
    // 0x218eb0: 0x40302d
    ctx->pc = 0x218eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218eb4: 0x86020014
    ctx->pc = 0x218eb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x218eb8: 0x13c00009
    ctx->pc = 0x218EB8u;
    {
        const bool branch_taken_0x218eb8 = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        ctx->pc = 0x218EBCu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x218eb8) {
            ctx->pc = 0x218EE0u;
            goto label_218ee0;
        }
    }
    ctx->pc = 0x218EC0u;
    // 0x218ec0: 0x3c02003c
    ctx->pc = 0x218ec0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218ec4: 0x8c42d100
    ctx->pc = 0x218ec4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955264)));
    // 0x218ec8: 0x8fc40000
    ctx->pc = 0x218ec8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x218ecc: 0x24030030
    ctx->pc = 0x218eccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
    // 0x218ed0: 0x431018
    ctx->pc = 0x218ed0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x218ed4: 0x441021
    ctx->pc = 0x218ed4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x218ed8: 0x10000002
    ctx->pc = 0x218ED8u;
    {
        const bool branch_taken_0x218ed8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x218EDCu;
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
        if (branch_taken_0x218ed8) {
            ctx->pc = 0x218EE4u;
            goto label_218ee4;
        }
    }
    ctx->pc = 0x218EE0u;
label_218ee0:
    // 0x218ee0: 0x402d
    ctx->pc = 0x218ee0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218ee4:
    // 0x218ee4: 0x220202d
    ctx->pc = 0x218ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218ee8: 0x3c05003a
    ctx->pc = 0x218ee8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x218eec: 0xc0b6252
    ctx->pc = 0x218EECu;
    SET_GPR_U32(ctx, 31, 0x218EF4u);
    ctx->pc = 0x218EF0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24704));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218EF4u; }
    }
    if (ctx->pc != 0x218EF4u) { return; }
    ctx->pc = 0x218EF4u;
    // 0x218ef4: 0x27b10040
    ctx->pc = 0x218ef4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 64));
    // 0x218ef8: 0x24040002
    ctx->pc = 0x218ef8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x218efc: 0x2405002b
    ctx->pc = 0x218efcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 43));
    // 0x218f00: 0xc0b46ea
    ctx->pc = 0x218F00u;
    SET_GPR_U32(ctx, 31, 0x218F08u);
    ctx->pc = 0x218F04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1BA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechof_0x2d1ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F08u; }
    }
    if (ctx->pc != 0x218F08u) { return; }
    ctx->pc = 0x218F08u;
    // 0x218f08: 0x3c02003c
    ctx->pc = 0x218f08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218f0c: 0x2450d0a0
    ctx->pc = 0x218f0cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294955168));
    // 0x218f10: 0xc0be862
    ctx->pc = 0x218F10u;
    SET_GPR_U32(ctx, 31, 0x218F18u);
    ctx->pc = 0x218F14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F18u; }
    }
    if (ctx->pc != 0x218F18u) { return; }
    ctx->pc = 0x218F18u;
    // 0x218f18: 0x40b02d
    ctx->pc = 0x218f18u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f1c: 0xc0be862
    ctx->pc = 0x218F1Cu;
    SET_GPR_U32(ctx, 31, 0x218F24u);
    ctx->pc = 0x218F20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F24u; }
    }
    if (ctx->pc != 0x218F24u) { return; }
    ctx->pc = 0x218F24u;
    // 0x218f24: 0x40a82d
    ctx->pc = 0x218f24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f28: 0xc0be862
    ctx->pc = 0x218F28u;
    SET_GPR_U32(ctx, 31, 0x218F30u);
    ctx->pc = 0x218F2Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F30u; }
    }
    if (ctx->pc != 0x218F30u) { return; }
    ctx->pc = 0x218F30u;
    // 0x218f30: 0x40a02d
    ctx->pc = 0x218f30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f34: 0x3c02003c
    ctx->pc = 0x218f34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218f38: 0x2450d090
    ctx->pc = 0x218f38u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294955152));
    // 0x218f3c: 0xc0be862
    ctx->pc = 0x218F3Cu;
    SET_GPR_U32(ctx, 31, 0x218F44u);
    ctx->pc = 0x218F40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F44u; }
    }
    if (ctx->pc != 0x218F44u) { return; }
    ctx->pc = 0x218F44u;
    // 0x218f44: 0x40982d
    ctx->pc = 0x218f44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f48: 0xc0be862
    ctx->pc = 0x218F48u;
    SET_GPR_U32(ctx, 31, 0x218F50u);
    ctx->pc = 0x218F4Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F50u; }
    }
    if (ctx->pc != 0x218F50u) { return; }
    ctx->pc = 0x218F50u;
    // 0x218f50: 0x40902d
    ctx->pc = 0x218f50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f54: 0xc0be862
    ctx->pc = 0x218F54u;
    SET_GPR_U32(ctx, 31, 0x218F5Cu);
    ctx->pc = 0x218F58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F5Cu; }
    }
    if (ctx->pc != 0x218F5Cu) { return; }
    ctx->pc = 0x218F5Cu;
    // 0x218f5c: 0x220202d
    ctx->pc = 0x218f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f60: 0x3c05003a
    ctx->pc = 0x218f60u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x218f64: 0x24a560a8
    ctx->pc = 0x218f64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24744));
    // 0x218f68: 0x2c0302d
    ctx->pc = 0x218f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f6c: 0x2a0382d
    ctx->pc = 0x218f6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f70: 0x280402d
    ctx->pc = 0x218f70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f74: 0x260482d
    ctx->pc = 0x218f74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f78: 0x240502d
    ctx->pc = 0x218f78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f7c: 0xc0b6252
    ctx->pc = 0x218F7Cu;
    SET_GPR_U32(ctx, 31, 0x218F84u);
    ctx->pc = 0x218F80u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F84u; }
    }
    if (ctx->pc != 0x218F84u) { return; }
    ctx->pc = 0x218F84u;
    // 0x218f84: 0x24040002
    ctx->pc = 0x218f84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x218f88: 0x2405002c
    ctx->pc = 0x218f88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 44));
    // 0x218f8c: 0xc0b46ea
    ctx->pc = 0x218F8Cu;
    SET_GPR_U32(ctx, 31, 0x218F94u);
    ctx->pc = 0x218F90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1BA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechof_0x2d1ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F94u; }
    }
    if (ctx->pc != 0x218F94u) { return; }
    ctx->pc = 0x218F94u;
    // 0x218f94: 0xc0b46e2
    ctx->pc = 0x218F94u;
    SET_GPR_U32(ctx, 31, 0x218F9Cu);
    ctx->pc = 0x218F98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 128)));
    ctx->pc = 0x2D1B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        text_set_color_0x2d1b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F9Cu; }
    }
    if (ctx->pc != 0x218F9Cu) { return; }
    ctx->pc = 0x218F9Cu;
    // 0x218f9c: 0x12e00003
    ctx->pc = 0x218F9Cu;
    {
        const bool branch_taken_0x218f9c = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        if (branch_taken_0x218f9c) {
            ctx->pc = 0x218FACu;
            goto label_218fac;
        }
    }
    ctx->pc = 0x218FA4u;
    // 0x218fa4: 0xc0860c2
    ctx->pc = 0x218FA4u;
    SET_GPR_U32(ctx, 31, 0x218FACu);
    ctx->pc = 0x218FA8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x218308u;
    {
        const uint32_t __entryPc = ctx->pc;
        DispAnimMenu1_0x218308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218FACu; }
    }
    if (ctx->pc != 0x218FACu) { return; }
    ctx->pc = 0x218FACu;
label_218fac:
    // 0x218fac: 0x13c00004
    ctx->pc = 0x218FACu;
    {
        const bool branch_taken_0x218fac = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        ctx->pc = 0x218FB0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x218fac) {
            ctx->pc = 0x218FC0u;
            goto label_218fc0;
        }
    }
    ctx->pc = 0x218FB4u;
    // 0x218fb4: 0xc08611c
    ctx->pc = 0x218FB4u;
    SET_GPR_U32(ctx, 31, 0x218FBCu);
    ctx->pc = 0x218FB8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x218470u;
    {
        const uint32_t __entryPc = ctx->pc;
        DispAnimMenu2_0x218470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218FBCu; }
    }
    if (ctx->pc != 0x218FBCu) { return; }
    ctx->pc = 0x218FBCu;
    // 0x218fbc: 0x3c02003c
    ctx->pc = 0x218fbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_218fc0:
    // 0x218fc0: 0x8c42cef8
    ctx->pc = 0x218fc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954744)));
    // 0x218fc4: 0x3c030800
    ctx->pc = 0x218fc4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)2048 << 16));
    // 0x218fc8: 0x431024
    ctx->pc = 0x218fc8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218fcc: 0x50400008
    ctx->pc = 0x218FCCu;
    {
        const bool branch_taken_0x218fcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x218fcc) {
            ctx->pc = 0x218FD0u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x218FF0u;
            goto label_218ff0;
        }
    }
    ctx->pc = 0x218FD4u;
    // 0x218fd4: 0xc0b4026
    ctx->pc = 0x218FD4u;
    SET_GPR_U32(ctx, 31, 0x218FDCu);
    ctx->pc = 0x2D0098u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeInit_0x2d0098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218FDCu; }
    }
    if (ctx->pc != 0x218FDCu) { return; }
    ctx->pc = 0x218FDCu;
    // 0x218fdc: 0x3c02003c
    ctx->pc = 0x218fdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218fe0: 0xac40d0ac
    ctx->pc = 0x218fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955180), GPR_U32(ctx, 0));
    // 0x218fe4: 0x3c02003c
    ctx->pc = 0x218fe4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218fe8: 0xac40d0b0
    ctx->pc = 0x218fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955184), GPR_U32(ctx, 0));
    // 0x218fec: 0x24020001
    ctx->pc = 0x218fecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_218ff0:
    // 0x218ff0: 0xdfbf0120
    ctx->pc = 0x218ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x218ff4: 0xdfbe0110
    ctx->pc = 0x218ff4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x218ff8: 0xdfb70100
    ctx->pc = 0x218ff8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x218ffc: 0xdfb600f0
    ctx->pc = 0x218ffcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x219000: 0xdfb500e0
    ctx->pc = 0x219000u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x219004: 0xdfb400d0
    ctx->pc = 0x219004u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x219008: 0xdfb300c0
    ctx->pc = 0x219008u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21900c: 0xdfb200b0
    ctx->pc = 0x21900cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x219010: 0xdfb100a0
    ctx->pc = 0x219010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x219014: 0xdfb00090
    ctx->pc = 0x219014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x219018: 0x3e00008
    ctx->pc = 0x219018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21901Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2186A8u: goto label_2186a8;
            case 0x2186C4u: goto label_2186c4;
            case 0x218728u: goto label_218728;
            case 0x21874Cu: goto label_21874c;
            case 0x21880Cu: goto label_21880c;
            case 0x218858u: goto label_218858;
            case 0x21886Cu: goto label_21886c;
            case 0x218870u: goto label_218870;
            case 0x218890u: goto label_218890;
            case 0x2188E8u: goto label_2188e8;
            case 0x2188F4u: goto label_2188f4;
            case 0x218940u: goto label_218940;
            case 0x218998u: goto label_218998;
            case 0x21899Cu: goto label_21899c;
            case 0x2189E4u: goto label_2189e4;
            case 0x2189E8u: goto label_2189e8;
            case 0x218A60u: goto label_218a60;
            case 0x218A64u: goto label_218a64;
            case 0x218A88u: goto label_218a88;
            case 0x218AC0u: goto label_218ac0;
            case 0x218AE0u: goto label_218ae0;
            case 0x218AFCu: goto label_218afc;
            case 0x218B1Cu: goto label_218b1c;
            case 0x218B28u: goto label_218b28;
            case 0x218B3Cu: goto label_218b3c;
            case 0x218BB4u: goto label_218bb4;
            case 0x218BD4u: goto label_218bd4;
            case 0x218BF0u: goto label_218bf0;
            case 0x218BF4u: goto label_218bf4;
            case 0x218C24u: goto label_218c24;
            case 0x218C5Cu: goto label_218c5c;
            case 0x218C9Cu: goto label_218c9c;
            case 0x218CA0u: goto label_218ca0;
            case 0x218D30u: goto label_218d30;
            case 0x218D60u: goto label_218d60;
            case 0x218DA4u: goto label_218da4;
            case 0x218DCCu: goto label_218dcc;
            case 0x218DF0u: goto label_218df0;
            case 0x218E38u: goto label_218e38;
            case 0x218E9Cu: goto label_218e9c;
            case 0x218EE0u: goto label_218ee0;
            case 0x218EE4u: goto label_218ee4;
            case 0x218FACu: goto label_218fac;
            case 0x218FC0u: goto label_218fc0;
            case 0x218FF0u: goto label_218ff0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x219020u;
}
