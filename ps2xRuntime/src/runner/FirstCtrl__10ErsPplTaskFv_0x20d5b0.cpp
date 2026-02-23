#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: FirstCtrl__10ErsPplTaskFv
// Address: 0x20d5b0 - 0x20d654
void FirstCtrl__10ErsPplTaskFv_0x20d5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("FirstCtrl__10ErsPplTaskFv");


    ctx->pc = 0x20d5b0u;

    // 0x20d5b0: 0x27bdffe0
    ctx->pc = 0x20d5b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20d5b4: 0x7fbf0010
    ctx->pc = 0x20d5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20d5b8: 0x7fb00000
    ctx->pc = 0x20d5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20d5bc: 0x8c821d7c
    ctx->pc = 0x20d5bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 7548)));
    // 0x20d5c0: 0x44800000
    ctx->pc = 0x20d5c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x20d5c4: 0xc4411d78
    ctx->pc = 0x20d5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d5c8: 0x46010032
    ctx->pc = 0x20d5c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d5cc: 0x0
    ctx->pc = 0x20d5ccu;
    // NOP
    // 0x20d5d0: 0x45000003
    ctx->pc = 0x20D5D0u;
    {
        const bool branch_taken_0x20d5d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20D5D4u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20d5d0) {
            ctx->pc = 0x20D5E0u;
            goto label_20d5e0;
        }
    }
    ctx->pc = 0x20D5D8u;
    // 0x20d5d8: 0xc06898c
    ctx->pc = 0x20D5D8u;
    SET_GPR_U32(ctx, 31, 0x20D5E0u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D5E0u; }
        else if (ctx->pc != 0x20D5E0u) { ctx->pc = 0x20D5E0u; }
    }
    if (ctx->pc != 0x20D5E0u) { return; }
    ctx->pc = 0x20D5E0u;
label_20d5e0:
    // 0x20d5e0: 0x8e031d7c
    ctx->pc = 0x20d5e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7548)));
    // 0x20d5e4: 0x3c023f00
    ctx->pc = 0x20d5e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x20d5e8: 0x44820000
    ctx->pc = 0x20d5e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x20d5ec: 0xc4611d78
    ctx->pc = 0x20d5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d5f0: 0x46000836
    ctx->pc = 0x20d5f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d5f4: 0x0
    ctx->pc = 0x20d5f4u;
    // NOP
    // 0x20d5f8: 0x4500000a
    ctx->pc = 0x20D5F8u;
    {
        const bool branch_taken_0x20d5f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20d5f8) {
            ctx->pc = 0x20D624u;
            goto label_20d624;
        }
    }
    ctx->pc = 0x20D600u;
    // 0x20d600: 0x12000002
    ctx->pc = 0x20D600u;
    {
        const bool branch_taken_0x20d600 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D604u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
        if (branch_taken_0x20d600) {
            ctx->pc = 0x20D60Cu;
            goto label_20d60c;
        }
    }
    ctx->pc = 0x20D608u;
    // 0x20d608: 0x26100030
    ctx->pc = 0x20d608u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 48));
label_20d60c:
    // 0x20d60c: 0x44820000
    ctx->pc = 0x20d60cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x20d610: 0x72002628
    ctx->pc = 0x20d610u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20d614: 0xc081060
    ctx->pc = 0x20D614u;
    SET_GPR_U32(ctx, 31, 0x20D61Cu);
    ctx->pc = 0x20D618u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x204180u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetAlpha__FP10MotObjTaskf_0x204180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D61Cu; }
        else if (ctx->pc != 0x20D61Cu) { ctx->pc = 0x20D61Cu; }
    }
    if (ctx->pc != 0x20D61Cu) { return; }
    ctx->pc = 0x20D61Cu;
    // 0x20d61c: 0x1000000a
    ctx->pc = 0x20D61Cu;
    {
        const bool branch_taken_0x20d61c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D620u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x20d61c) {
            ctx->pc = 0x20D648u;
            goto label_20d648;
        }
    }
    ctx->pc = 0x20D624u;
label_20d624:
    // 0x20d624: 0x12000002
    ctx->pc = 0x20D624u;
    {
        const bool branch_taken_0x20d624 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D628u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
        if (branch_taken_0x20d624) {
            ctx->pc = 0x20D630u;
            goto label_20d630;
        }
    }
    ctx->pc = 0x20D62Cu;
    // 0x20d62c: 0x26100030
    ctx->pc = 0x20d62cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 48));
label_20d630:
    // 0x20d630: 0x44821000
    ctx->pc = 0x20d630u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x20d634: 0x72002628
    ctx->pc = 0x20d634u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20d638: 0x46011002
    ctx->pc = 0x20d638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x20d63c: 0xc081060
    ctx->pc = 0x20D63Cu;
    SET_GPR_U32(ctx, 31, 0x20D644u);
    ctx->pc = 0x20D640u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    ctx->pc = 0x204180u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetAlpha__FP10MotObjTaskf_0x204180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D644u; }
        else if (ctx->pc != 0x20D644u) { ctx->pc = 0x20D644u; }
    }
    if (ctx->pc != 0x20D644u) { return; }
    ctx->pc = 0x20D644u;
    // 0x20d644: 0x7bbf0010
    ctx->pc = 0x20d644u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20d648:
    // 0x20d648: 0x7bb00000
    ctx->pc = 0x20d648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d64c: 0x3e00008
    ctx->pc = 0x20D64Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D650u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20D5E0u: goto label_20d5e0;
            case 0x20D60Cu: goto label_20d60c;
            case 0x20D624u: goto label_20d624;
            case 0x20D630u: goto label_20d630;
            case 0x20D648u: goto label_20d648;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20D654u;
}
