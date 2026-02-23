#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyCalcWorkCompo
// Address: 0x18e9e8 - 0x18ea58
void mwPlyCalcWorkCompo_0x18e9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyCalcWorkCompo");


    ctx->pc = 0x18e9e8u;

    // 0x18e9e8: 0x8c82001c
    ctx->pc = 0x18e9e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x18e9ec: 0x28420004
    ctx->pc = 0x18e9ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x18e9f0: 0x14400017
    ctx->pc = 0x18E9F0u;
    {
        const bool branch_taken_0x18e9f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x18e9f0) {
            ctx->pc = 0x18EA50u;
            goto label_18ea50;
        }
    }
    ctx->pc = 0x18E9F8u;
    // 0x18e9f8: 0x8c830008
    ctx->pc = 0x18e9f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18e9fc: 0x8c84000c
    ctx->pc = 0x18e9fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x18ea00: 0x83102a
    ctx->pc = 0x18ea00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x18ea04: 0x62200b
    ctx->pc = 0x18ea04u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x18ea08: 0x1880000d
    ctx->pc = 0x18EA08u;
    {
        const bool branch_taken_0x18ea08 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x18EA0Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
        if (branch_taken_0x18ea08) {
            ctx->pc = 0x18EA40u;
            goto label_18ea40;
        }
    }
    ctx->pc = 0x18EA10u;
    // 0x18ea10: 0x10800008
    ctx->pc = 0x18EA10u;
    {
        const bool branch_taken_0x18ea10 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x18EA14u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18ea10) {
            ctx->pc = 0x18EA34u;
            goto label_18ea34;
        }
    }
    ctx->pc = 0x18EA18u;
label_18ea18:
    // 0x18ea18: 0x42043
    ctx->pc = 0x18ea18u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x18ea1c: 0x24630001
    ctx->pc = 0x18ea1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x18ea20: 0x0
    ctx->pc = 0x18ea20u;
    // NOP
    // 0x18ea24: 0x0
    ctx->pc = 0x18ea24u;
    // NOP
    // 0x18ea28: 0x0
    ctx->pc = 0x18ea28u;
    // NOP
    // 0x18ea2c: 0x1480fffa
    ctx->pc = 0x18EA2Cu;
    {
        const bool branch_taken_0x18ea2c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x18ea2c) {
            ctx->pc = 0x18EA18u;
            goto label_18ea18;
        }
    }
    ctx->pc = 0x18EA34u;
label_18ea34:
    // 0x18ea34: 0x24020001
    ctx->pc = 0x18ea34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ea38: 0x10000002
    ctx->pc = 0x18EA38u;
    {
        const bool branch_taken_0x18ea38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18EA3Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
        if (branch_taken_0x18ea38) {
            ctx->pc = 0x18EA44u;
            goto label_18ea44;
        }
    }
    ctx->pc = 0x18EA40u;
label_18ea40:
    // 0x18ea40: 0x102d
    ctx->pc = 0x18ea40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ea44:
    // 0x18ea44: 0x421018
    ctx->pc = 0x18ea44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x18ea48: 0x3e00008
    ctx->pc = 0x18EA48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EA4Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18EA18u: goto label_18ea18;
            case 0x18EA34u: goto label_18ea34;
            case 0x18EA40u: goto label_18ea40;
            case 0x18EA44u: goto label_18ea44;
            case 0x18EA50u: goto label_18ea50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18EA50u;
label_18ea50:
    // 0x18ea50: 0x3e00008
    ctx->pc = 0x18EA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EA54u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18EA18u: goto label_18ea18;
            case 0x18EA34u: goto label_18ea34;
            case 0x18EA40u: goto label_18ea40;
            case 0x18EA44u: goto label_18ea44;
            case 0x18EA50u: goto label_18ea50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18EA58u;
}
