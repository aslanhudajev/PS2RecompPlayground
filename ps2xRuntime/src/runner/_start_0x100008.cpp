#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// CRT0 _start - from Ghidra decomp of quiz.elf
// Zeroes BSS, InitThread (0x3c), InitThread2 (0x3d), InitSys, FlushCache, EI, main, Exit
void _start_0x100008(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
#ifdef _DEBUG
    PS_LOG_ENTRY("_start_0x100008");
#endif

    const uint32_t __entryPc = ctx->pc;

    // Zero BSS: 0x176580 to 0x74e6b4 (16-byte stores)
    uint32_t bssPtr = 0x176580u;
    const uint32_t bssEnd = 0x74e6b4u;
    while (bssPtr < bssEnd)
    {
        WRITE128(ADD32(bssPtr, 0), GPR_VEC(ctx, 0));
        bssPtr += 16;
    }

    // Set gp = 0x17DAF0
    SET_GPR_U32(ctx, 28, 0x17DAF0u);

    // syscall 0x3c (InitThread): a0=gp, a1=-1, a2=0x100000, a3=0x176000, root=0x1000c0
    SET_GPR_U32(ctx, 4, 0x17DAF0u);
    SET_GPR_S32(ctx, 5, -1);
    SET_GPR_U32(ctx, 6, 0x100000u);
    SET_GPR_U32(ctx, 7, 0x176000u);
    SET_GPR_U32(ctx, 8, 0x1000c0u);
    SET_GPR_U32(ctx, 3, 0x3c);
    runtime->handleSyscall(rdram, ctx, 0u);
    SET_GPR_VEC(ctx, 29, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0))); // sp = v0

    // syscall 0x3d: a0=0x74e6b4, a1=-1
    SET_GPR_U32(ctx, 4, 0x74e6b4u);
    SET_GPR_S32(ctx, 5, -1);
    SET_GPR_U32(ctx, 3, 0x3d);
    runtime->handleSyscall(rdram, ctx, 0u);

    // ps2__InitSys (0x115068)
    SET_GPR_U32(ctx, 4, 0x74e6b4u);
    SET_GPR_S32(ctx, 5, -1);
    ctx->pc = 0x115068u;
    if (runtime->hasFunction(0x115068u))
    {
        auto fn = runtime->lookupFunction(0x115068u);
        fn(rdram, ctx, runtime);
    }
    else
    {
        ps2__InitSys_0x115068(rdram, ctx, runtime);
    }

    // FlushCache(0)
    SET_GPR_U32(ctx, 4, 0);
    ctx->pc = 0x10e520u;
    if (runtime->hasFunction(0x10e520u))
    {
        auto fn = runtime->lookupFunction(0x10e520u);
        fn(rdram, ctx, runtime);
    }
    else
    {
        FlushCache_0x10e520(rdram, ctx, runtime);
    }

    // EI - enable interrupts
    ctx->cop0_status |= 0x10000u;

    // main(args, args+4): a0 = *(0x176000), a1 = 0x176004
    SET_GPR_S32(ctx, 4, (int32_t)READ32(0x176000u));
    SET_GPR_U32(ctx, 5, 0x176004u);
    SET_GPR_U32(ctx, 31, 0x1000a8u); // ra for after main
    ctx->pc = 0x102798u;
    if (runtime->hasFunction(0x102798u))
    {
        auto fn = runtime->lookupFunction(0x102798u);
        fn(rdram, ctx, runtime);
    }
    else
    {
        ps2_main_0x102798(rdram, ctx, runtime);
    }

    // Exit(main_return): a0 = v0
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x10dec0u;
    Exit_0x10dec0(rdram, ctx, runtime);
}
