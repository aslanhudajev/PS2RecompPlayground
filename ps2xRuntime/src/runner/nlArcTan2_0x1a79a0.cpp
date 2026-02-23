#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlArcTan2
// Address: 0x1a79a0 - 0x1a7b10
void nlArcTan2_0x1a79a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlArcTan2");


    ctx->pc = 0x1a79a0u;

    // 0x1a79a0: 0x460c6834
    ctx->pc = 0x1a79a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a79a4: 0x27bdfff0
    ctx->pc = 0x1a79a4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a79a8: 0x4501002b
    ctx->pc = 0x1A79A8u;
    {
        const bool branch_taken_0x1a79a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A79ACu;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
        if (branch_taken_0x1a79a8) {
            ctx->pc = 0x1A7A58u;
            goto label_1a7a58;
        }
    }
    ctx->pc = 0x1A79B0u;
    // 0x1a79b0: 0x46006007
    ctx->pc = 0x1a79b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[12]);
    // 0x1a79b4: 0x46006834
    ctx->pc = 0x1a79b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a79b8: 0x0
    ctx->pc = 0x1a79b8u;
    // NOP
    // 0x1a79bc: 0x45010012
    ctx->pc = 0x1A79BCu;
    {
        const bool branch_taken_0x1a79bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a79bc) {
            ctx->pc = 0x1A7A08u;
            goto label_1a7a08;
        }
    }
    ctx->pc = 0x1A79C4u;
    // 0x1a79c4: 0x44800000
    ctx->pc = 0x1a79c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1a79c8: 0x0
    ctx->pc = 0x1a79c8u;
    // NOP
    // 0x1a79cc: 0x460d0032
    ctx->pc = 0x1a79ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a79d0: 0x0
    ctx->pc = 0x1a79d0u;
    // NOP
    // 0x1a79d4: 0x45000003
    ctx->pc = 0x1A79D4u;
    {
        const bool branch_taken_0x1a79d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A79D8u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a79d4) {
            ctx->pc = 0x1A79E4u;
            goto label_1a79e4;
        }
    }
    ctx->pc = 0x1A79DCu;
    // 0x1a79dc: 0x10000008
    ctx->pc = 0x1A79DCu;
    {
        const bool branch_taken_0x1a79dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a79dc) {
            ctx->pc = 0x1A7A00u;
            goto label_1a7a00;
        }
    }
    ctx->pc = 0x1A79E4u;
label_1a79e4:
    // 0x1a79e4: 0x0
    ctx->pc = 0x1a79e4u;
    // NOP
    // 0x1a79e8: 0x0
    ctx->pc = 0x1a79e8u;
    // NOP
    // 0x1a79ec: 0x460d6303
    ctx->pc = 0x1a79ecu;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[13];
    // 0x1a79f0: 0x0
    ctx->pc = 0x1a79f0u;
    // NOP
    // 0x1a79f4: 0x0
    ctx->pc = 0x1a79f4u;
    // NOP
    // 0x1a79f8: 0xc069e20
    ctx->pc = 0x1A79F8u;
    SET_GPR_U32(ctx, 31, 0x1A7A00u);
    ctx->pc = 0x1A7880u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan_0x1a7880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A00u; }
        else if (ctx->pc != 0x1A7A00u) { ctx->pc = 0x1A7A00u; }
    }
    if (ctx->pc != 0x1A7A00u) { return; }
    ctx->pc = 0x1A7A00u;
label_1a7a00:
    // 0x1a7a00: 0x10000041
    ctx->pc = 0x1A7A00u;
    {
        const bool branch_taken_0x1a7a00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7A04u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1a7a00) {
            ctx->pc = 0x1A7B08u;
            goto label_1a7b08;
        }
    }
    ctx->pc = 0x1A7A08u;
label_1a7a08:
    // 0x1a7a08: 0x44800000
    ctx->pc = 0x1a7a08u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1a7a0c: 0x0
    ctx->pc = 0x1a7a0cu;
    // NOP
    // 0x1a7a10: 0x460c0032
    ctx->pc = 0x1a7a10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7a14: 0x0
    ctx->pc = 0x1a7a14u;
    // NOP
    // 0x1a7a18: 0x45000003
    ctx->pc = 0x1A7A18u;
    {
        const bool branch_taken_0x1a7a18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7A1Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 49152));
        if (branch_taken_0x1a7a18) {
            ctx->pc = 0x1A7A28u;
            goto label_1a7a28;
        }
    }
    ctx->pc = 0x1A7A20u;
    // 0x1a7a20: 0x1000000b
    ctx->pc = 0x1A7A20u;
    {
        const bool branch_taken_0x1a7a20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a7a20) {
            ctx->pc = 0x1A7A50u;
            goto label_1a7a50;
        }
    }
    ctx->pc = 0x1A7A28u;
