#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_GetHd
// Address: 0x198cf8 - 0x198d20
void sfmpv_GetHd_0x198cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_GetHd");


    ctx->pc = 0x198cf8u;

    // 0x198cf8: 0x8c836758
    ctx->pc = 0x198cf8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 26456)));
    // 0x198cfc: 0x10600004
    ctx->pc = 0x198CFCu;
    {
        const bool branch_taken_0x198cfc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x198D00u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14144));
        if (branch_taken_0x198cfc) {
            ctx->pc = 0x198D10u;
            goto label_198d10;
        }
    }
    ctx->pc = 0x198D04u;
    // 0x198d04: 0x8c820040
    ctx->pc = 0x198d04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x198d08: 0x18400003
    ctx->pc = 0x198D08u;
    {
        const bool branch_taken_0x198d08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x198d08) {
            ctx->pc = 0x198D18u;
            goto label_198d18;
        }
    }
    ctx->pc = 0x198D10u;
label_198d10:
    // 0x198d10: 0x3e00008
    ctx->pc = 0x198D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198D14u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198D10u: goto label_198d10;
            case 0x198D18u: goto label_198d18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198D18u;
label_198d18:
    // 0x198d18: 0x3e00008
    ctx->pc = 0x198D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198D1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2756));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198D10u: goto label_198d10;
            case 0x198D18u: goto label_198d18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198D20u;
}
