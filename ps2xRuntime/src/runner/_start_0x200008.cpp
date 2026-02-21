#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

void _start_0x200008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    const uint32_t __entryPc = ctx->pc;
    
    // 1) Zero BSS from _fbss/argv_copy (.sbss 0x3bb180) to end (0x3e7604)
    for (uint32_t addr = 0x3bb180u; addr < 0x3e7604u; addr += 4u)
        runtime->Store32(rdram, ctx, addr, 0u);

    // 2) Syscall 0x3c (SetupThread): a0=gp, a1=stack_size, a2=8, a3=_args, t0=_root → returns new sp in $v0
    SET_GPR_U32(ctx, 28, 0x3c3170u);   // gp
    SET_GPR_U32(ctx, 4, 0x3c3170u);    // a0
    SET_GPR_U32(ctx, 5, 0x1f800u);     // a1
    SET_GPR_U32(ctx, 6, 8u);           // a2
    SET_GPR_U32(ctx, 7, 0x3e74c0u);   // a3 = _args
    SET_GPR_U32(ctx, 8, 0x20c0u);     // t0 = _root
    runtime->handleSyscall(rdram, ctx, 0x3cu);
    SET_GPR_U32(ctx, 29, GPR_U32(ctx, 2));  // sp = $v0

    // 3) Syscall 0x3d (SetupHeap): a0=end, a1=-1
    SET_GPR_U32(ctx, 4, 0x3e7604u);
    SET_GPR_U32(ctx, 5, 0xffffffffu);
    runtime->handleSyscall(rdram, ctx, 0x3du);

    // 4) InitThread and FlushCache (recompiled runner functions, same as other stubs)
    InitThread_0x308508(rdram, ctx, runtime);
    FlushCache_0x303860(rdram, ctx, runtime);

    // 5) EI: enable interrupts (COP0 Status bit 0 = IE)
    ctx->cop0_status |= 1u;

    // 6) main((long)_args, 0x3e74c4): a0 = *_args, a1 = &DAT_003e74c4
    SET_GPR_U32(ctx, 4, runtime->Load32(rdram, ctx, 0x3e74c0u));
    SET_GPR_U32(ctx, 5, 0x3e74c4u);
    ps2_main_0x2001e8(rdram, ctx, runtime);

    // 7) Exit(__status): a0 = main return value
    SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
    Exit_0x303200(rdram, ctx, runtime);

    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
