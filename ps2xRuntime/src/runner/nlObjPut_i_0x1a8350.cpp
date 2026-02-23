#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPut_i
// Address: 0x1a8350 - 0x1a853c
void nlObjPut_i_0x1a8350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPut_i");


    ctx->pc = 0x1a8350u;

    // 0x1a8350: 0x27bdff90
    ctx->pc = 0x1a8350u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a8354: 0x7fbf0060
    ctx->pc = 0x1a8354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1a8358: 0x7fb50050
    ctx->pc = 0x1a8358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a835c: 0x7fb40040
    ctx->pc = 0x1a835cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a8360: 0x7fb30030
    ctx->pc = 0x1a8360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a8364: 0x7fb20020
    ctx->pc = 0x1a8364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a8368: 0x7fb10010
    ctx->pc = 0x1a8368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a836c: 0x70809628
    ctx->pc = 0x1a836cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a8370: 0xc069528
    ctx->pc = 0x1A8370u;
    SET_GPR_U32(ctx, 31, 0x1A8378u);
    ctx->pc = 0x1A8374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8378u; }
        else if (ctx->pc != 0x1A8378u) { ctx->pc = 0x1A8378u; }
    }
    if (ctx->pc != 0x1A8378u) { return; }
    ctx->pc = 0x1A8378u;
    // 0x1a8378: 0x70408628
    ctx->pc = 0x1a8378u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a837c: 0x3c020030
    ctx->pc = 0x1a837cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a8380: 0x24513940
    ctx->pc = 0x1a8380u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 14656));
    // 0x1a8384: 0x8f828a1c
    ctx->pc = 0x1a8384u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937116)));
    // 0x1a8388: 0x10400008
    ctx->pc = 0x1A8388u;
    {
        const bool branch_taken_0x1a8388 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A838Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x1a8388) {
            ctx->pc = 0x1A83ACu;
            goto label_1a83ac;
        }
    }
    ctx->pc = 0x1A8390u;
    // 0x1a8390: 0x70002628
    ctx->pc = 0x1a8390u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a8394: 0xc06c608
    ctx->pc = 0x1A8394u;
    SET_GPR_U32(ctx, 31, 0x1A839Cu);
    ctx->pc = 0x1A8398u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1B1820u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphSetFBA_0x1b1820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A839Cu; }
        else if (ctx->pc != 0x1A839Cu) { ctx->pc = 0x1A839Cu; }
    }
    if (ctx->pc != 0x1A839Cu) { return; }
    ctx->pc = 0x1A839Cu;
    // 0x1a839c: 0x24040200
    ctx->pc = 0x1a839cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 512));
    // 0x1a83a0: 0xc06c608
    ctx->pc = 0x1A83A0u;
    SET_GPR_U32(ctx, 31, 0x1A83A8u);
    ctx->pc = 0x1A83A4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1B1820u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphSetFBA_0x1b1820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A83A8u; }
        else if (ctx->pc != 0x1A83A8u) { ctx->pc = 0x1A83A8u; }
    }
    if (ctx->pc != 0x1A83A8u) { return; }
    ctx->pc = 0x1A83A8u;
    // 0x1a83a8: 0x24040008
    ctx->pc = 0x1a83a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
