#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: UTY_TmrToUsec
// Address: 0x1a0f80 - 0x1a0fb8
void UTY_TmrToUsec_0x1a0f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("UTY_TmrToUsec");


    ctx->pc = 0x1a0f80u;

    // 0x1a0f80: 0x41978
    ctx->pc = 0x1a0f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 5);
    // 0x1a0f84: 0x27bdfff0
    ctx->pc = 0x1a0f84u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0f88: 0x64182f
    ctx->pc = 0x1a0f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
    // 0x1a0f8c: 0xffbf0000
    ctx->pc = 0x1a0f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0f90: 0x311b8
    ctx->pc = 0x1a0f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 6);
    // 0x1a0f94: 0x3c051194
    ctx->pc = 0x1a0f94u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4500 << 16));
    // 0x1a0f98: 0x43102f
    ctx->pc = 0x1a0f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x1a0f9c: 0x210f8
    ctx->pc = 0x1a0f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x1a0fa0: 0x44102d
    ctx->pc = 0x1a0fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1a0fa4: 0xc052114
    ctx->pc = 0x1A0FA4u;
    SET_GPR_U32(ctx, 31, 0x1A0FACu);
    ctx->pc = 0x1A0FA8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 6);
    ctx->pc = 0x148450u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___divdi3_0x148450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0FACu; }
        else if (ctx->pc != 0x1A0FACu) { ctx->pc = 0x1A0FACu; }
    }
    if (ctx->pc != 0x1A0FACu) { return; }
    ctx->pc = 0x1A0FACu;
    // 0x1a0fac: 0xdfbf0000
    ctx->pc = 0x1a0facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0fb0: 0x3e00008
    ctx->pc = 0x1A0FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0FB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0FB8u;
}
