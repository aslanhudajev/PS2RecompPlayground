#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpslib_InitHn
// Address: 0x182868 - 0x1828e4
void mpslib_InitHn_0x182868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpslib_InitHn");


    ctx->pc = 0x182868u;

    // 0x182868: 0x27bdffd0
    ctx->pc = 0x182868u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18286c: 0x282d
    ctx->pc = 0x18286cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182870: 0xffb00000
    ctx->pc = 0x182870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182874: 0x24060030
    ctx->pc = 0x182874u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    // 0x182878: 0xffb10010
    ctx->pc = 0x182878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18287c: 0xffbf0020
    ctx->pc = 0x18287cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x182880: 0xc0601e6
    ctx->pc = 0x182880u;
    SET_GPR_U32(ctx, 31, 0x182888u);
    ctx->pc = 0x182884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x180798u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemsetDword_0x180798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182888u; }
        else if (ctx->pc != 0x182888u) { ctx->pc = 0x182888u; }
    }
    if (ctx->pc != 0x182888u) { return; }
    ctx->pc = 0x182888u;
    // 0x182888: 0x24110002
    ctx->pc = 0x182888u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 2));
    // 0x18288c: 0xae110000
    ctx->pc = 0x18288cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x182890: 0xc060982
    ctx->pc = 0x182890u;
    SET_GPR_U32(ctx, 31, 0x182898u);
    ctx->pc = 0x182894u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4));
    ctx->pc = 0x182608u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPSLIB_InitErrInf_0x182608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182898u; }
        else if (ctx->pc != 0x182898u) { ctx->pc = 0x182898u; }
    }
    if (ctx->pc != 0x182898u) { return; }
    ctx->pc = 0x182898u;
    // 0x182898: 0xae110010
    ctx->pc = 0x182898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x18289c: 0xc060a3a
    ctx->pc = 0x18289Cu;
    SET_GPR_U32(ctx, 31, 0x1828A4u);
    ctx->pc = 0x1828A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 20));
    ctx->pc = 0x1828E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpslib_InitPack_0x1828e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1828A4u; }
        else if (ctx->pc != 0x1828A4u) { ctx->pc = 0x1828A4u; }
    }
    if (ctx->pc != 0x1828A4u) { return; }
    ctx->pc = 0x1828A4u;
    // 0x1828a4: 0xc060a40
    ctx->pc = 0x1828A4u;
    SET_GPR_U32(ctx, 31, 0x1828ACu);
    ctx->pc = 0x1828A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 32));
    ctx->pc = 0x182900u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpslib_InitSys_0x182900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1828ACu; }
        else if (ctx->pc != 0x1828ACu) { ctx->pc = 0x1828ACu; }
    }
    if (ctx->pc != 0x1828ACu) { return; }
    ctx->pc = 0x1828ACu;
    // 0x1828ac: 0xc060a40
    ctx->pc = 0x1828ACu;
    SET_GPR_U32(ctx, 31, 0x1828B4u);
    ctx->pc = 0x1828B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x182900u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpslib_InitSys_0x182900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1828B4u; }
        else if (ctx->pc != 0x1828B4u) { ctx->pc = 0x1828B4u; }
    }
    if (ctx->pc != 0x1828B4u) { return; }
    ctx->pc = 0x1828B4u;
    // 0x1828b4: 0xc060a40
    ctx->pc = 0x1828B4u;
    SET_GPR_U32(ctx, 31, 0x1828BCu);
    ctx->pc = 0x1828B8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 96));
    ctx->pc = 0x182900u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpslib_InitSys_0x182900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1828BCu; }
        else if (ctx->pc != 0x1828BCu) { ctx->pc = 0x1828BCu; }
    }
    if (ctx->pc != 0x1828BCu) { return; }
    ctx->pc = 0x1828BCu;
    // 0x1828bc: 0xc060a40
    ctx->pc = 0x1828BCu;
    SET_GPR_U32(ctx, 31, 0x1828C4u);
    ctx->pc = 0x1828C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 128));
    ctx->pc = 0x182900u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpslib_InitSys_0x182900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1828C4u; }
        else if (ctx->pc != 0x1828C4u) { ctx->pc = 0x1828C4u; }
    }
    if (ctx->pc != 0x1828C4u) { return; }
    ctx->pc = 0x1828C4u;
    // 0x1828c4: 0xc060a4a
    ctx->pc = 0x1828C4u;
    SET_GPR_U32(ctx, 31, 0x1828CCu);
    ctx->pc = 0x1828C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 160));
    ctx->pc = 0x182928u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpslib_InitPket_0x182928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1828CCu; }
        else if (ctx->pc != 0x1828CCu) { ctx->pc = 0x1828CCu; }
    }
    if (ctx->pc != 0x1828CCu) { return; }
    ctx->pc = 0x1828CCu;
    // 0x1828cc: 0x200102d
    ctx->pc = 0x1828ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1828d0: 0xdfbf0020
    ctx->pc = 0x1828d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1828d4: 0xdfb10010
    ctx->pc = 0x1828d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1828d8: 0xdfb00000
    ctx->pc = 0x1828d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1828dc: 0x3e00008
    ctx->pc = 0x1828DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1828E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1828E4u;
}
