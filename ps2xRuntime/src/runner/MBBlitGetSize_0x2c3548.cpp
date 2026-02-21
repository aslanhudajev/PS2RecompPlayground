#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBBlitGetSize
// Address: 0x2c3548 - 0x2c35e4
void MBBlitGetSize_0x2c3548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c3548u;

    // 0x2c3548: 0x3c020036
    ctx->pc = 0x2c3548u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c354c: 0x10a00011
    ctx->pc = 0x2C354Cu;
    {
        const bool branch_taken_0x2c354c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C3550u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
        if (branch_taken_0x2c354c) {
            ctx->pc = 0x2C3594u;
            goto label_2c3594;
        }
    }
    ctx->pc = 0x2C3554u;
    // 0x2c3554: 0x8c820000
    ctx->pc = 0x2c3554u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c3558: 0x30420040
    ctx->pc = 0x2c3558u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x2c355c: 0x10400003
    ctx->pc = 0x2C355Cu;
    {
        const bool branch_taken_0x2c355c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C3560u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
        if (branch_taken_0x2c355c) {
            ctx->pc = 0x2C356Cu;
            goto label_2c356c;
        }
    }
    ctx->pc = 0x2C3564u;
    // 0x2c3564: 0x1000000a
    ctx->pc = 0x2C3564u;
    {
        const bool branch_taken_0x2c3564 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C3568u;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
        if (branch_taken_0x2c3564) {
            ctx->pc = 0x2C3590u;
            goto label_2c3590;
        }
    }
    ctx->pc = 0x2C356Cu;
label_2c356c:
    // 0x2c356c: 0x44830000
    ctx->pc = 0x2c356cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2c3570: 0x46800020
    ctx->pc = 0x2c3570u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c3574: 0x8ce20040
    ctx->pc = 0x2c3574u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x2c3578: 0xc4410000
    ctx->pc = 0x2c3578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c357c: 0x0
    ctx->pc = 0x2c357cu;
    // NOP
    // 0x2c3580: 0x0
    ctx->pc = 0x2c3580u;
    // NOP
    // 0x2c3584: 0x46010003
    ctx->pc = 0x2c3584u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2c3588: 0x46000064
    ctx->pc = 0x2c3588u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c358c: 0x44030800
    ctx->pc = 0x2c358cu;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
label_2c3590:
    // 0x2c3590: 0xaca30000
    ctx->pc = 0x2c3590u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2c3594:
    // 0x2c3594: 0x10c00011
    ctx->pc = 0x2C3594u;
    {
        const bool branch_taken_0x2c3594 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c3594) {
            ctx->pc = 0x2C35DCu;
            goto label_2c35dc;
        }
    }
    ctx->pc = 0x2C359Cu;
    // 0x2c359c: 0x8c820000
    ctx->pc = 0x2c359cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c35a0: 0x30420140
    ctx->pc = 0x2c35a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 320));
    // 0x2c35a4: 0x10400003
    ctx->pc = 0x2C35A4u;
    {
        const bool branch_taken_0x2c35a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C35A8u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
        if (branch_taken_0x2c35a4) {
            ctx->pc = 0x2C35B4u;
            goto label_2c35b4;
        }
    }
    ctx->pc = 0x2C35ACu;
    // 0x2c35ac: 0x1000000a
    ctx->pc = 0x2C35ACu;
    {
        const bool branch_taken_0x2c35ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C35B0u;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
        if (branch_taken_0x2c35ac) {
            ctx->pc = 0x2C35D8u;
            goto label_2c35d8;
        }
    }
    ctx->pc = 0x2C35B4u;
label_2c35b4:
    // 0x2c35b4: 0x44830000
    ctx->pc = 0x2c35b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2c35b8: 0x46800020
    ctx->pc = 0x2c35b8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c35bc: 0x8ce20040
    ctx->pc = 0x2c35bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x2c35c0: 0xc4410004
    ctx->pc = 0x2c35c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c35c4: 0x0
    ctx->pc = 0x2c35c4u;
    // NOP
    // 0x2c35c8: 0x0
    ctx->pc = 0x2c35c8u;
    // NOP
    // 0x2c35cc: 0x46010003
    ctx->pc = 0x2c35ccu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2c35d0: 0x46000064
    ctx->pc = 0x2c35d0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c35d4: 0x44030800
    ctx->pc = 0x2c35d4u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
label_2c35d8:
    // 0x2c35d8: 0xacc30000
    ctx->pc = 0x2c35d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_2c35dc:
    // 0x2c35dc: 0x3e00008
    ctx->pc = 0x2C35DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C356Cu: goto label_2c356c;
            case 0x2C3590u: goto label_2c3590;
            case 0x2C3594u: goto label_2c3594;
            case 0x2C35B4u: goto label_2c35b4;
            case 0x2C35D8u: goto label_2c35d8;
            case 0x2C35DCu: goto label_2c35dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C35E4u;
}
