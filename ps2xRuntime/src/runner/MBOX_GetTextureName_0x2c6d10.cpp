#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOX_GetTextureName
// Address: 0x2c6d10 - 0x2c6d38
void MBOX_GetTextureName_0x2c6d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c6d10u;

    // 0x2c6d10: 0x27bdfff0
    ctx->pc = 0x2c6d10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c6d14: 0xffbf0000
    ctx->pc = 0x2c6d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c6d18: 0xc0b1b20
    ctx->pc = 0x2C6D18u;
    SET_GPR_U32(ctx, 31, 0x2C6D20u);
    ctx->pc = 0x2C6C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_GetTexDef_0x2c6c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6D20u; }
    }
    if (ctx->pc != 0x2C6D20u) { return; }
    ctx->pc = 0x2C6D20u;
    // 0x2c6d20: 0x14400003
    ctx->pc = 0x2C6D20u;
    {
        const bool branch_taken_0x2c6d20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C6D24u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2c6d20) {
            ctx->pc = 0x2C6D30u;
            goto label_2c6d30;
        }
    }
    ctx->pc = 0x2C6D28u;
    // 0x2c6d28: 0x3c02003b
    ctx->pc = 0x2c6d28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2c6d2c: 0x24427018
    ctx->pc = 0x2c6d2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28696));
label_2c6d30:
    // 0x2c6d30: 0x3e00008
    ctx->pc = 0x2C6D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6D34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C6D30u: goto label_2c6d30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C6D38u;
}