label_1a7a28:
    // 0x1a7a28: 0x0
    ctx->pc = 0x1a7a28u;
    // NOP
    // 0x1a7a2c: 0x0
    ctx->pc = 0x1a7a2cu;
    // NOP
    // 0x1a7a30: 0x460c6b03
    ctx->pc = 0x1a7a30u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[12] = ctx->f[13] / ctx->f[12];
    // 0x1a7a34: 0x0
    ctx->pc = 0x1a7a34u;
    // NOP
    // 0x1a7a38: 0x0
    ctx->pc = 0x1a7a38u;
    // NOP
    // 0x1a7a3c: 0xc069e20
    ctx->pc = 0x1A7A3Cu;
    SET_GPR_U32(ctx, 31, 0x1A7A44u);
    ctx->pc = 0x1A7880u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan_0x1a7880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A44u; }
        else if (ctx->pc != 0x1A7A44u) { ctx->pc = 0x1A7A44u; }
    }
    if (ctx->pc != 0x1A7A44u) { return; }
    ctx->pc = 0x1A7A44u;
    // 0x1a7a44: 0x3403c000
    ctx->pc = 0x1a7a44u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 49152));
    // 0x1a7a48: 0x621023
    ctx->pc = 0x1a7a48u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7a4c: 0x3042ffff
    ctx->pc = 0x1a7a4cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
label_1a7a50:
    // 0x1a7a50: 0x1000002c
    ctx->pc = 0x1A7A50u;
    {
        const bool branch_taken_0x1a7a50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a7a50) {
            ctx->pc = 0x1A7B04u;
            goto label_1a7b04;
        }
    }
    ctx->pc = 0x1A7A58u;
label_1a7a58:
    // 0x1a7a58: 0x46006007
    ctx->pc = 0x1a7a58u;
    ctx->f[0] = FPU_NEG_S(ctx->f[12]);
    // 0x1a7a5c: 0x46006834
    ctx->pc = 0x1a7a5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7a60: 0x0
    ctx->pc = 0x1a7a60u;
    // NOP
    // 0x1a7a64: 0x45010015
    ctx->pc = 0x1A7A64u;
    {
        const bool branch_taken_0x1a7a64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a7a64) {
            ctx->pc = 0x1A7ABCu;
            goto label_1a7abc;
        }
    }
    ctx->pc = 0x1A7A6Cu;
    // 0x1a7a6c: 0x44800000
    ctx->pc = 0x1a7a6cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1a7a70: 0x0
    ctx->pc = 0x1a7a70u;
    // NOP
    // 0x1a7a74: 0x460c0032
    ctx->pc = 0x1a7a74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7a78: 0x0
    ctx->pc = 0x1a7a78u;
    // NOP
    // 0x1a7a7c: 0x45000003
    ctx->pc = 0x1A7A7Cu;
    {
        const bool branch_taken_0x1a7a7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7A80u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16384));
        if (branch_taken_0x1a7a7c) {
            ctx->pc = 0x1A7A8Cu;
            goto label_1a7a8c;
        }
    }
    ctx->pc = 0x1A7A84u;
    // 0x1a7a84: 0x1000000b
    ctx->pc = 0x1A7A84u;
    {
        const bool branch_taken_0x1a7a84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a7a84) {
            ctx->pc = 0x1A7AB4u;
            goto label_1a7ab4;
        }
    }
    ctx->pc = 0x1A7A8Cu;
