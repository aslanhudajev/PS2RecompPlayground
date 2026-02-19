#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: rpsInit
// Address: 0x2d48a8 - 0x2d493c
void rpsInit_0x2d48a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d48a8u;

    // 0x2d48a8: 0x27bdffb0
    ctx->pc = 0x2d48a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d48ac: 0xffbf0040
    ctx->pc = 0x2d48acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d48b0: 0xc0c0d34
    ctx->pc = 0x2D48B0u;
    SET_GPR_U32(ctx, 31, 0x2D48B8u);
    ctx->pc = 0x2D48B4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    ctx->pc = 0x3034D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetThreadId_0x3034d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D48B8u; }
    }
    if (ctx->pc != 0x2D48B8u) { return; }
    ctx->pc = 0x2D48B8u;
    // 0x2d48b8: 0x40202d
    ctx->pc = 0x2d48b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d48bc: 0xc0c0d1c
    ctx->pc = 0x2D48BCu;
    SET_GPR_U32(ctx, 31, 0x2D48C4u);
    ctx->pc = 0x2D48C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x303470u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x303470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D48C4u; }
    }
    if (ctx->pc != 0x2D48C4u) { return; }
    ctx->pc = 0x2D48C4u;
    // 0x2d48c4: 0x3c02002d
    ctx->pc = 0x2d48c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
    // 0x2d48c8: 0x244247a0
    ctx->pc = 0x2d48c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18336));
    // 0x2d48cc: 0xafa20004
    ctx->pc = 0x2d48ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d48d0: 0x3c02003d
    ctx->pc = 0x2d48d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d48d4: 0x24422f60
    ctx->pc = 0x2d48d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12128));
    // 0x2d48d8: 0xafa20008
    ctx->pc = 0x2d48d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2d48dc: 0x24024000
    ctx->pc = 0x2d48dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2d48e0: 0xafa2000c
    ctx->pc = 0x2d48e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x2d48e4: 0x24020003
    ctx->pc = 0x2d48e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d48e8: 0xafa20014
    ctx->pc = 0x2d48e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2d48ec: 0x3c02003c
    ctx->pc = 0x2d48ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2d48f0: 0x24423170
    ctx->pc = 0x2d48f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12656));
    // 0x2d48f4: 0xafa20010
    ctx->pc = 0x2d48f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2d48f8: 0xafa00020
    ctx->pc = 0x2d48f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2d48fc: 0xc0c0cf8
    ctx->pc = 0x2D48FCu;
    SET_GPR_U32(ctx, 31, 0x2D4904u);
    ctx->pc = 0x2D4900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3033E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateThread_0x3033e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4904u; }
    }
    if (ctx->pc != 0x2D4904u) { return; }
    ctx->pc = 0x2D4904u;
    // 0x2d4904: 0x3c10003a
    ctx->pc = 0x2d4904u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2d4908: 0xae02238c
    ctx->pc = 0x2d4908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9100), GPR_U32(ctx, 2));
    // 0x2d490c: 0x3c04003b
    ctx->pc = 0x2d490cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2d4910: 0xc0b4a34
    ctx->pc = 0x2D4910u;
    SET_GPR_U32(ctx, 31, 0x2D4918u);
    ctx->pc = 0x2D4914u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31856));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4918u; }
    }
    if (ctx->pc != 0x2D4918u) { return; }
    ctx->pc = 0x2D4918u;
    // 0x2d4918: 0x3c02003a
    ctx->pc = 0x2d4918u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d491c: 0xac4022f8
    ctx->pc = 0x2d491cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8952), GPR_U32(ctx, 0));
    // 0x2d4920: 0x8e04238c
    ctx->pc = 0x2d4920u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 9100)));
    // 0x2d4924: 0xc0c0d00
    ctx->pc = 0x2D4924u;
    SET_GPR_U32(ctx, 31, 0x2D492Cu);
    ctx->pc = 0x2D4928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303400u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartThread_0x303400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D492Cu; }
    }
    if (ctx->pc != 0x2D492Cu) { return; }
    ctx->pc = 0x2D492Cu;
    // 0x2d492c: 0xdfbf0040
    ctx->pc = 0x2d492cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d4930: 0xdfb00030
    ctx->pc = 0x2d4930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4934: 0x3e00008
    ctx->pc = 0x2D4934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4938u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D493Cu;
}
