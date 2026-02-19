#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EmptyDcsLoad
// Address: 0x220cf0 - 0x220d34
void EmptyDcsLoad_0x220cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x220cf0u;

    // 0x220cf0: 0x182d
    ctx->pc = 0x220cf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220cf4: 0x3c020032
    ctx->pc = 0x220cf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x220cf8: 0x24460628
    ctx->pc = 0x220cf8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 1576));
    // 0x220cfc: 0x24040030
    ctx->pc = 0x220cfcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 48));
    // 0x220d00: 0x642818
    ctx->pc = 0x220d00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x220d04: 0x0
    ctx->pc = 0x220d04u;
    // NOP
label_220d08:
    // 0x220d08: 0xa61021
    ctx->pc = 0x220d08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x220d0c: 0x8c420000
    ctx->pc = 0x220d0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220d10: 0x4430003
    ctx->pc = 0x220D10u;
    {
        const bool branch_taken_0x220d10 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x220d10) {
            ctx->pc = 0x220D14u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x220D20u;
            goto label_220d20;
        }
    }
    ctx->pc = 0x220D18u;
    // 0x220d18: 0x3e00008
    ctx->pc = 0x220D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220D1Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220D08u: goto label_220d08;
            case 0x220D20u: goto label_220d20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x220D20u;
label_220d20:
    // 0x220d20: 0x28620004
    ctx->pc = 0x220d20u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
    // 0x220d24: 0x1440fff8
    ctx->pc = 0x220D24u;
    {
        const bool branch_taken_0x220d24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x220D28u;
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x220d24) {
            ctx->pc = 0x220D08u;
            goto label_220d08;
        }
    }
    ctx->pc = 0x220D2Cu;
    // 0x220d2c: 0x3e00008
    ctx->pc = 0x220D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220D30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220D08u: goto label_220d08;
            case 0x220D20u: goto label_220d20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x220D34u;
}
