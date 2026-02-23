#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_ClearOverflow
// Address: 0x17bd68 - 0x17bd9c
void PS2RNA_ClearOverflow_0x17bd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_ClearOverflow");


    ctx->pc = 0x17bd68u;

    // 0x17bd68: 0x27bdfff0
    ctx->pc = 0x17bd68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17bd6c: 0x3c04002c
    ctx->pc = 0x17bd6cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17bd70: 0xffbf0000
    ctx->pc = 0x17bd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bd74: 0xc05114a
    ctx->pc = 0x17BD74u;
    SET_GPR_U32(ctx, 31, 0x17BD7Cu);
    ctx->pc = 0x17BD78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950536));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD7Cu; }
        else if (ctx->pc != 0x17BD7Cu) { ctx->pc = 0x17BD7Cu; }
    }
    if (ctx->pc != 0x17BD7Cu) { return; }
    ctx->pc = 0x17BD7Cu;
    // 0x17bd7c: 0x0
    ctx->pc = 0x17bd7cu;
    // NOP
label_17bd80:
    // 0x17bd80: 0x0
    ctx->pc = 0x17bd80u;
    // NOP
    // 0x17bd84: 0x0
    ctx->pc = 0x17bd84u;
    // NOP
    // 0x17bd88: 0x0
    ctx->pc = 0x17bd88u;
    // NOP
    // 0x17bd8c: 0x0
    ctx->pc = 0x17bd8cu;
    // NOP
    // 0x17bd90: 0x0
    ctx->pc = 0x17bd90u;
    // NOP
    // 0x17bd94: 0x1000fffa
    ctx->pc = 0x17BD94u;
    {
        const bool branch_taken_0x17bd94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17bd94) {
            ctx->pc = 0x17BD80u;
            goto label_17bd80;
        }
    }
    ctx->pc = 0x17BD9Cu;
}
