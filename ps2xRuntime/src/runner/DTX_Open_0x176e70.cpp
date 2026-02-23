#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DTX_Open
// Address: 0x176e70 - 0x176e98
void DTX_Open_0x176e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DTX_Open");


    ctx->pc = 0x176e70u;

    // 0x176e70: 0x2c820008
    ctx->pc = 0x176e70u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 8));
    // 0x176e74: 0x14400003
    ctx->pc = 0x176E74u;
    {
        const bool branch_taken_0x176e74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x176E78u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 68));
        if (branch_taken_0x176e74) {
            ctx->pc = 0x176E84u;
            goto label_176e84;
        }
    }
    ctx->pc = 0x176E7Cu;
    // 0x176e7c: 0x3e00008
    ctx->pc = 0x176E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176E80u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176E84u: goto label_176e84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x176E84u;
label_176e84:
    // 0x176e84: 0x3c020024
    ctx->pc = 0x176e84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x176e88: 0x831818
    ctx->pc = 0x176e88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x176e8c: 0x24428bb0
    ctx->pc = 0x176e8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937520));
    // 0x176e90: 0x3e00008
    ctx->pc = 0x176E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176E94u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176E84u: goto label_176e84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x176E98u;
}