label_1a83ac:
    // 0x1a83ac: 0xc06a150
    ctx->pc = 0x1A83ACu;
    SET_GPR_U32(ctx, 31, 0x1A83B4u);
    ctx->pc = 0x1A8540u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaWaitFinish_0x1a8540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A83B4u; }
        else if (ctx->pc != 0x1A83B4u) { ctx->pc = 0x1A83B4u; }
    }
    if (ctx->pc != 0x1A83B4u) { return; }
    ctx->pc = 0x1A83B4u;
    // 0x1a83b4: 0x72002628
    ctx->pc = 0x1a83b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a83b8: 0x72202e28
    ctx->pc = 0x1a83b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1a83bc: 0xc06ac36
    ctx->pc = 0x1A83BCu;
    SET_GPR_U32(ctx, 31, 0x1A83C4u);
    ctx->pc = 0x1A83C0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A83C4u; }
        else if (ctx->pc != 0x1A83C4u) { ctx->pc = 0x1A83C4u; }
    }
    if (ctx->pc != 0x1A83C4u) { return; }
    ctx->pc = 0x1A83C4u;
    // 0x1a83c4: 0x260400d0
    ctx->pc = 0x1a83c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 208));
    // 0x1a83c8: 0x262500d0
    ctx->pc = 0x1a83c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 208));
    // 0x1a83cc: 0xc06ac36
    ctx->pc = 0x1A83CCu;
    SET_GPR_U32(ctx, 31, 0x1A83D4u);
    ctx->pc = 0x1A83D0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A83D4u; }
        else if (ctx->pc != 0x1A83D4u) { ctx->pc = 0x1A83D4u; }
    }
    if (ctx->pc != 0x1A83D4u) { return; }
    ctx->pc = 0x1A83D4u;
    // 0x1a83d4: 0xc06bf55
    ctx->pc = 0x1A83D4u;
    SET_GPR_U32(ctx, 31, 0x1A83DCu);
    ctx->pc = 0x1A83D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 144));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A83DCu; }
        else if (ctx->pc != 0x1A83DCu) { ctx->pc = 0x1A83DCu; }
    }
    if (ctx->pc != 0x1A83DCu) { return; }
    ctx->pc = 0x1A83DCu;
    // 0x1a83dc: 0x4bf0e33c
    ctx->pc = 0x1a83dcu;
    ctx->vu0_vf[16] = ctx->vu0_vf[28];
    // 0x1a83e0: 0x4bf1eb3c
    ctx->pc = 0x1a83e0u;
    ctx->vu0_vf[17] = ctx->vu0_vf[29];
    // 0x1a83e4: 0x4bf2f33c
    ctx->pc = 0x1a83e4u;
    ctx->vu0_vf[18] = ctx->vu0_vf[30];
    // 0x1a83e8: 0x4bf3fb3c
    ctx->pc = 0x1a83e8u;
    ctx->vu0_vf[19] = ctx->vu0_vf[31];
    // 0x1a83ec: 0x3c020030
    ctx->pc = 0x1a83ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a83f0: 0xc06c06f
    ctx->pc = 0x1A83F0u;
    SET_GPR_U32(ctx, 31, 0x1A83F8u);
    ctx->pc = 0x1A83F4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 22000));
    ctx->pc = 0x1B01BCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01BC_0x1b01bc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A83F8u; }
        else if (ctx->pc != 0x1A83F8u) { ctx->pc = 0x1A83F8u; }
    }
    if (ctx->pc != 0x1A83F8u) { return; }
    ctx->pc = 0x1A83F8u;
    // 0x1a83f8: 0xc06bf55
    ctx->pc = 0x1A83F8u;
    SET_GPR_U32(ctx, 31, 0x1A8400u);
    ctx->pc = 0x1A83FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 80));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8400u; }
        else if (ctx->pc != 0x1A8400u) { ctx->pc = 0x1A8400u; }
    }
    if (ctx->pc != 0x1A8400u) { return; }
    ctx->pc = 0x1A8400u;
    // 0x1a8400: 0x8e55002c
    ctx->pc = 0x1a8400u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1a8404: 0x8f8289b8
    ctx->pc = 0x1a8404u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937016)));
    // 0x1a8408: 0x26b3000e
    ctx->pc = 0x1a8408u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 21), 14));
    // 0x1a840c: 0x2a102
    ctx->pc = 0x1a840cu;
    SET_GPR_U32(ctx, 20, SRL32(GPR_U32(ctx, 2), 4));
    // 0x1a8410: 0x293082a
    ctx->pc = 0x1a8410u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 19)));
    // 0x1a8414: 0x54200009
    ctx->pc = 0x1A8414u;
    {
        const bool branch_taken_0x1a8414 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a8414) {
            ctx->pc = 0x1A8418u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 20), 4294967282));
            ctx->pc = 0x1A843Cu;
            goto label_1a843c;
        }
    }
    ctx->pc = 0x1A841Cu;
    // 0x1a841c: 0x260400e0
    ctx->pc = 0x1a841cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 224));
    // 0x1a8420: 0x26450030
    ctx->pc = 0x1a8420u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 48));
    // 0x1a8424: 0xc06ac36
    ctx->pc = 0x1A8424u;
    SET_GPR_U32(ctx, 31, 0x1A842Cu);
    ctx->pc = 0x1A8428u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A842Cu; }
        else if (ctx->pc != 0x1A842Cu) { ctx->pc = 0x1A842Cu; }
    }
    if (ctx->pc != 0x1A842Cu) { return; }
    ctx->pc = 0x1A842Cu;
    // 0x1a842c: 0xc06952c
    ctx->pc = 0x1A842Cu;
    SET_GPR_U32(ctx, 31, 0x1A8434u);
    ctx->pc = 0x1A8430u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8434u; }
        else if (ctx->pc != 0x1A8434u) { ctx->pc = 0x1A8434u; }
    }
    if (ctx->pc != 0x1A8434u) { return; }
    ctx->pc = 0x1A8434u;
    // 0x1a8434: 0x10000029
    ctx->pc = 0x1A8434u;
    {
        const bool branch_taken_0x1a8434 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8438u;
        ctx->vu0_vf[28] = ctx->vu0_vf[16];
        if (branch_taken_0x1a8434) {
            ctx->pc = 0x1A84DCu;
            goto label_1a84dc;
        }
    }
    ctx->pc = 0x1A843Cu;
