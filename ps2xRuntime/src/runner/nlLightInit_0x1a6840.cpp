#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlLightInit
// Address: 0x1a6840 - 0x1a69a4
void nlLightInit_0x1a6840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlLightInit");


    ctx->pc = 0x1a6840u;

    // 0x1a6840: 0x27bdff20
    ctx->pc = 0x1a6840u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1a6844: 0x7fbf0000
    ctx->pc = 0x1a6844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a6848: 0x3c010030
    ctx->pc = 0x1a6848u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a684c: 0xac203aa0
    ctx->pc = 0x1a684cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15008), GPR_U32(ctx, 0));
    // 0x1a6850: 0x3c010030
    ctx->pc = 0x1a6850u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a6854: 0xac203aa4
    ctx->pc = 0x1a6854u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15012), GPR_U32(ctx, 0));
    // 0x1a6858: 0x3c010030
    ctx->pc = 0x1a6858u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a685c: 0xac203aa8
    ctx->pc = 0x1a685cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15016), GPR_U32(ctx, 0));
    // 0x1a6860: 0x3c026c16
    ctx->pc = 0x1a6860u;
    SET_GPR_U32(ctx, 2, ((uint32_t)27670 << 16));
    // 0x1a6864: 0x34428000
    ctx->pc = 0x1a6864u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
    // 0x1a6868: 0x3c010030
    ctx->pc = 0x1a6868u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a686c: 0xac223aac
    ctx->pc = 0x1a686cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15020), GPR_U32(ctx, 2));
    // 0x1a6870: 0x3c021400
    ctx->pc = 0x1a6870u;
    SET_GPR_U32(ctx, 2, ((uint32_t)5120 << 16));
    // 0x1a6874: 0x34420006
    ctx->pc = 0x1a6874u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 6));
    // 0x1a6878: 0x3c010030
    ctx->pc = 0x1a6878u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a687c: 0xac223c10
    ctx->pc = 0x1a687cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15376), GPR_U32(ctx, 2));
    // 0x1a6880: 0x3c010030
    ctx->pc = 0x1a6880u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a6884: 0xac203c14
    ctx->pc = 0x1a6884u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15380), GPR_U32(ctx, 0));
    // 0x1a6888: 0x3c010030
    ctx->pc = 0x1a6888u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a688c: 0xac203c18
    ctx->pc = 0x1a688cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15384), GPR_U32(ctx, 0));
    // 0x1a6890: 0x3c010030
    ctx->pc = 0x1a6890u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a6894: 0x3c020026
    ctx->pc = 0x1a6894u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1a6898: 0xac203c1c
    ctx->pc = 0x1a6898u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15388), GPR_U32(ctx, 0));
    // 0x1a689c: 0x2445f340
    ctx->pc = 0x1a689cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294964032));
    // 0x1a68a0: 0x27a40010
    ctx->pc = 0x1a68a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a68a4: 0x2403000d
    ctx->pc = 0x1a68a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 13));
label_1a68a8:
    // 0x1a68a8: 0x78a20000
    ctx->pc = 0x1a68a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a68ac: 0x2463ffff
    ctx->pc = 0x1a68acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a68b0: 0x7c820000
    ctx->pc = 0x1a68b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1a68b4: 0x24a50010
    ctx->pc = 0x1a68b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x1a68b8: 0x24840010
    ctx->pc = 0x1a68b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    // 0x1a68bc: 0x1c60fffa
    ctx->pc = 0x1A68BCu;
    {
        const bool branch_taken_0x1a68bc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1a68bc) {
            ctx->pc = 0x1A68A8u;
            goto label_1a68a8;
        }
    }
    ctx->pc = 0x1A68C4u;
    // 0x1a68c4: 0x3c020030
    ctx->pc = 0x1a68c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a68c8: 0x27a50010
    ctx->pc = 0x1a68c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a68cc: 0x24443d30
    ctx->pc = 0x1a68ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 15664));
    // 0x1a68d0: 0x2403000d
    ctx->pc = 0x1a68d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 13));
label_1a68d4:
    // 0x1a68d4: 0x78a20000
    ctx->pc = 0x1a68d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a68d8: 0x2463ffff
    ctx->pc = 0x1a68d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a68dc: 0x7c820000
    ctx->pc = 0x1a68dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1a68e0: 0x24a50010
    ctx->pc = 0x1a68e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x1a68e4: 0x24840010
    ctx->pc = 0x1a68e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    // 0x1a68e8: 0x1c60fffa
    ctx->pc = 0x1A68E8u;
    {
        const bool branch_taken_0x1a68e8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1a68e8) {
            ctx->pc = 0x1A68D4u;
            goto label_1a68d4;
        }
    }
    ctx->pc = 0x1A68F0u;
    // 0x1a68f0: 0x3c020030
    ctx->pc = 0x1a68f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a68f4: 0x27a50010
    ctx->pc = 0x1a68f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a68f8: 0x24443e00
    ctx->pc = 0x1a68f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 15872));
    // 0x1a68fc: 0x2403000d
    ctx->pc = 0x1a68fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 13));
