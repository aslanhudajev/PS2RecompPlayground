#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StdCamReturn
// Address: 0x215798 - 0x215828
void StdCamReturn_0x215798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x215798u;

    // 0x215798: 0x27bdffe0
    ctx->pc = 0x215798u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21579c: 0xffbf0010
    ctx->pc = 0x21579cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2157a0: 0xffb00000
    ctx->pc = 0x2157a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2157a4: 0x3c100032
    ctx->pc = 0x2157a4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x2157a8: 0x8e05f77c
    ctx->pc = 0x2157a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294965116)));
    // 0x2157ac: 0xc0b0f84
    ctx->pc = 0x2157ACu;
    SET_GPR_U32(ctx, 31, 0x2157B4u);
    ctx->pc = 0x2157B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 48));
    ctx->pc = 0x2C3E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBCameraUpdate_0x2c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2157B4u; }
    }
    if (ctx->pc != 0x2157B4u) { return; }
    ctx->pc = 0x2157B4u;
    // 0x2157b4: 0x8e02f77c
    ctx->pc = 0x2157b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294965116)));
    // 0x2157b8: 0xc0b4502
    ctx->pc = 0x2157B8u;
    SET_GPR_U32(ctx, 31, 0x2157C0u);
    ctx->pc = 0x2157BCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D1408u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWindowSetHang_0x2d1408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2157C0u; }
    }
    if (ctx->pc != 0x2157C0u) { return; }
    ctx->pc = 0x2157C0u;
    // 0x2157c0: 0x8e02f77c
    ctx->pc = 0x2157c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294965116)));
    // 0x2157c4: 0xc4410110
    ctx->pc = 0x2157c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2157c8: 0x44800000
    ctx->pc = 0x2157c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2157cc: 0x46010034
    ctx->pc = 0x2157ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2157d0: 0x0
    ctx->pc = 0x2157d0u;
    // NOP
    // 0x2157d4: 0x45000011
    ctx->pc = 0x2157D4u;
    {
        const bool branch_taken_0x2157d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2157D8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2157d4) {
            ctx->pc = 0x21581Cu;
            goto label_21581c;
        }
    }
    ctx->pc = 0x2157DCu;
    // 0x2157dc: 0xc44c010c
    ctx->pc = 0x2157dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2157e0: 0x3c014334
    ctx->pc = 0x2157e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17204 << 16));
    // 0x2157e4: 0x44810000
    ctx->pc = 0x2157e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2157e8: 0x46006302
    ctx->pc = 0x2157e8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2157ec: 0x3c013ea2
    ctx->pc = 0x2157ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16034 << 16));
    // 0x2157f0: 0x3421f983
    ctx->pc = 0x2157f0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63875));
    // 0x2157f4: 0x44810000
    ctx->pc = 0x2157f4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2157f8: 0x3c013f80
    ctx->pc = 0x2157f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2157fc: 0x44816800
    ctx->pc = 0x2157fcu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x215800: 0x46006302
    ctx->pc = 0x215800u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x215804: 0x0
    ctx->pc = 0x215804u;
    // NOP
    // 0x215808: 0x0
    ctx->pc = 0x215808u;
    // NOP
    // 0x21580c: 0x46016b43
    ctx->pc = 0x21580cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[1];
    // 0x215810: 0xdfb00000
    ctx->pc = 0x215810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215814: 0x80aae0e
    ctx->pc = 0x215814u;
    ctx->pc = 0x215818u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2AB838u;
    MBWindowProjection_0x2ab838(rdram, ctx, runtime); return;
    ctx->pc = 0x21581Cu;
label_21581c:
    // 0x21581c: 0xdfb00000
    ctx->pc = 0x21581cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215820: 0x3e00008
    ctx->pc = 0x215820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215824u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21581Cu: goto label_21581c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x215828u;
}
