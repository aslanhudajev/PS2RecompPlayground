#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_SetTotalNumSmpl
// Address: 0x17be10 - 0x17be44
void PS2RNA_SetTotalNumSmpl_0x17be10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_SetTotalNumSmpl");


    ctx->pc = 0x17be10u;

    // 0x17be10: 0x27bdfff0
    ctx->pc = 0x17be10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17be14: 0x3c04002c
    ctx->pc = 0x17be14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17be18: 0xffbf0000
    ctx->pc = 0x17be18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17be1c: 0xc05114a
    ctx->pc = 0x17BE1Cu;
    SET_GPR_U32(ctx, 31, 0x17BE24u);
    ctx->pc = 0x17BE20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950648));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BE24u; }
        else if (ctx->pc != 0x17BE24u) { ctx->pc = 0x17BE24u; }
    }
    if (ctx->pc != 0x17BE24u) { return; }
    ctx->pc = 0x17BE24u;
    // 0x17be24: 0x0
    ctx->pc = 0x17be24u;
    // NOP
label_17be28:
    // 0x17be28: 0x0
    ctx->pc = 0x17be28u;
    // NOP
    // 0x17be2c: 0x0
    ctx->pc = 0x17be2cu;
    // NOP
    // 0x17be30: 0x0
    ctx->pc = 0x17be30u;
    // NOP
    // 0x17be34: 0x0
    ctx->pc = 0x17be34u;
    // NOP
    // 0x17be38: 0x0
    ctx->pc = 0x17be38u;
    // NOP
    // 0x17be3c: 0x1000fffa
    ctx->pc = 0x17BE3Cu;
    {
        const bool branch_taken_0x17be3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17be3c) {
            ctx->pc = 0x17BE28u;
            goto label_17be28;
        }
    }
    ctx->pc = 0x17BE44u;
}
