#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFLIB_UnlockCs
// Address: 0x193d10 - 0x193d38
void SFLIB_UnlockCs_0x193d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFLIB_UnlockCs");


    ctx->pc = 0x193d10u;

    // 0x193d10: 0x27bdfff0
    ctx->pc = 0x193d10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193d14: 0xffbf0000
    ctx->pc = 0x193d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193d18: 0xc066ada
    ctx->pc = 0x193D18u;
    SET_GPR_U32(ctx, 31, 0x193D20u);
    ctx->pc = 0x19AB68u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFPLY_IsPeriodVbin_0x19ab68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D20u; }
        else if (ctx->pc != 0x193D20u) { ctx->pc = 0x193D20u; }
    }
    if (ctx->pc != 0x193D20u) { return; }
    ctx->pc = 0x193D20u;
    // 0x193d20: 0x14400003
    ctx->pc = 0x193D20u;
    {
        const bool branch_taken_0x193d20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x193D24u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x193d20) {
            ctx->pc = 0x193D30u;
            goto label_193d30;
        }
    }
    ctx->pc = 0x193D28u;
    // 0x193d28: 0x805b550
    ctx->pc = 0x193D28u;
    ctx->pc = 0x193D2Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x16D540u;
    ADXM_Unlock_0x16d540(rdram, ctx, runtime); return;
    ctx->pc = 0x193D30u;
label_193d30:
    // 0x193d30: 0x3e00008
    ctx->pc = 0x193D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193D34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193D30u: goto label_193d30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193D38u;
}
