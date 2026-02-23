#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFLIB_LockCs
// Address: 0x193ce8 - 0x193d10
void SFLIB_LockCs_0x193ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFLIB_LockCs");


    ctx->pc = 0x193ce8u;

    // 0x193ce8: 0x27bdfff0
    ctx->pc = 0x193ce8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193cec: 0xffbf0000
    ctx->pc = 0x193cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193cf0: 0xc066ada
    ctx->pc = 0x193CF0u;
    SET_GPR_U32(ctx, 31, 0x193CF8u);
    ctx->pc = 0x19AB68u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFPLY_IsPeriodVbin_0x19ab68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CF8u; }
        else if (ctx->pc != 0x193CF8u) { ctx->pc = 0x193CF8u; }
    }
    if (ctx->pc != 0x193CF8u) { return; }
    ctx->pc = 0x193CF8u;
    // 0x193cf8: 0x14400003
    ctx->pc = 0x193CF8u;
    {
        const bool branch_taken_0x193cf8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x193CFCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x193cf8) {
            ctx->pc = 0x193D08u;
            goto label_193d08;
        }
    }
    ctx->pc = 0x193D00u;
    // 0x193d00: 0x805b54e
    ctx->pc = 0x193D00u;
    ctx->pc = 0x193D04u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x16D538u;
    ADXM_Lock_0x16d538(rdram, ctx, runtime); return;
    ctx->pc = 0x193D08u;
label_193d08:
    // 0x193d08: 0x3e00008
    ctx->pc = 0x193D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193D0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193D08u: goto label_193d08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193D10u;
}
