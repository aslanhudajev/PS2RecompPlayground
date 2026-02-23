#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFSVM_Init
// Address: 0x18f640 - 0x18f674
void MWSFSVM_Init_0x18f640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFSVM_Init");
    ctx->pc = 0x18f640u;

    // 0x18f640: 0x27bdfff0
    ctx->pc = 0x18f640u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f644: 0xffbf0000
    ctx->pc = 0x18f644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f648: 0xc05f920
    ctx->pc = 0x18F648u;
    SET_GPR_U32(ctx, 31, 0x18F650u);
    ctx->pc = 0x17E480u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_Init_0x17e480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F650u; }
        else if (ctx->pc != 0x18F650u) { ctx->pc = 0x18F650u; }
    }
    if (ctx->pc != 0x18F650u) { return; }
    ctx->pc = 0x18F650u;
    // 0x18f650: 0x3c02002f
    ctx->pc = 0x18f650u;
    SET_GPR_U32(ctx, 2, ((uint32_t)47 << 16));
    // 0x18f654: 0x3c03002f
    ctx->pc = 0x18f654u;
    SET_GPR_U32(ctx, 3, ((uint32_t)47 << 16));
    // 0x18f658: 0x3c04002f
    ctx->pc = 0x18f658u;
    SET_GPR_U32(ctx, 4, ((uint32_t)47 << 16));
    // 0x18f65c: 0xdfbf0000
    ctx->pc = 0x18f65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f660: 0xac40c648
    ctx->pc = 0x18f660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952520), GPR_U32(ctx, 0));
    // 0x18f664: 0xac60c64c
    ctx->pc = 0x18f664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952524), GPR_U32(ctx, 0));
    // 0x18f668: 0xac80c650
    ctx->pc = 0x18f668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294952528), GPR_U32(ctx, 0));
    // 0x18f66c: 0x3e00008
    ctx->pc = 0x18F66Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F670u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F674u;
}
