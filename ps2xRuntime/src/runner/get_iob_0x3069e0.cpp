#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_iob
// Address: 0x3069e0 - 0x306a04
void get_iob_0x3069e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3069e0u;

    // 0x3069e0: 0x2c820010
    ctx->pc = 0x3069e0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 16));
    // 0x3069e4: 0x14400003
    ctx->pc = 0x3069E4u;
    {
        const bool branch_taken_0x3069e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x3069E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
        if (branch_taken_0x3069e4) {
            ctx->pc = 0x3069F4u;
            goto label_3069f4;
        }
    }
    ctx->pc = 0x3069ECu;
    // 0x3069ec: 0x3e00008
    ctx->pc = 0x3069ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3069F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3069F4u: goto label_3069f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3069F4u;
label_3069f4:
    // 0x3069f4: 0x41900
    ctx->pc = 0x3069f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x3069f8: 0x24426a50
    ctx->pc = 0x3069f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 27216));
    // 0x3069fc: 0x3e00008
    ctx->pc = 0x3069FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306A00u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3069F4u: goto label_3069f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x306A04u;
}
