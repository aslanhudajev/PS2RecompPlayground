#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: somebody_still_selecting
// Address: 0x285fd8 - 0x28601c
void somebody_still_selecting_0x285fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x285fd8u;

    // 0x285fd8: 0x182d
    ctx->pc = 0x285fd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285fdc: 0x3c020032
    ctx->pc = 0x285fdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x285fe0: 0x24471bc0
    ctx->pc = 0x285fe0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x285fe4: 0x24052b00
    ctx->pc = 0x285fe4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x285fe8: 0x24040002
    ctx->pc = 0x285fe8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x285fec: 0x653018
    ctx->pc = 0x285fecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_285ff0:
    // 0x285ff0: 0xc71021
    ctx->pc = 0x285ff0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x285ff4: 0x8c4200fc
    ctx->pc = 0x285ff4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x285ff8: 0x14440003
    ctx->pc = 0x285FF8u;
    {
        const bool branch_taken_0x285ff8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x285FFCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x285ff8) {
            ctx->pc = 0x286008u;
            goto label_286008;
        }
    }
    ctx->pc = 0x286000u;
    // 0x286000: 0x3e00008
    ctx->pc = 0x286000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286004u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285FF0u: goto label_285ff0;
            case 0x286008u: goto label_286008;
            default: break;
        }
        return;
    }
    ctx->pc = 0x286008u;
label_286008:
    // 0x286008: 0x28620004
    ctx->pc = 0x286008u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
    // 0x28600c: 0x1440fff8
    ctx->pc = 0x28600Cu;
    {
        const bool branch_taken_0x28600c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x286010u;
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x28600c) {
            ctx->pc = 0x285FF0u;
            goto label_285ff0;
        }
    }
    ctx->pc = 0x286014u;
    // 0x286014: 0x3e00008
    ctx->pc = 0x286014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286018u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285FF0u: goto label_285ff0;
            case 0x286008u: goto label_286008;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28601Cu;
}