label_1a7a8c:
    // 0x1a7a8c: 0x0
    ctx->pc = 0x1a7a8cu;
    // NOP
    // 0x1a7a90: 0x0
    ctx->pc = 0x1a7a90u;
    // NOP
    // 0x1a7a94: 0x460c6b03
    ctx->pc = 0x1a7a94u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[12] = ctx->f[13] / ctx->f[12];
    // 0x1a7a98: 0x0
    ctx->pc = 0x1a7a98u;
    // NOP
    // 0x1a7a9c: 0x0
    ctx->pc = 0x1a7a9cu;
    // NOP
    // 0x1a7aa0: 0xc069e20
    ctx->pc = 0x1A7AA0u;
    SET_GPR_U32(ctx, 31, 0x1A7AA8u);
    ctx->pc = 0x1A7880u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan_0x1a7880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7AA8u; }
        else if (ctx->pc != 0x1A7AA8u) { ctx->pc = 0x1A7AA8u; }
    }
    if (ctx->pc != 0x1A7AA8u) { return; }
    ctx->pc = 0x1A7AA8u;
    // 0x1a7aa8: 0x24034000
    ctx->pc = 0x1a7aa8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1a7aac: 0x621023
    ctx->pc = 0x1a7aacu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7ab0: 0x3042ffff
    ctx->pc = 0x1a7ab0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
label_1a7ab4:
    // 0x1a7ab4: 0x10000013
    ctx->pc = 0x1A7AB4u;
    {
        const bool branch_taken_0x1a7ab4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a7ab4) {
            ctx->pc = 0x1A7B04u;
            goto label_1a7b04;
        }
    }
    ctx->pc = 0x1A7ABCu;
label_1a7abc:
    // 0x1a7abc: 0x44800000
    ctx->pc = 0x1a7abcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1a7ac0: 0x0
    ctx->pc = 0x1a7ac0u;
    // NOP
    // 0x1a7ac4: 0x460d0032
    ctx->pc = 0x1a7ac4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7ac8: 0x0
    ctx->pc = 0x1a7ac8u;
    // NOP
    // 0x1a7acc: 0x45000003
    ctx->pc = 0x1A7ACCu;
    {
        const bool branch_taken_0x1a7acc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7AD0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
        if (branch_taken_0x1a7acc) {
            ctx->pc = 0x1A7ADCu;
            goto label_1a7adc;
        }
    }
    ctx->pc = 0x1A7AD4u;
    // 0x1a7ad4: 0x1000000b
    ctx->pc = 0x1A7AD4u;
    {
        const bool branch_taken_0x1a7ad4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a7ad4) {
            ctx->pc = 0x1A7B04u;
            goto label_1a7b04;
        }
    }
    ctx->pc = 0x1A7ADCu;
label_1a7adc:
    // 0x1a7adc: 0x0
    ctx->pc = 0x1a7adcu;
    // NOP
    // 0x1a7ae0: 0x0
    ctx->pc = 0x1a7ae0u;
    // NOP
    // 0x1a7ae4: 0x460d6303
    ctx->pc = 0x1a7ae4u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[13];
    // 0x1a7ae8: 0x0
    ctx->pc = 0x1a7ae8u;
    // NOP
    // 0x1a7aec: 0x0
    ctx->pc = 0x1a7aecu;
    // NOP
    // 0x1a7af0: 0xc069e20
    ctx->pc = 0x1A7AF0u;
    SET_GPR_U32(ctx, 31, 0x1A7AF8u);
    ctx->pc = 0x1A7880u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan_0x1a7880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7AF8u; }
        else if (ctx->pc != 0x1A7AF8u) { ctx->pc = 0x1A7AF8u; }
    }
    if (ctx->pc != 0x1A7AF8u) { return; }
    ctx->pc = 0x1A7AF8u;
    // 0x1a7af8: 0x24427fff
    ctx->pc = 0x1a7af8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32767));
    // 0x1a7afc: 0x24420001
    ctx->pc = 0x1a7afcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a7b00: 0x3042ffff
    ctx->pc = 0x1a7b00u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
label_1a7b04:
    // 0x1a7b04: 0x7bbf0000
    ctx->pc = 0x1a7b04u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7b08:
    // 0x1a7b08: 0x3e00008
    ctx->pc = 0x1A7B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7B0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A79E4u: goto label_1a79e4;
            case 0x1A7A00u: goto label_1a7a00;
            case 0x1A7A08u: goto label_1a7a08;
            case 0x1A7A28u: goto label_1a7a28;
            case 0x1A7A50u: goto label_1a7a50;
            case 0x1A7A58u: goto label_1a7a58;
            case 0x1A7A8Cu: goto label_1a7a8c;
            case 0x1A7AB4u: goto label_1a7ab4;
            case 0x1A7ABCu: goto label_1a7abc;
            case 0x1A7ADCu: goto label_1a7adc;
            case 0x1A7B04u: goto label_1a7b04;
            case 0x1A7B08u: goto label_1a7b08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7B10u;
}
