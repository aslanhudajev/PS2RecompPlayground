#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ulp
// Address: 0x302b78 - 0x302c10
void _ulp_0x302b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x302b78u;

    // 0x302b78: 0x4203f
    ctx->pc = 0x302b78u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x302b7c: 0x3c027ff0
    ctx->pc = 0x302b7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32752 << 16));
    // 0x302b80: 0x822024
    ctx->pc = 0x302b80u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x302b84: 0x3c03fcc0
    ctx->pc = 0x302b84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)64704 << 16));
    // 0x302b88: 0x832021
    ctx->pc = 0x302b88u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x302b8c: 0x18800003
    ctx->pc = 0x302B8Cu;
    {
        const bool branch_taken_0x302b8c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x302B90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
        if (branch_taken_0x302b8c) {
            ctx->pc = 0x302B9Cu;
            goto label_302b9c;
        }
    }
    ctx->pc = 0x302B94u;
    // 0x302b94: 0x1000001b
    ctx->pc = 0x302B94u;
    {
        const bool branch_taken_0x302b94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x302B98u;
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
        if (branch_taken_0x302b94) {
            ctx->pc = 0x302C04u;
            goto label_302c04;
        }
    }
    ctx->pc = 0x302B9Cu;
label_302b9c:
    // 0x302b9c: 0x41023
    ctx->pc = 0x302b9cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x302ba0: 0x22503
    ctx->pc = 0x302ba0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 20));
    // 0x302ba4: 0x28830014
    ctx->pc = 0x302ba4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 20));
    // 0x302ba8: 0x10600004
    ctx->pc = 0x302BA8u;
    {
        const bool branch_taken_0x302ba8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x302BACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
        if (branch_taken_0x302ba8) {
            ctx->pc = 0x302BBCu;
            goto label_302bbc;
        }
    }
    ctx->pc = 0x302BB0u;
    // 0x302bb0: 0x821007
    ctx->pc = 0x302bb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x302bb4: 0x10000013
    ctx->pc = 0x302BB4u;
    {
        const bool branch_taken_0x302bb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x302BB8u;
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
        if (branch_taken_0x302bb4) {
            ctx->pc = 0x302C04u;
            goto label_302c04;
        }
    }
    ctx->pc = 0x302BBCu;
label_302bbc:
    // 0x302bbc: 0x3c03ffff
    ctx->pc = 0x302bbcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x302bc0: 0x3183e
    ctx->pc = 0x302bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x302bc4: 0x2484ffec
    ctx->pc = 0x302bc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x302bc8: 0x2882001f
    ctx->pc = 0x302bc8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 31));
    // 0x302bcc: 0x10400006
    ctx->pc = 0x302BCCu;
    {
        const bool branch_taken_0x302bcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x302BD0u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        if (branch_taken_0x302bcc) {
            ctx->pc = 0x302BE8u;
            goto label_302be8;
        }
    }
    ctx->pc = 0x302BD4u;
    // 0x302bd4: 0x2402001f
    ctx->pc = 0x302bd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
    // 0x302bd8: 0x24030001
    ctx->pc = 0x302bd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x302bdc: 0x441023
    ctx->pc = 0x302bdcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x302be0: 0x10000002
    ctx->pc = 0x302BE0u;
    {
        const bool branch_taken_0x302be0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x302BE4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        if (branch_taken_0x302be0) {
            ctx->pc = 0x302BECu;
            goto label_302bec;
        }
    }
    ctx->pc = 0x302BE8u;
label_302be8:
    // 0x302be8: 0x24020001
    ctx->pc = 0x302be8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_302bec:
    // 0x302bec: 0x2103c
    ctx->pc = 0x302becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x302bf0: 0x2403ffff
    ctx->pc = 0x302bf0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x302bf4: 0x3183c
    ctx->pc = 0x302bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x302bf8: 0x2103e
    ctx->pc = 0x302bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x302bfc: 0xa32824
    ctx->pc = 0x302bfcu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x302c00: 0xa22825
    ctx->pc = 0x302c00u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_302c04:
    // 0x302c04: 0xa0102d
    ctx->pc = 0x302c04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302c08: 0x3e00008
    ctx->pc = 0x302C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302C0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x302B9Cu: goto label_302b9c;
            case 0x302BBCu: goto label_302bbc;
            case 0x302BE8u: goto label_302be8;
            case 0x302BECu: goto label_302bec;
            case 0x302C04u: goto label_302c04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x302C10u;
}
