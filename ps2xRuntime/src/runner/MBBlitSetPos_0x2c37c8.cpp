#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBBlitSetPos
// Address: 0x2c37c8 - 0x2c3890
void MBBlitSetPos_0x2c37c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c37c8u;

    // 0x2c37c8: 0x27bdffe0
    ctx->pc = 0x2c37c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c37cc: 0xffbf0010
    ctx->pc = 0x2c37ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c37d0: 0xffb00000
    ctx->pc = 0x2c37d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c37d4: 0x80802d
    ctx->pc = 0x2c37d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c37d8: 0x3c020036
    ctx->pc = 0x2c37d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c37dc: 0x8c43dee0
    ctx->pc = 0x2c37dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c37e0: 0x8e020000
    ctx->pc = 0x2c37e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c37e4: 0x30420040
    ctx->pc = 0x2c37e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x2c37e8: 0x50400003
    ctx->pc = 0x2C37E8u;
    {
        const bool branch_taken_0x2c37e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c37e8) {
            ctx->pc = 0x2C37ECu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 64)));
            ctx->pc = 0x2C37F8u;
            goto label_2c37f8;
        }
    }
    ctx->pc = 0x2C37F0u;
    // 0x2c37f0: 0x10000007
    ctx->pc = 0x2C37F0u;
    {
        const bool branch_taken_0x2c37f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C37F4u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x2c37f0) {
            ctx->pc = 0x2C3810u;
            goto label_2c3810;
        }
    }
    ctx->pc = 0x2C37F8u;
label_2c37f8:
    // 0x2c37f8: 0x44850000
    ctx->pc = 0x2c37f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x2c37fc: 0x46800020
    ctx->pc = 0x2c37fcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c3800: 0xc4410000
    ctx->pc = 0x2c3800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3804: 0x46010002
    ctx->pc = 0x2c3804u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c3808: 0x46000064
    ctx->pc = 0x2c3808u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c380c: 0x44050800
    ctx->pc = 0x2c380cu;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[1]);
label_2c3810:
    // 0x2c3810: 0xa6050008
    ctx->pc = 0x2c3810u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x2c3814: 0x8e020000
    ctx->pc = 0x2c3814u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c3818: 0x30420040
    ctx->pc = 0x2c3818u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x2c381c: 0x50400003
    ctx->pc = 0x2C381Cu;
    {
        const bool branch_taken_0x2c381c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c381c) {
            ctx->pc = 0x2C3820u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 64)));
            ctx->pc = 0x2C382Cu;
            goto label_2c382c;
        }
    }
    ctx->pc = 0x2C3824u;
    // 0x2c3824: 0x10000007
    ctx->pc = 0x2C3824u;
    {
        const bool branch_taken_0x2c3824 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C3828u;
        SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 4));
        if (branch_taken_0x2c3824) {
            ctx->pc = 0x2C3844u;
            goto label_2c3844;
        }
    }
    ctx->pc = 0x2C382Cu;
label_2c382c:
    // 0x2c382c: 0x44860000
    ctx->pc = 0x2c382cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 6);
    // 0x2c3830: 0x46800020
    ctx->pc = 0x2c3830u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c3834: 0xc4410004
    ctx->pc = 0x2c3834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3838: 0x46010002
    ctx->pc = 0x2c3838u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c383c: 0x46000064
    ctx->pc = 0x2c383cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c3840: 0x44060800
    ctx->pc = 0x2c3840u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
label_2c3844:
    // 0x2c3844: 0x44800000
    ctx->pc = 0x2c3844u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2c3848: 0x460c0036
    ctx->pc = 0x2c3848u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c384c: 0x0
    ctx->pc = 0x2c384cu;
    // NOP
    // 0x2c3850: 0x4500000b
    ctx->pc = 0x2C3850u;
    {
        const bool branch_taken_0x2c3850 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3854u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 6));
        if (branch_taken_0x2c3850) {
            ctx->pc = 0x2C3880u;
            goto label_2c3880;
        }
    }
    ctx->pc = 0x2C3858u;
    // 0x2c3858: 0x3c014200
    ctx->pc = 0x2c3858u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16896 << 16));
    // 0x2c385c: 0x44810000
    ctx->pc = 0x2c385cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c3860: 0x46006002
    ctx->pc = 0x2c3860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c3864: 0x46000064
    ctx->pc = 0x2c3864u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c3868: 0x44020800
    ctx->pc = 0x2c3868u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2c386c: 0x44826000
    ctx->pc = 0x2c386cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x2c3870: 0x46806320
    ctx->pc = 0x2c3870u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2c3874: 0xc0be822
    ctx->pc = 0x2C3874u;
    SET_GPR_U32(ctx, 31, 0x2C387Cu);
    ctx->pc = 0x2FA088u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2fa088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C387Cu; }
    }
    if (ctx->pc != 0x2C387Cu) { return; }
    ctx->pc = 0x2C387Cu;
    // 0x2c387c: 0xae02000c
    ctx->pc = 0x2c387cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2c3880:
    // 0x2c3880: 0xdfbf0010
    ctx->pc = 0x2c3880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3884: 0xdfb00000
    ctx->pc = 0x2c3884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3888: 0x3e00008
    ctx->pc = 0x2C3888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C388Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C37F8u: goto label_2c37f8;
            case 0x2C3810u: goto label_2c3810;
            case 0x2C382Cu: goto label_2c382c;
            case 0x2C3844u: goto label_2c3844;
            case 0x2C3880u: goto label_2c3880;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C3890u;
}
