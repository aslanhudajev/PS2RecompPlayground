#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: pflt_destroy
// Address: 0x16ed48 - 0x16ed68
void pflt_destroy_0x16ed48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("pflt_destroy");


    ctx->pc = 0x16ed48u;

    // 0x16ed48: 0x80102d
    ctx->pc = 0x16ed48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed4c: 0x10400004
    ctx->pc = 0x16ED4Cu;
    {
        const bool branch_taken_0x16ed4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16ED50u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ed4c) {
            ctx->pc = 0x16ED60u;
            goto label_16ed60;
        }
    }
    ctx->pc = 0x16ED54u;
    // 0x16ed54: 0xa0400000
    ctx->pc = 0x16ed54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x16ed58: 0x8050cfe
    ctx->pc = 0x16ED58u;
    ctx->pc = 0x16ED5Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 144));
    ctx->pc = 0x1433F8u;
    memset_0x1433f8(rdram, ctx, runtime); return;
    ctx->pc = 0x16ED60u;
label_16ed60:
    // 0x16ed60: 0x3e00008
    ctx->pc = 0x16ED60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16ED60u: goto label_16ed60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16ED68u;
}
