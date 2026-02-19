#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBBlitGetPos
// Address: 0x2c3890 - 0x2c39a4
void MBBlitGetPos_0x2c3890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c3890u;

    // 0x2c3890: 0x3c020036
    ctx->pc = 0x2c3890u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c3894: 0x10a00017
    ctx->pc = 0x2C3894u;
    {
        const bool branch_taken_0x2c3894 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C3898u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
        if (branch_taken_0x2c3894) {
            ctx->pc = 0x2C38F4u;
            goto label_2c38f4;
        }
    }
    ctx->pc = 0x2C389Cu;
    // 0x2c389c: 0x84880008
    ctx->pc = 0x2c389cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c38a0: 0x3c01bf00
    ctx->pc = 0x2c38a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48896 << 16));
    // 0x2c38a4: 0x44811000
    ctx->pc = 0x2c38a4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2c38a8: 0x5000003
    ctx->pc = 0x2C38A8u;
    {
        const bool branch_taken_0x2c38a8 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x2C38ACu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x2c38a8) {
            ctx->pc = 0x2C38B8u;
            goto label_2c38b8;
        }
    }
    ctx->pc = 0x2C38B0u;
    // 0x2c38b0: 0x3c013f00
    ctx->pc = 0x2c38b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2c38b4: 0x44811000
    ctx->pc = 0x2c38b4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
label_2c38b8:
    // 0x2c38b8: 0x30420040
    ctx->pc = 0x2c38b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x2c38bc: 0x50400003
    ctx->pc = 0x2C38BCu;
    {
        const bool branch_taken_0x2c38bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c38bc) {
            ctx->pc = 0x2C38C0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 64)));
            ctx->pc = 0x2C38CCu;
            goto label_2c38cc;
        }
    }
    ctx->pc = 0x2C38C4u;
    // 0x2c38c4: 0x1000000a
    ctx->pc = 0x2C38C4u;
    {
        const bool branch_taken_0x2c38c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C38C8u;
        SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 4));
        if (branch_taken_0x2c38c4) {
            ctx->pc = 0x2C38F0u;
            goto label_2c38f0;
        }
    }
    ctx->pc = 0x2C38CCu;
label_2c38cc:
    // 0x2c38cc: 0x44880000
    ctx->pc = 0x2c38ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 8);
    // 0x2c38d0: 0x46800020
    ctx->pc = 0x2c38d0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c38d4: 0xc4410000
    ctx->pc = 0x2c38d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c38d8: 0x0
    ctx->pc = 0x2c38d8u;
    // NOP
    // 0x2c38dc: 0x0
    ctx->pc = 0x2c38dcu;
    // NOP
    // 0x2c38e0: 0x46010003
    ctx->pc = 0x2c38e0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2c38e4: 0x46020000
    ctx->pc = 0x2c38e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c38e8: 0x46000064
    ctx->pc = 0x2c38e8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c38ec: 0x44080800
    ctx->pc = 0x2c38ecu;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[1]);
label_2c38f0:
    // 0x2c38f0: 0xaca80000
    ctx->pc = 0x2c38f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
label_2c38f4:
    // 0x2c38f4: 0x10c00017
    ctx->pc = 0x2C38F4u;
    {
        const bool branch_taken_0x2c38f4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c38f4) {
            ctx->pc = 0x2C3954u;
            goto label_2c3954;
        }
    }
    ctx->pc = 0x2C38FCu;
    // 0x2c38fc: 0x8485000a
    ctx->pc = 0x2c38fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x2c3900: 0x3c01bf00
    ctx->pc = 0x2c3900u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48896 << 16));
    // 0x2c3904: 0x44811000
    ctx->pc = 0x2c3904u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2c3908: 0x4a00003
    ctx->pc = 0x2C3908u;
    {
        const bool branch_taken_0x2c3908 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2C390Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x2c3908) {
            ctx->pc = 0x2C3918u;
            goto label_2c3918;
        }
    }
    ctx->pc = 0x2C3910u;
    // 0x2c3910: 0x3c013f00
    ctx->pc = 0x2c3910u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2c3914: 0x44811000
    ctx->pc = 0x2c3914u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
