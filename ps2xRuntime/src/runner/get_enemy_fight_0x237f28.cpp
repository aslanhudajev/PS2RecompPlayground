#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_enemy_fight
// Address: 0x237f28 - 0x237fdc
void get_enemy_fight_0x237f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x237f28u;

    // 0x237f28: 0x80282d
    ctx->pc = 0x237f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237f2c: 0x3c020033
    ctx->pc = 0x237f2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x237f30: 0x2442d7d0
    ctx->pc = 0x237f30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957008));
    // 0x237f34: 0x52080
    ctx->pc = 0x237f34u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
    // 0x237f38: 0x821021
    ctx->pc = 0x237f38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x237f3c: 0x3c030034
    ctx->pc = 0x237f3cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x237f40: 0x8c63e7c8
    ctx->pc = 0x237f40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
    // 0x237f44: 0xc4410000
    ctx->pc = 0x237f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237f48: 0xc46000bc
    ctx->pc = 0x237f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237f4c: 0x460008c2
    ctx->pc = 0x237f4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x237f50: 0x3c020033
    ctx->pc = 0x237f50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x237f54: 0x2442d8e0
    ctx->pc = 0x237f54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957280));
    // 0x237f58: 0x822021
    ctx->pc = 0x237f58u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x237f5c: 0xc4820000
    ctx->pc = 0x237f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x237f60: 0xc46000ac
    ctx->pc = 0x237f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237f64: 0x46001082
    ctx->pc = 0x237f64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x237f68: 0x3c013f2a
    ctx->pc = 0x237f68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16170 << 16));
    // 0x237f6c: 0x3421c083
    ctx->pc = 0x237f6cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49283));
    // 0x237f70: 0x44810000
    ctx->pc = 0x237f70u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x237f74: 0x46001002
    ctx->pc = 0x237f74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x237f78: 0x3c013eaa
    ctx->pc = 0x237f78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16042 << 16));
    // 0x237f7c: 0x34217efa
    ctx->pc = 0x237f7cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32506));
    // 0x237f80: 0x44810800
    ctx->pc = 0x237f80u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x237f84: 0x460c0034
    ctx->pc = 0x237f84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237f88: 0x0
    ctx->pc = 0x237f88u;
    // NOP
    // 0x237f8c: 0x45010004
    ctx->pc = 0x237F8Cu;
    {
        const bool branch_taken_0x237f8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x237F90u;
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        if (branch_taken_0x237f8c) {
            ctx->pc = 0x237FA0u;
            goto label_237fa0;
        }
    }
    ctx->pc = 0x237F94u;
    // 0x237f94: 0x2402001e
    ctx->pc = 0x237f94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
    // 0x237f98: 0x14a20003
    ctx->pc = 0x237F98u;
    {
        const bool branch_taken_0x237f98 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x237f98) {
            ctx->pc = 0x237FA8u;
            goto label_237fa8;
        }
    }
    ctx->pc = 0x237FA0u;
label_237fa0:
    // 0x237fa0: 0x3e00008
    ctx->pc = 0x237FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237FA4u;
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x237FA0u: goto label_237fa0;
            case 0x237FA8u: goto label_237fa8;
            case 0x237FC8u: goto label_237fc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x237FA8u;
label_237fa8:
    // 0x237fa8: 0x460c1034
    ctx->pc = 0x237fa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237fac: 0x45000006
    ctx->pc = 0x237FACu;
    {
        const bool branch_taken_0x237fac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x237fac) {
            ctx->pc = 0x237FC8u;
            goto label_237fc8;
        }
    }
    ctx->pc = 0x237FB4u;
    // 0x237fb4: 0x3c013f2a
    ctx->pc = 0x237fb4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16170 << 16));
    // 0x237fb8: 0x3421c083
    ctx->pc = 0x237fb8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49283));
    // 0x237fbc: 0x44810000
    ctx->pc = 0x237fbcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x237fc0: 0x3e00008
    ctx->pc = 0x237FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237FC4u;
        ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x237FA0u: goto label_237fa0;
            case 0x237FA8u: goto label_237fa8;
            case 0x237FC8u: goto label_237fc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x237FC8u;
label_237fc8:
    // 0x237fc8: 0x3c013eaa
    ctx->pc = 0x237fc8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16042 << 16));
    // 0x237fcc: 0x34217efa
    ctx->pc = 0x237fccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32506));
    // 0x237fd0: 0x44810000
    ctx->pc = 0x237fd0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x237fd4: 0x3e00008
    ctx->pc = 0x237FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237FD8u;
        ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x237FA0u: goto label_237fa0;
            case 0x237FA8u: goto label_237fa8;
            case 0x237FC8u: goto label_237fc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x237FDCu;
}
