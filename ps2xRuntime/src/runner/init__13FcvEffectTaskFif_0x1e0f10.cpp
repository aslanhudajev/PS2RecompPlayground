#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__13FcvEffectTaskFif
// Address: 0x1e0f10 - 0x1e0fac
void init__13FcvEffectTaskFif_0x1e0f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__13FcvEffectTaskFif");


    ctx->pc = 0x1e0f10u;

    // 0x1e0f10: 0x3c033f99
    ctx->pc = 0x1e0f10u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16281 << 16));
    // 0x1e0f14: 0xe48c0040
    ctx->pc = 0x1e0f14u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x1e0f18: 0x3463999a
    ctx->pc = 0x1e0f18u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 39322));
    // 0x1e0f1c: 0xac830048
    ctx->pc = 0x1e0f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
    // 0x1e0f20: 0x2403003f
    ctx->pc = 0x1e0f20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 63));
    // 0x1e0f24: 0x10a3001d
    ctx->pc = 0x1E0F24u;
    {
        const bool branch_taken_0x1e0f24 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1E0F28u;
        SET_GPR_U32(ctx, 3, ((uint32_t)17297 << 16));
        if (branch_taken_0x1e0f24) {
            ctx->pc = 0x1E0F9Cu;
            goto label_1e0f9c;
        }
    }
    ctx->pc = 0x1E0F2Cu;
    // 0x1e0f2c: 0x24030024
    ctx->pc = 0x1e0f2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 36));
    // 0x1e0f30: 0x10a30018
    ctx->pc = 0x1E0F30u;
    {
        const bool branch_taken_0x1e0f30 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1E0F34u;
        SET_GPR_U32(ctx, 3, ((uint32_t)17184 << 16));
        if (branch_taken_0x1e0f30) {
            ctx->pc = 0x1E0F94u;
            goto label_1e0f94;
        }
    }
    ctx->pc = 0x1E0F38u;
    // 0x1e0f38: 0x24030018
    ctx->pc = 0x1e0f38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
    // 0x1e0f3c: 0x10a30012
    ctx->pc = 0x1E0F3Cu;
    {
        const bool branch_taken_0x1e0f3c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1E0F40u;
        SET_GPR_U32(ctx, 3, ((uint32_t)16358 << 16));
        if (branch_taken_0x1e0f3c) {
            ctx->pc = 0x1E0F88u;
            goto label_1e0f88;
        }
    }
    ctx->pc = 0x1E0F44u;
    // 0x1e0f44: 0x24030014
    ctx->pc = 0x1e0f44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e0f48: 0x10a3000c
    ctx->pc = 0x1E0F48u;
    {
        const bool branch_taken_0x1e0f48 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1E0F4Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)16153 << 16));
        if (branch_taken_0x1e0f48) {
            ctx->pc = 0x1E0F7Cu;
            goto label_1e0f7c;
        }
    }
    ctx->pc = 0x1E0F50u;
    // 0x1e0f50: 0x24030017
    ctx->pc = 0x1e0f50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 23));
    // 0x1e0f54: 0x10a30007
    ctx->pc = 0x1E0F54u;
    {
        const bool branch_taken_0x1e0f54 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1E0F58u;
        SET_GPR_U32(ctx, 3, ((uint32_t)16880 << 16));
        if (branch_taken_0x1e0f54) {
            ctx->pc = 0x1E0F74u;
            goto label_1e0f74;
        }
    }
    ctx->pc = 0x1E0F5Cu;
    // 0x1e0f5c: 0x24030016
    ctx->pc = 0x1e0f5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 22));
    // 0x1e0f60: 0x10a30003
    ctx->pc = 0x1E0F60u;
    {
        const bool branch_taken_0x1e0f60 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1e0f60) {
            ctx->pc = 0x1E0F70u;
            goto label_1e0f70;
        }
    }
    ctx->pc = 0x1E0F68u;
    // 0x1e0f68: 0x1000000e
    ctx->pc = 0x1E0F68u;
    {
        const bool branch_taken_0x1e0f68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e0f68) {
            ctx->pc = 0x1E0FA4u;
            goto label_1e0fa4;
        }
    }
    ctx->pc = 0x1E0F70u;
label_1e0f70:
    // 0x1e0f70: 0x3c0341f0
    ctx->pc = 0x1e0f70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16880 << 16));
label_1e0f74:
    // 0x1e0f74: 0x1000000b
    ctx->pc = 0x1E0F74u;
    {
        const bool branch_taken_0x1e0f74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E0F78u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
        if (branch_taken_0x1e0f74) {
            ctx->pc = 0x1E0FA4u;
            goto label_1e0fa4;
        }
    }
    ctx->pc = 0x1E0F7Cu;
label_1e0f7c:
    // 0x1e0f7c: 0x3463999a
    ctx->pc = 0x1e0f7cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 39322));
    // 0x1e0f80: 0x10000008
    ctx->pc = 0x1E0F80u;
    {
        const bool branch_taken_0x1e0f80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E0F84u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
        if (branch_taken_0x1e0f80) {
            ctx->pc = 0x1E0FA4u;
            goto label_1e0fa4;
        }
    }
    ctx->pc = 0x1E0F88u;
label_1e0f88:
    // 0x1e0f88: 0x34636667
    ctx->pc = 0x1e0f88u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 26215));
    // 0x1e0f8c: 0x10000005
    ctx->pc = 0x1E0F8Cu;
    {
        const bool branch_taken_0x1e0f8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E0F90u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
        if (branch_taken_0x1e0f8c) {
            ctx->pc = 0x1E0FA4u;
            goto label_1e0fa4;
        }
    }
    ctx->pc = 0x1E0F94u;
label_1e0f94:
    // 0x1e0f94: 0x10000003
    ctx->pc = 0x1E0F94u;
    {
        const bool branch_taken_0x1e0f94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E0F98u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
        if (branch_taken_0x1e0f94) {
            ctx->pc = 0x1E0FA4u;
            goto label_1e0fa4;
        }
    }
    ctx->pc = 0x1E0F9Cu;
label_1e0f9c:
    // 0x1e0f9c: 0x34638000
    ctx->pc = 0x1e0f9cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32768));
    // 0x1e0fa0: 0xac830040
    ctx->pc = 0x1e0fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
label_1e0fa4:
    // 0x1e0fa4: 0x3e00008
    ctx->pc = 0x1E0FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0F70u: goto label_1e0f70;
            case 0x1E0F74u: goto label_1e0f74;
            case 0x1E0F7Cu: goto label_1e0f7c;
            case 0x1E0F88u: goto label_1e0f88;
            case 0x1E0F94u: goto label_1e0f94;
            case 0x1E0F9Cu: goto label_1e0f9c;
            case 0x1E0FA4u: goto label_1e0fa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E0FACu;
}
