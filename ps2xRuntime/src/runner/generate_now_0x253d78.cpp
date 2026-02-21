#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: generate_now
// Address: 0x253d78 - 0x253e20
void generate_now_0x253d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x253d78u;

    // 0x253d78: 0x27bdfff0
    ctx->pc = 0x253d78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x253d7c: 0xffbf0000
    ctx->pc = 0x253d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x253d80: 0x3c020031
    ctx->pc = 0x253d80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x253d84: 0x3c030032
    ctx->pc = 0x253d84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x253d88: 0x8c42ff9c
    ctx->pc = 0x253d88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x253d8c: 0x8c630808
    ctx->pc = 0x253d8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 2056)));
    // 0x253d90: 0x431025
    ctx->pc = 0x253d90u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x253d94: 0x1440001e
    ctx->pc = 0x253D94u;
    {
        const bool branch_taken_0x253d94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x253D98u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 240));
        if (branch_taken_0x253d94) {
            ctx->pc = 0x253E10u;
            goto label_253e10;
        }
    }
    ctx->pc = 0x253D9Cu;
    // 0x253d9c: 0x84820008
    ctx->pc = 0x253d9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x253da0: 0x18400006
    ctx->pc = 0x253DA0u;
    {
        const bool branch_taken_0x253da0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x253DA4u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
        if (branch_taken_0x253da0) {
            ctx->pc = 0x253DBCu;
            goto label_253dbc;
        }
    }
    ctx->pc = 0x253DA8u;
    // 0x253da8: 0x3c020031
    ctx->pc = 0x253da8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x253dac: 0x9442ffbc
    ctx->pc = 0x253dacu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x253db0: 0x621023
    ctx->pc = 0x253db0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x253db4: 0x10000016
    ctx->pc = 0x253DB4u;
    {
        const bool branch_taken_0x253db4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x253DB8u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x253db4) {
            ctx->pc = 0x253E10u;
            goto label_253e10;
        }
    }
    ctx->pc = 0x253DBCu;
label_253dbc:
    // 0x253dbc: 0x18c00015
    ctx->pc = 0x253DBCu;
    {
        const bool branch_taken_0x253dbc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x253DC0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x253dbc) {
            ctx->pc = 0x253E14u;
            goto label_253e14;
        }
    }
    ctx->pc = 0x253DC4u;
    // 0x253dc4: 0x3c020034
    ctx->pc = 0x253dc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x253dc8: 0x8c42cdbc
    ctx->pc = 0x253dc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954428)));
    // 0x253dcc: 0x10400004
    ctx->pc = 0x253DCCu;
    {
        const bool branch_taken_0x253dcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x253DD0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x253dcc) {
            ctx->pc = 0x253DE0u;
            goto label_253de0;
        }
    }
    ctx->pc = 0x253DD4u;
    // 0x253dd4: 0x10e0000f
    ctx->pc = 0x253DD4u;
    {
        const bool branch_taken_0x253dd4 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x253DD8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x253dd4) {
            ctx->pc = 0x253E14u;
            goto label_253e14;
        }
    }
    ctx->pc = 0x253DDCu;
    // 0x253ddc: 0x3c020031
    ctx->pc = 0x253ddcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_253de0:
    // 0x253de0: 0x8c430018
    ctx->pc = 0x253de0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x253de4: 0x2402400c
    ctx->pc = 0x253de4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16396));
    // 0x253de8: 0x1062000a
    ctx->pc = 0x253DE8u;
    {
        const bool branch_taken_0x253de8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x253DECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x253de8) {
            ctx->pc = 0x253E14u;
            goto label_253e14;
        }
    }
    ctx->pc = 0x253DF0u;
    // 0x253df0: 0xc094ef0
    ctx->pc = 0x253DF0u;
    SET_GPR_U32(ctx, 31, 0x253DF8u);
    ctx->pc = 0x253DF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x253BC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DistanceToClosestPlayer_0x253bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253DF8u; }
    }
    if (ctx->pc != 0x253DF8u) { return; }
    ctx->pc = 0x253DF8u;
    // 0x253df8: 0x3c01447a
    ctx->pc = 0x253df8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17530 << 16));
    // 0x253dfc: 0x44810800
    ctx->pc = 0x253dfcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x253e00: 0x46000834
    ctx->pc = 0x253e00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253e04: 0x0
    ctx->pc = 0x253e04u;
    // NOP
    // 0x253e08: 0x45000002
    ctx->pc = 0x253E08u;
    {
        const bool branch_taken_0x253e08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x253E0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x253e08) {
            ctx->pc = 0x253E14u;
            goto label_253e14;
        }
    }
    ctx->pc = 0x253E10u;
label_253e10:
    // 0x253e10: 0x102d
    ctx->pc = 0x253e10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253e14:
    // 0x253e14: 0xdfbf0000
    ctx->pc = 0x253e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253e18: 0x3e00008
    ctx->pc = 0x253E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253E1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x253DBCu: goto label_253dbc;
            case 0x253DE0u: goto label_253de0;
            case 0x253E10u: goto label_253e10;
            case 0x253E14u: goto label_253e14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x253E20u;
}
