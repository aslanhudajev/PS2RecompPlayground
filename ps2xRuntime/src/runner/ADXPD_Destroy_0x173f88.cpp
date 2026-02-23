#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXPD_Destroy
// Address: 0x173f88 - 0x173fa8
void ADXPD_Destroy_0x173f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPD_Destroy");


    ctx->pc = 0x173f88u;

    // 0x173f88: 0x80102d
    ctx->pc = 0x173f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f8c: 0x10400004
    ctx->pc = 0x173F8Cu;
    {
        const bool branch_taken_0x173f8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x173F90u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173f8c) {
            ctx->pc = 0x173FA0u;
            goto label_173fa0;
        }
    }
    ctx->pc = 0x173F94u;
    // 0x173f94: 0xac400000
    ctx->pc = 0x173f94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x173f98: 0x8050cfe
    ctx->pc = 0x173F98u;
    ctx->pc = 0x173F9Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 52));
    ctx->pc = 0x1433F8u;
    memset_0x1433f8(rdram, ctx, runtime); return;
    ctx->pc = 0x173FA0u;
label_173fa0:
    // 0x173fa0: 0x3e00008
    ctx->pc = 0x173FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173FA0u: goto label_173fa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173FA8u;
}