label_1a6900:
    // 0x1a6900: 0x78a20000
    ctx->pc = 0x1a6900u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a6904: 0x2463ffff
    ctx->pc = 0x1a6904u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a6908: 0x7c820000
    ctx->pc = 0x1a6908u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1a690c: 0x24a50010
    ctx->pc = 0x1a690cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x1a6910: 0x24840010
    ctx->pc = 0x1a6910u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    // 0x1a6914: 0x1c60fffa
    ctx->pc = 0x1A6914u;
    {
        const bool branch_taken_0x1a6914 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1a6914) {
            ctx->pc = 0x1A6900u;
            goto label_1a6900;
        }
    }
    ctx->pc = 0x1A691Cu;
    // 0x1a691c: 0x3c020030
    ctx->pc = 0x1a691cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a6920: 0x27a50010
    ctx->pc = 0x1a6920u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a6924: 0x24443ed0
    ctx->pc = 0x1a6924u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 16080));
    // 0x1a6928: 0x2403000d
    ctx->pc = 0x1a6928u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 13));
label_1a692c:
    // 0x1a692c: 0x78a20000
    ctx->pc = 0x1a692cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a6930: 0x2463ffff
    ctx->pc = 0x1a6930u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a6934: 0x7c820000
    ctx->pc = 0x1a6934u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1a6938: 0x24a50010
    ctx->pc = 0x1a6938u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x1a693c: 0x24840010
    ctx->pc = 0x1a693cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    // 0x1a6940: 0x1c60fffa
    ctx->pc = 0x1A6940u;
    {
        const bool branch_taken_0x1a6940 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1a6940) {
            ctx->pc = 0x1A692Cu;
            goto label_1a692c;
        }
    }
    ctx->pc = 0x1A6948u;
    // 0x1a6948: 0x3c020030
    ctx->pc = 0x1a6948u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a694c: 0x27a50010
    ctx->pc = 0x1a694cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a6950: 0x24443fa0
    ctx->pc = 0x1a6950u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 16288));
    // 0x1a6954: 0x2403000d
    ctx->pc = 0x1a6954u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 13));
label_1a6958:
    // 0x1a6958: 0x78a20000
    ctx->pc = 0x1a6958u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a695c: 0x2463ffff
    ctx->pc = 0x1a695cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a6960: 0x7c820000
    ctx->pc = 0x1a6960u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1a6964: 0x24a50010
    ctx->pc = 0x1a6964u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x1a6968: 0x24840010
    ctx->pc = 0x1a6968u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    // 0x1a696c: 0x1c60fffa
    ctx->pc = 0x1A696Cu;
    {
        const bool branch_taken_0x1a696c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1a696c) {
            ctx->pc = 0x1A6958u;
            goto label_1a6958;
        }
    }
    ctx->pc = 0x1A6974u;
    // 0x1a6974: 0x70002628
    ctx->pc = 0x1a6974u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a6978: 0xc0693a0
    ctx->pc = 0x1A6978u;
    SET_GPR_U32(ctx, 31, 0x1A6980u);
    ctx->pc = 0x1A697Cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937120), GPR_U32(ctx, 0));
    ctx->pc = 0x1A4E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPushMatrix_0x1a4e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6980u; }
        else if (ctx->pc != 0x1A6980u) { ctx->pc = 0x1A6980u; }
    }
    if (ctx->pc != 0x1A6980u) { return; }
    ctx->pc = 0x1A6980u;
    // 0x1a6980: 0xc06c20d
    ctx->pc = 0x1A6980u;
    SET_GPR_U32(ctx, 31, 0x1A6988u);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6988u; }
        else if (ctx->pc != 0x1A6988u) { ctx->pc = 0x1A6988u; }
    }
    if (ctx->pc != 0x1A6988u) { return; }
    ctx->pc = 0x1A6988u;
    // 0x1a6988: 0xc069b48
    ctx->pc = 0x1A6988u;
    SET_GPR_U32(ctx, 31, 0x1A6990u);
    ctx->pc = 0x1A6D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLightViewTrans_0x1a6d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6990u; }
        else if (ctx->pc != 0x1A6990u) { ctx->pc = 0x1A6990u; }
    }
    if (ctx->pc != 0x1A6990u) { return; }
    ctx->pc = 0x1A6990u;
    // 0x1a6990: 0xc069394
    ctx->pc = 0x1A6990u;
    SET_GPR_U32(ctx, 31, 0x1A6998u);
    ctx->pc = 0x1A6994u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A4E50u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPopMatrix_0x1a4e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6998u; }
        else if (ctx->pc != 0x1A6998u) { ctx->pc = 0x1A6998u; }
    }
    if (ctx->pc != 0x1A6998u) { return; }
    ctx->pc = 0x1A6998u;
    // 0x1a6998: 0x7bbf0000
    ctx->pc = 0x1a6998u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a699c: 0x3e00008
    ctx->pc = 0x1A699Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A69A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A68A8u: goto label_1a68a8;
            case 0x1A68D4u: goto label_1a68d4;
            case 0x1A6900u: goto label_1a6900;
            case 0x1A692Cu: goto label_1a692c;
            case 0x1A6958u: goto label_1a6958;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A69A4u;
}