label_2c3918:
    // 0x2c3918: 0x30420040
    ctx->pc = 0x2c3918u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x2c391c: 0x50400003
    ctx->pc = 0x2C391Cu;
    {
        const bool branch_taken_0x2c391c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c391c) {
            ctx->pc = 0x2C3920u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 64)));
            ctx->pc = 0x2C392Cu;
            goto label_2c392c;
        }
    }
    ctx->pc = 0x2C3924u;
    // 0x2c3924: 0x1000000a
    ctx->pc = 0x2C3924u;
    {
        const bool branch_taken_0x2c3924 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C3928u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x2c3924) {
            ctx->pc = 0x2C3950u;
            goto label_2c3950;
        }
    }
    ctx->pc = 0x2C392Cu;
label_2c392c:
    // 0x2c392c: 0x44850000
    ctx->pc = 0x2c392cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x2c3930: 0x46800020
    ctx->pc = 0x2c3930u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c3934: 0xc4410004
    ctx->pc = 0x2c3934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3938: 0x0
    ctx->pc = 0x2c3938u;
    // NOP
    // 0x2c393c: 0x0
    ctx->pc = 0x2c393cu;
    // NOP
    // 0x2c3940: 0x46010003
    ctx->pc = 0x2c3940u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2c3944: 0x46020000
    ctx->pc = 0x2c3944u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c3948: 0x46000064
    ctx->pc = 0x2c3948u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c394c: 0x44050800
    ctx->pc = 0x2c394cu;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[1]);
label_2c3950:
    // 0x2c3950: 0xacc50000
    ctx->pc = 0x2c3950u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_2c3954:
    // 0x2c3954: 0x10e00011
    ctx->pc = 0x2C3954u;
    {
        const bool branch_taken_0x2c3954 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c3954) {
            ctx->pc = 0x2C399Cu;
            goto label_2c399c;
        }
    }
    ctx->pc = 0x2C395Cu;
    // 0x2c395c: 0x8c82000c
    ctx->pc = 0x2c395cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2c3960: 0x4400005
    ctx->pc = 0x2C3960u;
    {
        const bool branch_taken_0x2c3960 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C3964u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x2c3960) {
            ctx->pc = 0x2C3978u;
            goto label_2c3978;
        }
    }
    ctx->pc = 0x2C3968u;
    // 0x2c3968: 0x44820800
    ctx->pc = 0x2c3968u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2c396c: 0x46800860
    ctx->pc = 0x2c396cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2c3970: 0x10000006
    ctx->pc = 0x2C3970u;
    {
        const bool branch_taken_0x2c3970 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c3970) {
            ctx->pc = 0x2C398Cu;
            goto label_2c398c;
        }
    }
    ctx->pc = 0x2C3978u;
label_2c3978:
    // 0x2c3978: 0x21042
    ctx->pc = 0x2c3978u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x2c397c: 0x621825
    ctx->pc = 0x2c397cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c3980: 0x44830800
    ctx->pc = 0x2c3980u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x2c3984: 0x46800860
    ctx->pc = 0x2c3984u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2c3988: 0x46010840
    ctx->pc = 0x2c3988u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2c398c:
    // 0x2c398c: 0x3c013d00
    ctx->pc = 0x2c398cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15616 << 16));
    // 0x2c3990: 0x44810000
    ctx->pc = 0x2c3990u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c3994: 0x46000842
    ctx->pc = 0x2c3994u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c3998: 0xe4e10000
    ctx->pc = 0x2c3998u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_2c399c:
    // 0x2c399c: 0x3e00008
    ctx->pc = 0x2C399Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C38B8u: goto label_2c38b8;
            case 0x2C38CCu: goto label_2c38cc;
            case 0x2C38F0u: goto label_2c38f0;
            case 0x2C38F4u: goto label_2c38f4;
            case 0x2C3918u: goto label_2c3918;
            case 0x2C392Cu: goto label_2c392c;
            case 0x2C3950u: goto label_2c3950;
            case 0x2C3954u: goto label_2c3954;
            case 0x2C3978u: goto label_2c3978;
            case 0x2C398Cu: goto label_2c398c;
            case 0x2C399Cu: goto label_2c399c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C39A4u;
}
