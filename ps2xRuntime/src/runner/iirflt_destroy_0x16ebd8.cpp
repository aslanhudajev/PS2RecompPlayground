#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iirflt_destroy
// Address: 0x16ebd8 - 0x16ebf8
void iirflt_destroy_0x16ebd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iirflt_destroy");


    ctx->pc = 0x16ebd8u;

    // 0x16ebd8: 0x80102d
    ctx->pc = 0x16ebd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ebdc: 0x10400004
    ctx->pc = 0x16EBDCu;
    {
        const bool branch_taken_0x16ebdc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EBE0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ebdc) {
            ctx->pc = 0x16EBF0u;
            goto label_16ebf0;
        }
    }
    ctx->pc = 0x16EBE4u;
    // 0x16ebe4: 0xa0400000
    ctx->pc = 0x16ebe4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x16ebe8: 0x8050cfe
    ctx->pc = 0x16EBE8u;
    ctx->pc = 0x16EBECu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x1433F8u;
    memset_0x1433f8(rdram, ctx, runtime); return;
    ctx->pc = 0x16EBF0u;
label_16ebf0:
    // 0x16ebf0: 0x3e00008
    ctx->pc = 0x16EBF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EBF0u: goto label_16ebf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16EBF8u;
}
