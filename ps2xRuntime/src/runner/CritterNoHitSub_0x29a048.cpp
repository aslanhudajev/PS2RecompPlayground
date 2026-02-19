#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterNoHitSub
// Address: 0x29a048 - 0x29a0ac
void CritterNoHitSub_0x29a048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29a048u;

    // 0x29a048: 0x182d
    ctx->pc = 0x29a048u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a04c: 0x24860524
    ctx->pc = 0x29a04cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 1316));
    // 0x29a050: 0x3c070031
    ctx->pc = 0x29a050u;
    SET_GPR_U32(ctx, 7, ((uint32_t)49 << 16));
    // 0x29a054: 0x2484052c
    ctx->pc = 0x29a054u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1324));
    // 0x29a058: 0x31040
    ctx->pc = 0x29a058u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x29a05c: 0x0
    ctx->pc = 0x29a05cu;
    // NOP
label_29a060:
    // 0x29a060: 0xc21021
    ctx->pc = 0x29a060u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29a064: 0x84420000
    ctx->pc = 0x29a064u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29a068: 0x5445000b
    ctx->pc = 0x29A068u;
    {
        const bool branch_taken_0x29a068 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x29a068) {
            ctx->pc = 0x29A06Cu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x29A098u;
            goto label_29a098;
        }
    }
    ctx->pc = 0x29A070u;
    // 0x29a070: 0x31080
    ctx->pc = 0x29a070u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a074: 0x821021
    ctx->pc = 0x29a074u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29a078: 0xc4e1ffa4
    ctx->pc = 0x29a078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a07c: 0xc4400000
    ctx->pc = 0x29a07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a080: 0x46000834
    ctx->pc = 0x29a080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a084: 0x0
    ctx->pc = 0x29a084u;
    // NOP
    // 0x29a088: 0x45000003
    ctx->pc = 0x29A088u;
    {
        const bool branch_taken_0x29a088 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29A08Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x29a088) {
            ctx->pc = 0x29A098u;
            goto label_29a098;
        }
    }
    ctx->pc = 0x29A090u;
    // 0x29a090: 0x3e00008
    ctx->pc = 0x29A090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A094u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29A060u: goto label_29a060;
            case 0x29A098u: goto label_29a098;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29A098u;
label_29a098:
    // 0x29a098: 0x28620004
    ctx->pc = 0x29a098u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
    // 0x29a09c: 0x1440fff0
    ctx->pc = 0x29A09Cu;
    {
        const bool branch_taken_0x29a09c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29A0A0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x29a09c) {
            ctx->pc = 0x29A060u;
            goto label_29a060;
        }
    }
    ctx->pc = 0x29A0A4u;
    // 0x29a0a4: 0x3e00008
    ctx->pc = 0x29A0A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A0A8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29A060u: goto label_29a060;
            case 0x29A098u: goto label_29a098;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29A0ACu;
}
