#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: shutdownSystem
// Address: 0x1000c8 - 0x1000e4
void shutdownSystem_0x1000c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1000c8u;

    // 0x1000c8: 0x27bdfff0
    ctx->pc = 0x1000c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1000cc: 0xffbf0000
    ctx->pc = 0x1000ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1000d0: 0xc040ad4
    ctx->pc = 0x1000D0u;
    SET_GPR_U32(ctx, 31, 0x1000D8u);
    ctx->pc = 0x102B50u;
    {
        const uint32_t __entryPc = ctx->pc;
        clearVRAM_0x102b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1000D8u; }
    }
    if (ctx->pc != 0x1000D8u) { return; }
    ctx->pc = 0x1000D8u;
    // 0x1000d8: 0xdfbf0000
    ctx->pc = 0x1000d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1000dc: 0x8042c86
    ctx->pc = 0x1000DCu;
    ctx->pc = 0x1000E0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x10B218u;
    StopAllSounds_0x10b218(rdram, ctx, runtime); return;
    ctx->pc = 0x1000E4u;
}
