#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <cstring>

// crt0.s entrypoint: zerobss, syscall(0x3c), syscall(0x3d), _InitSys, FlushCache, EI, main, Exit

// BSS bounds from crt0 (gDmaGif to end)
static constexpr uint32_t BSS_START = 0x175f80u;
static constexpr uint32_t BSS_END   = 0x74e6b4u;

// _args in EE memory (argc at [0], argv follows)
static constexpr uint32_t ARGS_ADDR = 0x176000u;
static constexpr uint32_t ARGV_ADDR = 0x176004u;

// gp from crt0 (move gp, a0 before first syscall)
static constexpr uint32_t GP_VALUE = 0x17daf0u;

void _start_0x100008(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    // 1. Zero BSS (zerobss loop: sq zero from gDmaGif to end, 16 bytes at a time)
    if (BSS_END > BSS_START)
        std::memset(rdram + BSS_START, 0, BSS_END - BSS_START);

    // 2. Syscall 0x3c: set stack/heap. Args: a0=gp, a1=heap_size, a2=stack_size, a3=_args, t0=_root
    SET_GPR_U32(ctx, 28, GP_VALUE);
    SET_GPR_U32(ctx, 4, GP_VALUE);           // a0
    SET_GPR_U32(ctx, 5, 0u);                 // a1 heap_size
    SET_GPR_U32(ctx, 6, 0x1000u);            // a2 stack_size
    SET_GPR_U32(ctx, 7, ARGS_ADDR);          // a3 _args
    SET_GPR_U32(ctx, 8, 0x1000c0u);          // t0 _root
    SET_GPR_U32(ctx, 3, 0x3cu);              // v1 = syscall 0x3c
    runtime->handleSyscall(rdram, ctx, 0u);
    SET_GPR_U32(ctx, 29, GPR_U32(ctx, 2));   // sp = v0 (new stack)

    // 3. Syscall 0x3d
    SET_GPR_U32(ctx, 4, BSS_END);            // a0 = end
    SET_GPR_U32(ctx, 5, 0u);                 // a1 = heap_size
    SET_GPR_U32(ctx, 3, 0x3du);              // v1 = syscall 0x3d
    runtime->handleSyscall(rdram, ctx, 0u);

    // 4. _InitSys()
    ps2__InitSys_0x115068(rdram, ctx, runtime);

    // 5. FlushCache(0)
    SET_GPR_U32(ctx, 4, 0u);
    FlushCache_0x10e520(rdram, ctx, runtime);

    // 6. EI (enable interrupts: set COP0 Status bit 16 EIE)
    ctx->cop0_status |= 0x10000u;

    // 7. main(argc, argv): a0 = *_args, a1 = 0x176004
    const uint32_t argc = *reinterpret_cast<const uint32_t*>(rdram + ARGS_ADDR);
    SET_GPR_U32(ctx, 4, argc);
    SET_GPR_U32(ctx, 5, ARGV_ADDR);
    ps2_main_0x102798(rdram, ctx, runtime);

    // 8. Exit((int)main_return): a0 = v0 (return value)
    SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
    Exit_0x10dec0(rdram, ctx, runtime);
}
