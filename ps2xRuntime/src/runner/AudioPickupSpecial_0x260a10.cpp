#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPickupSpecial
// Address: 0x260a10 - 0x260ac8
void AudioPickupSpecial_0x260a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260a10u;

    // 0x260a10: 0x3c020034
    ctx->pc = 0x260a10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x260a14: 0x2442d330
    ctx->pc = 0x260a14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955824));
    // 0x260a18: 0x42080
    ctx->pc = 0x260a18u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x260a1c: 0x822021
    ctx->pc = 0x260a1cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x260a20: 0x8c880000
    ctx->pc = 0x260a20u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x260a24: 0x24040027
    ctx->pc = 0x260a24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 39));
    // 0x260a28: 0x24020009
    ctx->pc = 0x260a28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x260a2c: 0x10a20011
    ctx->pc = 0x260A2Cu;
    {
        const bool branch_taken_0x260a2c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x260A30u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 127));
        if (branch_taken_0x260a2c) {
            ctx->pc = 0x260A74u;
            goto label_260a74;
        }
    }
    ctx->pc = 0x260A34u;
    // 0x260a34: 0x28a2000a
    ctx->pc = 0x260a34u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 10));
    // 0x260a38: 0x10400005
    ctx->pc = 0x260A38u;
    {
        const bool branch_taken_0x260a38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x260A3Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x260a38) {
            ctx->pc = 0x260A50u;
            goto label_260a50;
        }
    }
    ctx->pc = 0x260A40u;
    // 0x260a40: 0x10a20007
    ctx->pc = 0x260A40u;
    {
        const bool branch_taken_0x260a40 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x260A44u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x260a40) {
            ctx->pc = 0x260A60u;
            goto label_260a60;
        }
    }
    ctx->pc = 0x260A48u;
    // 0x260a48: 0x1000001d
    ctx->pc = 0x260A48u;
    {
        const bool branch_taken_0x260a48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x260A4Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x260a48) {
            ctx->pc = 0x260AC0u;
            goto label_260ac0;
        }
    }
    ctx->pc = 0x260A50u;
label_260a50:
    // 0x260a50: 0x24030026
    ctx->pc = 0x260a50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 38));
    // 0x260a54: 0x38a2000f
    ctx->pc = 0x260a54u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 5), 15));
    // 0x260a58: 0x10000017
    ctx->pc = 0x260A58u;
    {
        const bool branch_taken_0x260a58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x260A5Cu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
        if (branch_taken_0x260a58) {
            ctx->pc = 0x260AB8u;
            goto label_260ab8;
        }
    }
    ctx->pc = 0x260A60u;
label_260a60:
    // 0x260a60: 0x3c020020
    ctx->pc = 0x260a60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
    // 0x260a64: 0xc21024
    ctx->pc = 0x260a64u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x260a68: 0x24030029
    ctx->pc = 0x260a68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 41));
    // 0x260a6c: 0x10000012
    ctx->pc = 0x260A6Cu;
    {
        const bool branch_taken_0x260a6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x260A70u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
        if (branch_taken_0x260a6c) {
            ctx->pc = 0x260AB8u;
            goto label_260ab8;
        }
    }
    ctx->pc = 0x260A74u;
label_260a74:
    // 0x260a74: 0x30c20001
    ctx->pc = 0x260a74u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 1));
    // 0x260a78: 0x10400003
    ctx->pc = 0x260A78u;
    {
        const bool branch_taken_0x260a78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x260A7Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 256));
        if (branch_taken_0x260a78) {
            ctx->pc = 0x260A88u;
            goto label_260a88;
        }
    }
    ctx->pc = 0x260A80u;
    // 0x260a80: 0x1000000d
    ctx->pc = 0x260A80u;
    {
        const bool branch_taken_0x260a80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x260A84u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 88));
        if (branch_taken_0x260a80) {
            ctx->pc = 0x260AB8u;
            goto label_260ab8;
        }
    }
    ctx->pc = 0x260A88u;
label_260a88:
    // 0x260a88: 0x10400004
    ctx->pc = 0x260A88u;
    {
        const bool branch_taken_0x260a88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x260A8Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 512));
        if (branch_taken_0x260a88) {
            ctx->pc = 0x260A9Cu;
            goto label_260a9c;
        }
    }
    ctx->pc = 0x260A90u;
    // 0x260a90: 0x24040056
    ctx->pc = 0x260a90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 86));
    // 0x260a94: 0x10000008
    ctx->pc = 0x260A94u;
    {
        const bool branch_taken_0x260a94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x260A98u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 180));
        if (branch_taken_0x260a94) {
            ctx->pc = 0x260AB8u;
            goto label_260ab8;
        }
    }
    ctx->pc = 0x260A9Cu;
label_260a9c:
    // 0x260a9c: 0x10400004
    ctx->pc = 0x260A9Cu;
    {
        const bool branch_taken_0x260a9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x260AA0u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 1024));
        if (branch_taken_0x260a9c) {
            ctx->pc = 0x260AB0u;
            goto label_260ab0;
        }
    }
    ctx->pc = 0x260AA4u;
    // 0x260aa4: 0x24040054
    ctx->pc = 0x260aa4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 84));
    // 0x260aa8: 0x10000003
    ctx->pc = 0x260AA8u;
    {
        const bool branch_taken_0x260aa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x260AACu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 180));
        if (branch_taken_0x260aa8) {
            ctx->pc = 0x260AB8u;
            goto label_260ab8;
        }
    }
    ctx->pc = 0x260AB0u;
label_260ab0:
    // 0x260ab0: 0x2402005e
    ctx->pc = 0x260ab0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 94));
    // 0x260ab4: 0x43200b
    ctx->pc = 0x260ab4u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
label_260ab8:
    // 0x260ab8: 0x100282d
    ctx->pc = 0x260ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260abc: 0xe0302d
    ctx->pc = 0x260abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_260ac0:
    // 0x260ac0: 0x8088a4a
    ctx->pc = 0x260AC0u;
    ctx->pc = 0x260AC4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 66));
    ctx->pc = 0x222928u;
    AudioSFX2_0x222928(rdram, ctx, runtime); return;
    ctx->pc = 0x260AC8u;
}
