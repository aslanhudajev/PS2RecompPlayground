#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CalcTexScroll
// Address: 0x2109c0 - 0x210b60
void CalcTexScroll_0x2109c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2109c0u;

    // 0x2109c0: 0x460d7034
    ctx->pc = 0x2109c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2109c4: 0x0
    ctx->pc = 0x2109c4u;
    // NOP
    // 0x2109c8: 0x45000003
    ctx->pc = 0x2109C8u;
    {
        const bool branch_taken_0x2109c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2109CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2109c8) {
            ctx->pc = 0x2109D8u;
            goto label_2109d8;
        }
    }
    ctx->pc = 0x2109D0u;
    // 0x2109d0: 0x46007346
    ctx->pc = 0x2109d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[14]);
    // 0x2109d4: 0x24020001
    ctx->pc = 0x2109d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2109d8:
    // 0x2109d8: 0x44800000
    ctx->pc = 0x2109d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2109dc: 0x46006832
    ctx->pc = 0x2109dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2109e0: 0x4500000e
    ctx->pc = 0x2109E0u;
    {
        const bool branch_taken_0x2109e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2109e0) {
            ctx->pc = 0x210A1Cu;
            goto label_210a1c;
        }
    }
    ctx->pc = 0x2109E8u;
    // 0x2109e8: 0x46007064
    ctx->pc = 0x2109e8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[14]);
    // 0x2109ec: 0x44020800
    ctx->pc = 0x2109ecu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2109f0: 0x82001a
    ctx->pc = 0x2109f0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2109f4: 0x1810
    ctx->pc = 0x2109f4u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x2109f8: 0x50400001
    ctx->pc = 0x2109F8u;
    {
        const bool branch_taken_0x2109f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2109f8) {
            ctx->pc = 0x2109FCu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x210A00u;
            goto label_210a00;
        }
    }
    ctx->pc = 0x210A00u;
label_210a00:
    // 0x210a00: 0x44836000
    ctx->pc = 0x210a00u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 3);
    // 0x210a04: 0x46806320
    ctx->pc = 0x210a04u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x210a08: 0x0
    ctx->pc = 0x210a08u;
    // NOP
    // 0x210a0c: 0x0
    ctx->pc = 0x210a0cu;
    // NOP
    // 0x210a10: 0x460e6303
    ctx->pc = 0x210a10u;
    if (ctx->f[14] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[14];
    // 0x210a14: 0x1000004e
    ctx->pc = 0x210A14u;
    {
        const bool branch_taken_0x210a14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x210a14) {
            ctx->pc = 0x210B50u;
            goto label_210b50;
        }
    }
    ctx->pc = 0x210A1Cu;
label_210a1c:
    // 0x210a1c: 0x46006036
    ctx->pc = 0x210a1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210a20: 0x45000004
    ctx->pc = 0x210A20u;
    {
        const bool branch_taken_0x210a20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x210a20) {
            ctx->pc = 0x210A34u;
            goto label_210a34;
        }
    }
    ctx->pc = 0x210A28u;
    // 0x210a28: 0x46000306
    ctx->pc = 0x210a28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x210a2c: 0x10000047
    ctx->pc = 0x210A2Cu;
    {
        const bool branch_taken_0x210a2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210A30u;
        ctx->f[3] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x210a2c) {
            ctx->pc = 0x210B4Cu;
            goto label_210b4c;
        }
    }
    ctx->pc = 0x210A34u;
