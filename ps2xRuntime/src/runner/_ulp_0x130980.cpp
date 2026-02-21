#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ulp
// Address: 0x130980 - 0x130a18
void _ulp_0x130980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130980u;

    // 0x130980: 0x4203f
    ctx->pc = 0x130980u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x130984: 0x3c027ff0
    ctx->pc = 0x130984u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32752 << 16));
    // 0x130988: 0x822024
    ctx->pc = 0x130988u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13098c: 0x3c03fcc0
    ctx->pc = 0x13098cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)64704 << 16));
    // 0x130990: 0x832021
    ctx->pc = 0x130990u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x130994: 0x18800003
    ctx->pc = 0x130994u;
    {
        const bool branch_taken_0x130994 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x130998u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
        if (branch_taken_0x130994) {
            ctx->pc = 0x1309A4u;
            goto label_1309a4;
        }
    }
    ctx->pc = 0x13099Cu;
    // 0x13099c: 0x1000001b
    ctx->pc = 0x13099Cu;
    {
        const bool branch_taken_0x13099c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1309A0u;
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
        if (branch_taken_0x13099c) {
            ctx->pc = 0x130A0Cu;
            goto label_130a0c;
        }
    }
    ctx->pc = 0x1309A4u;
label_1309a4:
    // 0x1309a4: 0x41023
    ctx->pc = 0x1309a4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1309a8: 0x22503
    ctx->pc = 0x1309a8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 20));
    // 0x1309ac: 0x28830014
    ctx->pc = 0x1309acu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 20));
    // 0x1309b0: 0x10600004
    ctx->pc = 0x1309B0u;
    {
        const bool branch_taken_0x1309b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1309B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
        if (branch_taken_0x1309b0) {
            ctx->pc = 0x1309C4u;
            goto label_1309c4;
        }
    }
    ctx->pc = 0x1309B8u;
    // 0x1309b8: 0x821007
    ctx->pc = 0x1309b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1309bc: 0x10000013
    ctx->pc = 0x1309BCu;
    {
        const bool branch_taken_0x1309bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1309C0u;
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
        if (branch_taken_0x1309bc) {
            ctx->pc = 0x130A0Cu;
            goto label_130a0c;
        }
    }
    ctx->pc = 0x1309C4u;
label_1309c4:
    // 0x1309c4: 0x3c03ffff
    ctx->pc = 0x1309c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x1309c8: 0x3183e
    ctx->pc = 0x1309c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1309cc: 0x2484ffec
    ctx->pc = 0x1309ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x1309d0: 0x2882001f
    ctx->pc = 0x1309d0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 31));
    // 0x1309d4: 0x10400006
    ctx->pc = 0x1309D4u;
    {
        const bool branch_taken_0x1309d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1309D8u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        if (branch_taken_0x1309d4) {
            ctx->pc = 0x1309F0u;
            goto label_1309f0;
        }
    }
    ctx->pc = 0x1309DCu;
    // 0x1309dc: 0x2402001f
    ctx->pc = 0x1309dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
    // 0x1309e0: 0x24030001
    ctx->pc = 0x1309e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1309e4: 0x441023
    ctx->pc = 0x1309e4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1309e8: 0x10000002
    ctx->pc = 0x1309E8u;
    {
        const bool branch_taken_0x1309e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1309ECu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        if (branch_taken_0x1309e8) {
            ctx->pc = 0x1309F4u;
            goto label_1309f4;
        }
    }
    ctx->pc = 0x1309F0u;
label_1309f0:
    // 0x1309f0: 0x24020001
    ctx->pc = 0x1309f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1309f4:
    // 0x1309f4: 0x2103c
    ctx->pc = 0x1309f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1309f8: 0x2403ffff
    ctx->pc = 0x1309f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1309fc: 0x3183c
    ctx->pc = 0x1309fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x130a00: 0x2103e
    ctx->pc = 0x130a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x130a04: 0xa32824
    ctx->pc = 0x130a04u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x130a08: 0xa22825
    ctx->pc = 0x130a08u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_130a0c:
    // 0x130a0c: 0xa0102d
    ctx->pc = 0x130a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a10: 0x3e00008
    ctx->pc = 0x130A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130A14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1309A4u: goto label_1309a4;
            case 0x1309C4u: goto label_1309c4;
            case 0x1309F0u: goto label_1309f0;
            case 0x1309F4u: goto label_1309f4;
            case 0x130A0Cu: goto label_130a0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130A18u;
}
