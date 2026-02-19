#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_enemy_level
// Address: 0x237fe0 - 0x238068
void get_enemy_level_0x237fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x237fe0u;

    // 0x237fe0: 0x3c020033
    ctx->pc = 0x237fe0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x237fe4: 0x2442d8e0
    ctx->pc = 0x237fe4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957280));
    // 0x237fe8: 0x42080
    ctx->pc = 0x237fe8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x237fec: 0x822021
    ctx->pc = 0x237fecu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x237ff0: 0x3c020034
    ctx->pc = 0x237ff0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x237ff4: 0x8c42e7c8
    ctx->pc = 0x237ff4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x237ff8: 0xc4820000
    ctx->pc = 0x237ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x237ffc: 0xc44000ac
    ctx->pc = 0x237ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238000: 0x46001082
    ctx->pc = 0x238000u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x238004: 0x3c013f2a
    ctx->pc = 0x238004u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16170 << 16));
    // 0x238008: 0x3421c083
    ctx->pc = 0x238008u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49283));
    // 0x23800c: 0x44810000
    ctx->pc = 0x23800cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x238010: 0x46001002
    ctx->pc = 0x238010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x238014: 0x3c013eaa
    ctx->pc = 0x238014u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16042 << 16));
    // 0x238018: 0x34217efa
    ctx->pc = 0x238018u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32506));
    // 0x23801c: 0x44810800
    ctx->pc = 0x23801cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x238020: 0x460c0034
    ctx->pc = 0x238020u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238024: 0x0
    ctx->pc = 0x238024u;
    // NOP
    // 0x238028: 0x45000003
    ctx->pc = 0x238028u;
    {
        const bool branch_taken_0x238028 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23802Cu;
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        if (branch_taken_0x238028) {
            ctx->pc = 0x238038u;
            goto label_238038;
        }
    }
    ctx->pc = 0x238030u;
    // 0x238030: 0x3e00008
    ctx->pc = 0x238030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238034u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238038u: goto label_238038;
            case 0x238060u: goto label_238060;
            default: break;
        }
        return;
    }
    ctx->pc = 0x238038u;
label_238038:
    // 0x238038: 0x460c1034
    ctx->pc = 0x238038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23803c: 0x0
    ctx->pc = 0x23803cu;
    // NOP
    // 0x238040: 0x45010007
    ctx->pc = 0x238040u;
    {
        const bool branch_taken_0x238040 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x238044u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x238040) {
            ctx->pc = 0x238060u;
            goto label_238060;
        }
    }
    ctx->pc = 0x238048u;
    // 0x238048: 0x44800000
    ctx->pc = 0x238048u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x23804c: 0x460c0034
    ctx->pc = 0x23804cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238050: 0x0
    ctx->pc = 0x238050u;
    // NOP
    // 0x238054: 0x45000002
    ctx->pc = 0x238054u;
    {
        const bool branch_taken_0x238054 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x238058u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x238054) {
            ctx->pc = 0x238060u;
            goto label_238060;
        }
    }
    ctx->pc = 0x23805Cu;
    // 0x23805c: 0x24020001
    ctx->pc = 0x23805cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_238060:
    // 0x238060: 0x3e00008
    ctx->pc = 0x238060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238038u: goto label_238038;
            case 0x238060u: goto label_238060;
            default: break;
        }
        return;
    }
    ctx->pc = 0x238068u;
}