label_1a843c:
    // 0x1a843c: 0x260400e0
    ctx->pc = 0x1a843cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 224));
    // 0x1a8440: 0x26450030
    ctx->pc = 0x1a8440u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 48));
    // 0x1a8444: 0xc06ac36
    ctx->pc = 0x1A8444u;
    SET_GPR_U32(ctx, 31, 0x1A844Cu);
    ctx->pc = 0x1A8448u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A844Cu; }
        else if (ctx->pc != 0x1A844Cu) { ctx->pc = 0x1A844Cu; }
    }
    if (ctx->pc != 0x1A844Cu) { return; }
    ctx->pc = 0x1A844Cu;
    // 0x1a844c: 0xc06952c
    ctx->pc = 0x1A844Cu;
    SET_GPR_U32(ctx, 31, 0x1A8454u);
    ctx->pc = 0x1A8450u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8454u; }
        else if (ctx->pc != 0x1A8454u) { ctx->pc = 0x1A8454u; }
    }
    if (ctx->pc != 0x1A8454u) { return; }
    ctx->pc = 0x1A8454u;
    // 0x1a8454: 0x2749823
    ctx->pc = 0x1a8454u;
    SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x1a8458: 0x26440030
    ctx->pc = 0x1a8458u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 48));
    // 0x1a845c: 0x151900
    ctx->pc = 0x1a845cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 21), 4));
    // 0x1a8460: 0x1a60001d
    ctx->pc = 0x1A8460u;
    {
        const bool branch_taken_0x1a8460 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1A8464u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        if (branch_taken_0x1a8460) {
            ctx->pc = 0x1A84D8u;
            goto label_1a84d8;
        }
    }
    ctx->pc = 0x1A8468u;
label_1a8468:
    // 0x1a8468: 0x293082a
    ctx->pc = 0x1a8468u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 19)));
    // 0x1a846c: 0x10200004
    ctx->pc = 0x1A846Cu;
    {
        const bool branch_taken_0x1a846c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8470u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a846c) {
            ctx->pc = 0x1A8480u;
            goto label_1a8480;
        }
    }
    ctx->pc = 0x1A8474u;
    // 0x1a8474: 0x10000002
    ctx->pc = 0x1A8474u;
    {
        const bool branch_taken_0x1a8474 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8478u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a8474) {
            ctx->pc = 0x1A8480u;
            goto label_1a8480;
        }
    }
    ctx->pc = 0x1A847Cu;
    // 0x1a847c: 0x7260ae28
    ctx->pc = 0x1a847cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_1a8480:
    // 0x1a8480: 0x3c011001
    ctx->pc = 0x1a8480u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a8484: 0x8c22d000
    ctx->pc = 0x1a8484u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1a8488: 0x30420100
    ctx->pc = 0x1a8488u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1a848c: 0x0
    ctx->pc = 0x1a848cu;
    // NOP
    // 0x1a8490: 0x0
    ctx->pc = 0x1a8490u;
    // NOP
    // 0x1a8494: 0x1440fffa
    ctx->pc = 0x1A8494u;
    {
        const bool branch_taken_0x1a8494 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a8494) {
            ctx->pc = 0x1A8480u;
            goto label_1a8480;
        }
    }
    ctx->pc = 0x1A849Cu;
    // 0x1a849c: 0x72002628
    ctx->pc = 0x1a849cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a84a0: 0x72402e28
    ctx->pc = 0x1a84a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a84a4: 0xc06ac36
    ctx->pc = 0x1A84A4u;
    SET_GPR_U32(ctx, 31, 0x1A84ACu);
    ctx->pc = 0x1A84A8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A84ACu; }
        else if (ctx->pc != 0x1A84ACu) { ctx->pc = 0x1A84ACu; }
    }
    if (ctx->pc != 0x1A84ACu) { return; }
    ctx->pc = 0x1A84ACu;
    // 0x1a84ac: 0xc06952c
    ctx->pc = 0x1A84ACu;
    SET_GPR_U32(ctx, 31, 0x1A84B4u);
    ctx->pc = 0x1A84B0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A84B4u; }
        else if (ctx->pc != 0x1A84B4u) { ctx->pc = 0x1A84B4u; }
    }
    if (ctx->pc != 0x1A84B4u) { return; }
    ctx->pc = 0x1A84B4u;
    // 0x1a84b4: 0x152100
    ctx->pc = 0x1a84b4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 21), 4));
    // 0x1a84b8: 0x4810003
    ctx->pc = 0x1A84B8u;
    {
        const bool branch_taken_0x1a84b8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A84BCu;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        if (branch_taken_0x1a84b8) {
            ctx->pc = 0x1A84C8u;
            goto label_1a84c8;
        }
    }
    ctx->pc = 0x1A84C0u;
    // 0x1a84c0: 0x24830003
    ctx->pc = 0x1a84c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 3));
    // 0x1a84c4: 0x31883
    ctx->pc = 0x1a84c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1a84c8:
    // 0x1a84c8: 0x31880
    ctx->pc = 0x1a84c8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a84cc: 0x2759823
    ctx->pc = 0x1a84ccu;
    SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x1a84d0: 0x1e60ffe5
    ctx->pc = 0x1A84D0u;
    {
        const bool branch_taken_0x1a84d0 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x1A84D4u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        if (branch_taken_0x1a84d0) {
            ctx->pc = 0x1A8468u;
            goto label_1a8468;
        }
    }
    ctx->pc = 0x1A84D8u;
