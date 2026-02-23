#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: synch__14SofdecMgrClassFv
// Address: 0x216ef0 - 0x216f0c
void synch__14SofdecMgrClassFv_0x216ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("synch__14SofdecMgrClassFv");


    ctx->pc = 0x216ef0u;

    // 0x216ef0: 0x27bdfff0
    ctx->pc = 0x216ef0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x216ef4: 0x7fbf0000
    ctx->pc = 0x216ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x216ef8: 0xc063df8
    ctx->pc = 0x216EF8u;
    SET_GPR_U32(ctx, 31, 0x216F00u);
    ctx->pc = 0x18F7E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyExecServer_0x18f7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216F00u; }
        else if (ctx->pc != 0x216F00u) { ctx->pc = 0x216F00u; }
    }
    if (ctx->pc != 0x216F00u) { return; }
    ctx->pc = 0x216F00u;
    // 0x216f00: 0x7bbf0000
    ctx->pc = 0x216f00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216f04: 0x3e00008
    ctx->pc = 0x216F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216F08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x216F0Cu;
}
