#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _ulp
// Address: 0x144020 - 0x1440b8
void _ulp_0x144020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_ulp");


    ctx->pc = 0x144020u;

    // 0x144020: 0x4203f
    ctx->pc = 0x144020u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x144024: 0x3c027ff0
    ctx->pc = 0x144024u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32752 << 16));
    // 0x144028: 0x822024
    ctx->pc = 0x144028u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14402c: 0x3c03fcc0
    ctx->pc = 0x14402cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)64704 << 16));
    // 0x144030: 0x832021
    ctx->pc = 0x144030u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x144034: 0x18800003
    ctx->pc = 0x144034u;
    {
        const bool branch_taken_0x144034 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x144038u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
        if (branch_taken_0x144034) {
            ctx->pc = 0x144044u;
            goto label_144044;
        }
    }
    ctx->pc = 0x14403Cu;
    // 0x14403c: 0x1000001b
    ctx->pc = 0x14403Cu;
    {
        const bool branch_taken_0x14403c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144040u;
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
        if (branch_taken_0x14403c) {
            ctx->pc = 0x1440ACu;
            goto label_1440ac;
        }
    }
    ctx->pc = 0x144044u;
label_144044:
    // 0x144044: 0x41023
    ctx->pc = 0x144044u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x144048: 0x22503
    ctx->pc = 0x144048u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 20));
    // 0x14404c: 0x28830014
    ctx->pc = 0x14404cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 20));
    // 0x144050: 0x10600004
    ctx->pc = 0x144050u;
    {
        const bool branch_taken_0x144050 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x144054u;
        SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
        if (branch_taken_0x144050) {
            ctx->pc = 0x144064u;
            goto label_144064;
        }
    }
    ctx->pc = 0x144058u;
    // 0x144058: 0x821007
    ctx->pc = 0x144058u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x14405c: 0x10000013
    ctx->pc = 0x14405Cu;
    {
        const bool branch_taken_0x14405c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144060u;
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
        if (branch_taken_0x14405c) {
            ctx->pc = 0x1440ACu;
            goto label_1440ac;
        }
    }
    ctx->pc = 0x144064u;
label_144064:
    // 0x144064: 0x3c03ffff
    ctx->pc = 0x144064u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x144068: 0x3183e
    ctx->pc = 0x144068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x14406c: 0x2484ffec
    ctx->pc = 0x14406cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x144070: 0x2882001f
    ctx->pc = 0x144070u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 31));
    // 0x144074: 0x10400006
    ctx->pc = 0x144074u;
    {
        const bool branch_taken_0x144074 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x144078u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        if (branch_taken_0x144074) {
            ctx->pc = 0x144090u;
            goto label_144090;
        }
    }
    ctx->pc = 0x14407Cu;
    // 0x14407c: 0x2402001f
    ctx->pc = 0x14407cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
    // 0x144080: 0x24030001
    ctx->pc = 0x144080u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x144084: 0x441023
    ctx->pc = 0x144084u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x144088: 0x10000002
    ctx->pc = 0x144088u;
    {
        const bool branch_taken_0x144088 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14408Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        if (branch_taken_0x144088) {
            ctx->pc = 0x144094u;
            goto label_144094;
        }
    }
    ctx->pc = 0x144090u;
label_144090:
    // 0x144090: 0x24020001
    ctx->pc = 0x144090u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_144094:
    // 0x144094: 0x2103c
    ctx->pc = 0x144094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x144098: 0x2403ffff
    ctx->pc = 0x144098u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14409c: 0x3183c
    ctx->pc = 0x14409cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1440a0: 0x2103e
    ctx->pc = 0x1440a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1440a4: 0xa32824
    ctx->pc = 0x1440a4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1440a8: 0xa22825
    ctx->pc = 0x1440a8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1440ac:
    // 0x1440ac: 0xa0102d
    ctx->pc = 0x1440acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1440b0: 0x3e00008
    ctx->pc = 0x1440B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1440B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144044u: goto label_144044;
            case 0x144064u: goto label_144064;
            case 0x144090u: goto label_144090;
            case 0x144094u: goto label_144094;
            case 0x1440ACu: goto label_1440ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1440B8u;
}
