#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_IsOverflow
// Address: 0x17bd30 - 0x17bd64
void PS2RNA_IsOverflow_0x17bd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_IsOverflow");


    ctx->pc = 0x17bd30u;

    // 0x17bd30: 0x27bdfff0
    ctx->pc = 0x17bd30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17bd34: 0x3c04002c
    ctx->pc = 0x17bd34u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17bd38: 0xffbf0000
    ctx->pc = 0x17bd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bd3c: 0xc05114a
    ctx->pc = 0x17BD3Cu;
    SET_GPR_U32(ctx, 31, 0x17BD44u);
    ctx->pc = 0x17BD40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950496));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD44u; }
        else if (ctx->pc != 0x17BD44u) { ctx->pc = 0x17BD44u; }
    }
    if (ctx->pc != 0x17BD44u) { return; }
    ctx->pc = 0x17BD44u;
    // 0x17bd44: 0x0
    ctx->pc = 0x17bd44u;
    // NOP
label_17bd48:
    // 0x17bd48: 0x0
    ctx->pc = 0x17bd48u;
    // NOP
    // 0x17bd4c: 0x0
    ctx->pc = 0x17bd4cu;
    // NOP
    // 0x17bd50: 0x0
    ctx->pc = 0x17bd50u;
    // NOP
    // 0x17bd54: 0x0
    ctx->pc = 0x17bd54u;
    // NOP
    // 0x17bd58: 0x0
    ctx->pc = 0x17bd58u;
    // NOP
    // 0x17bd5c: 0x1000fffa
    ctx->pc = 0x17BD5Cu;
    {
        const bool branch_taken_0x17bd5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17bd5c) {
            ctx->pc = 0x17BD48u;
            goto label_17bd48;
        }
    }
    ctx->pc = 0x17BD64u;
}