label_210a34:
    // 0x210a34: 0x460d6034
    ctx->pc = 0x210a34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210a38: 0x45000011
    ctx->pc = 0x210A38u;
    {
        const bool branch_taken_0x210a38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x210a38) {
            ctx->pc = 0x210A80u;
            goto label_210a80;
        }
    }
    ctx->pc = 0x210A40u;
    // 0x210a40: 0x3c013f80
    ctx->pc = 0x210a40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x210a44: 0x44811800
    ctx->pc = 0x210a44u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x210a48: 0x0
    ctx->pc = 0x210a48u;
    // NOP
    // 0x210a4c: 0x0
    ctx->pc = 0x210a4cu;
    // NOP
    // 0x210a50: 0x460d1883
    ctx->pc = 0x210a50u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[13];
    // 0x210a54: 0x46027002
    ctx->pc = 0x210a54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x210a58: 0x44800800
    ctx->pc = 0x210a58u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x210a5c: 0x46016101
    ctx->pc = 0x210a5cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x210a60: 0x46022102
    ctx->pc = 0x210a60u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x210a64: 0x46000047
    ctx->pc = 0x210a64u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x210a68: 0x46010b00
    ctx->pc = 0x210a68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x210a6c: 0x46001801
    ctx->pc = 0x210a6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x210a70: 0x460c0001
    ctx->pc = 0x210a70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x210a74: 0x46002002
    ctx->pc = 0x210a74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x210a78: 0x10000034
    ctx->pc = 0x210A78u;
    {
        const bool branch_taken_0x210a78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210A7Cu;
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        if (branch_taken_0x210a78) {
            ctx->pc = 0x210B4Cu;
            goto label_210b4c;
        }
    }
    ctx->pc = 0x210A80u;
label_210a80:
    // 0x210a80: 0x10400006
    ctx->pc = 0x210A80u;
    {
        const bool branch_taken_0x210a80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x210a80) {
            ctx->pc = 0x210A9Cu;
            goto label_210a9c;
        }
    }
    ctx->pc = 0x210A88u;
    // 0x210a88: 0x44806000
    ctx->pc = 0x210a88u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x210a8c: 0x3c013f80
    ctx->pc = 0x210a8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x210a90: 0x44811800
    ctx->pc = 0x210a90u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x210a94: 0x1000002e
    ctx->pc = 0x210A94u;
    {
        const bool branch_taken_0x210a94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210A98u;
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[12]);
        if (branch_taken_0x210a94) {
            ctx->pc = 0x210B50u;
            goto label_210b50;
        }
    }
    ctx->pc = 0x210A9Cu;
label_210a9c:
    // 0x210a9c: 0x460e6034
    ctx->pc = 0x210a9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210aa0: 0x0
    ctx->pc = 0x210aa0u;
    // NOP
    // 0x210aa4: 0x45020015
    ctx->pc = 0x210AA4u;
    {
        const bool branch_taken_0x210aa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x210aa4) {
            ctx->pc = 0x210AA8u;
            ctx->f[0] = FPU_ADD_S(ctx->f[14], ctx->f[13]);
            ctx->pc = 0x210AFCu;
            goto label_210afc;
        }
    }
    ctx->pc = 0x210AACu;
    // 0x210aac: 0x3c013f80
    ctx->pc = 0x210aacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x210ab0: 0x44811000
    ctx->pc = 0x210ab0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x210ab4: 0x0
    ctx->pc = 0x210ab4u;
    // NOP
    // 0x210ab8: 0x0
    ctx->pc = 0x210ab8u;
    // NOP
    // 0x210abc: 0x460d1043
    ctx->pc = 0x210abcu;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[13];
    // 0x210ac0: 0x46017042
    ctx->pc = 0x210ac0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x210ac4: 0x460d6101
    ctx->pc = 0x210ac4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
    // 0x210ac8: 0x460d7001
    ctx->pc = 0x210ac8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[14], ctx->f[13]);
    // 0x210acc: 0x0
    ctx->pc = 0x210accu;
    // NOP
    // 0x210ad0: 0x0
    ctx->pc = 0x210ad0u;
    // NOP
    // 0x210ad4: 0x46002103
    ctx->pc = 0x210ad4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[0];
    // 0x210ad8: 0x46011301
    ctx->pc = 0x210ad8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x210adc: 0x44800000
    ctx->pc = 0x210adcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x210ae0: 0x460c0001
    ctx->pc = 0x210ae0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x210ae4: 0x46002002
    ctx->pc = 0x210ae4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x210ae8: 0x46006300
    ctx->pc = 0x210ae8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x210aec: 0x46020841
    ctx->pc = 0x210aecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x210af0: 0x460120c2
    ctx->pc = 0x210af0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x210af4: 0x10000015
    ctx->pc = 0x210AF4u;
    {
        const bool branch_taken_0x210af4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210AF8u;
        ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        if (branch_taken_0x210af4) {
            ctx->pc = 0x210B4Cu;
            goto label_210b4c;
        }
    }
    ctx->pc = 0x210AFCu;
