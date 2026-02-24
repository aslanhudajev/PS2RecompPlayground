#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#include <cstdio>

// Function: moviePlay
// Address: 0x10c438 - 0x10c4b0
void moviePlay_0x10c438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    std::fprintf(stderr, "[moviePlay] ENTER  a0(filename)=0x%08x  a1(flag)=0x%08x\n",
                 GPR_U32(ctx, 4), GPR_U32(ctx, 5));

    ctx->pc = 0x10c438u;

    // 0x10c438: 0x27bdffe0
    ctx->pc = 0x10c438u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10c43c: 0xaf858408
    ctx->pc = 0x10c43cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935560), GPR_U32(ctx, 5));
    // 0x10c440: 0xffb00000
    ctx->pc = 0x10c440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c444: 0x80802d
    ctx->pc = 0x10c444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c448: 0xffbf0010
    ctx->pc = 0x10c448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c44c: 0xaf8083f8
    ctx->pc = 0x10c44cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935544), GPR_U32(ctx, 0));
    // 0x10c450: 0xc0430fa
    ctx->pc = 0x10C450u;
    SET_GPR_U32(ctx, 31, 0x10C458u);
    ctx->pc = 0x10C454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10C3E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memTest_0x10c3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C458u; }
    }
    if (ctx->pc != 0x10C458u) { return; }
    ctx->pc = 0x10C458u;
    // 0x10c458: 0x3c080011
    ctx->pc = 0x10c458u;
    SET_GPR_S32(ctx, 8, ((uint32_t)17 << 16));
    // 0x10c45c: 0x200202d
    ctx->pc = 0x10c45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c460: 0x302d
    ctx->pc = 0x10c460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c464: 0x382d
    ctx->pc = 0x10c464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c468: 0x2508c4b0
    ctx->pc = 0x10c468u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294952112));
    // 0x10c46c: 0xc0462d8
    ctx->pc = 0x10C46Cu;
    SET_GPR_U32(ctx, 31, 0x10C474u);
    ctx->pc = 0x10C470u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x118B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        playmovie_0x118b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C474u; }
    }
    if (ctx->pc != 0x10C474u) { std::fprintf(stderr, "[moviePlay] playmovie did not return normally, pc=0x%08x\n", ctx->pc); return; }
    std::fprintf(stderr, "[moviePlay] playmovie returned, calling memTest(1)\n");
    ctx->pc = 0x10C474u;
    // 0x10c474: 0xc0430fa
    ctx->pc = 0x10C474u;
    SET_GPR_U32(ctx, 31, 0x10C47Cu);
    ctx->pc = 0x10C478u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10C3E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memTest_0x10c3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C47Cu; }
    }
    if (ctx->pc != 0x10C47Cu) { return; }
    std::fprintf(stderr, "[moviePlay] memTest(1) returned, calling reInitialiseDrawDisplay\n");
    ctx->pc = 0x10C47Cu;
    // 0x10c47c: 0xc040b2e
    ctx->pc = 0x10C47Cu;
    SET_GPR_U32(ctx, 31, 0x10C484u);
    ctx->pc = 0x102CB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        reInitialiseDrawDisplay_0x102cb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C484u; }
    }
    if (ctx->pc != 0x10C484u) { return; }
    std::fprintf(stderr, "[moviePlay] reInitialiseDrawDisplay returned, calling memTest(2)\n");
    ctx->pc = 0x10C484u;
    // 0x10c484: 0xc0430fa
    ctx->pc = 0x10C484u;
    SET_GPR_U32(ctx, 31, 0x10C48Cu);
    ctx->pc = 0x10C488u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x10C3E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memTest_0x10c3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C48Cu; }
    }
    if (ctx->pc != 0x10C48Cu) { return; }
    ctx->pc = 0x10C48Cu;
    // 0x10c48c: 0x3c040017
    ctx->pc = 0x10c48cu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10c490: 0x200282d
    ctx->pc = 0x10c490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c494: 0xc04ace4
    ctx->pc = 0x10C494u;
    SET_GPR_U32(ctx, 31, 0x10C49Cu);
    ctx->pc = 0x10C498u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24304));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C49Cu; }
    }
    if (ctx->pc != 0x10C49Cu) { return; }
    ctx->pc = 0x10C49Cu;
    // 0x10c49c: 0xdfbf0010
    ctx->pc = 0x10c49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c4a0: 0x24040003
    ctx->pc = 0x10c4a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x10c4a4: 0xdfb00000
    ctx->pc = 0x10c4a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c4a8: 0x80430fa
    std::fprintf(stderr, "[moviePlay] EXIT (tail-calling memTest(3))\n");
    ctx->pc = 0x10C4A8u;
    ctx->pc = 0x10C4ACu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x10C3E8u;
    memTest_0x10c3e8(rdram, ctx, runtime); return;
    ctx->pc = 0x10C4B0u;
}
