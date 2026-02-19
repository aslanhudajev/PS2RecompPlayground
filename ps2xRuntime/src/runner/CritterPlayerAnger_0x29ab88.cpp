#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterPlayerAnger
// Address: 0x29ab88 - 0x29ac08
void CritterPlayerAnger_0x29ab88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29ab88u;

    // 0x29ab88: 0x52900
    ctx->pc = 0x29ab88u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    // 0x29ab8c: 0x851021
    ctx->pc = 0x29ab8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x29ab90: 0xc4410208
    ctx->pc = 0x29ab90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ab94: 0x40202d
    ctx->pc = 0x29ab94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ab98: 0x3c013f80
    ctx->pc = 0x29ab98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29ab9c: 0x44811000
    ctx->pc = 0x29ab9cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x29aba0: 0x46020834
    ctx->pc = 0x29aba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aba4: 0x0
    ctx->pc = 0x29aba4u;
    // NOP
    // 0x29aba8: 0x45000005
    ctx->pc = 0x29ABA8u;
    {
        const bool branch_taken_0x29aba8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29ABACu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x29aba8) {
            ctx->pc = 0x29ABC0u;
            goto label_29abc0;
        }
    }
    ctx->pc = 0x29ABB0u;
    // 0x29abb0: 0x3c020035
    ctx->pc = 0x29abb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x29abb4: 0xc4401dbc
    ctx->pc = 0x29abb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29abb8: 0x3e00008
    ctx->pc = 0x29ABB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29ABBCu;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29ABC0u: goto label_29abc0;
            case 0x29ABE8u: goto label_29abe8;
            case 0x29ABF0u: goto label_29abf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29ABC0u;
label_29abc0:
    // 0x29abc0: 0x0
    ctx->pc = 0x29abc0u;
    // NOP
    // 0x29abc4: 0x0
    ctx->pc = 0x29abc4u;
    // NOP
    // 0x29abc8: 0x46010003
    ctx->pc = 0x29abc8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x29abcc: 0x3c013c23
    ctx->pc = 0x29abccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x29abd0: 0x3421d70a
    ctx->pc = 0x29abd0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x29abd4: 0x44810800
    ctx->pc = 0x29abd4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x29abd8: 0x46010034
    ctx->pc = 0x29abd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29abdc: 0x0
    ctx->pc = 0x29abdcu;
    // NOP
    // 0x29abe0: 0x45000003
    ctx->pc = 0x29ABE0u;
    {
        const bool branch_taken_0x29abe0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29ABE4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x29abe0) {
            ctx->pc = 0x29ABF0u;
            goto label_29abf0;
        }
    }
    ctx->pc = 0x29ABE8u;
label_29abe8:
    // 0x29abe8: 0x3e00008
    ctx->pc = 0x29ABE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29ABECu;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29ABC0u: goto label_29abc0;
            case 0x29ABE8u: goto label_29abe8;
            case 0x29ABF0u: goto label_29abf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29ABF0u;
label_29abf0:
    // 0x29abf0: 0xc4411dbc
    ctx->pc = 0x29abf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29abf4: 0x46000834
    ctx->pc = 0x29abf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29abf8: 0x4501fffb
    ctx->pc = 0x29ABF8u;
    {
        const bool branch_taken_0x29abf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29abf8) {
            ctx->pc = 0x29ABE8u;
            goto label_29abe8;
        }
    }
    ctx->pc = 0x29AC00u;
    // 0x29ac00: 0x3e00008
    ctx->pc = 0x29AC00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29ABC0u: goto label_29abc0;
            case 0x29ABE8u: goto label_29abe8;
            case 0x29ABF0u: goto label_29abf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29AC08u;
}