label_1a84d8:
    // 0x1a84d8: 0x4bfc833c
    ctx->pc = 0x1a84d8u;
    ctx->vu0_vf[28] = ctx->vu0_vf[16];
label_1a84dc:
    // 0x1a84dc: 0x4bfd8b3c
    ctx->pc = 0x1a84dcu;
    ctx->vu0_vf[29] = ctx->vu0_vf[17];
    // 0x1a84e0: 0x4bfe933c
    ctx->pc = 0x1a84e0u;
    ctx->vu0_vf[30] = ctx->vu0_vf[18];
    // 0x1a84e4: 0x4bff9b3c
    ctx->pc = 0x1a84e4u;
    ctx->vu0_vf[31] = ctx->vu0_vf[19];
    // 0x1a84e8: 0x8f838a1c
    ctx->pc = 0x1a84e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937116)));
    // 0x1a84ec: 0x10600008
    ctx->pc = 0x1A84ECu;
    {
        const bool branch_taken_0x1a84ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A84F0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
        if (branch_taken_0x1a84ec) {
            ctx->pc = 0x1A8510u;
            goto label_1a8510;
        }
    }
    ctx->pc = 0x1A84F4u;
    // 0x1a84f4: 0x70002628
    ctx->pc = 0x1a84f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a84f8: 0xc06c608
    ctx->pc = 0x1A84F8u;
    SET_GPR_U32(ctx, 31, 0x1A8500u);
    ctx->pc = 0x1A84FCu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B1820u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphSetFBA_0x1b1820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8500u; }
        else if (ctx->pc != 0x1A8500u) { ctx->pc = 0x1A8500u; }
    }
    if (ctx->pc != 0x1A8500u) { return; }
    ctx->pc = 0x1A8500u;
    // 0x1a8500: 0x24040200
    ctx->pc = 0x1a8500u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 512));
    // 0x1a8504: 0xc06c608
    ctx->pc = 0x1A8504u;
    SET_GPR_U32(ctx, 31, 0x1A850Cu);
    ctx->pc = 0x1A8508u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B1820u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphSetFBA_0x1b1820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A850Cu; }
        else if (ctx->pc != 0x1A850Cu) { ctx->pc = 0x1A850Cu; }
    }
    if (ctx->pc != 0x1A850Cu) { return; }
    ctx->pc = 0x1A850Cu;
    // 0x1a850c: 0x3c033f80
    ctx->pc = 0x1a850cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
label_1a8510:
    // 0x1a8510: 0xae23002c
    ctx->pc = 0x1a8510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x1a8514: 0xaf808a1c
    ctx->pc = 0x1a8514u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937116), GPR_U32(ctx, 0));
    // 0x1a8518: 0x7bbf0060
    ctx->pc = 0x1a8518u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a851c: 0x7bb50050
    ctx->pc = 0x1a851cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a8520: 0x7bb40040
    ctx->pc = 0x1a8520u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a8524: 0x7bb30030
    ctx->pc = 0x1a8524u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8528: 0x7bb20020
    ctx->pc = 0x1a8528u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a852c: 0x7bb10010
    ctx->pc = 0x1a852cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8530: 0x7bb00000
    ctx->pc = 0x1a8530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8534: 0x3e00008
    ctx->pc = 0x1A8534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8538u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A83ACu: goto label_1a83ac;
            case 0x1A843Cu: goto label_1a843c;
            case 0x1A8468u: goto label_1a8468;
            case 0x1A8480u: goto label_1a8480;
            case 0x1A84C8u: goto label_1a84c8;
            case 0x1A84D8u: goto label_1a84d8;
            case 0x1A84DCu: goto label_1a84dc;
            case 0x1A8510u: goto label_1a8510;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A853Cu;
}