label_210afc:
    // 0x210afc: 0x46006034
    ctx->pc = 0x210afcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210b00: 0x4500000b
    ctx->pc = 0x210B00u;
    {
        const bool branch_taken_0x210b00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x210b00) {
            ctx->pc = 0x210B30u;
            goto label_210b30;
        }
    }
    ctx->pc = 0x210B08u;
    // 0x210b08: 0x3c013f80
    ctx->pc = 0x210b08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x210b0c: 0x44810800
    ctx->pc = 0x210b0cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x210b10: 0x0
    ctx->pc = 0x210b10u;
    // NOP
    // 0x210b14: 0x0
    ctx->pc = 0x210b14u;
    // NOP
    // 0x210b18: 0x460d0843
    ctx->pc = 0x210b18u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[13];
    // 0x210b1c: 0x460e6101
    ctx->pc = 0x210b1cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[12], ctx->f[14]);
    // 0x210b20: 0x46012102
    ctx->pc = 0x210b20u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x210b24: 0x44800000
    ctx->pc = 0x210b24u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x210b28: 0x10000007
    ctx->pc = 0x210B28u;
    {
        const bool branch_taken_0x210b28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210B2Cu;
        ctx->f[12] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        if (branch_taken_0x210b28) {
            ctx->pc = 0x210B48u;
            goto label_210b48;
        }
    }
    ctx->pc = 0x210B30u;
label_210b30:
    // 0x210b30: 0x3c013f80
    ctx->pc = 0x210b30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x210b34: 0x44810000
    ctx->pc = 0x210b34u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x210b38: 0x0
    ctx->pc = 0x210b38u;
    // NOP
    // 0x210b3c: 0x0
    ctx->pc = 0x210b3cu;
    // NOP
    // 0x210b40: 0x460d0043
    ctx->pc = 0x210b40u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[13];
    // 0x210b44: 0x46000306
    ctx->pc = 0x210b44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_210b48:
    // 0x210b48: 0x460170c2
    ctx->pc = 0x210b48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
label_210b4c:
    // 0x210b4c: 0x460c1801
    ctx->pc = 0x210b4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[12]);
label_210b50:
    // 0x210b50: 0x54a00001
    ctx->pc = 0x210B50u;
    {
        const bool branch_taken_0x210b50 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x210b50) {
            ctx->pc = 0x210B54u;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
            ctx->pc = 0x210B58u;
            goto label_210b58;
        }
    }
    ctx->pc = 0x210B58u;
label_210b58:
    // 0x210b58: 0x3e00008
    ctx->pc = 0x210B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210B5Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2109D8u: goto label_2109d8;
            case 0x210A00u: goto label_210a00;
            case 0x210A1Cu: goto label_210a1c;
            case 0x210A34u: goto label_210a34;
            case 0x210A80u: goto label_210a80;
            case 0x210A9Cu: goto label_210a9c;
            case 0x210AFCu: goto label_210afc;
            case 0x210B30u: goto label_210b30;
            case 0x210B48u: goto label_210b48;
            case 0x210B4Cu: goto label_210b4c;
            case 0x210B50u: goto label_210b50;
            case 0x210B58u: goto label_210b58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x210B60u;
}
