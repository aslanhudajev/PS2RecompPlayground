#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_SetStmHdInfo
// Address: 0x17be48 - 0x17be7c
void PS2RNA_SetStmHdInfo_0x17be48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_SetStmHdInfo");


    ctx->pc = 0x17be48u;

    // 0x17be48: 0x27bdfff0
    ctx->pc = 0x17be48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17be4c: 0x3c04002c
    ctx->pc = 0x17be4cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17be50: 0xffbf0000
    ctx->pc = 0x17be50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17be54: 0xc05114a
    ctx->pc = 0x17BE54u;
    SET_GPR_U32(ctx, 31, 0x17BE5Cu);
    ctx->pc = 0x17BE58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950696));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BE5Cu; }
        else if (ctx->pc != 0x17BE5Cu) { ctx->pc = 0x17BE5Cu; }
    }
    if (ctx->pc != 0x17BE5Cu) { return; }
    ctx->pc = 0x17BE5Cu;
    // 0x17be5c: 0x0
    ctx->pc = 0x17be5cu;
    // NOP
label_17be60:
    // 0x17be60: 0x0
    ctx->pc = 0x17be60u;
    // NOP
    // 0x17be64: 0x0
    ctx->pc = 0x17be64u;
    // NOP
    // 0x17be68: 0x0
    ctx->pc = 0x17be68u;
    // NOP
    // 0x17be6c: 0x0
    ctx->pc = 0x17be6cu;
    // NOP
    // 0x17be70: 0x0
    ctx->pc = 0x17be70u;
    // NOP
    // 0x17be74: 0x1000fffa
    ctx->pc = 0x17BE74u;
    {
        const bool branch_taken_0x17be74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17be74) {
            ctx->pc = 0x17BE60u;
            goto label_17be60;
        }
    }
    ctx->pc = 0x17BE7Cu;
}
