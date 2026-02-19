#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerHasAllCrystals
// Address: 0x276e48 - 0x276ec4
void PlayerHasAllCrystals_0x276e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x276e48u;

    // 0x276e48: 0x24022b00
    ctx->pc = 0x276e48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x276e4c: 0x822018
    ctx->pc = 0x276e4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x276e50: 0x3c020032
    ctx->pc = 0x276e50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x276e54: 0x24421bc0
    ctx->pc = 0x276e54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x276e58: 0x823021
    ctx->pc = 0x276e58u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x276e5c: 0x8cc200fc
    ctx->pc = 0x276e5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 252)));
    // 0x276e60: 0x14400003
    ctx->pc = 0x276E60u;
    {
        const bool branch_taken_0x276e60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x276E64u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x276e60) {
            ctx->pc = 0x276E70u;
            goto label_276e70;
        }
    }
    ctx->pc = 0x276E68u;
    // 0x276e68: 0x3e00008
    ctx->pc = 0x276E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276E6Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276E70u: goto label_276e70;
            case 0x276EA0u: goto label_276ea0;
            case 0x276EA8u: goto label_276ea8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276E70u;
label_276e70:
    // 0x276e70: 0x8cc30104
    ctx->pc = 0x276e70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x276e74: 0x8c421540
    ctx->pc = 0x276e74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 5440)));
    // 0x276e78: 0x10620009
    ctx->pc = 0x276E78u;
    {
        const bool branch_taken_0x276e78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x276E7Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x276e78) {
            ctx->pc = 0x276EA0u;
            goto label_276ea0;
        }
    }
    ctx->pc = 0x276E80u;
    // 0x276e80: 0x8cc2000c
    ctx->pc = 0x276e80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x276e84: 0x240400b4
    ctx->pc = 0x276e84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 180));
    // 0x276e88: 0x441018
    ctx->pc = 0x276e88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x276e8c: 0x621821
    ctx->pc = 0x276e8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x276e90: 0xc31821
    ctx->pc = 0x276e90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x276e94: 0x84640d0a
    ctx->pc = 0x276e94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 3338)));
    // 0x276e98: 0x4810003
    ctx->pc = 0x276E98u;
    {
        const bool branch_taken_0x276e98 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x276E9Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x276e98) {
            ctx->pc = 0x276EA8u;
            goto label_276ea8;
        }
    }
    ctx->pc = 0x276EA0u;
label_276ea0:
    // 0x276ea0: 0x3e00008
    ctx->pc = 0x276EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276EA4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276E70u: goto label_276e70;
            case 0x276EA0u: goto label_276ea0;
            case 0x276EA8u: goto label_276ea8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276EA8u;
label_276ea8:
    // 0x276ea8: 0x2442fa90
    ctx->pc = 0x276ea8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965904));
    // 0x276eac: 0x51880
    ctx->pc = 0x276eacu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x276eb0: 0x621821
    ctx->pc = 0x276eb0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x276eb4: 0x8c620000
    ctx->pc = 0x276eb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x276eb8: 0x821026
    ctx->pc = 0x276eb8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x276ebc: 0x3e00008
    ctx->pc = 0x276EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276EC0u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276E70u: goto label_276e70;
            case 0x276EA0u: goto label_276ea0;
            case 0x276EA8u: goto label_276ea8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276EC4u;
}
