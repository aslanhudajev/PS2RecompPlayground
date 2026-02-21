#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LogfileCreate
// Address: 0x2d2840 - 0x2d28c4
void LogfileCreate_0x2d2840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d2840u;

    // 0x2d2840: 0x27bdffb0
    ctx->pc = 0x2d2840u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d2844: 0xffbf0040
    ctx->pc = 0x2d2844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d2848: 0xffb10030
    ctx->pc = 0x2d2848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2d284c: 0xffb00020
    ctx->pc = 0x2d284cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d2850: 0x80882d
    ctx->pc = 0x2d2850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2854: 0xafa00008
    ctx->pc = 0x2d2854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2d2858: 0x24020001
    ctx->pc = 0x2d2858u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d285c: 0xafa20004
    ctx->pc = 0x2d285cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d2860: 0xafa00014
    ctx->pc = 0x2d2860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2d2864: 0xc0c0d78
    ctx->pc = 0x2D2864u;
    SET_GPR_U32(ctx, 31, 0x2D286Cu);
    ctx->pc = 0x2D2868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3035E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x3035e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D286Cu; }
    }
    if (ctx->pc != 0x2D286Cu) { return; }
    ctx->pc = 0x2D286Cu;
    // 0x2d286c: 0x3c03003a
    ctx->pc = 0x2d286cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2d2870: 0xac621d10
    ctx->pc = 0x2d2870u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7440), GPR_U32(ctx, 2));
    // 0x2d2874: 0xc0c0d80
    ctx->pc = 0x2D2874u;
    SET_GPR_U32(ctx, 31, 0x2D287Cu);
    ctx->pc = 0x2D2878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303600u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x303600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D287Cu; }
    }
    if (ctx->pc != 0x2D287Cu) { return; }
    ctx->pc = 0x2D287Cu;
    // 0x2d287c: 0x3c10003a
    ctx->pc = 0x2d287cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2d2880: 0x26041c00
    ctx->pc = 0x2d2880u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 7168));
    // 0x2d2884: 0xc0bf2c1
    ctx->pc = 0x2D2884u;
    SET_GPR_U32(ctx, 31, 0x2D288Cu);
    ctx->pc = 0x2D2888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCB04u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x2fcb04(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D288Cu; }
    }
    if (ctx->pc != 0x2D288Cu) { return; }
    ctx->pc = 0x2D288Cu;
    // 0x2d288c: 0x26041c00
    ctx->pc = 0x2d288cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 7168));
    // 0x2d2890: 0xc0c1b06
    ctx->pc = 0x2D2890u;
    SET_GPR_U32(ctx, 31, 0x2D2898u);
    ctx->pc = 0x2D2894u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1538));
    ctx->pc = 0x306C18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x306c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2898u; }
    }
    if (ctx->pc != 0x2D2898u) { return; }
    ctx->pc = 0x2D2898u;
    // 0x2d2898: 0x40202d
    ctx->pc = 0x2d2898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d289c: 0x3c02003a
    ctx->pc = 0x2d289cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d28a0: 0x4800003
    ctx->pc = 0x2D28A0u;
    {
        const bool branch_taken_0x2d28a0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2D28A4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 7160), GPR_U32(ctx, 4));
        if (branch_taken_0x2d28a0) {
            ctx->pc = 0x2D28B0u;
            goto label_2d28b0;
        }
    }
    ctx->pc = 0x2D28A8u;
    // 0x2d28a8: 0xc0c1b76
    ctx->pc = 0x2D28A8u;
    SET_GPR_U32(ctx, 31, 0x2D28B0u);
    ctx->pc = 0x306DD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x306dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D28B0u; }
    }
    if (ctx->pc != 0x2D28B0u) { return; }
    ctx->pc = 0x2D28B0u;
label_2d28b0:
    // 0x2d28b0: 0xdfbf0040
    ctx->pc = 0x2d28b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d28b4: 0xdfb10030
    ctx->pc = 0x2d28b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d28b8: 0xdfb00020
    ctx->pc = 0x2d28b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d28bc: 0x3e00008
    ctx->pc = 0x2D28BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D28C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D28B0u: goto label_2d28b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D28C4u;
}
