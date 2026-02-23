#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySetIpicOnly
// Address: 0x18d5f8 - 0x18d61c
void mwPlySetIpicOnly_0x18d5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySetIpicOnly");


    ctx->pc = 0x18d5f8u;

    // 0x18d5f8: 0x24020001
    ctx->pc = 0x18d5f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d5fc: 0x14a20004
    ctx->pc = 0x18D5FCu;
    {
        const bool branch_taken_0x18d5fc = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x18D600u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
        if (branch_taken_0x18d5fc) {
            ctx->pc = 0x18D610u;
            goto label_18d610;
        }
    }
    ctx->pc = 0x18D604u;
    // 0x18d604: 0x24050004
    ctx->pc = 0x18d604u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x18d608: 0x8065604
    ctx->pc = 0x18D608u;
    ctx->pc = 0x18D60Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x195810u;
    SFD_SetMpvCond_0x195810(rdram, ctx, runtime); return;
    ctx->pc = 0x18D610u;
label_18d610:
    // 0x18d610: 0x24050004
    ctx->pc = 0x18d610u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x18d614: 0x8065604
    ctx->pc = 0x18D614u;
    ctx->pc = 0x18D618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x195810u;
    SFD_SetMpvCond_0x195810(rdram, ctx, runtime); return;
    ctx->pc = 0x18D61Cu;
}
